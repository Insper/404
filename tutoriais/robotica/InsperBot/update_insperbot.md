# Update Insperbot

📌

**Login ID: ubuntu** 

**PASSWORD:turtlebot**

<aside>
⚠️ **NOTE:** Recomendo que utilize um SSD com a infra dos alunos para realizar o update/testes do InsperBot

</aside>

<aside>
⚠️ **NOTE:** É muito importante que o computador esteja logado na rede **Robotica** com **login e senha de aluno**

</aside>

## Itens Necessários:

- Cabo Mini HDMI para plugar na Rasp4 do Insperbot
- Fonte de alimentação ou bateria
- Teclado/mouse USB
- Tela
- Computador com um SSD dos alunos
- Login/Senha de aluno

## Clone do SDCard

Tem uma cópia da imagem mais recente do robo nos pendrivers master, eu deixei eles plugados nos computadores em cima das mesas dos técnicos, na home tem uma iso chamada Insperbot_2022.iso.

Use o gparted para identificar qual é a label do SDCard

```bash
sudo gparted 
```

Neste caso, o SDCard apareceu no /dev/sdd, use o comando a seguir para formatar rapidamente o SDCard

![Screenshot from 2022-01-03 14-34-05.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/Screenshot_from_2022-01-03_14-34-05.png)

![Screenshot from 2022-01-03 14-36-21.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/Screenshot_from_2022-01-03_14-36-21.png)

Os comandos foram:

```bash
sudo fdisk /dev/sdd

d

g

w
```

Agora é só fazer a cópia, o comando é:

```bash
sudo time dd if=/InsperBot_2022.img of=/dev/sdd bs=4M conv=sync,noerror status=progress
```

Use o gparted novamente para corrigir possiveis erros na midia

```jsx
sudo gparted
```

Garanta que a midia está desmontada:

![unmount.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/unmount.png)

 

Selecione a operação “Check”

![check.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/check.png)

Aplique as operações selecionadas:

![aplica.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/aplica.png)

Aguarde o término das operações e finalmente feche a aplicação:

![Screenshot from 2022-01-05 10-37-36.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/Screenshot_from_2022-01-05_10-37-36.png)

Insira o SDCard no InsperBot:

![sdcard.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/sdcard.png)

Conecte a bateria e o mini hdmi no InsperBot:

![hdmi.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/hdmi.png)

Não esqueça do dungle do mouse/teclado: 

![mouse.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/mouse.png)

Ligue o robô usando a chavinha:

[WhatsApp Video 2022-01-05 at 11.02.15.mp4](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/WhatsApp_Video_2022-01-05_at_11.02.15.mp4)

Espere o boot terminar, use os dados a seguir para fazer o login:

**usuário: Ubuntu**

**senha: turtlebot**

![ubuntu.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/ubuntu.png)

Conecte na rede Robotica usando os dados abaixo:

**usuário: robo1**

**senha: @insper1904**

![wifi.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/wifi.png)

![senha.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/senha.png)

Abra o nm-connections via terminal com o seguinte comando:

```bash
sudo nm-connection-editor
```

![nm-connection.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/nm-connection.png)

Selecione a rede “Robotica” e clique no icone para editar a conexão, conforme a imagem:

![edit.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/edit.png)

Na aba “Wi-Fi” vá em Device e troque a opção para wlan0 conforme a imagem:

![wlan.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/wlan.png)

Salve e de reboot no sistema:

 

![reboot.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/reboot.png)

## Hora de testar!

<aside>
⚠️ **NOTE:** O InsperBot canta uma musiquinha quando o boot é bem sucedido

</aside>

<aside>
⚠️ **NOTE:** É muito importante que o computador esteja logado na rede **Robotica** com **login e senha de aluno**

</aside>

### Para fazer o Bringup:

No seu computador, abra um terminal e digite o comando abaixo para editar o IPBerry

```bash
code robotica.sh
```

![robotica.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/robotica.png)

Verifique qual é o IP que consta na telinha do seu robô:

![insperbot.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/insperbot.png)

Atualize o IP do seu robô no campo **IPBerry,** garanta que as **linhas 11 e 12 não estão comentadas**:

![bashrc.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/bashrc.png)

Salve o arquivo, abra um terminal novo e digite os comandos a seguir:

```bash
roscore
```

resultado esperado:

![roscore.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/roscore.png)

Em um outro terminal, digite o comando a seguir para fazer o bringup:

```bash
roslaunch turtlebot3_bringup turtlebot3_remote.launch
```

Resultado esperado:

![bringup.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/bringup.png)

### Para acessar os tópicos diponíveis:

```bash
rostopic list
```

![rostopic.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/rostopic.png)

### Para acessar a câmera:

```bash
rqt_image_view
```

![rqt.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/rqt.png)

Selecione o tópico correto:

![camera_compressed.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/camera_compressed.png)

### Para testar o bracinho da garra:

Forward : 0

Up: 1.5

Down : -1.5

```bash
rostopic pub -1 /joint1_position_controller/command std_msgs/Float64 "data: 0"
```

![frente.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/frente.png)

```bash
rostopic pub -1 /joint1_position_controller/command std_msgs/Float64 "data: 1.5"
```

![cima.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/cima.png)

```bash
rostopic pub -1 /joint1_position_controller/command std_msgs/Float64 "data: -1.5"
```

![baixo.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/baixo.png)

### Para abrir e fechar a garra:

Closed: 0
Open: -1

```bash
rostopic pub -1 /joint2_position_controller/command std_msgs/Float64 "data: 0"
```

![frente.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/frente%201.png)

```bash
rostopic pub -1 /joint2_position_controller/command std_msgs/Float64 "data: -1"
```

![aberto.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/aberto.png)

### Para testar os bumpers:

```bash
rostopic echo bumper
```

![bumper.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/bumper.png)

Para testar o LIDAR:

```bash
rostopic echo scan
```

![scan.png](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/scan.png)

### Para testar os motores:

```bash
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch
```

[WhatsApp Video 2022-01-05 at 12.11.09.mp4](Update%20Insperbot%201d15e50b2b8345ea8e367be0d62ecf19/WhatsApp_Video_2022-01-05_at_12.11.09.mp4)