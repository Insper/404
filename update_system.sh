#!/bin/bash



echo "Buscando por atualizações no git"
    git -C /home/borg/404 stash
    git -C /home/borg/404 checkout master
    git -C /home/borg/404 pull origin master

sucess_update=0;


if [ "$sucess_update" == 0 ]; then


# insira aqui o seu Script para automatizar atualizações no SSD do aluno 



log_update=$" Insira aqui a identificação da sua atualização"
sucess_update=date
echo $log_update >> ~/404/update.txt
echo $sucess_update >> ~/404/update.txt


fi

wait
