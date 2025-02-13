# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vbiriscv_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vbiriscv_top \
	Vbiriscv_top___024root__DepSet_h9673af2d__0 \
	Vbiriscv_top___024root__DepSet_hd21307d0__0 \
	Vbiriscv_top_biriscv_top__DepSet_h063eef6c__0 \
	Vbiriscv_top_biriscv_mem_model__DepSet_h97753801__0 \
	Vbiriscv_top_biriscv_mem_model__DepSet_hd10d78e4__0 \
	Vbiriscv_top_riscv_core__SC1_SD1_E1__DepSet_h6d7674ed__0 \
	Vbiriscv_top_biriscv_csr__DepSet_hb9038581__0 \
	Vbiriscv_top_biriscv_csr__DepSet_hbf432e64__0 \
	Vbiriscv_top_biriscv_multiplier__DepSet_h3fca1006__0 \
	Vbiriscv_top_biriscv_divider__DepSet_h8123f1e3__0 \
	Vbiriscv_top_biriscv_issue__DepSet_h1fffcdfc__0 \
	Vbiriscv_top_biriscv_issue__DepSet_h5996e681__0 \
	Vbiriscv_top_biriscv_exec__DepSet_hd4043cc1__0 \
	Vbiriscv_top_biriscv_exec__DepSet_hd4772946__0 \
	Vbiriscv_top_biriscv_frontend__E1__DepSet_h8fdfd522__0 \
	Vbiriscv_top_biriscv_mmu__pi1__DepSet_hc0f713eb__0 \
	Vbiriscv_top_biriscv_lsu__pi2__DepSet_hd2561a08__0 \
	Vbiriscv_top_biriscv_lsu__pi2__DepSet_h15ee9aed__0 \
	Vbiriscv_top_biriscv_npc__DepSet_h178f4e06__0 \
	Vbiriscv_top_biriscv_npc__DepSet_h51c766eb__0 \
	Vbiriscv_top_biriscv_fetch__DepSet_h990d6e73__0 \
	Vbiriscv_top_biriscv_pipe_ctrl__DepSet_h18a56af5__0 \
	Vbiriscv_top_biriscv_pipe_ctrl__DepSet_h0b5a3346__0 \
	Vbiriscv_top_biriscv_regfile__DepSet_h0dd0d307__0 \
	Vbiriscv_top_biriscv_alu__DepSet_h1bd1a806__0 \
	Vbiriscv_top_biriscv_decode__E1__DepSet_h92a61bc0__0 \
	Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1__DepSet_h7c11f75e__0 \
	Vbiriscv_top_biriscv_csr_regfile__SB1__DepSet_h9e3be645__0 \
	Vbiriscv_top_biriscv_npc_lfsr__DepSet_h45379662__0 \
	Vbiriscv_top_fetch_fifo__DepSet_ha646f7bd__0 \
	Vbiriscv_top_biriscv_trace_sim__DepSet_he47b41b6__0 \
	Vbiriscv_top_biriscv_trace_sim__DepSet_he47b41b6__1 \
	Vbiriscv_top_biriscv_decoder__DepSet_h8a0cbbe3__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vbiriscv_top___024root__Slow \
	Vbiriscv_top___024root__DepSet_h9673af2d__0__Slow \
	Vbiriscv_top___024root__DepSet_hd21307d0__0__Slow \
	Vbiriscv_top_biriscv_top__Slow \
	Vbiriscv_top_biriscv_top__DepSet_h063eef6c__0__Slow \
	Vbiriscv_top_biriscv_top__DepSet_h4255c811__0__Slow \
	Vbiriscv_top_biriscv_mem_model__Slow \
	Vbiriscv_top_biriscv_mem_model__DepSet_hd10d78e4__0__Slow \
	Vbiriscv_top_riscv_core__SC1_SD1_E1__Slow \
	Vbiriscv_top_riscv_core__SC1_SD1_E1__DepSet_h6d7674ed__0__Slow \
	Vbiriscv_top_riscv_core__SC1_SD1_E1__DepSet_h6b0e3d90__0__Slow \
	Vbiriscv_top_biriscv_csr__Slow \
	Vbiriscv_top_biriscv_csr__DepSet_hb9038581__0__Slow \
	Vbiriscv_top_biriscv_csr__DepSet_hbf432e64__0__Slow \
	Vbiriscv_top_biriscv_multiplier__Slow \
	Vbiriscv_top_biriscv_multiplier__DepSet_h3fca1006__0__Slow \
	Vbiriscv_top_biriscv_divider__Slow \
	Vbiriscv_top_biriscv_divider__DepSet_h8123f1e3__0__Slow \
	Vbiriscv_top_biriscv_issue__Slow \
	Vbiriscv_top_biriscv_issue__DepSet_h1fffcdfc__0__Slow \
	Vbiriscv_top_biriscv_issue__DepSet_h5996e681__0__Slow \
	Vbiriscv_top_biriscv_exec__Slow \
	Vbiriscv_top_biriscv_exec__DepSet_hd4043cc1__0__Slow \
	Vbiriscv_top_biriscv_exec__DepSet_hd4772946__0__Slow \
	Vbiriscv_top_biriscv_frontend__E1__Slow \
	Vbiriscv_top_biriscv_frontend__E1__DepSet_h8fdfd522__0__Slow \
	Vbiriscv_top_biriscv_frontend__E1__DepSet_hc976ddc7__0__Slow \
	Vbiriscv_top_biriscv_mmu__pi1__Slow \
	Vbiriscv_top_biriscv_mmu__pi1__DepSet_hc0f713eb__0__Slow \
	Vbiriscv_top_biriscv_lsu__pi2__Slow \
	Vbiriscv_top_biriscv_lsu__pi2__DepSet_hd2561a08__0__Slow \
	Vbiriscv_top_biriscv_lsu__pi2__DepSet_h15ee9aed__0__Slow \
	Vbiriscv_top_biriscv_npc__Slow \
	Vbiriscv_top_biriscv_npc__DepSet_h178f4e06__0__Slow \
	Vbiriscv_top_biriscv_npc__DepSet_h51c766eb__0__Slow \
	Vbiriscv_top_biriscv_fetch__Slow \
	Vbiriscv_top_biriscv_fetch__DepSet_h990d6e73__0__Slow \
	Vbiriscv_top_biriscv_pipe_ctrl__Slow \
	Vbiriscv_top_biriscv_pipe_ctrl__DepSet_h18a56af5__0__Slow \
	Vbiriscv_top_biriscv_pipe_ctrl__DepSet_h0b5a3346__0__Slow \
	Vbiriscv_top_biriscv_regfile__Slow \
	Vbiriscv_top_biriscv_regfile__DepSet_h0dd0d307__0__Slow \
	Vbiriscv_top_biriscv_alu__Slow \
	Vbiriscv_top_biriscv_alu__DepSet_h1bd1a806__0__Slow \
	Vbiriscv_top_biriscv_decode__E1__Slow \
	Vbiriscv_top_biriscv_decode__E1__DepSet_h92a61bc0__0__Slow \
	Vbiriscv_top_biriscv_decode__E1__DepSet_hd6de9ca5__0__Slow \
	Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1__Slow \
	Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1__DepSet_h7c11f75e__0__Slow \
	Vbiriscv_top_biriscv_csr_regfile__SB1__Slow \
	Vbiriscv_top_biriscv_csr_regfile__SB1__DepSet_h9e3be645__0__Slow \
	Vbiriscv_top_biriscv_npc_lfsr__Slow \
	Vbiriscv_top_biriscv_npc_lfsr__DepSet_h45379662__0__Slow \
	Vbiriscv_top_fetch_fifo__Slow \
	Vbiriscv_top_fetch_fifo__DepSet_ha646f7bd__0__Slow \
	Vbiriscv_top_biriscv_trace_sim__Slow \
	Vbiriscv_top_biriscv_trace_sim__DepSet_he47b41b6__0__Slow \
	Vbiriscv_top_biriscv_trace_sim__DepSet_he47b41b6__1__Slow \
	Vbiriscv_top_biriscv_decoder__Slow \
	Vbiriscv_top_biriscv_decoder__DepSet_h8a0cbbe3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vbiriscv_top__Dpi \
	Vbiriscv_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vbiriscv_top__Syms \
	Vbiriscv_top__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
