from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="project",
                namespace="",
                executable="service_server",
                name="server1"
            ),
            Node(
                package="project",
                namespace="",
                executable="test_client",
                name="client"
            )
        ]
    )