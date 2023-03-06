#!/bin/bash

export IFNAME="wlan0"
export CON_NAME="turtle01"
export CON_PASS="turtlebot"


pkill wpa_supplicant && sudo pkill dhcpcd
#systemctl restart NetworkManager

rm /etc/NetworkManager/system-connections/$CON_NAME
nmcli con add type wifi ifname $IFNAME con-name $CON_NAME autoconnect yes ssid $CON_NAME
nmcli con modify $CON_NAME 802-11-wireless.mode ap 802-11-wireless.band bg ipv4.method shared
nmcli con modify $CON_NAME wifi-sec.key-mgmt wpa-psk
nmcli con modify $CON_NAME wifi-sec.psk $CON_PASS
nmcli con up $CON_NAME

