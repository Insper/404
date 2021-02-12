######################################
# INSTALL OPENCV ON UBUNTU OR DEBIAN #
######################################

# -------------------------------------------------------------------- |
#                       SCRIPT OPTIONS                                 |
# ---------------------------------------------------------------------|
OPENCV_VERSION='4.5.0'       # Version to be installed
OPENCV_CONTRIB='YES'          # Install OpenCV's extra modules (YES/NO)
RASPBERRY='NO'                 # Install OpenCV on Raspberry pi 3 or 4
# -------------------------------------------------------------------- |

# |          THIS SCRIPT IS TESTED CORRECTLY ON          |
# |------------------------------------------------------|
# | OS               | OpenCV       | Test | Last test   |
# |------------------|--------------|------|-------------|
# | Ubuntu 20.04 LTS | OpenCV 4.5.0 | OK   | 28 Dez 2020 |

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

sudo apt-get install python3-setuptools
sudo apt-get -y update
#sudo apt-get -y upgrade       # Uncomment to install new versions of packages currently installed
#sudo apt-get -y dist-upgrade  # Uncomment to handle changing dependencies with new vers. of pack.
#sudo apt-get -y autoremove    # Uncomment to remove packages that are now no longer needed
echo $?
echo "####################################################"
echo "#                UPDATE - CONCLUIDO                #"                         
echo "####################################################"



# Python:
echo "####################################################"
echo "#             pacotes          Python3             #"                         
echo "####################################################"


sudo apt-get install -y python3-dev 
sudo apt install -y python3-pip
sudo apt install -y  python3-tk 
sudo apt install -y pylint3 
sudo apt install -y python3-numpy 
sudo apt install -y flake8 

sudo apt install python3-pip
pip3 install --user numpy
pip3 install --user matplotlib
pip3 install --user dlib

echo $?
echo "####################################################"
echo "#   INSTAÇÃO DE PACOTES PYTHON3 - CONCLUIDA        #"                         
echo "####################################################"



echo " 2. INSTALL THE DEPENDENCIES "
sudo apt install -y build-essential cmake 
sudo apt install -y git
sudo apt install -y  pkg-config 
sudo apt install -y libgtk-3-dev 
sudo apt install -y libavcodec-dev
sudo apt install -y libavformat-dev 
sudo apt install -y libswscale-dev 
sudo apt install -y libv4l-dev 
sudo apt install -y libxvidcore-dev 
sudo apt install -y libx264-dev 
sudo apt install -y libjpeg-dev  
sudo apt install -y libpng-dev 
sudo apt install -y libtiff-dev 
sudo apt install -y    gfortran openexr 
sudo apt install -y libatlas-base-dev 
sudo apt install -y libtbb2 
sudo apt install -y libtbb-dev 
sudo apt install -y libdc1394-22-dev 
sudo apt install -y libopenexr-dev 
sudo apt install -y libgstreamer-plugins-base1.0-dev 
sudo apt install -y libgstreamer1.0-dev

echo $?
echo "####################################################"
echo "#   INSTAÇÃO DE PRÉ REQUISITOS - CONCLUIDA         #"                         
echo "####################################################"



# Video I/O:
echo "####################################################"
echo "#             pacotes de video                     #"                         
echo "####################################################"
sudo apt install -y  libavcodec-dev 
sudo apt install -y libavformat-dev 
sudo apt install -y libswscale-dev 
sudo apt install -y libtheora-dev 
sudo apt install -y libvorbis-dev 
sudo apt install -y libxvidcore-dev 
sudo apt install -y libx264-dev yasm 
sudo apt install -y libopencore-amrnb-dev 
sudo apt install -y libopencore-amrwb-dev 
sudo apt install -y libv4l-dev
sudo apt install -y  libxine2-dev

echo "sudo modprobe bcm2835-v4l2" >> ~/.profile

sudo apt install -y zlib1g-dev 
sudo apt install -y libjpeg-dev 
sudo apt install -y libwebp-dev 
sudo apt install -y libpng-dev 
sudo apt install -y libtiff5-dev 
sudo apt install -y  libopenexr-dev 
sudo apt install -y libgdal-dev

echo $?
echo "####################################################"
echo "#   INSTAÇÃO DOS PACOTES DE VIDEO - CONCLUIDA      #"                         
echo "####################################################"




#GStreamer-1.0
echo "####################################################"
echo "#             Gstreamer 1.0                        #"                         
echo "####################################################"
sudo apt install -y python3-gi 
sudo apt install -y gstreamer1.0-tools 
sudo apt install -y gir1.2-gstreamer-1.0 
sudo apt install -y gir1.2-gst-plugins-base-1.0 
sudo apt install -y gstreamer1.0-plugins-good 
sudo apt install -y gstreamer1.0-plugins-ugly 
sudo apt install -y gstreamer1.0-libav
sudo apt install -y libgstreamer1.0-dev 
sudo apt install -y libgstreamer-plugins-base1.0-dev


# Parallelism and linear algebra libraries:
sudo apt install -y libtbb-dev 
sudo apt install -y libeigen3-dev

echo $?
echo "####################################################"
echo "#       GSTREAMER 1.0 INSTAÇÃO - CONCLUIDA         #"                         
echo "####################################################"



# Documentation and other:
echo "####################################################"
echo "#             wget unzip doxygen                   #"                         
echo "####################################################"
sudo apt install -y doxygen unzip wget

echo $?
echo "####################################################"
echo "#       doxygen INSTAÇÃO - CONCLUIDA               #"                         
echo "####################################################"




echo "####################################################"
echo "#   DOWNLOAD DO OPENCV E OPENCV CONTRIB            #"                         
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
cmake -DWITH_QT=ON \
      -DWITH_OPENGL=ON \
      -DFORCE_VTK=ON \
      -DWITH_TBB=ON \
      -DWITH_GDAL=ON \
      -DWITH_GSTREAMER=ON \
      -DWITH_XINE=ON -DENABLE_PRECOMPILED_HEADERS=OFF ..
fi

if [ $OPENCV_CONTRIB = 'YES' ]; then
cmake -DWITH_QT=OFF \
      -DWITH_OPENGL=ON \
      -DFORCE_VTK=ON \
      -DWITH_TBB=ON \
      -DWITH_GDAL=ON \
      -DWITH_GSTREAMER=ON \
      -DWITH_XINE=ON \
      -DENABLE_PRECOMPILED_HEADERS=OFF \
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
make 
sudo make install
sudo ldconfig
fi

if [ $RASPBERRY = 'NO' ]; then
NUM_JOBS=$(nproc)
time make -j$NUM_JOBS
sudo make install
sudo ldconfig
pkg-config --modversion opencv4
python3 -c "import cv2; print(cv2.__version__)"
fi


# 4. EXECUTE SOME OPENCV EXAMPLES AND COMPILE A DEMONSTRATION

# To complete this step, please visit 'http://milq.github.io/install-opencv-ubuntu-debian'.
