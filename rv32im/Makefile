VERILATOR_ROOT=/home/erin/Research/Fuzzing/RISC-Optimized/verilator
AFL_PATH=/home/erin/AFLplusplus
COV_PATH=/home/erin/inspector-gadget
CXX=clang++
CXX_FLAGS=-I.  -MMD -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -faligned-new -fcf-protection=none -Wno-bool-operation -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow
DENYLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/RV32IM/lists/denylist.txt
ALLOWLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/RV32IM/lists/allowlist.txt

rv32im_afl:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc -I./hdl/include -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/rv32im_top.v
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) make CXX=$(AFL_PATH)/afl-clang-fast++ -C obj_dir -f Vrv32im_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS) -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) $(AFL_PATH)/afl-clang-fast++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vrv32im_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o rv32im_afl

rv32im_cov:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc -I./hdl/include -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/rv32im_top.v
	make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vrv32im_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vrv32im_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o rv32im_cov
	nm rv32im_cov | rev | cut -d' ' -f1 | rev | sed 's/^/fun:/' | grep -vFf $(ALLOWLIST) > $(DENYLIST)
	rm -rf obj_dir rv32im_cov
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc -I./hdl/include -I./hdl/mem_model -DSIZE_OF_THE_BUS=32 ./hdl/rv32im_top.v
	export AFL_LLVM_DENYLIST=$(DENYLIST) && make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vrv32im_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	export AFL_LLVM_DENYLIST=$(DENYLIST) && $(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vrv32im_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o rv32im_cov

rv32im_edge:
	$(VERILATOR_ROOT)/bin/verilator -O0 --cc --I./hdl/mem_model -I./hdl/include -DSIZE_OF_THE_BUS=32 ./hdl/rv32im_top.v
	make CXX=$(CXX) CXXFLAGS="-fprofile-instr-generate -fcoverage-mapping" -C obj_dir -f Vrv32im_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -fprofile-instr-generate -fcoverage-mapping -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(CXX) -v -fprofile-instr-generate -fcoverage-mapping -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vrv32im_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o rv32im_edge


testbench:
	verilator -O0 --cc --exe -I./include -I./mem_model -DSIZE_OF_THE_BUS=32 -Wno-lint -trace \
		--top-module rv32im_top rv32im_top.v core_clk_rst.cc \
		--Mdir tb_v_dir
	$(MAKE) -C tb_v_dir -f Vrv32im_top.mk
	cp tb_v_dir/Vrv32im_top vrv32im

clean:
	rm -rf tb_v_dir

