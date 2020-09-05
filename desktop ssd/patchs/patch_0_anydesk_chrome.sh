#!/bin/sh
#
# Rafael Corsi
# path para o SSD Eng Comp 2020-2
#   - Reinstala anydesk para gerar novo id
#   - instala google chrome (proctorio)

cd ~/Downloads/

#############################################
##            anydesk                      ##
#############################################
echo "purge anydesk"
rm -rf ~/.anydesk
echo fl1pfl0p | sudo -S apt purge -f anydesk

echo "install anydesk"
wget -qO - https://keys.anydesk.com/repos/DEB-GPG-KEY | sudo apt-key add -
sudo echo "deb http://deb.anydesk.com/ all main" > /etc/apt/sources.list.d/anydesk-stable.list
sudo apt update
sudo apt install anydesk

#############################################
##            chrome                      ##
#############################################
echo "install google chrome"
wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
sudo apt install ./google-chrome-stable_current_amd64.deb
