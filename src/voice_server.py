from voice_pub import app
from voice_sub import SimpleFloatSubscriber
import uvicorn
import rclpy
from node_proxy import NodeProxy

def main():
    # 初始化ROS2节点代理（单例模式）
    node_proxy = NodeProxy.get_instance()
    
    # 初始化订阅者（单例模式）
    subscriber = SimpleFloatSubscriber()
    
    # 启动FastAPI服务
    uvicorn.run(app, host="0.0.0.0", port=8500)

if __name__ == "__main__":
    main()