#!/bin/bash
sudo apt-get install -y build-essential cmake unzip pkg-config
sudo apt-get install -y libjpeg-dev libpng-dev libtiff-dev
sudo apt-get install -y libavcodec-dev libavformat-dev libswscale-dev libv4l-dev
sudo apt-get install -y libxvidcore-dev libx264-dev
sudo apt-get install -y libgtk-3-dev
sudo apt-get install -y libatlas-base-dev gfortran


if [ $? -eq 0 ]
then
    echo "as libs de pré requisito para instalção do opencv-python foram instaladas com sucesso"
    sudo apt-get install python3-dev
    sudo apt-get install python3-numpy
    if [ $? -eq 0 ]
    then	
	echo "o python3 foi instalado com sucesso"
	mkdir ~/tmp
	cd ~/tmp	
	wget -O opencv.zip https://github.com/opencv/opencv/archive/3.4.4.zip
	wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/3.4.4.zip
	unzip opencv.zip
	unzip opencv_contrib.zip
	mv opencv-3.4.4/ opencv
	mv opencv_contrib-3.4.4/ opencv_contrib
	cd ~/tmp/opencv
	mkdir build
	cd build
	   if [ $? -eq 0 ]
   	   then
		echo "vamos compilar o opencv agora"
		cmake -D CMAKE_BUILD_TYPE=RELEASE \
		      -D CMAKE_INSTALL_PREFIX=/usr/local \
		      -D INSTALL_PYTHON_EXAMPLES=ON \
		      -D INSTALL_C_EXAMPLES=OFF \
		      -D OPENCV_ENABLE_NONFREE=ON \
		      -D OPENCV_EXTRA_MODULES_PATH=~/tmp/opencv_contrib/modules \
		      -D PYTHON_EXECUTABLE=/usr/bin/python3 \
		      -D BUILD_EXAMPLES=ON .. 
		

			   if [ $? -eq 0 ]
   	  		   then
				echo "Sucesso no Cmake, agora vamos ver o Make haha"
				make -j4
				
				   if [ $? -eq 0 ]
   	  		   	   then
					echo "Sucesso no make tambem!!! Vamos instalar!"
					sudo make install

					   if [ $? -eq 0 ]
   	  		   	           then
						echo "NOOOOOOOOSSA, deu certo! Vamos configurar o ambiente agora"
						sudo ldconfig
						echo "export PYTHONPATH=/usr/local/python:/usr/lib/python:\$PYTHONPATH" >> ~/.bashrc
						sudo ldconfig

					        if [ $? -eq 0 ]
   	  		   	                then
							echo "Tudo configurado certinho... Agora vamos instalar o jupter"
							

							if [ $? -eq 0 ]
   	  		   	                	then
							sudo apt install python3-pip								
							sudo -H pip3 install jupyter
						        source ~/.bashrc

							echo "Só usar jovem!"
							echo 0
							fi

						fi
					fi
				fi
			fi
		fi
	fi
fi
