# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrv32im_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrv32im_top \
	Vrv32im_top___024root__DepSet_h76835086__0 \
	Vrv32im_top___024root__DepSet_h21c2291d__0 \
	Vrv32im_top_rv32im_top__DepSet_he9ed9650__0 \
	Vrv32im_top_rv32im_mem_model__DepSet_hdf87dc27__0 \
	Vrv32im_top_rv32im_mem_model__DepSet_hc8beac7c__0 \
	Vrv32im_top_riscv_core__pi1__DepSet_h3332e39b__0 \
	Vrv32im_top_riscv_exec__DepSet_h393f267f__0 \
	Vrv32im_top_riscv_exec__DepSet_h664692d4__0 \
	Vrv32im_top_riscv_csr__DepSet_h56c47fe1__0 \
	Vrv32im_top_riscv_csr__DepSet_h41fb4a3a__0 \
	Vrv32im_top_riscv_multiplier__DepSet_h41929a18__0 \
	Vrv32im_top_riscv_divider__DepSet_hbdf4da2a__0 \
	Vrv32im_top_riscv_fetch__DepSet_h0eb8f0c3__0 \
	Vrv32im_top_riscv_decode__E1__DepSet_hd3b17ca0__0 \
	Vrv32im_top_riscv_decode__E1__DepSet_hbcd04cfb__0 \
	Vrv32im_top_riscv_mmu__MBffffffff_M0__DepSet_h459b6c20__0 \
	Vrv32im_top_riscv_lsu__MBffffffff_M0__DepSet_hde97be9a__0 \
	Vrv32im_top_riscv_lsu__MBffffffff_M0__DepSet_hc9af0b31__0 \
	Vrv32im_top_riscv_issue__SE1__DepSet_h50417bbe__0 \
	Vrv32im_top_riscv_issue__SE1__DepSet_h3f804e15__0 \
	Vrv32im_top_riscv_alu__DepSet_h296924f0__0 \
	Vrv32im_top_riscv_decoder__DepSet_he7342f21__0 \
	Vrv32im_top_riscv_pipe_ctrl__DepSet_ha7f03a5a__0 \
	Vrv32im_top_riscv_pipe_ctrl__DepSet_hf10f8ef1__0 \
	Vrv32im_top_riscv_lsu_fifo__W24_D2_A1__DepSet_h16f115e8__0 \
	Vrv32im_top_riscv_csr_regfile__SB1__DepSet_hfe96f5b2__0 \
	Vrv32im_top_riscv_regfile__S1__DepSet_h80215de7__0 \
	Vrv32im_top_riscv_trace_sim__DepSet_h0ffdb207__0 \
	Vrv32im_top_riscv_xilinx_2r1w__DepSet_hd8881b21__0 \
	Vrv32im_top_riscv_xilinx_2r1w__DepSet_hc7b76d7a__0 \
	Vrv32im_top_RAM16X1D__DepSet_h1f7a0b9f__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrv32im_top___024root__Slow \
	Vrv32im_top___024root__DepSet_h76835086__0__Slow \
	Vrv32im_top___024root__DepSet_h21c2291d__0__Slow \
	Vrv32im_top_rv32im_top__Slow \
	Vrv32im_top_rv32im_top__DepSet_he9ed9650__0__Slow \
	Vrv32im_top_rv32im_top__DepSet_hb714e2eb__0__Slow \
	Vrv32im_top_rv32im_mem_model__Slow \
	Vrv32im_top_rv32im_mem_model__DepSet_hc8beac7c__0__Slow \
	Vrv32im_top_riscv_core__pi1__Slow \
	Vrv32im_top_riscv_core__pi1__DepSet_h3332e39b__0__Slow \
	Vrv32im_top_riscv_core__pi1__DepSet_h5c51d630__0__Slow \
	Vrv32im_top_riscv_exec__Slow \
	Vrv32im_top_riscv_exec__DepSet_h393f267f__0__Slow \
	Vrv32im_top_riscv_exec__DepSet_h664692d4__0__Slow \
	Vrv32im_top_riscv_csr__Slow \
	Vrv32im_top_riscv_csr__DepSet_h56c47fe1__0__Slow \
	Vrv32im_top_riscv_csr__DepSet_h41fb4a3a__0__Slow \
	Vrv32im_top_riscv_multiplier__Slow \
	Vrv32im_top_riscv_multiplier__DepSet_h41929a18__0__Slow \
	Vrv32im_top_riscv_divider__Slow \
	Vrv32im_top_riscv_divider__DepSet_hbdf4da2a__0__Slow \
	Vrv32im_top_riscv_fetch__Slow \
	Vrv32im_top_riscv_fetch__DepSet_h0eb8f0c3__0__Slow \
	Vrv32im_top_riscv_decode__E1__Slow \
	Vrv32im_top_riscv_decode__E1__DepSet_hd3b17ca0__0__Slow \
	Vrv32im_top_riscv_decode__E1__DepSet_hbcd04cfb__0__Slow \
	Vrv32im_top_riscv_mmu__MBffffffff_M0__Slow \
	Vrv32im_top_riscv_mmu__MBffffffff_M0__DepSet_h459b6c20__0__Slow \
	Vrv32im_top_riscv_lsu__MBffffffff_M0__Slow \
	Vrv32im_top_riscv_lsu__MBffffffff_M0__DepSet_hde97be9a__0__Slow \
	Vrv32im_top_riscv_lsu__MBffffffff_M0__DepSet_hc9af0b31__0__Slow \
	Vrv32im_top_riscv_issue__SE1__Slow \
	Vrv32im_top_riscv_issue__SE1__DepSet_h50417bbe__0__Slow \
	Vrv32im_top_riscv_issue__SE1__DepSet_h3f804e15__0__Slow \
	Vrv32im_top_riscv_alu__Slow \
	Vrv32im_top_riscv_alu__DepSet_h296924f0__0__Slow \
	Vrv32im_top_riscv_decoder__Slow \
	Vrv32im_top_riscv_decoder__DepSet_he7342f21__0__Slow \
	Vrv32im_top_riscv_pipe_ctrl__Slow \
	Vrv32im_top_riscv_pipe_ctrl__DepSet_ha7f03a5a__0__Slow \
	Vrv32im_top_riscv_pipe_ctrl__DepSet_hf10f8ef1__0__Slow \
	Vrv32im_top_riscv_lsu_fifo__W24_D2_A1__Slow \
	Vrv32im_top_riscv_lsu_fifo__W24_D2_A1__DepSet_h16f115e8__0__Slow \
	Vrv32im_top_riscv_csr_regfile__SB1__Slow \
	Vrv32im_top_riscv_csr_regfile__SB1__DepSet_hfe96f5b2__0__Slow \
	Vrv32im_top_riscv_regfile__S1__Slow \
	Vrv32im_top_riscv_regfile__S1__DepSet_h80215de7__0__Slow \
	Vrv32im_top_riscv_regfile__S1__DepSet_h0f602c3c__0__Slow \
	Vrv32im_top_riscv_trace_sim__Slow \
	Vrv32im_top_riscv_trace_sim__DepSet_h0ffdb207__0__Slow \
	Vrv32im_top_riscv_xilinx_2r1w__Slow \
	Vrv32im_top_riscv_xilinx_2r1w__DepSet_hd8881b21__0__Slow \
	Vrv32im_top_riscv_xilinx_2r1w__DepSet_hc7b76d7a__0__Slow \
	Vrv32im_top_RAM16X1D__Slow \
	Vrv32im_top_RAM16X1D__DepSet_h1f7a0b9f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrv32im_top__Dpi \
	Vrv32im_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrv32im_top__Syms \
	Vrv32im_top__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
