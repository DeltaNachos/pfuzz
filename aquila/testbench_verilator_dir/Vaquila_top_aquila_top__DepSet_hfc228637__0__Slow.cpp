// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_aquila_top.h"

VL_ATTR_COLD void Vaquila_top_aquila_top___ctor_var_reset(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_core_in = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_addr_ext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ext_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tmr_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sft_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__code_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_core_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_rw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_byte_enable = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_is_amo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_amo_type = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cache_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset = VL_RAND_RESET_I(1);
}
