// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_AGU.h"

VL_ATTR_COLD void Vfalco_top_AGU___ctor_var_reset(Vfalco_top_AGU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_AGU___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unalign_store_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__store_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__access_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__byte_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__memory_align_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__non_idempotent_region = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_network__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__0__rs_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_network__0__prf_register_data = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__0__mem_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__0__alu_csr_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__0__alu1_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__0__muldiv_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__1__rs_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_network__1__prf_register_data = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__1__mem_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__1__alu_csr_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__1__alu1_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__1__muldiv_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_IsBrROBKill__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__2__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__2__rob_tag = VL_RAND_RESET_I(6);
}
