from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="mi_paquete_python",
                namespace="",
                executable="circle_action_server",
                name="server1"
            ),
            Node(
                package="turtlesim",
                namespace="",
                executable="turtlesim_node",
                name="turtle1"
            ),
            Node(
                package="mi_paquete_python",
                namespace="",
                executable="circle_action_client",
                name="client"
            )
        ]
    )
