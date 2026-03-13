#!/bin/bash

BASHRC="$HOME/.bashrc"
BIN_CB="/bin/cb"

echo "Instalando função cb..."

# Remove antigo /bin/cb se existir
if [ -f "$BIN_CB" ]; then
    echo "Removendo $BIN_CB ..."
    sudo rm -f "$BIN_CB"
    echo "Arquivo /bin/cb removido."
else
    echo "Nenhum /bin/cb encontrado."
fi

# Verifica se já está instalado no .bashrc
if grep -q "# >>> CB FUNCTION START >>>" "$BASHRC"; then
    echo "A função cb já está instalada no .bashrc"
    echo "Nada foi alterado."
    exit 0
fi

cat >> "$BASHRC" << 'EOF'

# >>> CB FUNCTION START >>>
cb() {

    ORIG_DIR="$(pwd)"
    cd ~/colcon_ws || return 1

    FORCE=false

    if [ "$1" == "--force" ]; then
        FORCE=true
        shift
    fi

    if [ "$FORCE" = true ] && [ $# -eq 0 ]; then
        rm -rf build install log
        echo "Diretórios build, install e log removidos."
        colcon build --parallel-workers $(nproc)
        source ~/colcon_ws/install/setup.bash
        cd "$ORIG_DIR"
        return
    fi

    if [ "$FORCE" = true ]; then
        for PKG in "$@"; do
            rm -rf "build/$PKG" "install/$PKG"
            echo "Removido build/$PKG e install/$PKG"
        done
        colcon build --parallel-workers $(nproc) --packages-select "$@"
        source ~/colcon_ws/install/setup.bash
        cd "$ORIG_DIR"
        return
    fi

    if [ $# -eq 0 ]; then
        colcon build --parallel-workers $(nproc)
    else
        colcon build --parallel-workers $(nproc) --packages-select "$@"
    fi

    source ~/colcon_ws/install/setup.bash
    cd "$ORIG_DIR"
}
# <<< CB FUNCTION END <<<
EOF

echo "Função cb adicionada ao .bashrc com sucesso!"
echo ""
echo "Execute agora:"
echo "  source ~/.bashrc"
