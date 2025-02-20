VERILATOR_ROOT=/home/erin/Research/Fuzzing/RISC-Optimized/verilator
AFL_PATH=/home/erin/AFLplusplus
COV_PATH=/home/erin/inspector-gadget
CXX=clang++
CXX_FLAGS=-I.  -MMD -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -faligned-new -fcf-protection=none -Wno-bool-operation -Wno-sign-compare -Wno-uninitialized -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable -Wno-shadow
DENYLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/falco/lists/denylist.txt
ALLOWLIST=/home/erin/Research/Fuzzing/RISC-Optimized/cores/falco/lists/allowlist.txt

TYPES = \
    ./include/Include/Falco_pkg.sv

CORE_MODULES = \
	./include/issue_queue/int_balance_picker.sv \
	./include/issue_queue/int_issue_queue.sv \
	./include/issue_queue/int_rob_tag_replay_unit.sv \
	./include/issue_queue/empty_entry_finder.sv \
	./include/issue_queue/empty_entry_finder8_wrapper.sv \
	./include/Cache/L1_cache_pkg.sv \
	./include/Commit/reorder_buffer.sv \
	./include/LoadStoreUnit/combine_data_unit.sv \
	./include/register_read/register_read.sv \
	./include/issue_queue/mem_replay_unit.sv \
	./include/execute/ALU.sv \
	./include/Instruction_Decode/ID_stage_io.sv \
	./include/execute/exe_stage_io.sv \
	./include/Rename_Dispatch/register_map_table.sv \
	./include/Rename_Dispatch/RNDS_stage.sv \
	./include/Address_Generate_stage/AGU_io.sv \
	./include/LoadStoreUnit/load_forward_unit.sv \
	./include/core_top.sv \
	./include/pipeline_recovery/pipeline_control_recovery_io.sv \
	./include/execute/fast_mul.sv \
	./include/issue_queue/int_iq_ctr_rob_tag_balance_selector.sv \
	./include/execute/divider.sv \
	./include/Instruction_Fetch/IF_stage.sv \
	./include/Instruction_Fetch/gshare_branch_predictor.sv \
	./include/LoadStoreUnit/load_store_unit_io.sv \
	./include/issue_queue/int_issue_queue_io.sv \
	./include/LoadStoreUnit/store_buffer.sv \
	./include/execute/alu_csr_bc_execute_group.sv \
	./include/utility/distri_ram2r1w.v \
	./include/register_read/physical_register_file.sv \
	./include/LoadStoreUnit/load_buffer_io.sv \
	./include/issue_queue/mem_iq_balance_selector_wo_store.sv \
	./include/LoadStoreUnit/last_fetch_store_table.sv \
	./include/LoadStoreUnit/load_buffer.sv \
	./include/Commit/committed_map_table.sv \
	./include/Address_Generate_stage/AGU.sv \
	./include/Rename_Dispatch/prf_freelist.sv \
	./include/Rename_Dispatch/busy_list.sv \
	./include/Rename_Dispatch/rename_dispatch_io.sv \
	./include/Instruction_Decode/decoder.sv \
	./include/issue_queue/mem_issue_queue_io.sv \
	./include/Instruction_Decode/ID_stage.sv \
	./include/LoadStoreUnit/mem_access.sv \
	./include/pipeline_recovery/pipeline_control_recovery.sv \
	./include/Instruction_Fetch/program_counter.sv \
	./include/Instruction_Fetch/IF_stage_io.sv \
	./include/LoadStoreUnit/load_store_unit.sv \
	./include/Commit/commit_stage_io.sv \
	./include/execute/branch_unit.sv \
	./include/LoadStoreUnit/store_buffer_io.sv \
	./include/utility/sram_dual_port.sv \
	./include/CSR/csr_io.sv \
	./include/LoadStoreUnit/mem_access_io.sv \
	./include/execute/alu_muldiv_execute_group.sv \
	./include/LoadStoreUnit/store_set_id_table.sv \
	./include/register_read/register_read_io.sv \
	./include/CSR/csr.sv \
	./include/issue_queue/mem_issue_queue.sv \
	./include/Instruction_Fetch/BTB.sv \
	./mem_model/model_parameters.v \
	./mem_model/falco_mem_model.sv \
	./falco_top.sv

