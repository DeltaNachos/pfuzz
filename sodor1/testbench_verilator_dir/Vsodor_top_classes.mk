# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsodor_top.mk for the caller.

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
	Vsodor_top \
	Vsodor_top___024root__DepSet_h2d63990b__0 \
	Vsodor_top___024root__DepSet_hd94e1e47__0 \
	Vsodor_top_sodor_top__DepSet_h3f5013fe__0 \
	Vsodor_top_Core__DepSet_hcbc3de1f__0 \
	Vsodor_top_sodor_mem_model__DepSet_h05a68e1d__0 \
	Vsodor_top_sodor_mem_model__DepSet_hc1110f5d__0 \
	Vsodor_top_CtlPath__DepSet_hfec709cc__0 \
	Vsodor_top_DatPath__DepSet_h4aee2d17__0 \
	Vsodor_top_DatPath__DepSet_h52c79678__0 \
	Vsodor_top_CSRFile__DepSet_he259bef7__0 \
	Vsodor_top_CSRFile__DepSet_hfab0a910__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsodor_top___024root__Slow \
	Vsodor_top___024root__DepSet_h2d63990b__0__Slow \
	Vsodor_top___024root__DepSet_hd94e1e47__0__Slow \
	Vsodor_top_sodor_top__Slow \
	Vsodor_top_sodor_top__DepSet_h3f5013fe__0__Slow \
	Vsodor_top_sodor_top__DepSet_heb7fa47a__0__Slow \
	Vsodor_top_Core__Slow \
	Vsodor_top_Core__DepSet_hea74db91__0__Slow \
	Vsodor_top_Core__DepSet_hcbc3de1f__0__Slow \
	Vsodor_top_sodor_mem_model__Slow \
	Vsodor_top_sodor_mem_model__DepSet_hc1110f5d__0__Slow \
	Vsodor_top_CtlPath__Slow \
	Vsodor_top_CtlPath__DepSet_hfec709cc__0__Slow \
	Vsodor_top_DatPath__Slow \
	Vsodor_top_DatPath__DepSet_h4aee2d17__0__Slow \
	Vsodor_top_DatPath__DepSet_h52c79678__0__Slow \
	Vsodor_top_CSRFile__Slow \
	Vsodor_top_CSRFile__DepSet_he259bef7__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsodor_top__Dpi \
	Vsodor_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsodor_top__Syms \
	Vsodor_top__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
