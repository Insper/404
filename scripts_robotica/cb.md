# Instruções para  utilização do script CB (Colcon Build) [Versão Rogerio Cuenca]

## Objetivo
Este script tem por objetivo facilitar a vida do usuário que precisa de uma sequencia
de comandos para fazer o colcon build após qualquer alteração em um pacote ROS2.

## Utilização

Para fazer o build de todos os pacotes, basta digitar cb em qualquer diretório. O script irá para o diretorio colcon_ws, fará o build, recarregará o source e retornará para o diretório atual.

Para fazer o build de um pacote específico, basta usar cb <nome_do_pacote> que ele realizará o procedimento acima, mas no pacote específico.

Se você precisa apagar todos os builds anteriores e fazer "do zero" um build novo, basta usar cb --force. Ele *apagará as pastas ~/colcon_ws/build; ~/colcon_ws/install e ~/colcon_ws/log*, depois fará o cb.

Se você precisa apagar apenas os builds de um pacote específico e refazer "do zero" apenas este pacote, você pode usar cb --force nome_do_pacote. Ele *apagará apenas os diretorios deste pacote dentro do build e do install* e fará um "colcon build --packages select" com todos os parametros apenas do pacote que passou como argumento.

### Lembrando como faz o colcon build
Após alterações em um pacote ROS2 precisamos fazer o "build" do pacote, o que implica
em colocar cada arquivo no seu devido lugar para que o ROS2 os encontre e rode da forma
correta.

O comnado completo para fazer o build de um pacote especifico é o seguinte:
colcon build --symlink-install --parallel-workers $(nproc) --packages-select <nome do pacote>. Vou explicar os comandos e depois os significados de cada argumento.

Para fazer um colcon build é necessário estár na WorkSpace correta, portanto começamos
subindo para o diratório correto:

´´´
cd ~/colcon_ws
´´´

Apos estar no diretorio correto, vamos mandar compilar *todos* os pacotes:

´´´
colcon build --symlink-install --parallel-workers $(nproc)
´´´

Terminado o build, precisamos recarregar o arquivo com os paths:

´´´
source ~/colcon_ws/install/setup.bash
´´´ 

## Explicando os argumentos utilizados

### Argumentos explicados

#### 1. colcon build
Função: Inicia o processo de compilação dos pacotes do seu workspace ROS 2.

#### 2. --symlink-install
Função: Em vez de copiar os arquivos de build para a pasta install, cria links simbólicos (symlinks) para os arquivos da pasta build.

Vantagem: Permite que alterações feitas nos arquivos-fonte sejam refletidas imediatamente na instalação, facilitando o desenvolvimento e debug sem precisar rebuildar tudo.

Quando usar: Durante o desenvolvimento ativo dos pacotes.

#### 3. --parallel-workers $(nproc)
Função: Compila os pacotes em paralelo, utilizando múltiplos núcleos do processador.

$(nproc): É um comando do sistema que retorna o número de núcleos disponíveis na sua máquina.

Exemplo: Se seu computador tem 8 núcleos, o comando será equivalente a --parallel-workers 8.

Vantagem: Acelera significativamente o tempo de build, aproveitando o hardware disponível.

#### 4. --packages-select "$@"
Função: Compila apenas os pacotes especificados após o comando.

"$@": No contexto de um script shell, representa todos os argumentos passados para o script.

Exemplo: Se você rodar cb my_gazebo, o comando será --packages-select my_gazebo.

Quando usar: Quando você quer buildar apenas um ou alguns pacotes específicos, economizando tempo.

Se nenhum pacote for especificado: O argumento é omitido e todos os pacotes do workspace serão compilados.

## "Instalando" o Script

É necessário dar permissão de escrita ao script, que você já baixou deste repositório (o arquivo é o cb sem extensão).

use o comando chmod para dar permissão de execução:

´´´
chmod +x cb
´´´

Agora vamos mover para dentro do diretorio /bin:

´´´
sudo move cb /bin
´´´

Pronto, basta fechar e abrir novamente o terminal e utilizar!

Se for usar para fazer o build em *todos os pacotes* basta digitar cb em qualquer janela que esteja, e se for utilizar apra um pacote especifico basta acrescentar o nome do pacote, exemplo: cb meu_pacote_ros.




Created by [Rogério B. Cuenca](mailto:rogeriobcuenca@gmail.com)
