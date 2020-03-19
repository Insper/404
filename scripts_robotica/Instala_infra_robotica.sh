######################################
# INSTALL ROS ON UBUNTU              #
######################################
#!/bin/bash
#Autor Lícia Sales
#30-Jan-2020


path=$(pwd)
echo $path

# 0. INSTALL GIT AND GIT LFS

sudo apt install -y git
sudo apt install -y curl
curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
sudo apt-get -y  install git-lfs
git lfs install


# 1. SETUP YOUR SOURCES.LIST AND CONFIGURE THE KEYS

sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE #key RealSense
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654 #Key Ros


echo 'deb http://realsense-hw-public.s3.amazonaws.com/Debian/apt-repo bionic main' | sudo tee /etc/apt/sources.list.d/realsense-public.list  #Key libRealSense2

sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

# 2. KEEP UBUNTU OR DEBIAN UP TO DATE

sudo apt-get -y update
sudo apt-get -y upgrade       # Uncomment to install new versions of packages currently installed
# sudo apt-get -y dist-upgrade  # Uncomment to handle changing dependencies with new vers. of pack.
sudo apt-get -y autoremove    # Uncomment to remove packages that are now no longer needed


# 3. INSTALL ROS DESKTOP-FULL

sudo apt install -y ros-melodic-desktop-full

# 4. DEPENDECIES FOR BUILDING PACKAGES

# Build tools:
sudo apt-get install -y python-rosdep
sudo apt-get install -y python-rosinstall-generator
sudo apt-get install -y python-rosinstall 
sudo apt-get install -y ros-melodic-joy
sudo apt-get install -y ros-melodic-teleop-tools
sudo apt-get install -y ros-melodic-teleop-twist-keyboard 
sudo apt-get install -y ros-melodic-laser-proc 

# Build Rosserial:
sudo apt-get install -y ros-melodic-rosserial-arduino
sudo apt-get install -y ros-melodic-rosserial-python
sudo apt-get install -y ros-melodic-rosserial-server
sudo apt-get install -y ros-melodic-rosserial-client
sudo apt-get install -y ros-melodic-rosserial-msgs
sudo apt-get install -y ros-melodic-amcl

# Build Navigation:
sudo apt install -y ros-melodic-slam-gmapping
sudo apt-get install -y ros-melodic-map-server
sudo apt-get install -y ros-melodic-move-base
sudo apt-get install -y ros-melodic-urdf 
sudo apt-get install -y ros-melodic-xacro 
sudo apt-get install -y ros-melodic-navigation 
sudo apt-get install -y ros-melodic-interactive-markers 
sudo apt-get install -y ros-melodic-kobuki-ftdi 

# Build Image tools:
sudo apt-get install -y ros-melodic-compressed-image-transport
sudo apt-get install -y ros-melodic-rqt-image-view
sudo apt-get install -y ros-melodic-gscam
sudo apt-get install -y ros-melodic-opencv-apps
sudo apt-get install -y ros-melodic-opencv-apps-dbgsym 
sudo apt-get install -y ros-melodic-vision-opencv
sudo apt-get install -y ros-melodic-ar-track-alvar 
sudo apt-get install -y ros-melodic-ar-track-alvar-dbgsym 
sudo apt-get install -y ros-melodic-ar-track-alvar-msgs
sudo apt-get install -y ros-melodic-eigen-conversions
sudo apt-get install -y ros-melodic-eigen-conversions-dbgsym 
sudo apt-get install -y ros-melodic-eigen-stl-containers 
sudo apt-get install -y ros-melodic-rgbd-launch  

# Build Turtlebot3 tools:
sudo apt-get install -y ros-melodic-parrot-arsdk 
sudo apt-get install -y ros-melodic-turtlebot3-applications-msgs
sudo apt-get install -y ros-melodic-turtlebot3-fake 
sudo apt-get install -y ros-melodic-turtlebot3-fake-dbgsym 
sudo apt-get install -y ros-melodic-turtlebot3-gazebo 
sudo apt-get install -y ros-melodic-turtlebot3-gazebo-dbgsym 
sudo apt-get install -y ros-melodic-turtlebot3-msgs
sudo apt-get install -y  ros-melodic-turtlebot3-simulations
sudo apt-get install -y ros-melodic-turtlebot3-msgs 
sudo apt install ros-melodic-ddynamic-reconfigure

# Stream vídeo packages"

sudo apt-get install -y libgstreamer1.0-dev 
sudo apt-get install -y libgstreamer-plugins-* 
sudo apt-get install -y gstreamer1.0-libav* 
sudo apt-get install -y gstreamer1.0-plugins* 
sudo apt-get install -y librealsense2-dev 
sudo apt-get install -y librealsense2-utils 

# 5. ENVIRONMENT SETUP
echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
source ~/.bashrc
source /opt/ros/melodic/setup.bash

# 6. CREATE AND BUILD A WORKSPACE 

mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
catkin_init_workspace
cd ~/catkin_ws

# 7. BUILDING OPENCV4 DEPENDECES
echo "teste opencv4"
cd ~/catkin_ws/src

git clone https://github.com/ros-perception/image_pipeline.git
git clone https://github.com/ros-perception/image_transport_plugins.git
git clone https://github.com/ros-perception/vision_opencv.git
git clone https://github.com/ros-visualization/rqt_image_view.git
cd ~/catkin_ws/

catkin_make VERBOSE=1 -j4 -DCMAKE_BUILD_TYPE=Release --cmake-args -DOpenCV_DIR=~/src/opencv4/build/install

echo "instalou o opencv4 no ros"

#8. BUILDING TURTLEBOT3 DEPENDECES

cd ~/catkin_ws/src
git clone https://github.com/ros-teleop/teleop_twist_keyboard.git    
git clone https://github.com/ROBOTIS-GIT/turtlebot3.git
git clone https://github.com/ROBOTIS-GIT/turtlebot3_applications.git  
git clone https://github.com/Insper/robot19.git 
git clone https://github.com/intel-ros/realsense.git
cd ~/catkin_ws/
catkin_create_pkg gscam raspicam.launch  rospy roscpp
catkin_make
sudo mv $path/raspicam.launch /opt/ros/melodic/share/gscam


#9. INITIALIZING ROSDEP
sudo rosdep init
rosdep update

#10. OTHER
sudo apt-get install -y python-pip
sudo apt-get install -y python3-pip
pip install --upgrade imutils
pip3 install --upgrade imutils

echo "-------------------FINISH INSTALL ---------------------"

