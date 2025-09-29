from setuptools import find_packages
from setuptools import setup

setup(
    name='op3_action_module_msgs',
    version='0.1.1',
    packages=find_packages(
        include=('op3_action_module_msgs', 'op3_action_module_msgs.*')),
)
