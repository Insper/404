echo "reinstalando GHDL.."
sudo apt install ghdl -y
echo "reinstalando pytest.."
pip3 install --force-reinstal pytest
echo "reinstalando dependencias" 
pip3 install --force-reinstall pytest-sugar
pip3 install --force-reinstall cocotb
pip3 install --force-reinstall cocotb-test
echo "resolvido!!!"
