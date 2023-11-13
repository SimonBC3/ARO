from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'mi_paquete_python'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share, package_name'), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='simon',
    maintainer_email='simon@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'robot_news_station = mi_paquete_python.robot_news_station:main',
            'move_leonardo = mi_paquete_python.move_leonardo:main',
            'move_michelangelo = mi_paquete_python.move_michelangelo:main',
            'move_donatello = mi_paquete_python.move_donatello:main',
            'smartphone = mi_paquete_python.smartphone:main',
            'position_logger = mi_paquete_python.position_logger:main',
            'turtle_controller = mi_paquete_python.turtle_controller:main',
            'move_turtle = mi_paquete_python.move_turtle:main',
            'move_turtle_client = mi_paquete_python.move_turtle_client:main',
            'circle_action_server = mi_paquete_python.circle_action_server:main',
            'circle_action_client = mi_paquete_python.circle_action_client:main',
            'add_three_ints_server = mi_paquete_python.add_three_ints_server:main',
            'add_three_ints_client = mi_paquete_python.add_three_ints_client:main',
            'minimal_param_node = mi_paquete_python.python_parameters_node:main',
            'safe_zone_controller = mi_paquete_python.safe_zone_controller:main',
            'nav2_test = mi_paquete_python.nav2_test:main'
        ],
    },
)
