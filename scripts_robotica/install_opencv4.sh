######################################
# INSTALL OPENCV ON UBUNTU OR DEBIAN #
######################################

# -------------------------------------------------------------------- |
#                       SCRIPT OPTIONS                                 |
# ---------------------------------------------------------------------|
OPENCV_VERSION='4.1.1'       # Version to be installed
OPENCV_CONTRIB='YES'          # Install OpenCV's extra modules (YES/NO)
RASPBERRY='NO'                 # Install OpenCV on Raspberry pi 3 or 4
# -------------------------------------------------------------------- |

# |          THIS SCRIPT IS TESTED CORRECTLY ON          |
# |------------------------------------------------------|
# | OS               | OpenCV       | Test | Last test   |
# |------------------|--------------|------|-------------|
# | Raspibian Buster | OpenCV 3.4.2 | OK   | 22 Nov 2019 |  
# | Raspibian Buster | OpenCV 4.1.1 | OK   | 13 Nov 2019 |  
# | Debian 10.1      | OpenCV 4.1.1 | OK   | 28 Sep 2019 |
# |----------------------------------------------------- |
# | Ubuntu 18.04 LTS | OpenCV 4.1.0 | OK   | 22 Jun 2019 |
# | Debian 9.9       | OpenCV 4.1.0 | OK   | 22 Jun 2019 |
# |----------------------------------------------------- |
# | Ubuntu 18.04 LTS | OpenCV 3.4.2 | OK   | 18 Jul 2018 |
# | Debian 9.5       | OpenCV 3.4.2 | OK   | 18 Jul 2018 |

echo "####################################################"
echo "#                                                  #"                         
echo "#             INSTALAÇÃO OPENCV4                   #"                         
echo "#                                                  #"                         
echo "####################################################"

echo "####################################################"
echo "####################################################"


# 1. KEEP UBUNTU OR DEBIAN UP TO DATE
echo "####################################################"
echo "#   UPDATE                                         #"                         
echo "####################################################"

sudo apt-get -y update
# sudo apt-get -y upgrade       # Uncomment to install new versions of packages currently installed
# sudo apt-get -y dist-upgrade  # Uncomment to handle changing dependencies with new vers. of pack.
# sudo apt-get -y autoremove    # Uncomment to remove packages that are now no longer needed


# 2. INSTALL THE DEPENDENCIES
echo "####################################################"
echo "#   INSTAÇÃO DE PRÉ REQUISITOS - INICIADA          #"                         
echo "####################################################"


# Build tools:
echo "####################################################"
echo "#     build-essential cmake                        #"                         
echo "####################################################"
sudo apt-get install -y build-essential cmake

# GUI (if you want GTK, change 'qt5-default' to 'libgtkglext1-dev' and remove '-DWITH_QT=ON'):
echo "####################################################"
echo "#     qt5                                          #"                         
echo "####################################################"

sudo apt-get install -y qt5-default libvtk6-dev

# Media I/O:
sudo apt-get install -y zlib1g-dev libjpeg-dev libwebp-dev libpng-dev libtiff5-dev libjasper-dev \
                        libopenexr-dev libgdal-dev

# Video I/O:
echo "####################################################"
echo "#             pacotes de video                     #"                         
echo "####################################################"
sudo apt-get install -y libdc1394-22-dev libavcodec-dev libavformat-dev libswscale-dev \
                        libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev yasm \
                        libopencore-amrnb-dev libopencore-amrwb-dev libv4l-dev libxine2-dev
echo "sudo modprobe bcm2835-v4l2" >> ~/.profile

#GStreamer-1.0
echo "####################################################"
echo "#             Gstreamer 1.0                        #"                         
echo "####################################################"
sudo apt-get install -y python-gi python3-gi \
                    gstreamer1.0-tools \
                    gir1.2-gstreamer-1.0 \
                    gir1.2-gst-plugins-base-1.0 \
                    gstreamer1.0-plugins-good \
                    gstreamer1.0-plugins-ugly \
                    gstreamer1.0-plugins-bad \
                    gstreamer1.0-libav
                    
                    
