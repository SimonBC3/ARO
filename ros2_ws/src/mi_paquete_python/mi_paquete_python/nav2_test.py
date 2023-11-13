#!/usr/bin/env python3
import rclpy
from nav2_simple_commander.robot_navigator import BasicNavigator
from geometry_msgs.msg import PoseStamped

import tf_transformations


def create_pose_stamped(navigator, position_x, position_y, rotation_z):
    q_x, q_y, q_z, q_w = tf_transformations.quaternion_from_euler(0.0, 0.0, rotation_z)
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = "map"
    goal_pose.header.stamp = navigator.get_clock().now().to_msg()
    goal_pose.pose.position.x = position_x
    goal_pose.pose.position.y = position_y
    goal_pose.pose.position.z = 0.0
    goal_pose.pose.orientation.x = q_x
    goal_pose.pose.orientation.y = q_y
    goal_pose.pose.orientation.z = q_z
    goal_pose.pose.orientation.w = q_w
    return goal_pose


def main():
    # Iniciar la comunicación con ROS 2
    rclpy.init()
    nav = BasicNavigator()

    # Convertir los ángulos de Euler a cuaternión y establecer la orientación inicial
    initial_pose = create_pose_stamped(nav, -2.0, -0.5, 0.0)
    nav.setInitialPose(initial_pose)
    # Esperar hasta que el sistema de navegación esté completamente activo
    nav.waitUntilNav2Active()

    goal_pose1 = create_pose_stamped(nav, 1.5, 0.5, 1.57)
    goal_pose2 = create_pose_stamped(nav, 0.0, 1.5, 3.14)
    goal_pose3 = create_pose_stamped(nav, -1.5, 0.5, 0.0)

    # Enviamos el comando para que el robot se dirija a la pose objetivo.
    nav.goToPose(goal_pose1)
    while not nav.isTaskComplete():
        feedback = nav.getFeedback()
        print(feedback)

    # Seguir una serie de waypoints
    waypoints = [goal_pose1, goal_pose2, goal_pose3]
    for _ in range(3):
        nav.followWaypoints(waypoints)
        while not nav.isTaskComplete():
            feedback = nav.getFeedback()
            print(feedback)

    # Mostramos el resultado final de la navegación.
    print(nav.getResult())

    # Finalizar la comunicación con ROS 2
    rclpy.shutdown()


# Ejecutar la función principal si el script se ejecuta como el programa principal
if __name__ == "__main__":
    main()