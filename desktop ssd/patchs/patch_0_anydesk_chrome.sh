#!/bin/sh
#
# Rafael Corsi
# path para o SSD Eng Comp 2020-2
#   - Reinstala anydesk para gerar novo id


cd /tmp/

#############################################
##            anydesk                      ##
#############################################
echo "purge anydesk"
echo fl1pfl0p | sudo -S killall anydesk
sudo rm /etc/anydesk/service.conf
sudo rm -rf ~/.anydesk
sudo apt purge -y anydesk

echo "install anydesk"
wget https://download.anydesk.com/linux/anydesk_6.0.1-1_amd64.deb -P /tmp/
sudo apt install -y /tmp/anydesk_6.0.1-1_amd64.deb

