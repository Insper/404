## Instalção do package gscam ##

Vamos criar um novo package chamado gscam para isso, abra um novo terminal e execute os comandos:

```
 cd catkin_ws/src/
 catkin_create_pkg gscam raspicam.launch  rospy roscpp
```

Agora vamos criar o arquivo launch para a execução do gscam

```
roscd gscam
sudo gedit raspicam.launch
```

No editor de notas que abrir, cole o código abaixo:

```
<launch>
   <arg name="cam_name" value="raspicam"/>
   <env name="GSCAM_CONFIG" value="udpsrc port=9000 ! application/x-rtp, payload=96 ! rtpjitterbuffer ! rtph264depay ! avdec_h264 ! videoconvert" />
   <node pkg="gscam" type="gscam" name="$(arg cam_name)">
     <param name="camera_name" value="$(arg cam_name)" />
     <remap from="camera/image_raw" to="$(arg cam_name)/image_raw" />
   </node>
 </launch>
```

Para executar o package criado, utilize o comando abaixo:

```
roslaunch gscam raspicam.launch
```

