#!/bin/sh

rm -fv instr.hex mutate.hex
cat start.hex > instr.hex
./mutate -g 1 >> mutate.hex
sed -i '/8082/c\\' mutate.hex
sed -i '/100f/c\\' mutate.hex
sed -i '/73/c\\' mutate.hex
sed -i '/100073/c\\' mutate.hex
cat mutate.hex >> instr.hex
echo 8082 >> instr.hex

./testbench_verilator +vcd
