VERILATOR_ROOT=/home/erin/Research/Fuzzing/RISC-Optimized/verilator
AFL_PATH=/home/erin/AFLplusplus
COV_PATH=/home/erin/inspector-gadget
CXX=clang++
CXX_FLAGS=-I.  -MMD -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -faligned-new -fcf-protection=none -Wno-bool-operation -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow
CXXFLAGS="-fprofile-instr-generate -fcoverage-mapping"
DENYLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/sodor5/lists/denylist.txt
ALLOWLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/sodor5/lists/allowlist.txt


sodor5_afl:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc -I./hdl/include -DSIZE_OF_THE_BUS=32 ./hdl/sodor5_rtl/sodor5_top.v ./hdl/sodor5_rtl/sodor_core_5stage.v ./hdl/sodor5_rtl/sodor_mem_model.sv
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) make CXX=$(AFL_PATH)/afl-clang-fast++ -C obj_dir -f Vsodor5_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS)  -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) $(AFL_PATH)/afl-clang-fast++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vsodor5_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o sodor5_afl

sodor5_cov:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc -I./hdl/include -DSIZE_OF_THE_BUS=32 ./hdl/sodor5_rtl/sodor5_top.v ./hdl/sodor5_rtl/sodor_core_5stage.v ./hdl/sodor5_rtl/sodor_mem_model.sv
	make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vsodor5_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS)  -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vsodor5_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o sodor5_cov
	nm sodor5_cov | rev | cut -d' ' -f1 | rev | sed 's/^/fun:/' | grep -vFf $(ALLOWLIST) > $(DENYLIST)
	rm -rf obj_dir sodor5_cov
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc -I./hdl/include -DSIZE_OF_THE_BUS=32 ./hdl/sodor5_rtl/sodor5_top.v ./hdl/sodor5_rtl/sodor_core_5stage.v ./hdl/sodor5_rtl/sodor_mem_model.sv
	export AFL_LLVM_DENYLIST=$(DENYLIST) && make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vsodor5_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS)  -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	export AFL_LLVM_DENYLIST=$(DENYLIST) && $(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vsodor5_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o sodor5_cov

sodor5_edge:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc -I./hdl/include -DSIZE_OF_THE_BUS=32 ./hdl/sodor5_rtl/sodor5_top.v ./hdl/sodor5_rtl/sodor_core_5stage.v ./hdl/sodor5_rtl/sodor_mem_model.sv
	make CXX=$(CXX) CXXFLAGS=$(CXXFLAGS) -C obj_dir -f Vsodor5_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -fprofile-instr-generate -fcoverage-mapping -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(CXX) -fprofile-instr-generate -fcoverage-mapping -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vsodor5_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o sodor5_edge
