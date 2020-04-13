
Infraestrutura para suporte as materias de Engenharia da Computação 
> Guias e tutorias de infra estão em [tutoriais](./tutoriais). 


# Quero instalar a infra de Robótica e Elementos no meu linux ubuntu 18.04

Antes de clonar este repositório, certifique-se de ter instalado o git e git-lfs e o oh-my-bash. 

Se ainda não tiver instalado, siga os passos abaixo, caso contrario, pode pular esta etapa:

1.Abra um novo terminal Ctrl+Alt+T e digite:

    sudo apt install -y git 
    sudo apt install -y curl
    curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
    sudo apt-get -y  install git-lfs
    git lfs install
    sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmybash/oh-my-bash/master/tools/install.sh)"

## Instalação infra Robótica

2.Agora vamos clonar este repositório na **home** do usuario.
  
    cd ~
    git clone https://github.com/Insper/404.git

3.Instalação do OpenCV 4.

Vamos rodar o [Script 1: instala o opencv 4.1.1](./scripts_robotica/install_opencv4.sh)

Abra um novo terminal Ctrl+Alt+T e digite:

     cd ~/404/scripts_robotica
     ./install_opencv4.sh

> Siga as instruções do script, quando necessário digite a senha de seu usuário.
> A instalação demora um pouco, é normal. +- 1hr dependendo da maquina.

Vamos testar rapidamente o OpenCV4 no python 2 e python 3.

Abra um novo terminal Ctrl+Alt+T e digite:

No python 3:

     python3
     import cv2
     cv2.__version__

No python 2:

     python
     import cv2
     cv2.__version__


> Resultado esperado é uma msg no terminal informando a versão *'4.1.0'*, para sair do terminal do python **Ctrl+D**.

4.Com o OpenCV4 instalado e funcionando, podemos seguir e instalar o ROS + Gazebo + RViz + pacotes do Turtlebot3 e etc... todos pacotes referentes a infra de robotica.

Vamos rodar o [Script 2:instala o ROS Melodic](./scripts_robotica/Instala_infra_robotica.sh)

Abra um novo terminal Ctrl+Alt+T e digite:

     cd ~/404/scripts_robotica
     ./Instala_infra_robotica.sh

> Siga as instruções do script, quando necessário digite a senha de seu usuário e fique atento caso ocorra algum problema.
> A instalação demora, é normal. +- 2hr dependendo da maquina.

Finalizada a instalação, temos que realizar alguns ajustes de sistema antes de executar o ROS. 

5.Atualiização do arquivo .bashrc

Abra um novo terminal Ctrl+Alt+T e digite:

    cp ~/.bashrc ~/.bashrc.original
    cp ~/404/scripts_robotica/bashrc_robotica ~/.bashrc
    source ~/.bashrc

Agora vamos abrir o .bashrc e vericar se está correntamente confirgura para rodar com o simulador gazebo. As *linhas 125 e 126* devem estar comentadas, ou seja, com um **#** no inicio da linha. Se não estiver, comente e salve o .bashrc.

    #export ROS_MASTER_URI="http://"$IPBerry":11311" 
    #export ROS_IP=`hostname -I`

Se tudo ocorreu bem até aqui, ja temos a infra necessária para robótica instalada, configurada e testada.


## Instalação infra Elementos

Já temos um guia de como instalar a infra de elementos, em [Guia_Instalacao_Quartus17.01_CycloneV_ModelSim](./elementos/Guia_Instalacao_Quartus17.01_CycloneV_ModelSim.md) que foi escrito para a instalação apenas dos itens de elementos, abaixo vou replicar este guia para ficar compativel com a infra de rotica tambem. 

### Quartus Prime e ModelSim

Execute no terminal os comandos a seguir, o Quartus necessita de dependências da arquitetura i384.

``` bash
 sudo dpkg --add-architecture i386
 sudo apt-get update
 sudo apt-get install gcc make libxft2:i386 libxext6:i386 \
 libncurses5:i386 libstdc++6:i386 libpng-dev \
 libpng16-16:i386 libpng16-16 python-gobject libnotify-bin 
```

