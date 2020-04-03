#!/bin/bash

while true
do
    ip_host=$(rosnode machine)
    echo "aguardando ip"
    echo "rosnode machine" $ip_host
    echo $ip_host > /home/ubuntu/log.txt
    host=$(awk '{print $1}'  /home/ubuntu/log.txt)
    echo "host" $host



    if [[ "$host" =~ (([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5])\.([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5])\.([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5])\.([01]{,1}[0-9]{1,2}|2[0-4][0-9]|25[0-5]))$ ]]; then
        echo "Ip do robo" $(hostname -I)
        echo "O host pc ainda não criou o link de comunicação"

        if [ $host != $(hostname -I) ]; then

            echo "Conectado ao ip " $host
            echo "Enviando os dados da camera..."
            gst-launch-1.0 -v v4l2src device=/dev/video0 ! 'video/x-h264,width=600,height=448,framerate=30/1' ! h264parse ! rtph264pay config-interval=10 pt=96 ! udpsink host=$host port=9000
            break
         fi
    fi
done



