# VERILATOR_ROOT=/home/andy/Research/Files/verilator-5.016
# AFL_PATH=/home/andy/Research/Files/AFLplusplus
# COV_PATH=/home/andy/Research/Fuzz/inspector-gadget
# CXX=clang++
# CXX_FLAGS=-I.  -MMD -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -faligned-new -fcf-protection=none -Wno-bool-operation -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow
# DENYLIST=/home/andy/Research/Fuzz/RISC-Optimized/cores/ssrv/denylist.txt
# ALLOWLIST=/home/andy/Research/Fuzz/RISC-Optimized/cores/ssrv/allowlist.txt

VERILATOR_ROOT=/home/erin/Research/Fuzzing/RISC-Optimized/verilator
AFL_PATH=/home/erin/AFLplusplus
COV_PATH=/home/erin/inspector-gadget
CXX=clang++
CXX_FLAGS=-I.  -MMD -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -faligned-new -fcf-protection=none -Wno-bool-operation -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow
DENYLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/ssrv/lists/denylist.txt
ALLOWLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/ssrv/lists/allowlist.txt

V_FLAGS = -Wno-WIDTHEXPAND -Wno-ASCRANGE -Wno-CASEINCOMPLETE -Wno-MULTIDRIVEN -Wno-UNOPTFLAT
CORE_DIR=./hdl/include

ssrv_afl:
	$(VERILATOR_ROOT)/bin/verilator -O0 $(V_FLAGS) --cc -I$(CORE_DIR)/core -I$(CORE_DIR)/core/primitives $(CORE_DIR)/core/primitives/scr1_reset_cells.sv -I$(CORE_DIR)/includes -I$(CORE_DIR)/pipeline -I$(CORE_DIR)/tb -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/ssrv_top.v --top-module ssrv_top
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) make CXX=$(AFL_PATH)/afl-clang-fast++ -C obj_dir -f Vssrv_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS)  -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) $(AFL_PATH)/afl-clang-fast++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vssrv_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o ssrv_afl

ssrv_cov:
	$(VERILATOR_ROOT)/bin/verilator -O0 $(V_FLAGS) --cc -I$(CORE_DIR)/core -I$(CORE_DIR)/core/primitives $(CORE_DIR)/core/primitives/scr1_reset_cells.sv -I$(CORE_DIR)/includes -I$(CORE_DIR)/pipeline -I$(CORE_DIR)/tb -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/ssrv_top.v --top-module ssrv_top
	make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vssrv_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vssrv_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o ssrv_cov
	nm ssrv_cov | rev | cut -d' ' -f1 | rev | sed 's/^/fun:/' | grep -vFf $(ALLOWLIST) > $(DENYLIST)
	rm -rf obj_dir ssrv_cov
	$(VERILATOR_ROOT)/bin/verilator -O0 $(V_FLAGS) --cc -I$(CORE_DIR)/core -I$(CORE_DIR)/core/primitives $(CORE_DIR)/core/primitives/scr1_reset_cells.sv -I$(CORE_DIR)/includes -I$(CORE_DIR)/pipeline -I$(CORE_DIR)/tb -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/ssrv_top.v --top-module ssrv_top
	export AFL_LLVM_DENYLIST=$(DENYLIST) && make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vssrv_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	export AFL_LLVM_DENYLIST=$(DENYLIST) && $(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vssrv_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o ssrv_cov

ssrv_edge:
	$(VERILATOR_ROOT)/bin/verilator -O0 $(V_FLAGS) --cc -I$(CORE_DIR)/core -I$(CORE_DIR)/core/primitives $(CORE_DIR)/core/primitives/scr1_reset_cells.sv -I$(CORE_DIR)/includes -I$(CORE_DIR)/pipeline -I$(CORE_DIR)/tb -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/ssrv_top.v --top-module ssrv_top
	make CXX=$(CXX) CXXFLAGS="-fprofile-instr-generate -fcoverage-mapping" -C obj_dir -f Vssrv_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -fprofile-instr-generate -fcoverage-mapping -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(CXX) -v -fprofile-instr-generate -fcoverage-mapping -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vssrv_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o ssrv_edge


testbench:
	verilator -O0 --cc --exe $(V_FLAGS) -trace -I./include/core -I./include/core/primitives ./include/core/primitives/scr1_reset_cells.sv -I./include/includes -I./include/pipeline -I./include/tb -I./mem_model \
		-DSIZE_OF_THE_BUS=32 --top-module ssrv_top ssrv_top.v core_clk_rst.cc \
		--Mdir tb_v_dir
	$(MAKE) -C tb_v_dir -f Vssrv_top.mk
	cp tb_v_dir/Vssrv_top vssrv

clean:
	rm -rf tb_v_dir

