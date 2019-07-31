#Baseado no tutorial JK Jung's Blog, How to Install OpenCV (3.4.0) on Jetson TX2 >>>>  https://jkjung-avt.github.io/opencv3-on-tx2/
#Licia Sales
#30-Ago-2019


sudo apt-get -y purge libopencv*
sudo apt-get -y purge python-numpy
sudo apt autoremove
sudo apt-get update
sudo apt-get -y dist-upgrade
sudo apt-get -y install --only-upgrade g++-5 cpp-5 gcc-5
sudo apt-get -y install build-essential make cmake cmake-curses-gui \
                       g++ libavformat-dev libavutil-dev \
                       libswscale-dev libv4l-dev libeigen3-dev \
                       libglew-dev libgtk2.0-dev

sudo apt-get -y install libdc1394-22-dev libxine2-dev \
                       libgstreamer1.0-dev \
                       libgstreamer-plugins-base1.0-dev
sudo apt-get -y install libjpeg8-dev libjpeg-turbo8-dev libtiff5-dev \
                       libjasper-dev libpng12-dev libavcodec-dev
sudo apt-get -y install libxvidcore-dev libx264-dev libgtk-3-dev \
                       libatlas-base-dev gfortran
sudo apt-get -y install libopenblas-dev liblapack-dev liblapacke-dev
sudo apt-get -y install qt5-default
echo "==================== Excluimos os pacotes do opencv do seu sistema, agora vamos instalar as dependencias do pytho -============================================"

sudo apt -y install python3-pip

sudo apt-get update

python3 -m pip install --user numpy
python3 -m pip install --user matplotlib

sudo apt-get install python-dev python-pip python-tk

python -m pip install --user numpy
python -m pip install --user matplotlib

sed -i "${//#include <GL/gl.h>}s/.*/${#include <GL/gl.h>}/" $/usr/local/cuda/include/cuda_gl_interop.h

cd /usr/lib/aarch64-linux-gnu/
sudo ln -sf tegra/libGL.so libGL.so


echo "============================ tudo certo, vamos instalar o OpenCV-3.4.0 =============================="

mkdir -p ~/src
cd ~/src
wget https://github.com/opencv/opencv/archive/3.4.0.zip \
       -O opencv-3.4.0.zip
unzip opencv-3.4.0.zip

cd ~/src/opencv-3.4.0
mkdir build
cd build
cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local \
        -D WITH_CUDA=ON -D CUDA_ARCH_BIN="6.2" -D CUDA_ARCH_PTX="" \
        -D WITH_CUBLAS=ON -D ENABLE_FAST_MATH=ON -D CUDA_FAST_MATH=ON \
        -D ENABLE_NEON=ON -D WITH_LIBV4L=ON -D BUILD_TESTS=OFF \
        -D BUILD_PERF_TESTS=OFF -D BUILD_EXAMPLES=OFF \
        -D WITH_QT=ON -D WITH_OPENGL=ON ..
make -j4
sudo make install

echo "============================ tudo certo, so usar jovem! =============================="
