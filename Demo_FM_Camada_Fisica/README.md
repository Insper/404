
---
title: Laborátorio de Informática
date: Julho 2019
---

# Demo de transmissor e receptor FM com o SDR HackRF One

Esta demo implementa uma comunicação (TX e RX) em modulação FM embarcado em um Radio Definido por Software (SDR). 

# Instalar GNU Radio e os modulos dependentes no Linux Ubuntu 18.04 

A instalação é muito simples, basta executar o comando abaixo:

```
 sudo apt install gnuradio
 sudo apt install hackrf
 sudo apt install gr-osmosdr
  
```
Driver RTL2382U

```
 sudo apt update
 sudo apt install cmake build-essential libusb-1.0-0-dev
 
 git clone https://github.com/osmocom/rtl-sdr.git
 cd rtl-sdr
 mkdir build
 cd build
 cmake ../ -DINSTALL_UDEV_RULES=ON -DDETACH_KERNEL_DRIVER=ON
 make
 make install
 ldconfig
```

# Observações dos arquivos

**DEMO_FM_TX.gcr** = Codigo exemplo do transmissor FM

**DEMO_FM_TX.gcr** = Codigo exemplo do receptor FM