VERILATOR_DISABLED_WARNING = \
-Wno-WIDTH \
-Wno-INITIALDLY \
-Wno-UNOPTFLAT \
-Wno-UNPACKED \
-Wno-PINCONNECTEMPTY \
-Wno-ASSIGNDLY \
-Wno-DECLFILENAME \
-Wno-VARHIDDEN \
-Wno-UNOPTTHREADS \
-Wno-BLKANDNBLK \
-Wno-PINMISSING \
-Wno-ASCRANGE \
-Wno-UNSIGNED \
-Wno-CASEOVERLAP \
-Wno-CASEINCOMPLETE \
-Wno-COMBDLY \
-Wno-MULTIDRIVEN



 
# Main Verilator options
VERILATOR_OPTION = \
    --cc \
    --assert \
    -sv \
    $(VERILATOR_DISABLED_WARNING) \
    -DSIZE_OF_THE_BUS=32 \
    +incdir+$(TYPES_DIR) \
    +incdir+$(CORE_DIR)/mem_model \
    --top-module falco_top

#AFL_LLVM_ALLOWLIST=$(ALLOWLIST) 
#AFL_LLVM_ALLOWLIST=$(ALLOWLIST) 
#add back ALLOWLIST
falco_afl:
	$(VERILATOR_ROOT)/bin/verilator -O0 $(VERILATOR_OPTION) $(TYPES) $(CORE_MODULES)
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) make CXX=$(AFL_PATH)/afl-clang-fast++ -C obj_dir -f Vfalco_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS)  -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	AFL_LLVM_ALLOWLIST=$(ALLOWLIST) $(AFL_PATH)/afl-clang-fast++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vfalco_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o falco_afl

falco_cov:
	$(VERILATOR_ROOT)/bin/verilator -O0 $(VERILATOR_OPTION) $(TYPES) $(CORE_MODULES)
	make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vfalco_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vfalco_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o falco_cov
	nm falco_cov | rev | cut -d' ' -f1 | rev | sed 's/^/fun:/' | grep -vFf $(ALLOWLIST) > $(DENYLIST)
	rm -rf obj_dir falco_cov
	$(VERILATOR_ROOT)/bin/verilator -O0 $(VERILATOR_OPTION) $(TYPES) $(CORE_MODULES)
	export AFL_LLVM_DENYLIST=$(DENYLIST) && make CXX=$(COV_PATH)/cov-clang++ -C obj_dir -f Vfalco_top.mk 
	cd obj_dir && $(CXX) $(CXX_FLAGS) -O0 -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	export AFL_LLVM_DENYLIST=$(DENYLIST) && $(COV_PATH)/cov-clang++ -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vfalco_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o falco_cov

falco_edge:
	$(VERILATOR_ROOT)/bin/verilator -O0 $(VERILATOR_OPTION) $(TYPES) $(CORE_MODULES)
	make CXX=$(CXX) CXXFLAGS="-fprofile-instr-generate -fcoverage-mapping" -C obj_dir -f Vfalco_top.mk
	cd obj_dir && $(CXX) $(CXX_FLAGS) -fprofile-instr-generate -fcoverage-mapping -c -o verilated.o $(VERILATOR_ROOT)/include/verilated.cpp
	$(CXX) -v -fprofile-instr-generate -fcoverage-mapping -latomic -I$(VERILATOR_ROOT)/include -pthread -I$(VERILATOR_ROOT)/include/vltstd -I./obj_dir ./c_tests/core_clk_rst.cc ./obj_dir/Vfalco_top__ALL.a ./obj_dir/verilated.o $(VERILATOR_ROOT)/include/verilated_threads.cpp -o falco_edge

testbench:
	verilator -O0 --exe $(VERILATOR_OPTION) $(TYPES) $(CORE_MODULES) -trace core_clk_rst.cc \
		--Mdir tb_v_dir
	$(MAKE) -C tb_v_dir -f Vfalco_top.mk
	cp tb_v_dir/Vfalco_top vfalco

clean:
	rm -rf tb_v_dir
