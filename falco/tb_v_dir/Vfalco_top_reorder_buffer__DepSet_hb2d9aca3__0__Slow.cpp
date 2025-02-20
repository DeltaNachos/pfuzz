// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_reorder_buffer.h"

VL_ATTR_COLD void Vfalco_top_reorder_buffer___stl_sequent__TOP__falco_top__core__ROB__0(Vfalco_top_reorder_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_reorder_buffer___stl_sequent__TOP__falco_top__core__ROB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_miss = ((VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 7U) 
                              & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 6U)) 
                             & (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss));
    vlSelfRef.__PVT__commit_0_pc = VL_SEL_IQII(55, 
                                               vlSelfRef.__PVT__rob
                                               [vlSelfRef.commit_ptr], 0x17U, 0x20U);
    vlSelfRef.__PVT__pre_alloc_ptr = (0x3fU & VL_SEL_IIII(32, 
                                                          ((0U 
                                                            == (IData)(vlSelfRef.alloc_ptr))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_EXTEND_II(32,6, (IData)(vlSelfRef.alloc_ptr)) 
                                                            - (IData)(1U))), 0U, 6U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__recovery_target_rob_tag 
        = vlSelfRef.recovery_target;
    vlSelfRef.recovery_rollback_counter_temp1 = (7U 
                                                 & (- 
                                                    VL_SEL_IIII(6, (IData)(vlSelfRef.recovery_target), 0U, 3U)));
    vlSelfRef.recovery_rollback_counter_temp2 = (0x7fU 
                                                 & VL_SEL_IIII(32, 
                                                               (((IData)(vlSelfRef.recovery_start_point) 
                                                                 >= (IData)(vlSelfRef.recovery_target))
                                                                 ? 
                                                                (VL_EXTEND_II(32,6, (IData)(vlSelfRef.recovery_start_point)) 
                                                                 - 
                                                                 VL_EXTEND_II(32,6, (IData)(vlSelfRef.recovery_target)))
                                                                 : 
                                                                (((IData)(0x40U) 
                                                                  + 
                                                                  VL_EXTEND_II(32,6, (IData)(vlSelfRef.recovery_start_point))) 
                                                                 - 
                                                                 VL_EXTEND_II(32,6, (IData)(vlSelfRef.recovery_target)))), 0U, 7U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_rob_tag 
        = vlSelfRef.alloc_ptr;
    vlSelfRef.alloc_next_ptr = (0x3fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.alloc_ptr)));
    vlSelfRef.commit_next_ptr = (0x3fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.commit_ptr)));
    vlSelfRef.recovery_pre_ptr = (0x3fU & VL_SEL_IIII(32, 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.recovery_ptr))
                                                        ? 0x3fU
                                                        : 
                                                       (VL_EXTEND_II(32,6, (IData)(vlSelfRef.recovery_ptr)) 
                                                        - (IData)(1U))), 0U, 6U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_is_empty 
        = (0x40U == (IData)(vlSelfRef.space_counter));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_instr1_check_top 
        = (2U <= (IData)(vlSelfRef.space_counter));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_instr0_check_top 
        = (1U <= (IData)(vlSelfRef.space_counter));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_0 
        = (((IData)(vlSelfRef.recovery_target) == (IData)(vlSelfRef.alloc_ptr))
            ? (IData)(vlSelfRef.recovery_start_point)
            : (IData)(vlSelfRef.recovery_target));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_1 
        = vlSelfRef.recovery_start_point;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_0_valid = 0U;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__flush_rob_tag_1_valid = 0U;
    vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag 
        = vlSelfRef.commit_ptr;
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__start_recovery_tag 
        = ((1U & (VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 7U) 
                  & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 6U)))
            ? VL_EXTEND_II(32,6, (0x3fU & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 0U, 6U)))
            : VL_EXTEND_II(32,6, (IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_rob_tag)));
    vlSelfRef.branch_miss_first = (((((IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_rob_tag) 
                                      > (0x3fU & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 0U, 6U))) 
                                     ^ ((IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_rob_tag) 
                                        > (IData)(vlSelfRef.commit_ptr))) 
                                    ^ ((0x3fU & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 0U, 6U)) 
                                       >= (IData)(vlSelfRef.commit_ptr))) 
                                   & ((VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 7U) 
                                       & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 6U)) 
                                      & (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__bp_PrMiss)));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__recovery_no_copy 
        = ((VL_EXTEND_II(7,3, (IData)(vlSelfRef.recovery_rollback_counter_temp1)) 
            >= (IData)(vlSelfRef.recovery_rollback_counter_temp2)) 
           | ((IData)(vlSelfRef.recovery_target) == (IData)(vlSelfRef.alloc_ptr)));
    vlSelfRef.__PVT__commit_1_pc = VL_SEL_IQII(55, 
                                               vlSelfRef.__PVT__rob
                                               [vlSelfRef.commit_next_ptr], 0x17U, 0x20U);
    vlSelfRef.__PVT__recycle_stale_rd1 = (0x3fU & VL_SEL_IQII(55, 
                                                              vlSelfRef.__PVT__rob
                                                              [vlSelfRef.commit_next_ptr], 0xeU, 6U));
    if (((1U <= (IData)(vlSelfRef.recovery_rollback_counter)) 
         & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob[vlSelfRef.recovery_ptr], 0xdU))) {
        vlSelfRef.__PVT__recovery_entry_rd1_valid = 1U;
        vlSelfRef.__PVT__recovery_new_alloc_prf_rd1 
            = (0x3fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                   [vlSelfRef.recovery_ptr], 2U, 6U));
        vlSelfRef.__PVT__recovery_old_map_prf_rd1 = 
            (0x3fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                 [vlSelfRef.recovery_ptr], 0xeU, 6U));
        vlSelfRef.__PVT__recovery_arf_rd1 = (0x1fU 
                                             & VL_SEL_IQII(55, 
                                                           vlSelfRef.__PVT__rob
                                                           [vlSelfRef.recovery_ptr], 8U, 5U));
    } else if (((2U <= (IData)(vlSelfRef.recovery_rollback_counter)) 
                & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob
                                 [vlSelfRef.recovery_pre_ptr], 0xdU))) {
        vlSelfRef.__PVT__recovery_entry_rd1_valid = 1U;
        vlSelfRef.__PVT__recovery_new_alloc_prf_rd1 
            = (0x3fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                   [vlSelfRef.recovery_pre_ptr], 2U, 6U));
        vlSelfRef.__PVT__recovery_old_map_prf_rd1 = 
            (0x3fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                 [vlSelfRef.recovery_pre_ptr], 0xeU, 6U));
        vlSelfRef.__PVT__recovery_arf_rd1 = (0x1fU 
                                             & VL_SEL_IQII(55, 
                                                           vlSelfRef.__PVT__rob
                                                           [vlSelfRef.recovery_pre_ptr], 8U, 5U));
    } else {
        vlSelfRef.__PVT__recovery_entry_rd1_valid = 0U;
        vlSelfRef.__PVT__recovery_new_alloc_prf_rd1 = 0U;
        vlSelfRef.__PVT__recovery_old_map_prf_rd1 = 0U;
        vlSelfRef.__PVT__recovery_arf_rd1 = 0U;
    }
    if ((((2U <= (IData)(vlSelfRef.recovery_rollback_counter)) 
          & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob
                           [vlSelfRef.recovery_ptr], 0xdU)) 
         & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob[vlSelfRef.recovery_pre_ptr], 0xdU))) {
        vlSelfRef.__PVT__recovery_entry_rd0_valid = 1U;
        vlSelfRef.__PVT__recovery_new_alloc_prf_rd0 
            = (0x3fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                   [vlSelfRef.recovery_pre_ptr], 2U, 6U));
        vlSelfRef.__PVT__recovery_old_map_prf_rd0 = 
            (0x3fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                 [vlSelfRef.recovery_pre_ptr], 0xeU, 6U));
        vlSelfRef.__PVT__recovery_arf_rd0 = (0x1fU 
                                             & VL_SEL_IQII(55, 
                                                           vlSelfRef.__PVT__rob
                                                           [vlSelfRef.recovery_pre_ptr], 8U, 5U));
    } else {
        vlSelfRef.__PVT__recovery_entry_rd0_valid = 0U;
        vlSelfRef.__PVT__recovery_new_alloc_prf_rd0 = 0U;
        vlSelfRef.__PVT__recovery_old_map_prf_rd0 = 0U;
        vlSelfRef.__PVT__recovery_arf_rd0 = 0U;
    }
    vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__branch_miss_first 
        = vlSelfRef.branch_miss_first;
}

