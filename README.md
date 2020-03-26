# 404
Infraestrutura para suporte as materias de Engenharia da Computação 


# Quero instalar a infra de Robótica e Elementos no meu linux ubuntu 18.04

Antes de clonar este repositório, certifique-se de ter instalado o git e git-lfs. 

Se ainda não tiver instalado, siga os passos abaixo, caso contrario, pode pular esta etapa:

1.Abra um novo terminal Ctrl+Alt+T e digite:

    sudo apt install -y git 
    sudo apt install -y curl
    curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
    sudo apt-get -y  install git-lfs
    git lfs install

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


> Resultado esperado é uma msg no terminal informando a versão *'4.1.0'*.

Com o OpenCV4 instalado e funcionando, podemos seguir e instalar o ROS + Gazebo + RViz + pacotes do Turtlebot3 e etc... todos pacotes referentes a infra de robotica.

Vamos rodar o [Script 2:instala o ROS Melodic](./scripts_robotica/Instala_infra_robotica.sh)

Abra um novo terminal Ctrl+Alt+T e digite:

     cd ~/404/scripts_robotica
     ./Instala_infra_robotica.sh

> Siga as instruções do script, quando necessário digite a senha de seu usuário e fique atento caso ocorra algum problema.
> A instalação demora, é normal. +- 2hr dependendo da maquina.

Finalizada a instalação, temos que realizar alguns ajustes de sistema antes de executar o ROS. 

Atualiização do arquivo .bashrc
