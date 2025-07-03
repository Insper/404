
Infraestrutura para suporte as materias de Engenharia da Computação 
> Guias e tutorias de infra estão em [tutoriais](./tutoriais). 


# Quero instalar a infra de Robótica e Elementos no meu linux ubuntu 22.04

**É importante que você tenha os drivers da sua placa de vídeo devidamente instalados e configurados.**

Você pode usar o script encontrado em: https://github.com/Insper/404/blob/master/scripts_robotica/instala-infra_ros2.sh


Antes de clonar este repositório, é necessário que alguns pré-requisitos:

Abra um novo terminal Ctrl+Alt+T e digite:

``` bash
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

export LANG=en_US.UTF-8

locale  # verify settings
sudo apt install software-properties-common -y
sudo add-apt-repository universe -y
sudo apt update && sudo apt install curl -y
sudo apt install maven -y
sudo apt install git -y 
sudo apt-get install libcanberra-gtk-module -y
sudo apt install gtkwave -y
sudo apt install python3-pip -y
bash -c "$(curl -fsSL https://raw.githubusercontent.com/ohmybash/oh-my-bash/master/tools/install.sh)"
cd ~/Downloads
curl -L -o code_latest_amd64.deb "https://code.visualstudio.com/sha/download?build=stable&os=linux-deb-x64"
curl -L -o google-chrome-stable_current_amd64.deb "https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb"
sudo dpkg -i *.deb
code --install-extension johannesbonk.ghdl-interface

```

Vamos colocar algumas fontes novas no sistema para que o tema powerline do oh-my-bash. Recomendo que use uma fonte chamada Cousine for Powerline Regular.
``` bash
cd ~/
git clone https://github.com/powerline/fonts
cd fonts
./install.sh
cd ~/
rm -fr fonts
```
Após terminar a instalação, feche o terminal e o abra novamente. Clique com o botão direito, preferência e em profile você altera a fote. Basta fechar e abrir novamente.

Lembre-se de usar uma fonte que seja compativel com o PowerLine, pois existem símbolos que são utilizados para representar os repositórios do GitHub.

Para trocar tema do oh-my-bash, você editará o aquivo .bashrc que se encontra na sua pasta home. Você encontrará uma linha como esta:

OSH_THEME="tema_que_esta_usando" 

E alterará para:

OSH_THEME="powerline"

Basta fechar e abrir o terminal novamente.

# Instalação infra Elementos

- Ubuntu 22.04.x LTS (Jammy Jellyfish)

## Instalando Quartus Prime e ModelSim


Para a instalação do Quartus e do ModelSim você pode baixar todos os arquivos na pasta Download ou executar os comandos a seguir que o baixarão e iniciará a instação para você:

- Quartus Lite 20.01 : http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/QuartusLiteSetup-20.1.0.711-linux.run

-  ModelSim : http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/ModelSimSetup-20.1.0.711-linux.run

-  Cyclone V (Chip usado no curso) : http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/cyclonev-20.1.0.711.qdz

Abra o terminal na pasta que os arquivos foram salvos e execute os dois comandos a seguir:

``` bash

cd ~/Downloads
wget http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/QuartusLiteSetup-20.1.0.711-linux.run
wget http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/ModelSimSetup-20.1.0.711-linux.run
wget http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/cyclonev-20.1.0.711.qdz

chmod +x QuartusLiteSetup-20.1.0.711-linux.run
./QuartusLiteSetup-20.1.0.711-linux.run
```

## Configurando o USB Blaster

#### [libudev1:i386](https://forums.intel.com/s/question/0D50P00003yySE5SAM/newbie-usb-blaster-on-ubuntu-linux-xenial-1604-wont-probe-chain?language=en_US)

Para o gravador Jtag blaster funcionar

``` bash
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install libudev1:i386
sudo ln -sf /lib/x86_64-linux-gnu/libudev.so.1 /lib/x86_64-linux-gnu/libudev.so.0
```

Execute o comando a seguir para criar o arquivo de regra:

``` bash
sudo gedit /etc/udev/rules.d/51-altera-usb-blaster.rules
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
sudo service udev restart
```

Se você alterou o caminho de instalação na etapa do `Quartus`, deve modificar a primeira linha inserindo o caminho da instalação.

## Instlando alguns itens para garantir os testes dos trabalhos de Elementos.

``` bash
sudo apt install ghdl -y
pip install --force-reinstall pytest
pip install --force-reinstall pytest-sugar
pip install --force-reinstall cocotb
pip install --force-reinstall cocotb-test
```

## Validando 

>  Reinicie o computador (ou máquina virtual) para concluir a instalação

1. **Quartus:** Escreva `quartus` no terminal, o mesmo deve abrir a janela do Quartus
1. **Programador:** Com a FPGA plugada no pc, digite `jtagconfig` ele deve aparecer o device.
Obs. Não estamos utilizando o Modelsim, mas ele está disponível para uso.
1. **Modelsim:** Escreva `vsim` no terminal, o mesmo deve abrir a janela do ModeolSim 



Caso ainda tenha problemas, entre em contato com a gente!

Rogério Cuenca Email: rogeriobc@insper.edu.br




# Instalação infra de Robótica


