#!/usr/bin/env python3

import subprocess
import os

# Executa o comando nmcli e captura a saída
res = subprocess.getstatusoutput("nmcli -t -f TYPE,UUID con")

# Divide a saída em linhas
lines = res[1].split('\n')

# Percorre cada linha
for line in lines:
    # Divide a linha em partes
    parts = line.split(":")
    
    # Verifica se o tipo é 802-11-wireless
    if len(parts) > 1 and parts[0] == "802-11-wireless":
        # Deleta a conexão com o UUID correspondente
        subprocess.run(f"nmcli connection delete uuid {parts[1]}", shell=True)

# Imprime mensagem de conclusão
print(">> Done.")

# Executa o comando nmcli para listar conexões
subprocess.run("nmcli connection", shell=True)