VERILATOR_ROOT=/home/erin/Research/Fuzzing/RISC-Optimized/verilator
AFL_PATH=/home/erin/AFLplusplus
COV_PATH=/home/erin/inspector-gadget
CXX=clang++
CXX_FLAGS=-I.  -MMD -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -faligned-new -fcf-protection=none -Wno-bool-operation -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow 
DENYLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/aquila/lists/denylist.txt
ALLOWLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/aquila/lists/allowlist.txt
V_FLAGS=-Wno-INITIALDLY -Wno-COMBDLY -Wno-CASEOVERLAP -Wno-UNSIGNED  -Wno-lint

aquila_afl:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc $(V_FLAGS) -I./hdl/include ./hdl/include/csr_file.v -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/aquila_top.v --top-module aquila_top 
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) make CXX=$(AFL_PATH)/afl-clang-fast++ -C obj_dir -f Vaquila_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS) -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) $(AFL_PATH)/afl-clang-fast++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vaquila_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o aquila_afl

aquila_cov:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc $(V_FLAGS) -I./hdl/include ./hdl/include/csr_file.v -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/aquila_top.v --top-module aquila_top
	make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vaquila_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vaquila_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o aquila_cov
	nm aquila_cov | rev | cut -d' ' -f1 | rev | sed 's/^/fun:/' | grep -vFf $(ALLOWLIST) > $(DENYLIST)
	rm -rf obj_dir aquila_cov
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc $(V_FLAGS) -I./hdl/include ./hdl/include/csr_file.v -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/aquila_top.v --top-module aquila_top
	export AFL_LLVM_DENYLIST=$(DENYLIST) && make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vaquila_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	export AFL_LLVM_DENYLIST=$(DENYLIST) && $(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vaquila_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o aquila_cov

aquila_edge:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc $(V_FLAGS) -I./hdl/include ./hdl/include/csr_file.v -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/aquila_top.v --top-module aquila_top
	make CXX=$(CXX) CXXFLAGS="-fprofile-instr-generate -fcoverage-mapping" -C obj_dir -f Vaquila_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -fprofile-instr-generate -fcoverage-mapping -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(CXX) -v -fprofile-instr-generate -fcoverage-mapping -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vaquila_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o aquila_edge


testbench:
	verilator -O0 --cc -I./include ./include/csr_file.v -I./mem_model -DSIZE_OF_THE_BUS=32 --exe $(V_FLAGS) -trace --top-module aquila_top aquila_top.v core_clk_rst.cc \
		--Mdir testbench_verilator_dir
	$(MAKE) -C testbench_verilator_dir -f Vaquila_top.mk
	cp testbench_verilator_dir/Vaquila_top vaquila

clean:
	rm -rf testbench_verilator_dir

