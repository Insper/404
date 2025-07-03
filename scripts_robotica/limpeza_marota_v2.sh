# Script de Limpeza renovado para 2025.2
# Matindo por: Rogerio Bragato
# rogeriobc@insper.edu.br
# rogeriobcuenca@gmail.com
# https://github.com/rbcuenca

#!/bin/bash

# Limpar histórico do terminal
history -c
rm -f ~/.bash_history

# Apagar dados do Chrome
rm -rf ~/.config/google-chrome
rm -rf ~/.cache/google-chrome

# Apagar dados do Firefox
rm -rf ~/.mozilla/firefox
rm -rf ~/.cache/mozilla/firefox

# Apagar configurações globais do Git e GitHub CLI (mantendo os repositórios)
rm -f ~/.gitconfig
rm -rf ~/.config/gh

# Apagar configurações de rede (requer sudo)
sudo rm -f /etc/NetworkManager/system-connections/*
sudo rm -f /etc/netplan/*.yaml
sudo service network-manager restart

# Apagar todos os arquivos da pasta Downloads
rm -rf ~/Downloads/*

echo "Limpeza concluída."
