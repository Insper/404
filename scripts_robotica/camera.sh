#!/bin/bash
# Author: Licia Sales
# 25-Jun-19
# rev2 - raspberry 4 - ubuntu 18.04
while true
do
    ip_host=$(rosnode machine)
    echo $ip_host > /home/ubuntu/log.txt
    awk '{print $1}'  /home/ubuntu/log.txt > /home/ubuntu/log2.txt
    ip_host=$(cat /home/ubuntu/log2.txt)
    echo "aguardando ip"

    if [[ "$ip_host" =~ (([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5])\.([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5])\.([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5])\.([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5]))$ ]]; then
    echo "ip_host= " $ip_host
    echo "Conectando com a camera"
    gst-launch-1.0 -v v4l2src device=/dev/video0 ! 'video/x-h264,width=600,height=448,framerate=30/1' ! h264parse ! rtph264pay config-interval=10 pt=96 ! udpsink host=$ip_host port=9000
    break
    fi
done



