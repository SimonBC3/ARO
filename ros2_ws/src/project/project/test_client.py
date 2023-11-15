from tutorial_interfaces.srv import MoveRobot

import rclpy
from rclpy.node import Node


class TestClient(Node):
    def __init__(self):
        super().__init__('robot_client')
        self.client = self.create_client(MoveRobot, 'robot_service')
        self.request = MoveRobot.Request()

        selection = ''
        while selection != '0' or selection != '1':
            selection = str(input("\n\r0 to patrol \n\r 1 to go to exit\n\r"))
            if selection == '0':
                self.request.command = 'patrol'
            elif selection == '1':
                self.request.command = 'goToExit'
            else:
                print('Wrong selection...')

        print(self.request)

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        
    def send_request(self):
        future = self.client.call_async(self.request)
        future.add_done_callback(self.done_callback)

    def done_callback(self, future):
        try: 
            response = future.result()
            self.get_logger().info(f"Result: {response}")
            rclpy.shutdown()
        except Exception as e:
            self.get_logger().error(f"Service call failed { e} ")


def main(args=None):
    rclpy.init(args=args)
    
    client = TestClient()

    client.send_request()

    rclpy.spin(client)

    client.destroy_node()

if __name__ == '__main__':
    main()