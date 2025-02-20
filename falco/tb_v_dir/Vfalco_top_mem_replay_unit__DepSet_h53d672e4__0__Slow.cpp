// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_mem_replay_unit.h"

VL_ATTR_COLD void Vfalco_top_mem_replay_unit___stl_sequent__TOP__falco_top__core__MEM_IQ__replay_unit__0(Vfalco_top_mem_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_replay_unit___stl_sequent__TOP__falco_top__core__MEM_IQ__replay_unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__replay_issue_instr_valid = vlSelfRef.__PVT__buffer_p1_valid;
    VL_ASSIGN_W(129,vlSelfRef.__PVT__replay_issue_instr_pack, vlSelfRef.__PVT__replay_buffer_p1);
}

VL_ATTR_COLD void Vfalco_top_mem_replay_unit___ctor_var_reset(Vfalco_top_mem_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_replay_unit___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_flush_BCAST = VL_RAND_RESET_I(15);
    vlSelf->__PVT__recovery_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_wake_up_failed_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_wake_up_predict_failed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_depend_replay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_muldiv_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__issue_instr_pack);
    vlSelf->__PVT__replay_issue_instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__replay_issue_instr_pack);
    vlSelf->__PVT__buffer_p0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_p1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__replay_buffer_p0);
    VL_RAND_RESET_W(129, vlSelf->__PVT__replay_buffer_p1);
    vlSelf->__Vfunc_IsBrROBKill__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__0__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__0__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__1__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__1__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__buffer_p0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buffer_p1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__Vdly__replay_buffer_p0);
    VL_RAND_RESET_W(129, vlSelf->__Vdly__replay_buffer_p1);
}
