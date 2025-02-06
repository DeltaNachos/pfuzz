
testbench: system.v picorv32.v testbench.cc
	verilator --cc --exe -Wno-lint -trace --top-module system system.v picorv32.v testbench.cc \
		$(subst C,-DCOMPRESSED_ISA,C) --Mdir testbench_verilator_dir
	$(MAKE) -C testbench_verilator_dir -f Vsystem.mk

clean:
	rm -rf testbench_verilator_dir

