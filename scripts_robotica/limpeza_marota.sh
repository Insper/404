#!/bin/bash
# Author: Licia Sales
# 26-Jun-19


#---------------------------------------update ubuntu ----------------------------------------
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -

#sudo gedit /etc/apt/sources.list.d/vscode.list
#deb [arch=amd64,arm64,armhf] http://packages.microsoft.com/repos/code stable main"

sudo apt install -y bleachbit
history -c
bleachbit --clean firefox.*
rm -rf ~/.config/google-chrome/Default/
rm -rf ~/.cache/google-chrome
rm -rf ~/.cache/mozilla
sudo rm -rf /etc/NetworkManager/system-connections/*
git config --global --unset credential.helper

