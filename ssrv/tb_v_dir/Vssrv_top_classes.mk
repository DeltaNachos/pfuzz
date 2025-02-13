# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vssrv_top.mk for the caller.

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
	Vssrv_top \
	Vssrv_top___024root__DepSet_h41952c3a__0 \
	Vssrv_top___024root__DepSet_h7bfb2b33__0 \
	Vssrv_top_ssrv_top__DepSet_h3e6040c9__0 \
	Vssrv_top_scr1_core_top__DepSet_h8a8d4aa7__0 \
	Vssrv_top_ssrv_mem_model__DepSet_h3d181d12__0 \
	Vssrv_top_ssrv_mem_model__DepSet_h8f701a4b__0 \
	Vssrv_top_scr1_reset_buf_qlfy_cell__DepSet_hb1f1ed17__0 \
	Vssrv_top_scr1_pipe_top__DepSet_h924e97e1__0 \
	Vssrv_top_scr1_pipe_ifu__DepSet_h7b8d0147__0 \
	Vssrv_top_scr1_pipe_idu__DepSet_h060524f3__0 \
	Vssrv_top_scr1_pipe_exu__DepSet_h333fb982__0 \
	Vssrv_top_scr1_pipe_exu__DepSet_h8955b5bb__0 \
	Vssrv_top_scr1_pipe_mprf__DepSet_h971ce1e9__0 \
	Vssrv_top_scr1_pipe_csr__DepSet_hd5663fd6__0 \
	Vssrv_top_scr1_pipe_tdu__DepSet_h2b492625__0 \
	Vssrv_top_scr1_pipe_ialu__DepSet_h55f214a5__0 \
	Vssrv_top_scr1_pipe_lsu__DepSet_h6f995362__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vssrv_top___024root__Slow \
	Vssrv_top___024root__DepSet_h41952c3a__0__Slow \
	Vssrv_top___024root__DepSet_h7bfb2b33__0__Slow \
	Vssrv_top_ssrv_top__Slow \
	Vssrv_top_ssrv_top__DepSet_h3e6040c9__0__Slow \
	Vssrv_top_ssrv_top__DepSet_h8c27cf06__0__Slow \
	Vssrv_top___024unit__Slow \
	Vssrv_top___024unit__DepSet_h202989ea__0__Slow \
	Vssrv_top_scr1_core_top__Slow \
	Vssrv_top_scr1_core_top__DepSet_h8a8d4aa7__0__Slow \
	Vssrv_top_scr1_core_top__DepSet_h4102c498__0__Slow \
	Vssrv_top_ssrv_mem_model__Slow \
	Vssrv_top_ssrv_mem_model__DepSet_h8f701a4b__0__Slow \
	Vssrv_top_scr1_reset_buf_qlfy_cell__Slow \
	Vssrv_top_scr1_reset_buf_qlfy_cell__DepSet_hb1f1ed17__0__Slow \
	Vssrv_top_scr1_pipe_top__Slow \
	Vssrv_top_scr1_pipe_top__DepSet_h924e97e1__0__Slow \
	Vssrv_top_scr1_pipe_top__DepSet_h28469fde__0__Slow \
	Vssrv_top_scr1_pipe_ifu__Slow \
	Vssrv_top_scr1_pipe_ifu__DepSet_h7b8d0147__0__Slow \
	Vssrv_top_scr1_pipe_idu__Slow \
	Vssrv_top_scr1_pipe_idu__DepSet_h060524f3__0__Slow \
	Vssrv_top_scr1_pipe_exu__Slow \
	Vssrv_top_scr1_pipe_exu__DepSet_h333fb982__0__Slow \
	Vssrv_top_scr1_pipe_exu__DepSet_h8955b5bb__0__Slow \
	Vssrv_top_scr1_pipe_mprf__Slow \
	Vssrv_top_scr1_pipe_mprf__DepSet_h971ce1e9__0__Slow \
	Vssrv_top_scr1_pipe_csr__Slow \
	Vssrv_top_scr1_pipe_csr__DepSet_hd5663fd6__0__Slow \
	Vssrv_top_scr1_pipe_tdu__Slow \
	Vssrv_top_scr1_pipe_tdu__DepSet_h2b492625__0__Slow \
	Vssrv_top_scr1_pipe_ialu__Slow \
	Vssrv_top_scr1_pipe_ialu__DepSet_h55f214a5__0__Slow \
	Vssrv_top_scr1_pipe_lsu__Slow \
	Vssrv_top_scr1_pipe_lsu__DepSet_h6f995362__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vssrv_top__Dpi \
	Vssrv_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vssrv_top__Syms \
	Vssrv_top__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
