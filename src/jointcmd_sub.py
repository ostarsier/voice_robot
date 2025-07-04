import rclpy
from rclpy.node import Node
from my_ros2_proto.msg import JointCommand
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy

class JointCommandSubscriber(Node):
    def __init__(self):
        super().__init__('x1_rl_ctrl_node')
        # 定义 QoS 配置（示例使用可靠传输+保持最后10条消息）
        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,  # 或 BEST_EFFORT
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )

        self.subscription = self.create_subscription(
            JointCommand,
            'joint_cmd',
            self.listener_callback,
            qos  # 显式传入 QoS 配置
        )
        self.subscription  # 防止未使用变量警告

    def listener_callback(self, msg):
        self.get_logger().info('Received JointCommand message:')
        
        # 打印header信息
        self.get_logger().info(f'Header:')
        self.get_logger().info(f'  stamp: {msg.header.stamp.sec}.{msg.header.stamp.nanosec}')
        self.get_logger().info(f'  frame_id: {msg.header.frame_id}')
        
        # 打印关节命令信息
        self.get_logger().info('Joint Commands:')
        for i in range(len(msg.name)):
            output = (f'  Joint {i+1}: name={msg.name[i]}, '
                     f'position={msg.position[i]}, '
                     f'velocity={msg.velocity[i]}, '
                     f'effort={msg.effort[i]}, '
                     f'stiffness={msg.stiffness[i]}, '
                     f'damping={msg.damping[i]}')
            self.get_logger().info(output)

def main(args=None):
    rclpy.init(args=args)
    joint_command_subscriber = JointCommandSubscriber()
    
    try:
        rclpy.spin(joint_command_subscriber)
    except KeyboardInterrupt:
        pass
    
    joint_command_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()