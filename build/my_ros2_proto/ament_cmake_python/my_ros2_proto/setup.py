from setuptools import find_packages
from setuptools import setup

setup(
    name='my_ros2_proto',
    version='0.1.0',
    packages=find_packages(
        include=('my_ros2_proto', 'my_ros2_proto.*')),
)
