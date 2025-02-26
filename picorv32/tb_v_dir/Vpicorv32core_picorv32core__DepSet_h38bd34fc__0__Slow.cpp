// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core_picorv32core.h"

VL_ATTR_COLD void Vpicorv32core_picorv32core___ctor_var_reset(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_la_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__resetn = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__resetn = VL_RAND_RESET_I(1);
}
