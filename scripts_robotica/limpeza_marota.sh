#!/bin/bash
# Author: Licia Sales
# 26-Jun-19


sudo apt install -y bleachbit
history -c
bleachbit --clean firefox.*
sudo rm -rf /etc/NetworkManager/system-connections/*
