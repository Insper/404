
Infraestrutura para suporte as materias de Engenharia da Computação 
> Guias e tutorias de infra estão em [tutoriais](./tutoriais). 


## Quero instalar a infra de Robótica e Elementos no meu linux ubuntu 20.04

**É importante que você tenha os drivers da sua placa de vídeo devidamente instalados e configurados.**

Antes de clonar este repositório, certifique-se de ter instalado o git e git-lfs e o oh-my-bash. 

Se ainda não tiver instalado, siga os passos abaixo, caso contrario, pode pular esta etapa:

1.Abra um novo terminal Ctrl+Alt+T e digite:

    sudo apt install -y git 
    sudo apt install -y curl
    curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
    sudo apt-get -y  install git-lfs
    git lfs install
    sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmybash/oh-my-bash/master/tools/install.sh)"

## Instalação infra Elementos

- Ubuntu 20.04.1 LTS (Focal Fossa)

## Quartus Prime e ModelSim

Execute no terminal os comandos a seguir, o Quartus necessita de dependências da arquitetura i384.

``` bash
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install gcc make libxft2:i386 libxext6:i386 \
  libncurses5:i386 libstdc++6:i386 libpng-dev \
  libpng16-16:i386 libpng16-16 python-gobject libnotify-bin 
```

Instale o canberra-gtk-module:
``` {.sourceCode .bash}
$ sudo apt-get install libcanberra-gtk-module
```

### [Libpng12](http://www.bitsnbites.eu/installing-intelaltera-quartus-in-ubuntu-17-10/)

