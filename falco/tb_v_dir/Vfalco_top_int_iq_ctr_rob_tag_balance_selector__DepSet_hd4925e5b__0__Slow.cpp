// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_int_iq_ctr_rob_tag_balance_selector.h"

VL_ATTR_COLD void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___ctor_var_reset(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_is_ctrl_instr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_is_csr_instr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_is_muldiv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_is_critical[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__dispatch_slot_idx0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dispatch_slot_idx1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dispatch_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dispatch_instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_miss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__non_posion_issue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_issue_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_replay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_miss_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_wake_up_kill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_issue_muldiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_issuable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_slot_idx0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__issue_slot_idx1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__issue_slot_idx0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_slot_idx1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_alu_op_slot_idx0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__issue_alu_op_slot_idx1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__issue_control_op_slot = VL_RAND_RESET_I(3);
    vlSelf->__PVT__issue_muldiv_op_slot = VL_RAND_RESET_I(3);
    vlSelf->__PVT__issue_alu_op_slot_idx0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_alu_op_slot_idx1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_control_op_slot_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_muldiv_op_slot_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_muldiv_counter = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->age_counter[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_alu_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_muldiv_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_ctrl_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__unnamedblk3__DOT__i = 0;
    vlSelf->__Vdly__issue_muldiv_counter = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__age_counter__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v0 = 0;
    vlSelf->__VdlyVal__age_counter__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v1 = 0;
    vlSelf->__VdlyVal__age_counter__v2 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v2 = 0;
    vlSelf->__VdlyVal__age_counter__v3 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v3 = 0;
    vlSelf->__VdlyVal__age_counter__v4 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v4 = 0;
    vlSelf->__VdlyVal__age_counter__v5 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v5 = 0;
    vlSelf->__VdlyVal__age_counter__v6 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v6 = 0;
    vlSelf->__VdlyVal__age_counter__v7 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__age_counter__v7 = 0;
}
