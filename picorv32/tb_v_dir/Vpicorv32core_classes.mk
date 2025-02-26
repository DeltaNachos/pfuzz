# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vpicorv32core.mk for the caller.

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
	Vpicorv32core \
	Vpicorv32core___024root__DepSet_h64040239__0 \
	Vpicorv32core___024root__DepSet_hd153e0a9__0 \
	Vpicorv32core_picorv32core__DepSet_h8cadd64c__0 \
	Vpicorv32core_memory_modelling__DepSet_h1ca3b31a__0 \
	Vpicorv32core_memory_modelling__DepSet_ha8b34fc6__0 \
	Vpicorv32core_picorv32__DepSet_hfdabf846__0 \
	Vpicorv32core_picorv32__DepSet_h47bb1702__0 \
	Vpicorv32core_picorv32_regs__DepSet_h38016f8e__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vpicorv32core___024root__Slow \
	Vpicorv32core___024root__DepSet_h64040239__0__Slow \
	Vpicorv32core___024root__DepSet_hd153e0a9__0__Slow \
	Vpicorv32core_picorv32core__Slow \
	Vpicorv32core_picorv32core__DepSet_h8cadd64c__0__Slow \
	Vpicorv32core_picorv32core__DepSet_h38bd34fc__0__Slow \
	Vpicorv32core_memory_modelling__Slow \
	Vpicorv32core_memory_modelling__DepSet_ha8b34fc6__0__Slow \
	Vpicorv32core_picorv32__Slow \
	Vpicorv32core_picorv32__DepSet_hfdabf846__0__Slow \
	Vpicorv32core_picorv32__DepSet_h47bb1702__0__Slow \
	Vpicorv32core_picorv32_regs__Slow \
	Vpicorv32core_picorv32_regs__DepSet_h38016f8e__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vpicorv32core__Dpi \
	Vpicorv32core__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vpicorv32core__Syms \
	Vpicorv32core__Trace__0__Slow \
	Vpicorv32core__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
