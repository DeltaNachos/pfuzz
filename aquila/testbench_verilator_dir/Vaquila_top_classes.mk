# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vaquila_top.mk for the caller.

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
	Vaquila_top \
	Vaquila_top___024root__DepSet_h1fc16250__0 \
	Vaquila_top___024root__DepSet_h33881bff__0 \
	Vaquila_top_aquila_top__DepSet_h48670f98__0 \
	Vaquila_top_core_top__DepSet_h58143233__0 \
	Vaquila_top_core_top__DepSet_hec356b9e__0 \
	Vaquila_top_aquila_mem_model__DepSet_h027d0082__0 \
	Vaquila_top_aquila_mem_model__DepSet_h461c794d__0 \
	Vaquila_top_csr_file__DepSet_he4371f66__0 \
	Vaquila_top_pipeline_control__DepSet_hc7babc52__0 \
	Vaquila_top_forwarding_unit__DepSet_h2d0277c4__0 \
	Vaquila_top_bpu__DepSet_hb591a89f__0 \
	Vaquila_top_bpu__DepSet_h99b7e132__0 \
	Vaquila_top_reg_file__DepSet_h64359b57__0 \
	Vaquila_top_program_counter__DepSet_h9b286597__0 \
	Vaquila_top_fetch__DepSet_h33f9cacf__0 \
	Vaquila_top_decode__DepSet_hdaed27dd__0 \
	Vaquila_top_execute__DepSet_h5a40f0a5__0 \
	Vaquila_top_execute__DepSet_hee08a92c__0 \
	Vaquila_top_memory__DepSet_h7fa17a3d__0 \
	Vaquila_top_writeback__DepSet_h71f368dd__0 \
	Vaquila_top_alu__DepSet_h0c327b02__0 \
	Vaquila_top_muldiv__DepSet_hac7c40f6__0 \
	Vaquila_top_bcu__DepSet_h25479d77__0 \
	Vaquila_top_distri_ram__E40__DepSet_h42708736__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vaquila_top___024root__Slow \
	Vaquila_top___024root__DepSet_h1fc16250__0__Slow \
	Vaquila_top___024root__DepSet_h33881bff__0__Slow \
	Vaquila_top_aquila_top__Slow \
	Vaquila_top_aquila_top__DepSet_h48670f98__0__Slow \
	Vaquila_top_aquila_top__DepSet_hfc228637__0__Slow \
	Vaquila_top_core_top__Slow \
	Vaquila_top_core_top__DepSet_h58143233__0__Slow \
	Vaquila_top_core_top__DepSet_hec356b9e__0__Slow \
	Vaquila_top_aquila_mem_model__Slow \
	Vaquila_top_aquila_mem_model__DepSet_h461c794d__0__Slow \
	Vaquila_top_csr_file__Slow \
	Vaquila_top_csr_file__DepSet_he4371f66__0__Slow \
	Vaquila_top_pipeline_control__Slow \
	Vaquila_top_pipeline_control__DepSet_hc7babc52__0__Slow \
	Vaquila_top_forwarding_unit__Slow \
	Vaquila_top_forwarding_unit__DepSet_h2d0277c4__0__Slow \
	Vaquila_top_bpu__Slow \
	Vaquila_top_bpu__DepSet_hb591a89f__0__Slow \
	Vaquila_top_bpu__DepSet_h99b7e132__0__Slow \
	Vaquila_top_reg_file__Slow \
	Vaquila_top_reg_file__DepSet_h64359b57__0__Slow \
	Vaquila_top_program_counter__Slow \
	Vaquila_top_program_counter__DepSet_h9b286597__0__Slow \
	Vaquila_top_fetch__Slow \
	Vaquila_top_fetch__DepSet_h33f9cacf__0__Slow \
	Vaquila_top_decode__Slow \
	Vaquila_top_decode__DepSet_hdaed27dd__0__Slow \
	Vaquila_top_execute__Slow \
	Vaquila_top_execute__DepSet_h5a40f0a5__0__Slow \
	Vaquila_top_execute__DepSet_hee08a92c__0__Slow \
	Vaquila_top_memory__Slow \
	Vaquila_top_memory__DepSet_h7fa17a3d__0__Slow \
	Vaquila_top_writeback__Slow \
	Vaquila_top_writeback__DepSet_h71f368dd__0__Slow \
	Vaquila_top_alu__Slow \
	Vaquila_top_alu__DepSet_h0c327b02__0__Slow \
	Vaquila_top_muldiv__Slow \
	Vaquila_top_muldiv__DepSet_hac7c40f6__0__Slow \
	Vaquila_top_bcu__Slow \
	Vaquila_top_bcu__DepSet_h25479d77__0__Slow \
	Vaquila_top_distri_ram__E40__Slow \
	Vaquila_top_distri_ram__E40__DepSet_h42708736__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vaquila_top__Dpi \
	Vaquila_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vaquila_top__Syms \
	Vaquila_top__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
