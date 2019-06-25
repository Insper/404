#!/bin/bash
#Author: Licia Sales
#25-Jun-19

echo "Certifique-se de que esta conectado na mesma rede que o robo, e que o IP esta atualizado no .bashrc"
gnome-terminal -- bash -c "roscore";
sleep  3
gnome-terminal -- bash -c "roslaunch turtlebot3_bringup turtlebot3_remote.launch";
sleep 5
gnome-terminal -- bash -c "roslaunch gscam raspicam.launch";
sleep 2
gnome-terminal -- bash -c "rqt_image_view";
sleep 1
echo 0
