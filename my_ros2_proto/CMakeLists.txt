cmake_minimum_required(VERSION 3.5)
project(my_ros2_proto)

# 默认使用 C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# 查找 ROS2 依赖
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)  # 因为 JointCommand 使用了 std_msgs/Header

# 定义消息文件
set(msg_files
  "msg/JointCommand.msg"
)

# 生成消息
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/JointCommand.msg"
  DEPENDENCIES std_msgs  # 如果用了 std_msgs/Header
)

# install(
#   DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_py/my_ros2_proto"
#   DESTINATION "lib/python3.10/site-packages"
# )
# ament_python_install_package(${PROJECT_NAME})

# 安装消息
ament_package()