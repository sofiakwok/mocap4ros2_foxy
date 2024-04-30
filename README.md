Copied from https://github.com/MOCAP4ROS2-Project/mocap4ros2_optitrack

Instructions:
1. source ```/opt/ros/foxy/setup.bash```
2. source ```mocap4r2_ws/install/setup.bash```
3. ```ros2 launch mocap4r2_optitrack_driver optitrack2.launch.py```
4. ```ros2 lifecycle set /mocap4r2_optitrack_driver_node activate```

To rebuild workspace: ```colcon build --symlink-install``` in root directory (mocap4r2_ws) 
