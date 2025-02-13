// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_regfile__S1.h"

VL_ATTR_COLD void Vrv32im_top_riscv_regfile__S1___ctor_var_reset(Vrv32im_top_riscv_regfile__S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_regfile__S1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd0_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd0_value_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ra0_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rb0_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ra0_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rb0_value_o = VL_RAND_RESET_I(32);
}
