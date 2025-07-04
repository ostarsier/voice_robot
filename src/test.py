import rclpy
from threading import Thread
import time
from voice_sub import SimpleFloatSubscriber

def main():
    # 初始化ROS 2
    rclpy.init()
    
    # 创建订阅者节点
    subscriber = SimpleFloatSubscriber()
    
    # # 创建一个线程来运行ROS 2节点
    # spin_thread = Thread(target=rclpy.spin, args=(subscriber,))
    # spin_thread.start()
    
    try:
        while rclpy.ok():
            # 获取最新值
            latest_val = subscriber.get_latest_value()
            latest_source = subscriber.get_latest_source()
            
            if latest_val is not None:
                print(f"\rLatest value: {latest_val} (from {latest_source})", end="", flush=True)
            else:
                print("\rWaiting for data...", end="", flush=True)
            
            time.sleep(0.1)  # 控制打印频率
            
    except KeyboardInterrupt:
        print("\nShutting down...")
    finally:
        # 清理
        rclpy.shutdown()
        # spin_thread.join()

if __name__ == '__main__':
    main()