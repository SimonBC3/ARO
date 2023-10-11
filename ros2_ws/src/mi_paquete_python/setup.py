from setuptools import find_packages, setup

package_name = 'mi_paquete_python'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
        ],
    },
)
