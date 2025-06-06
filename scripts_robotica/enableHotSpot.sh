#!/bin/bash

export IFNAME="wlan0"
export CON_NAME="TurtleBot01-5G"
export CON_PASS="TurtleBot01"


pkill wpa_supplicant && sudo pkill dhcpcd
#systemctl restart NetworkManager

rm /etc/NetworkManager/system-connections/$CON_NAME
nmcli con add type wifi ifname $IFNAME con-name $CON_NAME autoconnect yes ssid $CON_NAME
nmcli con modify $CON_NAME 802-11-wireless.mode ap 802-11-wireless.band a ipv4.method shared
nmcli con modify $CON_NAME wifi-sec.key-mgmt wpa-psk
nmcli con modify $CON_NAME wifi-sec.psk $CON_PASS
nmcli con up $CON_NAME

