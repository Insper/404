######################################################
### Script de instalacao da infra 2025 - Lab 404 ###
######################################################

# Preparacao para instalacao da infra 2025

locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

export LANG=en_US.UTF-8

# instalacao de prerequisitos e configuracao do ambiente
locale  # verify settings
sudo apt install software-properties-common -y
sudo add-apt-repository universe -y
sudo apt update && sudo apt install curl -y
sudo apt install maven -y
sudo apt install git -y 
sudo apt-get install libcanberra-gtk-module -y
sudo apt install python3-pip -y
bash -c "$(curl -fsSL https://raw.githubusercontent.com/ohmybash/oh-my-bash/master/tools/install.sh)"

# instalacao das fontes que sao compatives com o powerline (tema do oh-my-bash)
cd ~/
git clone https://github.com/powerline/fonts
cd fonts
./install.sh
cd ~/
rm -fr fonts

## Instlando alguns itens para garantir os testes dos trabalhos de Elementos.

``` bash
sudo apt install ghdl -y
pip install --force-reinstall pytest
pip install --force-reinstall pytest-sugar
pip install --force-reinstall cocotb
pip install --force-reinstall cocotb-test

# Instalacao Quartus, Modelsim, Drivers Cyclone V e JTagConfig

cd ~/Downloads
wget http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/QuartusLiteSetup-20.1.0.711-linux.run
wget http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/ModelSimSetup-20.1.0.711-linux.run
wget http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/cyclonev-20.1.0.711.qdz

chmod +x QuartusLiteSetup-20.1.0.711-linux.run
./QuartusLiteSetup-20.1.0.711-linux.run

# Configurar o USB Blaster - JtagConfig
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install libudev1:i386
sudo ln -sf /lib/x86_64-linux-gnu/libudev.so.1 /lib/x86_64-linux-gnu/libudev.so.0
sudo echo 'SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6001", MODE="0666"' > /etc/udev/rules.d/51-usbblaster.rules
sudo echo 'SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6002", MODE="0666"' > /etc/udev/rules.d/51-usbblaster.rules
sudo echo 'SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6003", MODE="0666"' > /etc/udev/rules.d/51-usbblaster.rules
sudo echo 'SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6010", MODE="0666"' > /etc/udev/rules.d/51-usbblaster.rules
sudo echo 'SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6810", MODE="0666"' > /etc/udev/rules.d/51-usbblaster.rules

sudo service udev restart

# Acertando variáveis de ambiente

# Criacao do robotica.sh
touch ~/robotica.sh
cat <<EOF > ~/robotica.sh
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
EOF

# Criacao do elementos.sh
touch ~/elementos.sh
cat <<EOF > ~/elementos.sh
################################################################################
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
EOF

# carregando os arquivos robotica.sh e elementos.sh no .bashrc

echo '##################################################' >> ~/.bashrc
echo '### Adicionado 3o Sem Comp 2024 - Lab 404 - INF ###' >> ~/.bashrc
echo 'source ~/robotica.sh' >> ~/.bashrc
echo 'source ~/elementos.sh' >> ~/.bashrc
echo '##################################################' >> ~/.bashrc
source ~/.bashrc

# Instalacao do OpenCV e Numpy
pip3 install opencv-contrib-python==4.5.5.62
pip3 install opencv-python==4.5.5.62
pip3 install --force-reinstall numpy==1.23.4

# Instalacao do repositorio e chaves do ROS
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt update && sudo apt upgrade -y

# Instalacao do ROS2 Humble Desktop e outras bibliotecas necessarias para o turtlebot

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

# Instalacao do colcon
sudo apt install -y python3-colcon-common-extensions
mkdir -p ~/colcon_ws/src
cd ~/colcon_ws/src
git clone https://github.com/rbcuenca/my_simulation
git clone https://github.com/rbcuenca/insperbot
# git clone -b humble-devel https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git
# git clone -b humble-devel https://github.com/ROBOTIS-GIT/turtlebot3_manipulation.git
# git clone -b humble-devel https://github.com/ROBOTIS-GIT/turtlebot3.git 
# git clone -b humble-devel https://github.com/ROBOTIS-GIT/turtlebot3_msgs.git 
# git clone -b humble-devel https://github.com/ROBOTIS-GIT/DynamixelSDK.git 
cd ~/colcon_ws
colcon build
source install/setup.bash   
