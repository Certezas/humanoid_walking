from setuptools import find_packages
from setuptools import setup

setup(
    name='op3_ball_detector_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('op3_ball_detector_msgs', 'op3_ball_detector_msgs.*')),
)
