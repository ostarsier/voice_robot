import pyrealsense2 as rs
import numpy as np
import cv2
import io
from threading import Lock

class Realsense:
    
    _instance = None
    
    _lock = Lock()

    def __new__(cls):
        with cls._lock:
            if cls._instance is None:
                cls._instance = super().__new__(cls)
                cls._instance._initialized = False
            return cls._instance
        
    """
        初始化
    """
    def __init__(self):
        with self._lock:
            if not self._initialized:
                # 初始化缓存 - 只存储最新值的字符串形式
                self.cache_lock = Lock()
                # realsense 管道
                pipeline = rs.pipeline()
                # realsense 配置信息
                config = rs.config()
                # 启用指定序列号的设备
                config.enable_device('317622072136')

                # 配置流信息，目前配置彩色摄像头
                config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)  #10、15或者30可选,20或者25会报错，其他帧率未尝试
                # 配置启动红外
                config.enable_stream(rs.stream.infrared, 1, 640, 480, rs.format.y8, 15)
                # 第二个红外相机
                config.enable_stream(rs.stream.infrared, 2, 640, 480, rs.format.y8, 15)
                # 深度相机
                config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 15)
                try:
                # 启动 realsense
                    profile = pipeline.start(config)
                    # 配置对齐
                    align_to = rs.stream.color
                    
                    align = rs.align(align_to)

                    self._pipeline = pipeline
                    self._config = config
                    self._profile = profile
                    self._align = align
                    
                    self._initialized = True
                except Exception as e:
                    print(e)
                    self._initialized = False
                
    def read_frames(self):
        if self._initialized == False:
            print('realsense not start')
            return None, None , None, None
        with self._lock:
            # 获取图像
            frames = self._pipeline.wait_for_frames()
            # 对齐图像
            aligned_frames = self._align.process(frames)
            
            # 深度图像
            depth_frame = aligned_frames.get_depth_frame()  # aligned_depth_frame is a 640x480 depth
            if depth_frame:
                depth_frame = np.asanyarray(depth_frame.get_data())
                
            # 彩色图像
            color_frame = aligned_frames.get_color_frame()
            if color_frame:
                color_frame = np.asanyarray(color_frame.get_data())
                
            # 左红外
            left_frame = frames.get_infrared_frame(1)
            if left_frame:
                left_frame = np.asanyarray(left_frame.get_data())
            # 右红外
            right_frame = frames.get_infrared_frame(2)
            if right_frame:
                right_frame = np.asanyarray(right_frame.get_data())
            
            return depth_frame, color_frame , left_frame, right_frame
    
    """
        彩图转jpg数据
    """
    def to_jpg(self, color_frame):
        
        l_quality = (int(cv2.IMWRITE_JPEG_QUALITY), 100)
        # 将图像帧转换为 JPEG 格式
        result, img_encoded = cv2.imencode('.jpg', color_frame)
        # jpg data
        image_byte = img_encoded.tobytes()
            # 将 JPEG 数据转换为字节流
        #image_bytes = io.BytesIO(image_byte)

        return image_byte