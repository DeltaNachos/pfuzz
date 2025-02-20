// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_pipeline_control_recovery_io.h"

VL_ATTR_COLD void Vfalco_top_pipeline_control_recovery_io___ctor_var_reset(Vfalco_top_pipeline_control_recovery_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_pipeline_control_recovery_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__icache_miss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IF_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IF_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ID_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ID_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__RNDS_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__RNDS_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__freelist_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_iq_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_iq_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rob_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_miss_stall_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__control_flow_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_wake_up_predict_failed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_wake_up_failed_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_depend_replay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_muldiv_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_failed_to_issue_muldiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bp_PrSuccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bp_PrMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_store_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MEM_IQ_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__INT_IQ_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__AGU_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__LSU_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SDA_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__LDA_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_wait_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_set_violation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MA_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__LSU_non_idempotent_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rr_mem_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wait_for_non_idempotent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_flush_BCAST = VL_RAND_RESET_I(15);
    vlSelf->__PVT__commit_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_rob_tag_0 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__flush_rob_tag_1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__flush_rob_tag_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_rob_tag_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_procedure = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_rollback = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ROB_recovery_finished = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_violation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_violation_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__bp_PrSuccess = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__bp_PrMiss = VL_RAND_RESET_I(1);
}
