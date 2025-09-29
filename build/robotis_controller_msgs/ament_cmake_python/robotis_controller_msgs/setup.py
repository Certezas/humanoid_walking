from setuptools import find_packages
from setuptools import setup

setup(
    name='robotis_controller_msgs',
    version='0.1.4',
    packages=find_packages(
        include=('robotis_controller_msgs', 'robotis_controller_msgs.*')),
)
