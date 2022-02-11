## Instalção da Câmera RealSense D435 ##

Instale as libs necessárisas:

```
 sudo apt install -y ros-noetic-realsense2-camera
 sudo apt install -y ros-noetic-realsense2-description 
 sudo apt install -y ros-noetic-librealsense2
 sudo apt install -y ros-noetic-librealsense2-dbgsym   
 
```

Agora conecte a o cabo usb da câmera no computador, verifique se ela foi conectada corretamente:

![terminal](https://github.com/Insper/404/blob/master/tutoriais/robotica/img/terminal.png)

Para testar a Camera

```
roslaunch realsense2_camera demo_pointcloud.launch 

```

![camera](https://github.com/Insper/404/blob/master/tutoriais/robotica/img/camera.png)
