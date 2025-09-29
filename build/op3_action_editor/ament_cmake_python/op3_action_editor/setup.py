from setuptools import find_packages
from setuptools import setup

setup(
    name='op3_action_editor',
    version='0.2.2',
    packages=find_packages(
        include=('op3_action_editor', 'op3_action_editor.*')),
)
