#!/bin/bash
#Author: Licia Sales
#04-03-2020


echo "CONECTANDO COM O ROBO"
gnome-terminal -- bash -c "roscore";
sleep  3
gnome-terminal -- bash -c "roslaunch turtlebot3_bringup turtlebot3_remote.launch";
sleep 5
gnome-terminal -- bash -c "roslaunch gscam raspicam.launch";
sleep 2
gnome-terminal -- bash -c "rqt_image_view";
sleep 5


echo "TESTANDO OS PARANAUE"

gnome-terminal -- bash -c "rostopic echo bumper";
sleep 2
gnome-terminal -- bash -c "rostopic echo scan";
sleep 2
gnome-terminal -- bash -c "rostopic echo odon";
sleep 2
gnome-terminal -- bash -c "roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch";
sleep 2
gnome-terminal -- bash -c "rostopic pub -1 servo_camera/command std_msgs/String "desce"";
sleep 2


echo 0
