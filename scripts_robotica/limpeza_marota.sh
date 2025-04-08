#!/bin/bash
# Author: Licia Sales in 260Jun-19
# update 08-04-2025

# instalação do GHDL no VS Code e GTWave

code --install-extension johannesbonk.ghdl-interface
sudo apt -y install gtkwave

rm -rf ~/.config/google-chrome/Default/
rm -rf ~/.cache/google-chrome
rm -rf ~/.cache/mozilla
sudo rm -rf /etc/NetworkManager/system-connections/* # usar no ubuntu 22
python3 ./Pictures/esquece_rede.py # usar no ubuntu 24
git config --global --unset credential.helper
rm -rf ~/Downloads/*
history -c
echo "Termineeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeei"

