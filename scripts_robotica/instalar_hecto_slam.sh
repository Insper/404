#!/bin/bash
#Autor - Licia Sales
#30-Jul-2019

sudo apt-get install -y ros-melodic-slam-karto
echo "Vamos instalar os pacotes capazes de realizar slam"
if [ $? -eq 0 ]
then
    echo "Vamos instalar os pacotes capazes de realizar slam"
    	sudo apt-get install -y ros-melodic-slam-karto
	if [ $? -eq 0 ]
    	then	
	echo "Vamos precisar compilar o hector_map a partir do código-fonte"
	cd ~/catkin_ws/src
	git clone https://github.com/tu-darmstadt-ros-pkg/hector_slam
	cd hector_slam
	sudo rm -Rf hector_geotiff*
	cd ~/catkin_ws
	catkin_make

	   if [ $? -eq 0 ]
   	   then
		echo "vamos testar agora"
		./configura_bash_simulador.sh
		source ~/.bashrc
		echo "Só usar jovem!"
		gnome-terminal -e "roslaunch turtlebot3_gazebo turtlebot3_world.launch"	
		gnome-terminal -e "roslaunch turtlebot3_slam turtlebot3_slam.launch  slam_methods:=hector"	
		gnome-terminal -e "roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch"	
		gnome-terminal -e "rviz -d `rospack find turtlebot3_slam`/rviz/turtlebot3_hector.rviz"	
	
		sudo mv ~/.bashrcopy ~/.bashrc
		
		echo 0
		fi
	fi
fi
