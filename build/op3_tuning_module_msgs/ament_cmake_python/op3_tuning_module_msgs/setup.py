from setuptools import find_packages
from setuptools import setup

setup(
    name='op3_tuning_module_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('op3_tuning_module_msgs', 'op3_tuning_module_msgs.*')),
)
