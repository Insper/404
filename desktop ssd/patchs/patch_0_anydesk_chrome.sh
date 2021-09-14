#!/bin/sh
#
# Rafael Corsi
# path para o SSD Eng Comp 2020-2
#   - Reinstala anydesk para gerar novo id
#############################################
##            anydesk                      ##
#############################################

cd /tmp/
echo "purge anydesk"
echo fl1pfl0p | sudo -S killall anydesk
sudo rm /etc/anydesk/service.conf
sudo rm -rf ~/.anydesk
sudo apt purge -y anydesk

echo "install anydesk"
wget https://download.anydesk.com/linux/deb/anydesk_6.0.1-1_amd64.deb
sudo apt install -y anydesk_6.0.1-1_amd64.deb
rm -rf anydesk_6.0.1-1_amd64.deb

