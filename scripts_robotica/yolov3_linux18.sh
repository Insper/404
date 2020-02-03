#!/bin/bash
#Author: Licia Sales
#Update 29-AGO-19


sudo apt-get install linux-headers-$(uname -r)
wget https://developer.download.nvidia.com/compute/cuda/repos/ubuntu1804/x86_64/cuda-ubuntu1804.pin
sudo mv cuda-ubuntu1804.pin /etc/apt/preferences.d/cuda-repository-pin-600
wget http://developer.download.nvidia.com/compute/cuda/10.1/Prod/local_installers/cuda-repo-ubuntu1804-10-1-local-10.1.243-418.87.00_1.0-1_amd64.deb
sudo dpkg -i cuda-repo-ubuntu1804-10-1-local-10.1.243-418.87.00_1.0-1_amd64.deb
sudo apt-key add /var/cuda-repo-10-1-local-10.1.243-418.87.00/7fa2af80.pub
sudo apt-get update
sudo apt-get -y install cuda



#=============================opencv 3.4====================

exec  instalar_opencv_python2.sh
exec  instalar_opencv_python3.sh


 cd ~/
pip3 install --user yolo34py-gpu
git clone https://github.com/madhawav/YOLO3-4-Py/
cd ~/YOLO3-4-Py/
python3 ~/YOLO3-4-Py/setup.py build_ext --inplace
exec ~/YOLO3-4-Py/download_models.sh
python3 ~/YOLO3-4-Py/webcam_demo.py
