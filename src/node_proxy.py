import rclpy
from rclpy.executors import SingleThreadedExecutor
from threading import Thread, Lock

class NodeProxy:
    _instance = None
    _lock = Lock()
    
    @classmethod
    def get_instance(cls):
        with cls._lock:
            if cls._instance is None:
                cls._instance = cls()
            return cls._instance
    
    def __init__(self):
        if not rclpy.ok():
            rclpy.init()

        self.node = rclpy.create_node('x1_rl_ctrl_node')
        self.executor = rclpy.executors.SingleThreadedExecutor()
        self.executor.add_node(self.node)
        
        # 启动后台线程
        self._spin_thread = Thread(
            target=self._run_executor,
            daemon=True,
            name='Voice_ROS2_Executor_Thread'
        )
        self._spin_thread.start()
    
    def _run_executor(self):
        """执行器运行方法"""
        try:
            while rclpy.ok():
                self.executor.spin_once(timeout_sec=0.1)
        except Exception as e:
            self.node.get_logger().error(f"Executor failed: {str(e)}")

    def get_node(self):
        return self.node
    
    def shutdown(self):
        """安全关闭资源"""
        if hasattr(self, 'executor'):
            self.executor.shutdown()
        if rclpy.ok():
            rclpy.shutdown()