VL_ATTR_COLD void Vfalco_top_reorder_buffer___stl_sequent__TOP__falco_top__core__ROB__1(Vfalco_top_reorder_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_reorder_buffer___stl_sequent__TOP__falco_top__core__ROB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__ROB_recovery_finished 
        = ((0U == (IData)(vlSelfRef.recovery_rollback_counter)) 
           & (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_rollback));
    if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_rollback) {
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_old_prf_0 
            = vlSelfRef.__PVT__recovery_old_map_prf_rd0;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_0 
            = vlSelfRef.__PVT__recovery_arf_rd0;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_map_0_valid 
            = vlSelfRef.__PVT__recovery_entry_rd0_valid;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_old_prf_1 
            = vlSelfRef.__PVT__recovery_old_map_prf_rd1;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_1 
            = vlSelfRef.__PVT__recovery_arf_rd1;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_map_1_valid 
            = vlSelfRef.__PVT__recovery_entry_rd1_valid;
    } else {
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_old_prf_0 = 0U;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_0 = 0U;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_map_0_valid = 0U;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_old_prf_1 = 0U;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_1 = 0U;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_map_1_valid = 0U;
    }
}

VL_ATTR_COLD void Vfalco_top_reorder_buffer___stl_comb__TOP__falco_top__core__ROB__0(Vfalco_top_reorder_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_reorder_buffer___stl_comb__TOP__falco_top__core__ROB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__recovery_distance 
        = (0x7fU & (((IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_violation) 
                     & (~ (IData)(vlSelfRef.branch_miss_first)))
                     ? ((IData)(1U) + VL_SEL_IIII(32, 
                                                  (((IData)(vlSelfRef.__PVT__pre_alloc_ptr) 
                                                    >= (IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_rob_tag))
                                                    ? 
                                                   (VL_EXTEND_II(32,6, (IData)(vlSelfRef.__PVT__pre_alloc_ptr)) 
                                                    - 
                                                    VL_EXTEND_II(32,6, (IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_rob_tag)))
                                                    : 
                                                   (((IData)(0x40U) 
                                                     + 
                                                     VL_EXTEND_II(32,6, (IData)(vlSelfRef.__PVT__pre_alloc_ptr))) 
                                                    - 
                                                    VL_EXTEND_II(32,6, (IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_rob_tag)))), 0U, 7U))
                     : ((1U & (VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 7U) 
                               & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 6U)))
                         ? VL_SEL_IIII(32, (((IData)(vlSelfRef.__PVT__pre_alloc_ptr) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 0U, 6U)))
                                             ? (VL_EXTEND_II(32,6, (IData)(vlSelfRef.__PVT__pre_alloc_ptr)) 
                                                - VL_EXTEND_II(32,6, 
                                                               (0x3fU 
                                                                & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 0U, 6U))))
                                             : (((IData)(0x40U) 
                                                 + 
                                                 VL_EXTEND_II(32,6, (IData)(vlSelfRef.__PVT__pre_alloc_ptr))) 
                                                - VL_EXTEND_II(32,6, 
                                                               (0x3fU 
                                                                & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_alu_csr_bc), 0U, 6U))))), 0U, 7U)
                         : 0U)));
}

