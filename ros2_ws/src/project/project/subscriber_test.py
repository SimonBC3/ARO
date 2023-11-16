import rclpy
import time

from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Vector3



class Subscriber(Node):
    def __init__(self):
        super().__init__("subscriber")
        self.subscriber = self.create_subscription(Vector3, '/distanciaTesoro', self.callback, 10)

        self.distancia = None
        self.loop()

    def callback(self, pos):
        self.distancia =  pos.z   
        print(f"Recieved pos: {pos}")

    def loop(self):
        aux = self.distancia
        while True:
            if self.distancia != aux:
                print("updated")
                aux = self.distancia
                rclpy.spin_once(self, timeout_sec=0.5)
                time.sleep(1)
            else:
                time.sleep(0.5)
                rclpy.spin_once(self, timeout_sec=1)
                print("not updated")






def main(args=None):
    rclpy.init(args=args)

    minimal_service = Subscriber()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
