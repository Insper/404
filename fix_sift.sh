#!/bin/bash

SECONDS=0
git reset --hard origin/master
git pull 
cd scripts_robotica/OpenCV/build
NUM_CPU=$(nproc)
time make -j$(($NUM_CPU - 1))
sudo make install
sudo ldconfig


echo $ELAPSED="Elapsed: $(($SECONDS / 3600))hrs $((($SECONDS / 60) % 60))min $(($SECONDS % 60))sec"
#!/bin/bash