sudo apt install -y libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev


# Parallelism and linear algebra libraries:
sudo apt-get install -y libtbb-dev libeigen3-dev

# Python:
echo "####################################################"
echo "#             pacotes Python e Python3             #"                         
echo "####################################################"
sudo apt-get install -y python-dev  python-tk  pylint  python-numpy  \
                        python3-dev python3-tk pylint3 python3-numpy flake8

# Java:
echo "####################################################"
echo "#             java                                 #"                         
echo "####################################################"
sudo apt-get install -y ant default-jdk

# Documentation and other:
echo "####################################################"
echo "#             wget unzip doxygen                   #"                         
echo "####################################################"
sudo apt-get install -y doxygen unzip wget


echo "####################################################"
echo "#   INSTAÇÃO DE PRÉ REQUISITOS - CONCLUIDA         #"                         
echo "####################################################"


# 3. INSTALL THE LIBRARY
echo "####################################################"
echo "#   INSTAÇÃO OPENCV4 - INICIADA                    #"                         
echo "####################################################"

echo "####################################################"
echo "#   DOWNLOAD DOS REPOSITORIOS                      #"                         
echo "####################################################"
cd ~
wget https://github.com/opencv/opencv/archive/${OPENCV_VERSION}.zip
unzip ${OPENCV_VERSION}.zip && rm ${OPENCV_VERSION}.zip
mv opencv-${OPENCV_VERSION} OpenCV

if [ $OPENCV_CONTRIB = 'YES' ]; then
  wget https://github.com/opencv/opencv_contrib/archive/${OPENCV_VERSION}.zip
  unzip ${OPENCV_VERSION}.zip && rm ${OPENCV_VERSION}.zip
  mv opencv_contrib-${OPENCV_VERSION} opencv_contrib
  mv opencv_contrib OpenCV
fi


echo "####################################################"
echo "#   COMPILANDO OPENCV - CMAKE                      #"                         
echo "####################################################"
cd OpenCV && mkdir build && cd build

if [ $OPENCV_CONTRIB = 'NO' ]; then
cmake -DWITH_QT=ON -DWITH_OPENGL=ON -DFORCE_VTK=ON -DWITH_TBB=ON -DWITH_GDAL=ON -DWITH_GSTREAMER=ON\
      -DWITH_XINE=ON -DENABLE_PRECOMPILED_HEADERS=OFF ..
fi

if [ $OPENCV_CONTRIB = 'YES' ]; then
cmake -DWITH_QT=ON -DWITH_OPENGL=ON -DFORCE_VTK=ON -DWITH_TBB=ON -DWITH_GDAL=ON -DWITH_GSTREAMER=ON\
      -DWITH_XINE=ON -DENABLE_PRECOMPILED_HEADERS=OFF \
      -DOPENCV_ENABLE_NONFREE:BOOL=ON \
      -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules ..
fi


echo "####################################################"
echo "#   COMPILANDO OPENCV - MAKE E MAKE INSTALL        #"                         
echo "####################################################"

if [ $RASPBERRY = 'YES' ]; then
sudo sed -i 's/CONF_SWAPSIZE=100/CONF_SWAPSIZE=1024/g' /etc/dphys-swapfile
sudo /etc/init.d/dphys-swapfile stop
sudo /etc/init.d/dphys-swapfile start
pip3 install --user numpy
pip3 install --user dlib
make 
sudo make install
sudo ldconfig
fi

if [ $RASPBERRY = 'NO' ]; then
NUM_JOBS=$(nproc)
time make -j$NUM_JOBS
sudo make install
sudo ldconfig
fi


# 4. EXECUTE SOME OPENCV EXAMPLES AND COMPILE A DEMONSTRATION

# To complete this step, please visit 'http://milq.github.io/install-opencv-ubuntu-debian'.
