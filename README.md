# 404
Infraestrutura para suporte as materias de Engenharia da Computação 


# Quero instalar a infra de robotica e elementos no meu linux ubuntu 18.04

Vamos começar instalando e configurando o ambiente para as aulas de robotica.

Execute os scripts na sequência baixo:

Antes de clonar este repositório, certifique-se de ter instalado o git e git-lfs. 

Se ainda não tiver instalado, siga os passos abaixo, caso contrario, pode pular esta etapa:
 > sudo apt install -y git
 
 > sudo apt install -y curl
 
 > curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
 
 > sudo apt-get -y  install git-lfs
 
 > git lfs install

Execute os scrits na sequência:

[Script 1: instala o opencv 4.1.1](./scripts_robotica/install_opencv4.sh)

[Script 2:instala o ROS Melodic](./scripts_robotica/Instala_infra_robotica.sh)
