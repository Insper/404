## infra de robótica no docker:

### Link docker hub onde estão as imagens:
https://hub.docker.com/r/arnaldojr/robotica-insper/

## Como rodar:

com o Docker instalado, rode o comando para subir o container com a imagem.

    docker run -it --rm -p 6080:80 arnaldojr/robotica-insper:v2

no browser, acesse:
se estiver rodando local:

    localhost:6080

se estiver rodando na aws, troque localhost pelo ip da maquina na aws: 

    <ip_aws>:6080
 
Para subir novos container, ***para mais de 1 usuário***, ***troque a porta 6080 para 6081, 6082***... no comando docker run acima e no brownwser tambem.

### Subir imagem com senha de acesso

    docker run -it -e HTTP_PASSWORD=fl1pfl0p --rm -p 6080:80 arnaldojr/robotica-insper:v2

    usuario: root
    senha: fl1pfl0p

## Como dar commit de uma nova imagem

rode o comando e copie o CONTAINER ID da imagem que quer dar commit:
 
    sudo docker container ls

Como exemplo CONTAINER ID = b10da4c98dc5, rode o comando abaixo e adicione um TAG para commit, como exemplo esta vmeutag, pode ser v2, v3.3...

    sudo docker commit b10da4c98dc5 arnaldojr/robotica-insper:vmeutag

faça o login no docker

    docker login

Faço o push da versão da imagem com tag criado.

    sudo docker push arnaldojr/robotica-insper:vmeutag

pronto.

## Gerenciamento de versão das imagens

V1: Imagem padrão de referência. Contem: Ubuntu18.04, ROS Melodic, Gazebo 9.0, pacotes Turtlebot3. 

V2: +VisualStudio Code, correção .bashrc, icones area de trabalho.


### Mais informoçẽs e referências:
1. https://github.com/fcwu/docker-ubuntu-vnc-desktop
2. https://github.com/bpinaya/robond-docker

