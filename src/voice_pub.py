from fastapi import FastAPI, HTTPException,Request
from fastapi.responses import StreamingResponse, HTMLResponse
from fastapi.staticfiles import StaticFiles
import uvicorn
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from geometry_msgs.msg import Twist
# from my_ros2_proto.msg import JointCommand
from std_msgs.msg import Header
from typing import Dict, Any
import time  # 用于等待
import yaml
import os
from voice_sub import SimpleFloatSubscriber
from node_proxy import NodeProxy
from realsense import Realsense
import requests


# # 初始化ROS2节点
ros_node = NodeProxy.get_instance().get_node()
# 深度相机
_realsense = Realsense()
from pathlib import Path
PROJECT_ROOT = Path(__file__).parent.parent.absolute()

# 创建FastAPI应用
app = FastAPI(title="HTTP to ROS2 Bridge")

# 挂载静态文件目录（用于存放前端页面）
STATIC_FILE = os.path.join(PROJECT_ROOT, "static")
app.mount("/static", StaticFiles(directory=STATIC_FILE), name="static")

@app.get("/", response_class=HTMLResponse)
async def read_root():
    # 返回前端页面
    INDEX_FILE = os.path.join(PROJECT_ROOT, "static/index.html")
    with open(INDEX_FILE, "r") as f:
        return HTMLResponse(content=f.read(), status_code=200)
  
@app.post("/send_boxe")
async def receive_command(request: Request):
    data = await request.json()
    print(f"收到前端请求: {data}")
    mode = 'zero_mode'
    if data["value"] == 'stand':    
        mode = 'stand_mode'
    elif data["value"] == 'walk':
        mode = 'walk_mode'
    elif data["value"] == 'plan_mode':
        mode = 'plan_mode'


    elif data["value"] == 'grasp_mode':
        mode = 'grasp_mode'
    elif data["value"] == 'shake_hand_mode':
        mode = 'shake_hand_mode'
    elif data["value"] == 'right_hand_back_mode':
        mode = 'right_hand_back_mode'

    elif data["value"] == 'left_hand_mode':
        mode = 'left_hand_mode'
    elif data["value"] == 'left_hand_back_mode':
        mode = 'left_hand_back_mode'
    else:
        raise HTTPException(status_code=500, detail="未知模式")


    publisher = ros_node.create_publisher(Float32, mode, 10)
    try:
        # 创建并发布ROS2消息
        msg = Float32()
        msg.data = float(1.0)
        publisher.publish(msg)
        
        # 处理ROS2事件
        rclpy.spin_once(ros_node, timeout_sec=0.1)
        
        return {"status": "success", "received_value": data["value"]}
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))
    
@app.get("/image_raw")
def get_depth_image_raw():
    
    # 获取数据
    depth_frame, color_frame , left_frame, right_frame = _realsense.read_frames()
    
    if color_frame is None:
        raise HTTPException(status_code=500, detail="Failed to capture frame")
    
    # 将图像转换为 JPEG 字节流
    image_bytes = _realsense.to_jpg(color_frame)
    
    # 返回 JPEG 图像作为响应
    return StreamingResponse(image_bytes, media_type="image/jpeg")


@app.get("/image_stream")
def get_depth_image_stream():
    """将视频流作为流响应返回。"""
    headers = {
               'Content-type': 'multipart/x-mixed-replace; boundary=--frame',
               'Cache-Control': 'no-cache, no-store, must-revalidate',
               "Pragma": "no-cache", 
               "Expires": "0",
               'Access-Control-Allow-Origin': '*'
               }
    try:
        return StreamingResponse(generate_frames(), headers=headers, media_type="multipart/x-mixed-replace;boundary=frame")
    except Exception as e:
        print(f"发送帧时出错: {str(e)}")
        raise HTTPException(status_code=500, detail="Failed to capture frame")


def generate_frames():
    while True:
        # 获取数据
        depth_frame, color_frame , left_frame, right_frame = _realsense.read_frames()
        
        if color_frame is None:
            continue
        # 将图像转换为 JPEG 字节流
        image_bytes = _realsense.to_jpg(color_frame)
                # 将JPEG数据转换为字节字符串，并将其作为流响应返回。
        yield (b"--frame\r\n" b"Content-Type: image/jpeg\r\n\r\n" + image_bytes + b"\r\n")

