
######################################
# INSTALL ROS ON UBUNTU              #
######################################
#!/bin/bash
#Autor Lícia Sales
#28-Dez-2020


path=$(pwd)
echo $path

# 1. SETUP YOUR SOURCES.LIST AND CONFIGURE THE KEYS

sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654

# 2. KEEP UBUNTU OR DEBIAN UP TO DATE

sudo apt -y update
sudo apt -y upgrade

# 3. INSTALL ROS DESKTOP
sudo apt install -y ros-noetic-desktop-full

# 4. DEPENDECIES FOR BUILDING PACKAGES
# Build tools:
sudo apt install -y python3-rosdep
sudo apt install -y python3-rosinstall-generator
sudo apt install -y python3-rosinstall 
sudo apt install -y ros-noetic-joy
sudo apt install -y ros-noetic-teleop-tools
sudo apt  install -y ros-noetic-teleop-twist-keyboard 
sudo apt  install -y ros-noetic-laser-proc 

# Build Rosserial:
sudo apt install -y ros-noetic-rosserial-arduino
sudo apt  install -y ros-noetic-rosserial-python
sudo apt  install -y ros-noetic-amcl

# Build Navigation:
sudo apt install -y ros-noetic-slam-gmapping
sudo apt install -y ros-noetic-map-server
sudo apt install -y ros-noetic-move-base
sudo apt install -y ros-noetic-urdf 
sudo apt install -y ros-noetic-xacro 
sudo apt install -y ros-noetic-navigation 
sudo apt install -y ros-noetic-interactive-markers 
sudo apt install -y ros-noetic-kobuki-ftdi 

# Build Image tools:
sudo apt install -y ros-noetic-compressed-image-transport
sudo apt install -y ros-noetic-rqt-image-view
#sudo apt install -y ros-noetic-gscam
sudo apt install -y ros-noetic-opencv-apps
sudo apt install -y ros-noetic-opencv-apps-dbgsym 
sudo apt install -y ros-noetic-vision-opencv
sudo apt install -y ros-noetic-eigen-conversions
sudo apt install -y ros-noetic-eigen-conversions-dbgsym 
sudo apt install -y ros-noetic-eigen-stl-containers 
sudo apt install -y ros-noetic-rgbd-launch  

# Build Turtlebot3 tools:
sudo apt install -y ros-noetic-turtlebot3
sudo apt install -y ros-noetic-ddynamic-reconfigure

# Stream vídeo packages"

sudo apt install -y libgstreamer1.0-dev 
sudo apt install -y gstreamer1.0-libav
sudo apt install -y gdal-bin

# 5. ENVIRONMENT SETUP
echo "\nsource /opt/ros/noetic/setup.bash" >> ~/.bashrc
source ~/.bashrc
source /opt/ros/noetic/setup.bash

# 6. CREATE AND BUILD A WORKSPACE 

mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
catkin_init_workspace
cd ~/catkin_ws



echo "instalou o opencv4 no ros"

#8. BUILDING TURTLEBOT3 DEPENDECES

cd ~/catkin_ws/src
git clone https://github.com/ros-teleop/teleop_twist_keyboard.git    
git clone https://github.com/ROBOTIS-GIT/turtlebot3.git
git clone https://github.com/ROBOTIS-GIT/turtlebot3_applications.git   
rm -rf turtlebot3_applications/turtlebot3_panorama
rm -rf turtlebot3_applications/turtlebot3_automatic*


cd ~/catkin_ws/
catkin_make



#9. INITIALIZING ROSDEP
sudo rosdep init
rosdep update


#11. bUILD IGNITION GAZEBO
cd ~/catkin_ws/src


cd ..

echo "-------------------FINISH INSTALL ---------------------"

