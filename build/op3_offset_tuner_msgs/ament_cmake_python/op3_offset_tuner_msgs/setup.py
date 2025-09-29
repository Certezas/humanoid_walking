from setuptools import find_packages
from setuptools import setup

setup(
    name='op3_offset_tuner_msgs',
    version='0.1.1',
    packages=find_packages(
        include=('op3_offset_tuner_msgs', 'op3_offset_tuner_msgs.*')),
)