@app.post("/action")
def do_action( request: Request):
    
        # 获取原始请求的数据
    data = request.json()

    if data is None:
        raise HTTPException(status_code=500, detail='参数不能为空')
    # 动作名称
    name = data.get('name', None)
    
    if name is None or len(name) == 0:
        raise HTTPException(status_code=500, detail='动作名称不能为空')
    # 转发请求
    req_uri = 'http://localhost:8081/trajectory/' + name
    # 请求头
    headers = dict(request.headers)

    response = requests.request(
        method='GET', # HTTP 方法（ GET/POST/PUT/DELETE）
        url= req_uri,
        data= None,  # Form Data
        json= None,  # JSON Data
        headers= headers,
        timeout= 60,
    )
    
    # 尝试解析 JSON，失败则返回原始文本
    try:
        response_data = response.json()
        return response_data
    except ValueError:
        response_data = response.text
        return response_data
    except requests.exceptions.RequestException as e:
        raise HTTPException(status_code=500, detail=str(e))


    
@app.post("/send_plan")
async def send_plan(value: float):
    """
    ROS2发布挥手模式
    Args:
        value: 1.0
    Returns:
        包含状态信息的字典
    """
    # ros_node = NodeProxy.get_instance().get_node()
    publisher = ros_node.create_publisher(Float32, 'plan_mode', 10)
    try:
        # 创建并发布ROS2消息
        msg = Float32()
        msg.data = float(value)
        publisher.publish(msg)
        
        # 处理ROS2事件
        rclpy.spin_once(ros_node, timeout_sec=0.1)
        
        return {
            "status": "success",
            "message": f"Value {value} published to ROS2 topic",
            "topic": "plan_mode",
            "type": "std_msgs/msg/Float32"
        }
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))
    
@app.post("/send_stand")
async def send_stand(value: float):
    """
    ROS2发布站立模式
    """
    # ros_node = NodeProxy.get_instance().get_node()
    publisher = ros_node.create_publisher(Float32, 'stand_mode', 10)
    try:
        # 创建并发布ROS2消息
        msg = Float32()
        msg.data = float(value)
        publisher.publish(msg)
        
        # 处理ROS2事件
        rclpy.spin_once(ros_node, timeout_sec=0.1)
        
        return {
            "status": "success",
            "message": f"Value {value} published to ROS2 topic",
            "topic": "stand_mode",
            "type": "std_msgs/msg/Float32"
        }
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))

@app.post("/send_box")
async def send_box(value: float):
    """
    ROS2发布武术模式
    """
    publisher = ros_node.create_publisher(Float32, 'box_mode', 10)
    try:
        # 创建并发布ROS2消息
        msg = Float32()
        msg.data = float(value)
        publisher.publish(msg)
        
        # 处理ROS2事件
        rclpy.spin_once(ros_node, timeout_sec=0.1)
        
        return {
            "status": "success",
            "message": f"Value {value} published to ROS2 topic",
            "topic": "box_mode",
            "type": "std_msgs/msg/Float32"
        }
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))   


def load_twist_commands(file_path):
    """从YAML格式的文本文件中加载Twist命令序列"""
    with open(file_path, 'r') as f:
        # 使用三个横线(---)作为分隔符分割文档
        content = f.read().split('---\n')
        commands = []
        for item in content:
            if item.strip():  # 跳过空内容
                commands.append(yaml.safe_load(item))
        return commands

# 加载Twist命令序列
TWIST_FILE = os.path.join(PROJECT_ROOT, "cfg/cmd_level.txt")
TWIST_COMMANDS = load_twist_commands(TWIST_FILE)

def send_stand_sub(value):
    float_publisher = ros_node.create_publisher(Float32, 'stand_mode', 10)      
    float_msg = Float32()
    float_msg.data = float(value)
    float_publisher.publish(float_msg)
    rclpy.spin_once(ros_node, timeout_sec=0.1)
    # 等待2秒
    time.sleep(3)

def send_walk_sub(value):
    walk_publisher = ros_node.create_publisher(Float32, 'walk_mode2', 10)
    walk_msg = Float32()
    walk_msg.data = float(value)
    walk_publisher.publish(walk_msg)
    rclpy.spin_once(ros_node, timeout_sec=0.1)
    # 等待2秒
    time.sleep(3)