O primeiro passo será configurar as variáveis de ambiente.

## Configurando variáveis de ambiente

Abra o seu `bashrc`

``` bash
code ~/.bashrc
``` 

Adicione ao final do `bashrc` as seguintes linhas:

``` bash
##################################################
### Adicionado 3o Sem Comp 2024 - Lab 404 - INF ###
source ~/robotica.sh
source ~/elementos.sh
##################################################
``` 

Criando o arquivo robotica.sh

``` bash
cd ~/
touch ~/robotica.sh
code ~/robotica.sh
``` 
Agora copie e cole o conteúdo a seguir no arquivo robotica.sh. Não esqueça de salvar!

``` bash
alias update="sudo apt update && sudo apt upgrade -y && sudo apt autoremove"

###########################################
### variaveis relacionadas ao ROS2 Humble
source /opt/ros/humble/setup.bash
source /usr/share/gazebo/setup.sh
source ~/colcon_ws/install/setup.bash
export ROS_DOMAIN_ID=30 #TURTLEBOT3
export TURTLEBOT3_MODEL=burger_insper
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
###
###########################################

###########################################
### extras do colcon
source /usr/share/colcon_cd/function/colcon_cd.sh
alias cdc="cd ~/colcon_ws"
alias nb="nano ~/.bashrc"
alias nr="nano ~/robotica.sh"
alias cb="cd ~/colcon_ws && colcon build && source install/setup.bash"
###
###########################################
```
Criando o arquivo elementos.sh

``` bash
cd ~/
touch ~/elementos.sh
code ~/elementos.sh
``` 
Agora copie e cole o conteúdo a seguir no arquivo elementos.sh. Não esqueça de salvar!

``` bash

################################################################################
### Exports Quartus
export ALTERAPATH=$HOME/intelFPGA_lite/20.1
export PATH=$PATH:${ALTERAPATH}/quartus/bin
export PATH=$PATH:${ALTERAPATH}/modelsim_ase/linuxaloem/
export PATH=$PATH:${ALTERAPATH}/modelsim_ase/lib32
export VUNIT_MODELSIM_PATH=${ALTERAPATH}/modelsim_ase/linuxaloem/
export VUNIT_SIMULATOR=modelsim
export QSYS_ROOTDIR="$HOME/intelFPGA_lite/20.1/quartus/sopc_builder/bin"
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${ALTERAPATH}/modelsim_ase/lib32
### Outros Exports
export SIM=ghdl
export WAVES=1
################################################################################
``` 


## instalando os repositórios do ROS

É necessário adicionar os repositórios e as respectivas chaves:

``` bash
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt update && sudo apt upgrade -y
```

## Instalando e Testando Opencv 4.5 e Numpy

Use o pip para instalar com o comando abaixo

``` bash
pip3 install opencv-contrib-python==4.5.5.62
pip3 install opencv-python==4.5.5.62
pip3 install --force-reinstall numpy==1.23.4
```

Para validar a instalação do Opencv e do Numpy  digite no terminal:

``` bash
python3
import cv2
cv2.__version__
import numpy as np
np.__version__
quit()
``` 

A resposta deve ser "'4.5.5'" para o Opencv e "'1.23.4'" para o Numpy.

## Instalando e configurando o Ros Humble

Para instalar o Ros2 Humble, vamos seguir os seguinte comandos:

``` bash
sudo apt install -y ros-humble-desktop ros-dev-tools

sudo apt install -y ros-humble-gazebo-*
sudo apt install -y ros-humble-cartographer
sudo apt install -y ros-humble-cartographer-ros
sudo apt install -y ros-humble-navigation2
sudo apt install -y ros-humble-nav2-bringup
source ~/.bashrc
sudo apt install -y ros-humble-dynamixel-sdk
sudo apt install -y ros-humble-turtlebot3-msgs
sudo apt install -y ros-humble-turtlebot3
sudo apt install -y ros-humble-rqt-tf-tree
sudo apt install -y ros-humble-compressed-*
sudo apt install -y ros-humble-image-*
sudo apt install -y ros-humble-rmw-cyclonedds-cpp

sudo apt install -y python3-colcon-common-extensions

mkdir -p ~/colcon_ws/src
cd ~/colcon_ws/src
git clone https://github.com/rbcuenca/my_simulation
git clone https://github.com/rbcuenca/insperbot
```

Para validar a instalação do ROS Noetic, digite no terminal:

``` bash
cd ~/colcon_ws
colcon build
``` 

Caso tenha algum problema, entre em contato com a gente!

Rogério Cuenca Email: rogeriobc@insper.edu.br


**Referências:**
https://j-marjanovic.io/new-ubuntu-old-problems-with-modelsim.html 

http://wiki.ros.org/humble/Installation/Ubuntu

http://milq.github.io/install-opencv-ubuntu-debian

https://forums.intel.com/s/question/0D50P00003yySE5SAM/newbie-usb-blaster-on-ubuntu-linux-xenial-1604-wont-probe-chain?language=en_US

https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657#stage-2

https://github.com/Insper/404/blob/master/scripts_robotica/instala-infra_ros2.sh

https://github.com/Insper/404/blob/master/scripts_robotica/install_opencv4.sh




