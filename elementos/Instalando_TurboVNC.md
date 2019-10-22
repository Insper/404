---
title: Laborátorio de Informática
date: Outubro 2019
---

Guia para instalar e configurar o TurboVNC Client + VirtualGL 

# VirtualGL 
Slam Gmapping e um pacote do ROS capaz de gerar um mapa em 2D (como uma planta baixa de um prédio) a partir do LIDAR do Turtlebot.

# Preparando o Sistema

Certifique-se de que a placa de video esta devidamente instalada e configurada no seu computador, utilize os comando abaixo.

```
sudo ubuntu-drivers autoinstall

sudo apt install nvidia-cuda-toolkit

```


Instale o Emulador de terminais Xterm 


```

sudo apt install xterm

```

Instale o componente x11-apps


```

sudo apt install x11-apps

```

Reinicie o computador 


```

sudo reboot


```

Baixe e instale o VirtualGL


- [VirtualGL](https://sourceforge.net/projects/virtualgl/files/)


```
cd ~/Downloads


sudo dpkg -i virtualgl_*.deb

```

Instale o pacote mesa-utils e a lightdm

```

sudo apt install mesa-utils

sudo apt-get install lightdm


```


Baixe e instale o TurboVNC


- [TurboVNC](https://sourceforge.net/projects/turbovnc/files/)

```

sudo dpkg -i turbovnc_*.deb


```

Use o comando abaixo para subir um servidor

```

/opt/TurboVNC/bin/vncserver


```

Ou o comando abaixo para se conectar a um servidor


```

/opt/TurboVNC/bin/vncviewer


```

Coloque o endereço para conectar

![ip+display](https://github.com/Insper/404/blob/master/elementos/Screenshot%20from%202019-10-22%2013-42-43.png)


# Rerência


https://gist.github.com/cyberang3l/422a77a47bdc15a0824d5cca47e64ba2

https://www.scm.com/doc/Installation/Remote_GUI.html
