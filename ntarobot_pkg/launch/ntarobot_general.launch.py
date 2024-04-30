# This file corresponds to the launch of the necessary nodes for the overall 
# control of the NTA robot - Solverbot.
# Libraries section
from launch import LaunchDescription
from launch_ros.actions import Node

# Get path values
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Set prefix and another necesary variables
    # Set share directory
    ntaRobot_controlPath = get_package_share_directory("ntarobot_pkg")

    # Set config params files
    params_robot = os.path.join(ntaRobot_controlPath, 'config', 'motordriver_params.yaml')

    # Set node executor
    ntaRobot_controlNode = Node(
        package = "ntarobot_pkg",
        executable = "ntarobot_motordriver.py",
        parameters = [params_robot],
        output = "screen"
    )

    # Return function
    return LaunchDescription([
        ntaRobot_controlNode
    ])