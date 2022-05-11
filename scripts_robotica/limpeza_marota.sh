#!/bin/bash
# Author: Licia Sales
# 26-Jun-19
# update 11-05-2022

#alterado Cuenca - instalação do GHDL no VS Code
code --install-extension johannesbonk.ghdl-interface
#alterado Cuenca - instalação do GTWave
sudo apt -y install gtkwave

rm -rf ~/.config/google-chrome/Default/
rm -rf ~/.cache/google-chrome
rm -rf ~/.cache/mozilla
sudo rm -rf /etc/NetworkManager/system-connections/*
git config --global --unset credential.helper
rm -rf ~/Downloads/*
rm -rf InsperBot_2022.img 
history -c
echo "Termineeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeei"

