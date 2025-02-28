echo "reinstalando GHDL.."
sudo apt install ghdl -y
echo "reinstalando pytest.."
pip3 install --force-reinstal pytest
echo "reinstalando dependencias" 
pip3 install --force-reinstall pytest-sugar
pip3 install --force-reinstall cocotb
pip3 install --force-reinstall cocotb-test
echo "atualizando elementos.sh"
cd
cat << EOF >> elementos.sh
## simulador ghdl
export SIM=ghdl
EOF

source .bashrc
echo "resolvido!!!"
