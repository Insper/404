#!/bin/bash

# Author: Licia Sales
# 25-Jun-19

while true
do
   ip_host=$(rosnode machine)
   echo $ip_host > log.txt
   host=$(cut -c16- log.txt)
   echo "aguardando ip"

    if [[ "$host" =~ (([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5])\.([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0$
    echo "Conectando com a camera"
    raspivid -n -w 640 -h 480 -b 1000000 -fps 30 -t 0 -o - | gst-launch-1.0 -v fdsrc ! h264parse ! r$
    break
    fi
done

