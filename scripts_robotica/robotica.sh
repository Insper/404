############## Robotica  #
#############

export IPBerry=10.102.5.63
# CANCELE  com # as linhas ROS_MASTER_URI  e ROS_IP se estiver usando com Gazebo, Sphinx ou Bebop
#export ROS_MASTER_URI="http://"$IPBerry":11311" 
#export ROS_IP=`hostname -I |awk '{print $1}'`

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
alias abre_garra="rostopic pub /joint2_position_controller/command std_msgs/Float64 \"data: -0.5\""
alias abrir="rostopic pub /joint2_position_controller/command std_msgs/Float64 \"data: -0.5\""
alias fecha_garra="rostopic pub /joint2_position_controller/command std_msgs/Float64 \"data: 0\""
alias fechar="rostopic pub /joint2_position_controller/command std_msgs/Float64 \"data: 0\""

#Braço
alias sobe_braco="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: 1\""
alias levantar="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: 1.5\""
alias nivela_braco="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: 0\""
alias nivelar="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: 0\""
alias desce_braco="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: -1\""
alias recolhe_braco="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: -1\""
alias guardar="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: -1\""
alias recolher="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: -1\""
alias stop_braco="rostopic pub /joint1_position_controller/command std_msgs/Float64 \"data: -1\""

#Camera
alias sobe_camera="rostopic pub -1 servo_camera/command std_msgs/String "sobe""
alias desce_camera="rostopic pub -1 servo_camera/command std_msgs/String "desce""
alias stop_camera="rostopic pub -1 servo_camera/command std_msgs/String "stop""

# ROS 1
source /opt/ros/noetic/setup.bash
source $HOME/catkin_ws/devel/setup.bash