@app.post("/send_walk")
async def send_walk(value: float):
    """
    ROS2发布行走模式，并发送Twist消息
    """
    try:
        # ros_node = NodeProxy.get_instance().get_node()
        # 获取当前机器人模式，根据不同模式执行行走前调整
        subscriber = SimpleFloatSubscriber()  # 获取单例实例
        latest_source = subscriber.get_latest_source()

        if latest_source is None:
            return {
                "status": "error",
                "message": "No mode information available"
            }

        if latest_source == 'zero':
            send_stand_sub(value)
            send_walk_sub(value)

        if latest_source == 'stand':
            send_walk_sub(value)
        
        twist_publisher = ros_node.create_publisher(Twist, 'cmd_vel_limiter', 10)
        
        # 发送所有Twist命令
        sent_commands = []
        for cmd in TWIST_COMMANDS:
            twist_msg = Twist()
            # 设置线速度
            twist_msg.linear.x = cmd['linear']['x']
            twist_msg.linear.y = cmd['linear']['y']
            twist_msg.linear.z = cmd['linear']['z']
            # 设置角速度
            twist_msg.angular.x = cmd['angular']['x']
            twist_msg.angular.y = cmd['angular']['y']
            twist_msg.angular.z = cmd['angular']['z']
            
            # 发布消息
            twist_publisher.publish(twist_msg)
            rclpy.spin_once(ros_node, timeout_sec=0.1)
        
        time.sleep(0.5)

        return {
            "status": "success",
            "message": f"Float {value} published to walk_mode, Twist published to cmd_vel_limiter",
            "topics": "walk_mode"
        }
    
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))
    
class CommandParser(Node):
    def __init__(self):
        super().__init__('command_parser')
        
    # def parse_command_block(self, block: str) -> JointCommand:
    #     """解析单个命令块（header|joints）"""
    #     try:
    #         if not block.strip():
    #             return None
                
    #         header_part, joints_part = block.split('|')
    #         msg = JointCommand()
            
    #         # 设置Header
    #         msg.header = Header()
    #         msg.header.frame_id = header_part.strip()
    #         msg.header.stamp = self.get_clock().now().to_msg()
            
    #         # 解析关节数据
    #         for joint_str in joints_part.split(';'):
    #             joint_str = joint_str.strip()
    #             if not joint_str:
    #                 continue
                    
    #             parts = joint_str.split(',')
    #             if len(parts) == 6:
    #                 msg.name.append(parts[0].strip())
    #                 msg.position.append(float(parts[1]))
    #                 msg.velocity.append(float(parts[2]))
    #                 msg.effort.append(float(parts[3]))
    #                 msg.stiffness.append(float(parts[4]))
    #                 msg.damping.append(float(parts[5]))
    #             else:
    #                 self.get_logger().warn(f"Invalid joint data: {joint_str}")
            
    #         return msg
            
    #     except Exception as e:
    #         self.get_logger().error(f"解析失败: {e}")
    #         return None

# 安全配置文件映射
VALID_COMMANDS = {
    1.0: 'cfg/block.txt',
    2.0: 'cfg/cleve.txt'
}

@app.post("/send_cmd")
async def send_cmd(value: float):
    """
    ROS2发布动作消息，发送joint_cmd消息
    """
    parser = CommandParser()

    try:
        # 安全校验
        if value not in VALID_COMMANDS:
            raise HTTPException(
                status_code=400,
                detail=f"Invalid command value. Valid options: {list(VALID_COMMANDS.keys())}"
            )
            
        file_path = VALID_COMMANDS[value]
        if not os.path.exists(file_path):
            raise HTTPException(
                status_code=404,
                detail=f"Command file not found: {file_path}"
            )
        
        # cmd_publisher = ros_node.create_publisher(JointCommand, 'joint_cmd', 10)
        
        # # 处理命令文件
        # with open(file_path, 'r') as f:
        #     blocks = [b.strip() for b in f.read().split('$$') if b.strip()]
            
        #     for block in blocks:
        #         if block.startswith('#'):
        #             continue
                    
        #         msg = parser.parse_command_block(block)
        #         for i in range(len(msg.name)):
        #             output = (f'  Joint {i+1}: name={msg.name[i]}, '
        #                     f'position={msg.position[i]}, '
        #                     f'velocity={msg.velocity[i]}, '
        #                     f'effort={msg.effort[i]}, '
        #                     f'stiffness={msg.stiffness[i]}, '
        #                     f'damping={msg.damping[i]}')
        #             print(output)
        #         if msg:
        #             cmd_publisher.publish(msg)
        #             rclpy.spin_once(ros_node, timeout_sec=0.1)
        
        return {
            "status": "success",
            "command_type": value,
            "file_used": file_path,
            # "blocks_processed": len(blocks)
        }
    
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))
    
    

# if __name__ == "__main__":
#     # 启动HTTP服务
#     uvicorn.run(app, host="0.0.0.0", port=8500)