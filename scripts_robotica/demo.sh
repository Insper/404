#!/bin/bash
#Autor - Licia Sales
#25-Jun-2019
echo "Certifique-se de que esta conectado na mesma rede que o robo, e que o IP esta atualizado no .bashrc"
cd ~/catkin_ws/src/robot19/ros/exemplos_python/scripts
gnome-terminal -e  "roscore"
sleep  3
gnome-terminal -e "roslaunch turtlebot3_bringup turtlebot3_remote.launch"
sleep 5
gnome-terminal -e  "rosrun topic_tools relay /raspicam_node/image/compressed /kamera"
sleep 2
gnome-terminal -e "rosrun exemplos_python cor.py"
sleep 1
gnome-terminal -e "rosrun rqt_reconfigure rqt_reconfigure"
echo 0
