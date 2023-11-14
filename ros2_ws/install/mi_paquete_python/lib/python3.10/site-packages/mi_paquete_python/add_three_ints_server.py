import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import AddThreeInts


class AddThreeIntsServer(Node):
    def __init__(self):
        super().__init__('add_three_ints_server')
        self.srv = self.create_service(AddThreeInts, 'add_three_ints', self.add_callback)

    def add_callback(self, request, response):
        response.sum = request.a + request.b + request.c
        self.get_logger().info(f"Incoming request: a: { request.a} , b: { request.b} , c: { request.c} ")
        self.get_logger().info(f"Sending back response: { response.sum} ")
        return response
    

def main(args=None):
    rclpy.init(args=args)
    
    server = AddThreeIntsServer()
    
    rclpy.spin(server)

    server.destroy_node()

    rclpy.shutdown()

if __name__ == '__main__':
    main()