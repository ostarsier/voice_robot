import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from threading import Lock
from node_proxy import NodeProxy

class SimpleFloatSubscriber(Node):
    _instance = None
    _lock = Lock()

    def __new__(cls):
        with cls._lock:
            if cls._instance is None:
                cls._instance = super().__new__(cls)
                cls._instance._initialized = False
            return cls._instance
    
    def __init__(self):
        with self._lock:
            if not self._initialized:
                # 通过代理获取共享节点
                self._proxy = NodeProxy.get_instance()
                self.node = self._proxy.get_node()

                # 定义要订阅的 topic 列表及其对应的标识符
                self.topics_config = {
                    'zero_mode': 'zero',
                    'stand_mode': 'stand', 
                    'walk_mode': 'walk',
                    'walk_mode2': 'walk2' 
                }
                
                # 初始化缓存 - 只存储最新值的字符串形式
                self.latest_value = None
                self.latest_source = None
                self.cache_lock = Lock()
                
                # 为每个 topic 创建订阅者
                for topic, identifier in self.topics_config.items():
                    self.node.create_subscription(
                        Float32,
                        topic,
                        lambda msg, id=identifier: self.listener_callback(msg, id),
                        10
                    )

                self._initialized = True
    
    def listener_callback(self, msg: Float32, identifier: str):
        """收到消息时的回调函数"""
        try:
            # 创建字符串格式的值
            value_str = f"{identifier}:{msg.data:.2f}"
            
            # 线程安全地更新缓存
            with self.cache_lock:
                self.latest_value = value_str
                self.latest_source = identifier
            self.node.get_logger().info(f'回调函数接受信息： {identifier} message: {msg.data:.2f}')    
        except Exception as e:
            self.node.get_logger().error(f'Error processing {identifier} message: {str(e)}')
    
    def get_latest_value(self):
        """获取最新的字符串值"""
        with self.cache_lock:
            return self.latest_value
    
    def get_latest_source(self):
        """获取最新值的来源标识"""
        with self.cache_lock:
            return self.latest_source


# if __name__ == '__main__':
    # 测试代码
    # subscriber = SimpleFloatSubscriber()
    # print("订阅服务已启动，使用代理节点:", subscriber.node.get_name())