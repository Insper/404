#!/bin/bash

#Author: Licia Sales
#Update 25-Jun-19

screen -dmS ROBO bash
screen -S ROBO -X screen -t CORE  bash -ic "roslaunch turtlebot3_bringup turtlebot3_core.launch"
sleep  10
screen -S ROBO -X screen -t LIDAR bash -ic "roslaunch turtlebot3_bringup turtlebot3_robot.launch"
sleep 5
screen -S ROBO -X screen -t CAMERA bash -ic "bash /home/pi/camera.sh"
screen -S ROBO -X screen -t BEEP bash -ic "rostopic pub -1 /sound turtlebot3_msgs/Sound 'value: 1'"


echo 0

