sudo apt install -y git 
sudo apt install -y curl
curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
sudo apt-get -y  install git-lfs
git lfs install
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmybash/oh-my-bash/master/tools/install.sh)"

sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install -y gcc make libxft2:i386 libxext6:i386 \
  libncurses5:i386 libstdc++6:i386 libpng-dev \
  libpng16-16:i386 libpng16-16 python-gobject libnotify-bin 


sudo wget http://ftp.us.debian.org/debian/pool/main/libp/libpng/libpng12-0_1.2.50-2+deb8u3_amd64.deb
sudo dpkg -i libpng12-0_1.2.50-2+deb8u3_amd64.deb

curl -s http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/QuartusLiteSetup-20.1.0.711-linux.run
curl -s  http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/ModelSimSetup-20.1.0.711-linux.run
curls -s http://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_installers/cyclonev-20.1.0.711.qdz

chmod +x QuartusLiteSetup-20.1.0.771-linux.run

./QuartusLiteSetup-20.1.0.771-linux.run

sudo sed -i '209 a\        4.[0-9]*)             vco="linux" ;;' $HOME/intelFPGA_lite/20.1/modelsim_ase/vco
cd ~/Downloads
wget https://github.com/Insper/Z01-tools/raw/master/Extra/Libfreetype-6.10.1-lib32.tar.gz
mkdir $HOME/intelFPGA_lite/20.1/modelsim_ase/lib32
tar zxf Libfreetype-6.10.1-lib32.tar.gz -C $HOME/intelFPGA_lite/20.1/modelsim_ase/lib32
sudo apt-get install libudev1:i386
sudo ln -sf /lib/x86_64-linux-gnu/libudev.so.1 /lib/x86_64-linux-gnu/libudev.so.0

