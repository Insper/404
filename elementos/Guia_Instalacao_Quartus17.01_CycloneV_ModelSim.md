- Ubuntu 18.04

# Quartus Lite 17.1 e ModelSim 17.1

Execute no terminal os comandos a seguir, o Quartus necessita de dependências da arquitetura i384.

``` bash
$ sudo dpkg --add-architecture i386
$ sudo apt-get update
$ sudo apt-get install gcc make libxft2:i386 libxext6:i386 \
  libncurses5:i386 libstdc++6:i386 libpng-dev \
  libpng16-16:i386 libpng16-16 python-gobject libnotify-bin 
```

### [Libpng12](http://www.bitsnbites.eu/installing-intelaltera-quartus-in-ubuntu-17-10/)

> The simplest way is to build and install libpng12 from source (requires build-essential).
>    Install build-essential (to get gcc etc): sudo apt install build-essential
>    [Download the source code from sourceforge](https://sourceforge.net/projects/libpng/files/libpng12/1.2.59/libpng-1.2.59.tar.xz/download) (select a suitable version and tar archive).
>    Unpack the tar archive to /tmp
>    Build and install:

Descompacte o arquivo **libpng-1.2.59.tar.xz** na pasta **Downloads** antes executar os comandos abaixo:

```bash
$ cd $HOME/Downloads/libpng-1.2.59
$ ./configure --prefix=/usr/local
$ make
$ sudo make install
$ sudo ldconfig
```


## Instalando  

Faça o download dos arquivos a seguir (salve na mesma todos os arquivos):

- Quartus Lite : [http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/QuartusLiteSetup-17.1.0.590-linux.run](http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/QuartusLiteSetup-17.1.0.590-linux.run)

-  ModelSim : [http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/ModelSimSetup-17.1.0.590-linux.run](http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/ModelSimSetup-17.1.0.590-linux.run)

-  Cyclone V (Chip usado no curso) : [http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/cyclonev-17.1.0.590.qdz](http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/cyclonev-17.1.0.590.qdz)

Abra o terminal na pasta que os arquivos foram salvos e execute os dois comandos a seguir:

``` bash
$ chmod +x QuartusLiteSetup-17.1.0.590-linux.run
$ ./QuartusLiteSetup-17.1.0.590-linux.run
```

>  Grave o caminho na qual o **Quartus** foi instalado, ele será utilizado na próxima etapa.

> Se o Quartus falhar na instalação, mova o modelsim dessa pasta e instale novamente. Depois será necessário instalar o modelsim a parte.

## Modelsim

1. Editar vco

Vamos editar o arquivo `vco` que está na pasta do modelsim (exe: `$HOME/intelFPGA_lite/17.1/modelsim_ase/vco`):

```bash
$ sudo sed -i '209 a\        4.[0-9]*)             vco="linux" ;;' $HOME/intelFPGA_lite/17.1/modelsim_ase/vco
```

2. Libfreetype 6.10.1 (versão 2.6)

Será necessário carregarmos uma versão anterior dessa lib. Seguir os passos [nesse roteiro](https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657#stage-2) ou fazer o download de uma versão [pré compilada por mim](https://github.com/Insper/Z01-tools/raw/master/Extra/Libfreetype-6.10.1-lib32.tar.gz)

```bash
$ cd ~/Downloads
$ wget https://github.com/Insper/Z01-tools/raw/master/Extra/Libfreetype-6.10.1-lib32.tar.gz
$ mkdir $HOME/intelFPGA_lite/17.1/modelsim_ase/lib32
$ tar zxf Libfreetype-6.10.1-lib32.tar.gz -C $HOME/intelFPGA_lite/17.1/modelsim_ase/lib32
```

Adicione ao final do  `bashrc` a seguinte linha:

```diff
export LD_LIBRARY_PATH=$HOME/intelFPGA_lite/17.1/modelsim_ase/lib32
```

## Configurando o USB Blaster

#### [libudev1:i386](https://forums.intel.com/s/question/0D50P00003yySE5SAM/newbie-usb-blaster-on-ubuntu-linux-xenial-1604-wont-probe-chain?language=en_US)

Para o gravador Jtag blaster funcionar no Ubuntu 18 LTS

``` bash
$ sudo apt-get install libudev1:i386
$ sudo ln -sf /lib/x86_64-linux-gnu/libudev.so.1 /lib/x86_64-linux-gnu/libudev.so.0
```

Execute o comando a seguir para criar o arquivo de regra:

``` bash
$ sudo gedit /etc/udev/rules.d/51-altera-usb-blaster.rules
```

Adicione as seguintes linhas a esse arquivo criado e salve:

```diff
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6001", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6002", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6003", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6010", MODE="0666"
SUBSYSTEM=="usb", ATTR{idVendor}=="09fb", ATTR{idProduct}=="6810", MODE="0666"
```

Recarrege o as permissões via o comando a seguir:

``` bash
$ sudo service udev restart
```

## Configurando variáveis de ambiente

Adicione ao final do `bashrc` as seguintes linhas:

```diff
export ALTERAPATH=$HOME/intelFPGA_lite/17.1
export PATH=$PATH:${ALTERAPATH}/quartus/bin
export PATH=$PATH:${ALTERAPATH}/modelsim_ase/linuxaloem/
export PATH=$PATH:${ALTERAPATH}/modelsim_ase/lib32
export VUNIT_MODELSIM_PATH=${ALTERAPATH}/modelsim_ase/linuxaloem/
export VUNIT_SIMULATOR=modelsim
export QSYS_ROOTDIR="$HOME/intelFPGA_lite/17.1/quartus/sopc_builder/bin"
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${ALTERAPATH}/modelsim_ase/lib32
```

Se você alterou o caminho de instalação na etapa do `Quartus`, deve modificar a primeira linha inserindo o caminho da instalação.


# Validando 

>  Reinicie o computador (ou máquina virtual) para concluir a instalação

1. **Quartus:** Escreva `quartus` no terminal, o mesmo deve abrir a janela do Quartus
1. **Programador:** Com a FPGA plugada no pc, digite `jtagconfig` ele deve aparecer o device.
1. **Modelsim:** Escreva `vsim` no terminal, o mesmo deve abrir a janela do ModelSim

