# Guia de como rodar o drone bebop no ROS Noetic com Gazebo 11

Este guia foi adaptado do link: https://github.com/simonernst/iROS_drone

## Pré requisitos 

- Ubuntu 20.04
- ROS Noetic 

## Instalação

1. Primeiramente vamos criar um novo workspace ROS, instalar alguns pacotes clonar alguns repositórios, abra um novo terminal e digite:

```bash
mkdir -p bebop_ws/src && cd bebop_ws/src

sudo apt install build-essential python3-rosdep python3-catkin-tools
sudo apt install libusb-dev python3-osrf-pycommon libspnav-dev libbluetooth-dev libcwiid-dev libgoogle-glog-dev
sudo apt install ros-noetic-mavros ros-noetic-octomap-ros 

git clone https://github.com/ethz-asl/mav_comm
git clone -b noetic https://github.com/simonernst/iROS_drone
git clone https://github.com/ros-drivers/joystick_drivers

cd ..
catkin build
```
2. É esperado que a compilação ocorra com sucesso. Verifique no log do terminal se ocorreu tudo bem.

3. Como criamos um novo workspace ROS chamado bebop_ws é necessário adicionar essa informação as variaveis de ambiente do linux, fazemos isso da seguinte forma:

```bash
cd ~
code robotica.sh
```
Adicione o comando abaixo, salve e feche o arquivo robotica.sh

```bash
source ~/bebop_ws/devel/setup.bash
```
Feche o terminal e abra uma novo terminal para recarregar o .bashrc.


4. Rode o mapa do simulador ***Gazebo*** através do comando:
   
```bash
roslaunch rotors_gazebo mav_velocity_control_with_fake_driver.launch
```

5. ***takeoff*** e ***land*** Abra um novo terminal e digite:

```bash
takeoff (decolar) - rostopic pub --once /takeoff std_msgs/Empt
land (pousar) -  rostopic pub --once /land std_msgs/Empty 
```        

9. Para teleoperar o drone atraves do teclado, rode em um novo terminal: 

```bash
        rosrun teleop_twist_keyboard teleop_twist_keyboard.py cmd_vel:=/bebop/cmd_vel
``` 

10. Lembre-se que para ver a camera o comando é: rqt_image_view

11. Agora é com você. Rode seu código python no drone.
    
        rosrun ..........................
        
        

## Projetos demo de alunos:

O que rodar:

[https://github.com/PhelipeMuller/PetDrone](https://github.com/PhelipeMuller/PetDrone)

[https://github.com/decoejz/robotica_p3](https://github.com/decoejz/robotica_p3)


## Video demonstração de como instaçar e rodar. 

Se tiver dificuldades para instalar, assista ao video:

[https://www.youtube.com/watch?v=Rhgq3ELu9cI](https://www.youtube.com/watch?v=Rhgq3ELu9cI)