> The simplest way is to build and install libpng12 from source (requires build-essential).
>    Install build-essential (to get gcc etc): sudo apt install build-essential
>    [Download the source code from sourceforge](https://sourceforge.net/projects/libpng/files/libpng12/1.2.59/libpng-1.2.59.tar.xz/download) (select a suitable version and tar archive).
>    Unpack the tar archive to /tmp
>    Build and install:

```bash
cd $HOME/Downloads/libpng-1.2.59
./configure --prefix=/usr/local
make
sudo make install
sudo ldconfig
```


## Instalando  

Faça o download dos arquivos a seguir (salve na mesma pasta todos os arquivos):

- Quartus Lite 20.01 : http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/QuartusLiteSetup-20.1.0.711-linux.run

-  ModelSim : http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/ModelSimSetup-20.1.0.711-linux.run

-  Cyclone V (Chip usado no curso) : http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/cyclonev-20.1.0.711.qdz

Abra o terminal na pasta que os arquivos foram salvos e execute os dois comandos a seguir:

``` bash
chmod +x QuartusLiteSetup-20.1.0.771-linux.run
./QuartusLiteSetup-20.1.0.771-linux.run
```

>  Grave o caminho na qual o **Quartus** foi instalado, ele será utilizado na próxima etapa.

> Se o Quartus falhar na instalação, mova o modelsim dessa pasta e instale novamente. Depois será necessário instalar o modelsim a parte.

## Modelsim

1. Editar vco

Vamos editar o arquivo `vco` que está na pasta do modelsim (exe: `$HOME/intelFPGA_lite/20.1/modelsim_ase/vco`):

```bash
$ sudo sed -i '209 a\        4.[0-9]*)             vco="linux" ;;' $HOME/intelFPGA_lite/20.1/modelsim_ase/vco
```

2. Libfreetype 6.10.1 (versão 2.6)

Será necessário carregarmos uma versão anterior dessa lib. Seguir os passos [nesse roteiro](https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657#stage-2) ou fazer o download de uma versão [pré compilada pelo Corsi](https://github.com/Insper/Z01-tools/raw/master/Extra/Libfreetype-6.10.1-lib32.tar.gz)

```bash
$ cd ~/Downloads
$ wget https://github.com/Insper/Z01-tools/raw/master/Extra/Libfreetype-6.10.1-lib32.tar.gz
$ mkdir $HOME/intelFPGA_lite/20.1/modelsim_ase/lib32
$ tar zxf Libfreetype-6.10.1-lib32.tar.gz -C $HOME/intelFPGA_lite/20.1/modelsim_ase/lib32
```

Adicione ao final do  `bashrc` a seguinte linha:

```diff
export LD_LIBRARY_PATH=$HOME/intelFPGA_lite/20.1/modelsim_ase/lib32
```

## Configurando o USB Blaster

#### [libudev1:i386](https://forums.intel.com/s/question/0D50P00003yySE5SAM/newbie-usb-blaster-on-ubuntu-linux-xenial-1604-wont-probe-chain?language=en_US)

Para o gravador Jtag blaster funcionar

``` bash
$ sudo apt-get install libudev1:i386
$ sudo ln -sf /lib/x86_64-linux-gnu/libudev.so.1 /lib/x86_64-linux-gnu/libudev.so.0
```

Execute o comando a seguir para criar o arquivo de regra:

``` bash
$ sudo gedit /etc/udev/rules.d/51-altera-usb-blaster.rules
```

Adicione as seguintes linhas a esse arquivo criado e salve:

```diff
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6001", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6002", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6003", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6010", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6810", MODE="0666"
```

Recarrege o as permissões via o comando a seguir:

``` bash
$ sudo service udev restart
```

## Configurando variáveis de ambiente

Abra o seu `bashrc`

``` bash
code ~/.bashrc
``` 

Adicione ao final do `bashrc` as seguintes linhas:


```diff
export ALTERAPATH=$HOME/intelFPGA_lite/20.1
export PATH=$PATH:${ALTERAPATH}/quartus/bin
export PATH=$PATH:${ALTERAPATH}/modelsim_ase/linuxaloem/
export PATH=$PATH:${ALTERAPATH}/modelsim_ase/lib32
export VUNIT_MODELSIM_PATH=${ALTERAPATH}/modelsim_ase/linuxaloem/
export VUNIT_SIMULATOR=modelsim
export QSYS_ROOTDIR="$HOME/intelFPGA_lite/20.1/quartus/sopc_builder/bin"
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${ALTERAPATH}/modelsim_ase/lib32
```

Se você alterou o caminho de instalação na etapa do `Quartus`, deve modificar a primeira linha inserindo o caminho da instalação.


# Validando 

>  Reinicie o computador (ou máquina virtual) para concluir a instalação

1. **Quartus:** Escreva `quartus` no terminal, o mesmo deve abrir a janela do Quartus
1. **Programador:** Com a FPGA plugada no pc, digite `jtagconfig` ele deve aparecer o device.
1. **Modelsim:** Escreva `vsim` no terminal, o mesmo deve abrir a janela do ModeolSim



**Para a mensagem de erro "error message it is clear that libfontconfig.so tries to use function called FT_Done_MM_Var and is unable to find it."**

Primeiro instale esses pacotes:

``` bash
sudo apt install -y automake
sudo apt install -y libxml2-dev:i386 uuid-dev:i386
sudo apt install -y libtool
sudo apt install -y gperf 
sudo apt install -y gettext
sudo apt install -y itstool
sudo apt install -y libfreetype6-dev
sudo apt install -y uuid
sudo apt install -y uuid-dev

``` 

Clone o seguinte repositório na sua pasta de Downloads:

``` bash
cd ~/Downloads
git clone https://gitlab.freedesktop.org/fontconfig/fontconfig.git

``` 
Troque para a seguinte branch

``` bash
cd ~/Downloads/fontconfig
git checkout -b 2.12.92 2.12.92

``` 
Configure o autogen para rodar com o python3

``` bash
sed -i 's/PYTHON=${PYTHON-python}/PYTHON=${PYTHON-python3}/g' $HOME/Downloads/fontconfig/autogen.sh

```
Rode o autogen.sh 


``` bash
./autogen.sh 

```

Quando aparecer a mensagem *Press Return to acknowledge the previous two paragraphs.*, pressione Enter no terminal

Quando aparecer a mensagem *Now type 'make' to compile Fontconfig.*


```bash
make
sudo make install
```

Mova os arquivos que ja foram configuradas do modelsim, pra não ter que fazer novamente


```bash
mv $HOME/intelFPGA_lite/20.1/modelsim_ase/vco $HOME/intelFPGA_lite/20.1/
mv $HOME/intelFPGA_lite/20.1/modelsim_ase/lib32 $HOME/intelFPGA_lite/20.1/

```

Desinstale o modelsim

```bash
exec $HOME/intelFPGA_lite/20.1/uninstall/modelsim_ase-20.1.0.711-linux-uninstall.run
rm  -rf $HOME/intelFPGA_lite/20.1/modelsim_ase/
```
Reinicie o computador

```bash
sudo reboot

```
Instale o Modelsim novamente


```bash
exec $HOME/Downloads/ModelSimSetup-20.1.0.711-linux.run

```
Devolva os arquivos configurados pro lugar

```bash
mv $HOME/intelFPGA_lite/20.1/vco $HOME/intelFPGA_lite/20.1/modelsim_ase
mv $HOME/intelFPGA_lite/20.1/lib32 $HOME/intelFPGA_lite/20.1/modelsim_ase

```

Em um novo terminal, teste o Modelsim novamente

```bash

vsim
```


Caso ainda tenha problemas, entre em contato com a gente!

Lícia Sales Email: liciascl@insper.edu.br Teams: liciascl1

Arnaldo Junior Email: arnaldoavj@insper.edu.br Teams: arnaldo.junior2




## Instalação infra de Robótica

Antes de mais nada, configure seu ambiente

# Configurando variáveis de ambiente

Abra o seu `bashrc`

``` bash
code ~/.bashrc
``` 

Adicione ao final do `bashrc` as seguintes linhas:

``` bash
##########################
# 3.o Semestre Comp.     #
##########################

#############
# Robotica  #
#############

export IPBerry=192.168.50.250
# CANCELE  com # as linhas ROS_MASTER_URI  e ROS_IP se estiver usando com Gazebo, Sphinx ou Bebop
#export ROS_MASTER_URI="http://"$IPBerry":11311" 
#export ROS_IP=`hostname -I`

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
export GAZEBO_MODEL_PATH=$HOME/catkin_ws/src/my_simulation/models:${GAZEBO_MODEL_PATH}

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
``` 

# Instalando e Compilando Opencv 4.5

Faça o Download deste [script](https://raw.githubusercontent.com/Insper/404/master/scripts_robotica/opencv_4_5_Ubuntu_20_04.sh) com o comando abaixo:

``` bash
sh -c "$(curl -fsSL https://raw.githubusercontent.com/Insper/404/master/scripts_robotica/opencv_4_5_Ubuntu_20_04.sh)"

```

Para validar a instalação do Opencv digite no terminal:

``` bash
python3
import cv2
cv2.__version__
quit()
``` 

A resposta deve ser "'4.5.0'"

# Instalando e configurando o Ros Noetic

Faça o Download deste [script](https://raw.githubusercontent.com/Insper/404/master/scripts_robotica/install_ros_noetic.sh) com o comando abaixo:

``` bash
sh -c "$(curl -fsSL https://raw.githubusercontent.com/Insper/404/master/scripts_robotica/install_ros_noetic.sh)"

```

Para validar a instalação do ROS Noetic, digite no terminal:

``` bash
cd catkin_ws/
catkin_make
``` 

A resposta deve ser algo parecido com isso:

![](https://github.com/Insper/404/blob/master/tutoriais/robotica/img/catkin.png)


Caso tenha algum problema, entre em contato com a gente!

Lícia Sales Email: liciascl@insper.edu.br Teams: liciascl1

Arnaldo Junior Email: arnaldoavj@insper.edu.br Teams: arnaldo.junior2


**Referências:**
https://j-marjanovic.io/new-ubuntu-old-problems-with-modelsim.html 

http://wiki.ros.org/noetic/Installation/Ubuntu

http://milq.github.io/install-opencv-ubuntu-debian

https://forums.intel.com/s/question/0D50P00003yySE5SAM/newbie-usb-blaster-on-ubuntu-linux-xenial-1604-wont-probe-chain?language=en_US

https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657#stage-2

https://github.com/Insper/404/blob/master/scripts_robotica/Instala_infra_robotica.sh

https://github.com/Insper/404/blob/master/scripts_robotica/install_opencv4.sh




