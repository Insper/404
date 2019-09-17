#!/bin/bash


PATH=$HOME/404
URL=https://github.com/Insper/404.git

echo "Buscando por atualizações no git"
    git -C $PATH stash
    git -C $PATH checkout master
    git -C $PATH pull origin master

sucess_update=0;


if [ "$sucess_update" == 0 ]; then


# insira aqui o seu Script para automatizar atualizações no SSD do aluno 



log_update=$" Insira aqui a identificação da sua atualização"
sucess_update=$date
$log_update >> ~/404/update.txt
$sucess_update >> ~/404/update.txt


fi

wait