VL_ATTR_COLD void Vfalco_top_reorder_buffer___stl_comb__TOP__falco_top__core__ROB__1(Vfalco_top_reorder_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_reorder_buffer___stl_comb__TOP__falco_top__core__ROB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__recovery_lock = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure) 
                                      | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_start));
    vlSelfRef.__PVT__commit_instr0 = (1U & ((VL_BITSEL_IQII(55, 
                                                            vlSelfRef.__PVT__rob
                                                            [vlSelfRef.commit_ptr], 1U) 
                                             & VL_BITSEL_IQII(55, 
                                                              vlSelfRef.__PVT__rob
                                                              [vlSelfRef.commit_ptr], 0x14U)) 
                                            & (~ (IData)(vlSelfRef.__PVT__recovery_lock))));
    vlSelfRef.__PVT__commit_instr1 = ((((IData)(vlSelfRef.__PVT__commit_instr0) 
                                        & VL_BITSEL_IQII(55, 
                                                         vlSelfRef.__PVT__rob
                                                         [vlSelfRef.commit_next_ptr], 1U)) 
                                       & VL_BITSEL_IQII(55, 
                                                        vlSelfRef.__PVT__rob
                                                        [vlSelfRef.commit_next_ptr], 0x14U)) 
                                      & (~ (IData)(vlSelfRef.__PVT__recovery_lock)));
    vlSelfRef.__PVT__commit_count = (3U & (VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__commit_instr0)) 
                                           + VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__commit_instr1))));
    vlSelfRef.__PVT__commit_pop = (((IData)(vlSelfRef.__PVT__commit_instr0) 
                                    | (IData)(vlSelfRef.__PVT__commit_instr1)) 
                                   & (~ (IData)(vlSelfRef.__PVT__recovery_lock)));
    vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0 
        = vlSelfRef.__PVT__commit_instr0;
    vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1 
        = vlSelfRef.__PVT__commit_instr1;
    VL_ASSIGNBIT_II(0x17U, vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__committed_update, 
                    ((IData)(vlSelfRef.__PVT__commit_instr0) 
                     & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob
                                      [vlSelfRef.commit_ptr], 0xdU)));
    VL_ASSIGNBIT_II(0x16U, vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__committed_update, 
                    ((IData)(vlSelfRef.__PVT__commit_instr1) 
                     & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob
                                      [vlSelfRef.commit_next_ptr], 0xdU)));
    VL_ASSIGNSEL_II(24,5,0x11U, vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__committed_update, 
                    (0x1fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                         [vlSelfRef.commit_ptr], 8U, 5U)));
    VL_ASSIGNSEL_II(24,11,6U, vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__committed_update, 
                    VL_CONCAT_III(11,5,6, (0x1fU & 
                                           VL_SEL_IQII(55, 
                                                       vlSelfRef.__PVT__rob
                                                       [vlSelfRef.commit_next_ptr], 8U, 5U)), 
                                  (0x3fU & VL_SEL_IQII(55, 
                                                       vlSelfRef.__PVT__rob
                                                       [vlSelfRef.commit_ptr], 2U, 6U))));
    VL_ASSIGNSEL_II(24,6,0U, vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__committed_update, 
                    (0x3fU & VL_SEL_IQII(55, vlSelfRef.__PVT__rob
                                         [vlSelfRef.commit_next_ptr], 2U, 6U)));
    vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid 
        = ((IData)(vlSelfRef.__PVT__commit_instr0) 
           & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob
                            [vlSelfRef.commit_ptr], 0U));
    vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid 
        = ((IData)(vlSelfRef.__PVT__commit_instr1) 
           & VL_BITSEL_IQII(55, vlSelfRef.__PVT__rob
                            [vlSelfRef.commit_next_ptr], 0U));
    vlSelfRef.__PVT__recycle_stale_rd0_valid = (((IData)(vlSelfRef.__PVT__commit_instr0) 
                                                 & VL_BITSEL_IQII(55, 
                                                                  vlSelfRef.__PVT__rob
                                                                  [vlSelfRef.commit_ptr], 0xdU)) 
                                                | ((IData)(vlSelfRef.__PVT__commit_instr1) 
                                                   & VL_BITSEL_IQII(55, 
                                                                    vlSelfRef.__PVT__rob
                                                                    [vlSelfRef.commit_next_ptr], 0xdU)));
    vlSelfRef.__PVT__recycle_stale_rd1_valid = ((((IData)(vlSelfRef.__PVT__commit_instr0) 
                                                  & VL_BITSEL_IQII(55, 
                                                                   vlSelfRef.__PVT__rob
                                                                   [vlSelfRef.commit_ptr], 0xdU)) 
                                                 & (IData)(vlSelfRef.__PVT__commit_instr1)) 
                                                & VL_BITSEL_IQII(55, 
                                                                 vlSelfRef.__PVT__rob
                                                                 [vlSelfRef.commit_next_ptr], 0xdU));
    vlSelfRef.__PVT__recycle_stale_rd0 = (0x3fU & (
                                                   ((IData)(vlSelfRef.__PVT__commit_instr0) 
                                                    & VL_BITSEL_IQII(55, 
                                                                     vlSelfRef.__PVT__rob
                                                                     [vlSelfRef.commit_ptr], 0xdU))
                                                    ? 
                                                   VL_SEL_IQII(55, 
                                                               vlSelfRef.__PVT__rob
                                                               [vlSelfRef.commit_ptr], 0xeU, 6U)
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__commit_instr1) 
                                                     & VL_BITSEL_IQII(55, 
                                                                      vlSelfRef.__PVT__rob
                                                                      [vlSelfRef.commit_next_ptr], 0xdU))
                                                     ? 
                                                    VL_SEL_IQII(55, 
                                                                vlSelfRef.__PVT__rob
                                                                [vlSelfRef.commit_next_ptr], 0xeU, 6U)
                                                     : 0U)));
    if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_rollback) {
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_prf_0 
            = vlSelfRef.__PVT__recovery_new_alloc_prf_rd1;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_prf_1 
            = vlSelfRef.__PVT__recovery_new_alloc_prf_rd0;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_0_valid 
            = vlSelfRef.__PVT__recovery_entry_rd1_valid;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_1_valid 
            = vlSelfRef.__PVT__recovery_entry_rd0_valid;
    } else {
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_prf_0 
            = vlSelfRef.__PVT__recycle_stale_rd0;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_prf_1 
            = vlSelfRef.__PVT__recycle_stale_rd1;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_0_valid 
            = vlSelfRef.__PVT__recycle_stale_rd0_valid;
        vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_1_valid 
            = vlSelfRef.__PVT__recycle_stale_rd1_valid;
    }
}

VL_ATTR_COLD void Vfalco_top_reorder_buffer___stl_comb__TOP__falco_top__core__ROB__2(Vfalco_top_reorder_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_reorder_buffer___stl_comb__TOP__falco_top__core__ROB__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__push_count = (3U & (VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_req)) 
                                         + VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_req))));
    vlSelfRef.__PVT__push = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_req) 
                              | (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_req)) 
                             & (~ (IData)(vlSelfRef.__PVT__recovery_lock)));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rob_tag 
        = ((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_req)
            ? (IData)(vlSelfRef.alloc_next_ptr) : (IData)(vlSelfRef.alloc_ptr));
}
