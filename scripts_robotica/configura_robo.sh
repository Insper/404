#!/bin/bash
# Codigo feito por: Rogerio Cuenca 05/2025 (ia: Perplexity)

# Verifica se o script está sendo executado como root
if [ "$EUID" -ne 0 ]; then
  echo "Por favor, execute como root."
  exit 1
fi

# Verifica se o argumento foi passado
if [ -z "$1" ]; then
  echo "Uso: $0 novo-hostname"
  exit 1
fi

NOVO_HOSTNAME="$1"
ANTIGO_HOSTNAME=$(hostname)

TEXTO_ANTIGO="InsperBot05"
ARQUIVO="/usr/bin/enableHotSpot.sh"

# Altera o hostname permanentemente
hostnamectl set-hostname "$NOVO_HOSTNAME"

# Atualiza o /etc/hosts
sed -i "s/$ANTIGO_HOSTNAME/$NOVO_HOSTNAME/g" /etc/hosts


# Faz a substituição
sed -i "s/${TEXTO_ANTIGO}/${NOVO_TEXTO}/g" "$ARQUIVO"

if [ $? -eq 0 ]; then
  echo "Substituição concluída em $ARQUIVO."
else
  echo "Erro ao tentar substituir o texto."
fi

systemctl restart enableHotSpot.service

echo "###############################################"
echo "Hostname alterado para $NOVO_HOSTNAME."
echo "###############################################"
hostnamectl status
echo "###############################################"


# Destroi as variáveis sensíveis
unset TEXTO_ANTIGO
unset ARQUIVO
unset NOVO_TEXTO
unset NOVO_HOSTNAME
unset ANTIGO_HOSTNAME