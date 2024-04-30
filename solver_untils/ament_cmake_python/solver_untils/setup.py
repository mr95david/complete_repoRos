from setuptools import find_packages
from setuptools import setup

setup(
    name='solver_untils',
    version='0.0.0',
    packages=find_packages(
        include=('solver_untils', 'solver_untils.*')),
)
