echo "reinstalando GHDL.."
sudo apt install ghdl -y
echo "reinstalando pytest.."
pip3 install --force-reinstal pytest==8.3.2
echo "reinstalando dependencias" 
pip3 install --force-reinstall pytest-sugar==1.0.0
pip3 install --force-reinstall cocotb==1.8.1
pip3 install --force-reinstall cocotb-test==0.2.5
echo "atualizando elementos.sh"
cd
cat << EOF >> elementos.sh
## simulador ghdl
export SIM=ghdl
EOF

source .bashrc
echo "resolvido!!!"
