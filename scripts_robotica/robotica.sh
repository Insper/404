#############
# Robotica  #
#############

export IPBerry=10.102.4.81
# CANCELE  com # as linhas ROS_MASTER_URI  e ROS_IP se estiver usando com Gazebo, Sphinx ou Bebop
export ROS_MASTER_URI="http://"$IPBerry":11311" 
export ROS_IP=`hostname -I |awk '{print $1}'`

#escolha qual o modelo robo sera usado no simulador
export TURTLEBOT3_MODEL=burger 
#export TURTLEBOT3_MODEL=waffle_pi

#importar corretamente o robo no Rviz 
export LC_NUMERIC="en_US.UTF-8"
export GAZEBO_MODEL_PATH=$HOME/catkin_ws/src/my_simulation/models:


# PATH usado para o drone
#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/ros/noetic/lib/parrot_arsdk/
export PYTHONPATH=/usr/local/python:/usr/lib/python:$PYTHONPATH:

# PATH Gazebo
export GAZEBO_MODEL_PATH=~/catkin_ws/src/my_simulation/models:${GAZEBO_MODEL_PATH}

#Garra
alias abre_garra="rostopic pub -1 servo_garra/command std_msgs/String "abre""
alias fecha_garra="rostopic pub -1 servo_garra/command std_msgs/String "fecha""
alias stop_garra="rostopic pub -1 servo_garra/command std_msgs/String "stop""

#Braço
alias sobe_braco="rostopic pub -1 servo_braco/command std_msgs/String "sobe""
alias desce_braco="rostopic pub -1 servo_braco/command std_msgs/String "desce""
alias recolhe_braco="rostopic pub -1 servo_braco/command std_msgs/String "recolhe""
alias stop_braco="rostopic pub -1 servo_braco/command std_msgs/String "stop""

#Camera
alias sobe_camera="rostopic pub -1 servo_camera/command std_msgs/String "sobe""
alias desce_camera="rostopic pub -1 servo_camera/command std_msgs/String "desce""
alias stop_camera="rostopic pub -1 servo_camera/command std_msgs/String "stop""

# ROS 1
source /opt/ros/noetic/setup.bash
source $HOME/catkin_ws/devel/setup.bash
