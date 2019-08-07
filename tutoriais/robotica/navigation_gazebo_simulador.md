---
title: Laborátorio de Informática
date: Agosto 2019
---

Este guia demonstra como salvar o mapa gerado pelo gmapping para rodar o navegation em ambiente simulado.

# Slam Gmapping
Slam Gmapping e um pacote do ROS capaz de gerar um mapa em 2D (como uma planta baixa de um prédio) a partir do LIDAR do Turtlebot.

# Como se conectar ao turtlebot virtual

Antes de tudo, edite o arquivo .bashrc

```
gedit ~/.bashrc

```

Comente as linhas 


```
#export ROS_MASTER_URI="http://"$IPBerry":11311" 
#export ROS_IP=`hostname -I`
#export TURTLEBOT3_MODEL=burger 

```


# Como gerar o mapa do espaco fisico em ambiente simulado

*Temos um tutorial de como usar o gmapping em um Turtlebot3 real, usando o ROS Melodic [aqui]()


Abra o gazebo


```
roslaunch turtlebot3_gazebo turtlebot3_world.launch

```

Rode o slam gmapping

```
roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping

```
![gmpapping](https://github.com/Insper/404/blob/master/tutoriais/robotica/img/Screenshot%20from%202019-08-07%2008-14-56.png)



E o teleop para navegar com o turtlebot


```
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch 
```

Navegue com o turtlebot para mapear a area, execute o seguinte comando para salvar o mapa


```
rosrun map_server map_saver -f ~/map
```

O mapa sera salvo na sua pasta home

![save_map](https://github.com/Insper/404/blob/master/tutoriais/robotica/img/Screenshot%20from%202019-08-07%2008-18-26.png)

Feche o gazebo e abra um novo

```
roslaunch turtlebot3_gazebo turtlebot3_world.launch
```

Abra o mapa salvo no gazebo 

``
roslaunch turtlebot3_navigation turtlebot3_navigation.launch map_file:=$HOME/map.yaml
```



# Rerência

http://emanual.robotis.com/docs/en/platform/turtlebot3/slam/
https://newscrewdriver.com/2018/08/12/turtlebot3-demo-navigating-gazebo-simulation-world/
https://newscrewdriver.com/2018/08/11/running-turtlebot3-mapping-demonstration-with-a-twist/
https://www.youtube.com/watch?v=yv0FhmqPfUo&feature=youtu.be
