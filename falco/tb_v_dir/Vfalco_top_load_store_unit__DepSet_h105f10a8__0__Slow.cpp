// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_load_store_unit.h"

VL_ATTR_COLD void Vfalco_top_load_store_unit___ctor_var_reset(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_ck_hit_req = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__load_hit_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__store_commit_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_commit_valid = VL_RAND_RESET_I(1);
    vlSelf->align_access_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__addr_alignment = VL_RAND_RESET_I(2);
    vlSelf->__PVT__LSU_kill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__LSU_stall = VL_RAND_RESET_I(1);
    vlSelf->violation = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__0__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__0__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__1__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__1__rob_tag = VL_RAND_RESET_I(6);
}