### [Libpng12](http://www.bitsnbites.eu/installing-intelaltera-quartus-in-ubuntu-17-10/)

> The simplest way is to build and install libpng12 from source (requires build-essential).
>    Install build-essential (to get gcc etc): sudo apt install build-essential
>    [Download the source code from sourceforge](https://sourceforge.net/projects/libpng/files/libpng12/1.2.59/libpng-1.2.59.tar.xz/download) (select a suitable version and tar archive).
>    Unpack the tar archive to /tmp
>    Build and install:

```bash
 cd $HOME/Downloads/libpng-1.2.59
 ./configure --prefix=/usr/local
 make
 sudo make install
 sudo ldconfig
```
Instalando  

Faça o download dos arquivos a seguir (salve na mesma todos os arquivos):

- Quartus Lite : [http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/QuartusLiteSetup-17.1.0.590-linux.run](http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/QuartusLiteSetup-17.1.0.590-linux.run)

-  ModelSim : [http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/ModelSimSetup-17.1.0.590-linux.run](http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/ModelSimSetup-17.1.0.590-linux.run)

-  Cyclone V (Chip usado no curso) : [http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/cyclonev-17.1.0.590.qdz](http://download.altera.com/akdlm/software/acdsinst/17.1std/590/ib_installers/cyclonev-17.1.0.590.qdz)

Abra o terminal na pasta que os arquivos foram salvos e execute os dois comandos a seguir:

``` bash
 chmod +x QuartusLiteSetup-17.1.0.590-linux.run
 ./QuartusLiteSetup-17.1.0.590-linux.run
```

>  Grave o caminho na qual o **Quartus** foi instalado, ele será utilizado na próxima etapa.

> Se o Quartus falhar na instalação, mova o modelsim dessa pasta e instale novamente. Depois será necessário instalar o modelsim a parte.

## Modelsim

1. Editar vco

Vamos editar o arquivo `vco` que está na pasta do modelsim (exe: `$HOME/intelFPGA/17.1/modelsim_ase/vco`):

```bash
 sudo sed -i '209 a\        4.[0-9]*)             vco="linux" ;;' $HOME/intelFPGA/17.1/modelsim_ase/vco
```

2. Libfreetype 6.10.1 (versão 2.6)

Será necessário carregarmos uma versão anterior dessa lib. Seguir os passos [nesse roteiro](https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657#stage-2) ou fazer o download de uma versão [pré compilada por mim](https://github.com/Insper/Z01-tools/raw/master/Extra/Libfreetype-6.10.1-lib32.tar.gz)

```bash
 cd ~/Downloads
 wget https://github.com/Insper/Z01-tools/raw/master/Extra/Libfreetype-6.10.1-lib32.tar.gz
 mkdir $HOME/intelFPGA/17.1/modelsim_ase/lib32
 tar zxf Libfreetype-6.10.1-lib32.tar.gz -C $HOME/intelFPGA/17.1/modelsim_ase/lib32
```

### Configurando o USB Blaster

#### [libudev1:i386](https://forums.intel.com/s/question/0D50P00003yySE5SAM/newbie-usb-blaster-on-ubuntu-linux-xenial-1604-wont-probe-chain?language=en_US)

Para o gravador Jtag blaster funcionar no Ubuntu 18 LTS

``` bash
 sudo apt-get install libudev1:i386
 sudo ln -sf /lib/x86_64-linux-gnu/libudev.so.1 /lib/x86_64-linux-gnu/libudev.so.0
```

Execute o comando a seguir para criar o arquivo de regra:

``` bash
 sudo gedit /etc/udev/rules.d/51-altera-usb-blaster.rules
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
 sudo service udev restart
```
# Validando 

>  Reinicie o computador (ou máquina virtual) para concluir a instalação

1. **Quartus:** Escreva `quartus` no terminal, o mesmo deve abrir a janela do Quartus
1. **Programador:** Com a FPGA plugada no pc, digite `jtagconfig` ele deve aparecer o device.
1. **Modelsim:** Escreva `vsim` no terminal, o mesmo deve abrir a janela do ModeolSim

Pronto. tudo instalado e funcionando. 
