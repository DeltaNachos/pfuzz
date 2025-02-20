// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_pipeline_control_recovery.h"

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___ico_sequent__TOP__falco_top__core__pipeline_ctrl__0(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___ico_sequent__TOP__falco_top__core__pipeline_ctrl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_rollback 
        = (2U == (IData)(vlSelfRef.recovery_state));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush 
        = (1U == (IData)(vlSelfRef.recovery_state));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure 
        = ((2U == (IData)(vlSelfRef.recovery_state)) 
           | (1U == (IData)(vlSelfRef.recovery_state)));
    VL_ASSIGNSEL_II(15,14,1U, vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST, 
                    VL_CONCAT_III(14,6,8, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_0), 
                                  VL_CONCAT_III(8,6,2, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_1), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_0_valid), (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_1_valid)))));
    VL_ASSIGNBIT_II(0U, vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST, vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush);
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__recovery_procedure 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure;
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___ico_sequent__TOP__falco_top__core__pipeline_ctrl__1(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___ico_sequent__TOP__falco_top__core__pipeline_ctrl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_non_idempotent_lock 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent;
    vlSelfRef.__PVT__rollback_finished = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ROB_recovery_finished;
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___ico_comb__TOP__falco_top__core__pipeline_ctrl__0(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___ico_comb__TOP__falco_top__core__pipeline_ctrl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__IF_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ID_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSelfRef.__PVT__recovery_next_state = ((0U == (IData)(vlSelfRef.recovery_state))
                                             ? (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
                                                 | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation))
                                                 ? 1U
                                                 : 0U)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.recovery_state))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.recovery_state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__rollback_finished)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_start 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure) 
           | ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation)));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__start_recovery 
        = (1U == (IData)(vlSelfRef.__PVT__recovery_next_state));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___ico_comb__TOP__falco_top__core__pipeline_ctrl__1(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___ico_comb__TOP__falco_top__core__pipeline_ctrl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__IF_stall 
        = ((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ID_stall 
        = ((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__pc_stall 
        = (((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty)) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_stall 
        = (((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___ico_comb__TOP__falco_top__core__pipeline_ctrl__2(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___ico_comb__TOP__falco_top__core__pipeline_ctrl__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MA_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rr_mem_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__AGU_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__DMEM_access_stall = ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full)) 
                                           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
                                          | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MEM_IQ_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__load_consumer_spec_kill = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall) 
                                                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__load_consumer_spec_replay = ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__load_replay_counter)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill))) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.__PVT__load_replay_counter)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed 
        = ((IData)(vlSelfRef.__PVT__load_consumer_spec_kill) 
           & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall 
        = (((IData)(vlSelfRef.__PVT__load_consumer_spec_kill) 
            | (3U == (IData)(vlSelfRef.__PVT__load_replay_counter))) 
           & (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay 
        = ((IData)(vlSelfRef.__PVT__load_consumer_spec_replay) 
           & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_failed_to_issue_muldiv) 
           & (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___act_sequent__TOP__falco_top__core__pipeline_ctrl__0(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___act_sequent__TOP__falco_top__core__pipeline_ctrl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss_stall_branch 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss;
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__0(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__IF_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ID_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSelfRef.__PVT__recovery_next_state = ((0U == (IData)(vlSelfRef.recovery_state))
                                             ? (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
                                                 | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation))
                                                 ? 1U
                                                 : 0U)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.recovery_state))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.recovery_state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__rollback_finished)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_start 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure) 
           | ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation)));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__start_recovery 
        = (1U == (IData)(vlSelfRef.__PVT__recovery_next_state));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__1(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__IF_stall 
        = ((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ID_stall 
        = ((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_stall 
        = (((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__2(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__pc_stall 
        = (((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty)) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__3(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___act_comb__TOP__falco_top__core__pipeline_ctrl__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MA_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rr_mem_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__AGU_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__DMEM_access_stall = ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full)) 
                                           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
                                          | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MEM_IQ_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__load_consumer_spec_kill = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall) 
                                                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__load_consumer_spec_replay = ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__load_replay_counter)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill))) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.__PVT__load_replay_counter)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed 
        = ((IData)(vlSelfRef.__PVT__load_consumer_spec_kill) 
           & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall 
        = (((IData)(vlSelfRef.__PVT__load_consumer_spec_kill) 
            | (3U == (IData)(vlSelfRef.__PVT__load_replay_counter))) 
           & (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay 
        = ((IData)(vlSelfRef.__PVT__load_consumer_spec_replay) 
           & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_failed_to_issue_muldiv) 
           & (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___nba_sequent__TOP__falco_top__core__pipeline_ctrl__0(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___nba_sequent__TOP__falco_top__core__pipeline_ctrl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__load_consumer_spec_kill_done 
        = vlSelfRef.__PVT__load_consumer_spec_kill_done;
    vlSelfRef.__Vdly__load_replay_counter = vlSelfRef.__PVT__load_replay_counter;
    vlSelfRef.__Vdly__SDA_full_delay = vlSelfRef.__PVT__SDA_full_delay;
    vlSelfRef.__Vdly__load_consumer_spec_kill_done 
        = ((~ (IData)(vlSelfRef.__PVT__rst)) & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done)
                                                 : 
                                                ((~ (IData)(vlSelfRef.__PVT__load_consumer_spec_replay)) 
                                                 & ((IData)(vlSelfRef.__PVT__load_consumer_spec_kill) 
                                                    | (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done)))));
    vlSelfRef.__Vdly__load_replay_counter = (3U & ((IData)(vlSelfRef.__PVT__rst)
                                                    ? 3U
                                                    : 
                                                   (((1U 
                                                      == (IData)(vlSelfRef.recovery_state)) 
                                                     | (2U 
                                                        == (IData)(vlSelfRef.recovery_state)))
                                                     ? (IData)(vlSelfRef.__PVT__load_replay_counter)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done)
                                                      ? 2U
                                                      : 
                                                     ((((3U 
                                                         > (IData)(vlSelfRef.__PVT__load_replay_counter)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill))) 
                                                       & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall)))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__load_replay_counter) 
                                                       - (IData)(1U))
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelfRef.__PVT__load_replay_counter)) 
                                                        | (IData)(vlSelfRef.__PVT__load_consumer_spec_kill))
                                                        ? 3U
                                                        : (IData)(vlSelfRef.__PVT__load_replay_counter)))))));
    vlSelfRef.__Vdly__SDA_full_delay = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full;
    vlSelfRef.__PVT__load_replay_counter = vlSelfRef.__Vdly__load_replay_counter;
    vlSelfRef.__PVT__load_consumer_spec_kill_done = vlSelfRef.__Vdly__load_consumer_spec_kill_done;
    vlSelfRef.__Vdly__recovery_state = vlSelfRef.recovery_state;
    vlSelfRef.__PVT__SDA_full_delay = vlSelfRef.__Vdly__SDA_full_delay;
    vlSelfRef.__Vdly__recovery_state = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (IData)(vlSelfRef.__PVT__recovery_next_state));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall 
        = vlSelfRef.__PVT__SDA_full_delay;
    vlSelfRef.recovery_state = vlSelfRef.__Vdly__recovery_state;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_rollback 
        = (2U == (IData)(vlSelfRef.recovery_state));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush 
        = (1U == (IData)(vlSelfRef.recovery_state));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure 
        = ((2U == (IData)(vlSelfRef.recovery_state)) 
           | (1U == (IData)(vlSelfRef.recovery_state)));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__recovery_procedure 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure;
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__0(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(15,14,1U, vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST, 
                    VL_CONCAT_III(14,6,8, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_0), 
                                  VL_CONCAT_III(8,6,2, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_1), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_0_valid), (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_1_valid)))));
    VL_ASSIGNBIT_II(0U, vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST, vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush);
    vlSelfRef.__PVT__rollback_finished = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ROB_recovery_finished;
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__1(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_non_idempotent_lock 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent;
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__2(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__IF_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ID_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSelfRef.__PVT__recovery_next_state = ((0U == (IData)(vlSelfRef.recovery_state))
                                             ? (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
                                                 | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation))
                                                 ? 1U
                                                 : 0U)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.recovery_state))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.recovery_state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__rollback_finished)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_start 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_flush 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure) 
           | ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation)));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__start_recovery 
        = (1U == (IData)(vlSelfRef.__PVT__recovery_next_state));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__3(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MA_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rr_mem_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__AGU_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__DMEM_access_stall = ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full)) 
                                           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
                                          | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MEM_IQ_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__load_consumer_spec_kill = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall) 
                                                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent));
    vlSelfRef.__PVT__load_consumer_spec_replay = ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__load_replay_counter)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill))) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.__PVT__load_replay_counter)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed 
        = ((IData)(vlSelfRef.__PVT__load_consumer_spec_kill) 
           & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done)));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall 
        = (((IData)(vlSelfRef.__PVT__load_consumer_spec_kill) 
            | (3U == (IData)(vlSelfRef.__PVT__load_replay_counter))) 
           & (IData)(vlSelfRef.__PVT__load_consumer_spec_kill_done));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay 
        = ((IData)(vlSelfRef.__PVT__load_consumer_spec_replay) 
           & (~ (IData)(vlSelfRef.__PVT__load_consumer_spec_kill)));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__4(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__IF_stall 
        = ((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ID_stall 
        = ((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__pc_stall 
        = (((((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty)) 
               | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_stall 
        = (((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty) 
              | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full)) 
             | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full)) 
            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full)) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure));
}

VL_INLINE_OPT void Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__5(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___nba_comb__TOP__falco_top__core__pipeline_ctrl__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_failed_to_issue_muldiv) 
           & (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay));
}
