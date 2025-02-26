// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core_memory_modelling.h"

VL_ATTR_COLD void Vpicorv32core_memory_modelling___ctor_var_reset(Vpicorv32core_memory_modelling* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32core_memory_modelling___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_la_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__current_db.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__initial_db.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__file_handle = 0;
    vlSelf->__PVT__mem_read__Vstatic__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_write__Vstatic__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_mem_read__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_mem_read__0__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_instruction_generator__1__Vfuncout = 0;
    vlSelf->__Vtask_mem_write__2__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mem_write__2__write_strobe = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_mem_write__2__wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mem_ready = VL_RAND_RESET_I(1);
}
