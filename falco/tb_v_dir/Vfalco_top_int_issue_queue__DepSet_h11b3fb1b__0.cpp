// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_int_issue_queue.h"

VL_INLINE_OPT void Vfalco_top_int_issue_queue___ico_sequent__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___ico_sequent__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSelfRef.issue_ready[0U] = ((vlSelfRef.rs1_ready
                                  [0U] | vlSelfRef.__PVT__issue_rs1
                                  [0U]) & (vlSelfRef.rs2_ready
                                           [0U] | vlSelfRef.__PVT__issue_rs2
                                           [0U]));
    vlSelfRef.issue_ready[1U] = ((vlSelfRef.rs1_ready
                                  [1U] | vlSelfRef.__PVT__issue_rs1
                                  [1U]) & (vlSelfRef.rs2_ready
                                           [1U] | vlSelfRef.__PVT__issue_rs2
                                           [1U]));
    vlSelfRef.issue_ready[2U] = ((vlSelfRef.rs1_ready
                                  [2U] | vlSelfRef.__PVT__issue_rs1
                                  [2U]) & (vlSelfRef.rs2_ready
                                           [2U] | vlSelfRef.__PVT__issue_rs2
                                           [2U]));
    vlSelfRef.issue_ready[3U] = ((vlSelfRef.rs1_ready
                                  [3U] | vlSelfRef.__PVT__issue_rs1
                                  [3U]) & (vlSelfRef.rs2_ready
                                           [3U] | vlSelfRef.__PVT__issue_rs2
                                           [3U]));
    vlSelfRef.issue_ready[4U] = ((vlSelfRef.rs1_ready
                                  [4U] | vlSelfRef.__PVT__issue_rs1
                                  [4U]) & (vlSelfRef.rs2_ready
                                           [4U] | vlSelfRef.__PVT__issue_rs2
                                           [4U]));
    vlSelfRef.issue_ready[5U] = ((vlSelfRef.rs1_ready
                                  [5U] | vlSelfRef.__PVT__issue_rs1
                                  [5U]) & (vlSelfRef.rs2_ready
                                           [5U] | vlSelfRef.__PVT__issue_rs2
                                           [5U]));
    vlSelfRef.issue_ready[6U] = ((vlSelfRef.rs1_ready
                                  [6U] | vlSelfRef.__PVT__issue_rs1
                                  [6U]) & (vlSelfRef.rs2_ready
                                           [6U] | vlSelfRef.__PVT__issue_rs2
                                           [6U]));
    vlSelfRef.issue_ready[7U] = ((vlSelfRef.rs1_ready
                                  [7U] | vlSelfRef.__PVT__issue_rs1
                                  [7U]) & (vlSelfRef.rs2_ready
                                           [7U] | vlSelfRef.__PVT__issue_rs2
                                           [7U]));
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSelfRef.__Vcellinp__Replay_Unit__cur_commit_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [0U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__64__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[0U] = vlSelfRef.__Vfunc_InstrIsCritcal__64__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [1U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__65__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[1U] = vlSelfRef.__Vfunc_InstrIsCritcal__65__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [2U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__66__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[2U] = vlSelfRef.__Vfunc_InstrIsCritcal__66__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [3U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__67__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[3U] = vlSelfRef.__Vfunc_InstrIsCritcal__67__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [4U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__68__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[4U] = vlSelfRef.__Vfunc_InstrIsCritcal__68__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [5U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__69__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[5U] = vlSelfRef.__Vfunc_InstrIsCritcal__69__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [6U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__70__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[6U] = vlSelfRef.__Vfunc_InstrIsCritcal__70__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [7U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__71__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[7U] = vlSelfRef.__Vfunc_InstrIsCritcal__71__Vfuncout;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__muldiv_busy 
        = vlSelfRef.__PVT__muldiv_busy;
    vlSelfRef.__Vcellinp__Replay_Unit__recovery_flush_BCAST 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[0U] 
        = vlSelfRef.issue_ready[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[1U] 
        = vlSelfRef.issue_ready[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[2U] 
        = vlSelfRef.issue_ready[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[3U] 
        = vlSelfRef.issue_ready[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[4U] 
        = vlSelfRef.issue_ready[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[5U] 
        = vlSelfRef.issue_ready[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[6U] 
        = vlSelfRef.issue_ready[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[7U] 
        = vlSelfRef.issue_ready[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__cur_commit_tag 
        = vlSelfRef.__Vcellinp__Replay_Unit__cur_commit_tag;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[0U] 
        = vlSelfRef.__PVT__entry_is_critical[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[1U] 
        = vlSelfRef.__PVT__entry_is_critical[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[2U] 
        = vlSelfRef.__PVT__entry_is_critical[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[3U] 
        = vlSelfRef.__PVT__entry_is_critical[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[4U] 
        = vlSelfRef.__PVT__entry_is_critical[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[5U] 
        = vlSelfRef.__PVT__entry_is_critical[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[6U] 
        = vlSelfRef.__PVT__entry_is_critical[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[7U] 
        = vlSelfRef.__PVT__entry_is_critical[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__recovery_flush_BCAST 
        = vlSelfRef.__Vcellinp__Replay_Unit__recovery_flush_BCAST;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___ico_sequent__TOP__falco_top__core__INT_IQ__1(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___ico_sequent__TOP__falco_top__core__INT_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__PVT__muldiv_issuable = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__muldiv_issuable;
    vlSelfRef.__PVT__wake_up_stall_issue_instr0_valid 
        = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr0_valid;
    vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid 
        = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr1_valid;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_failed_to_issue_muldiv 
        = (((IData)(vlSelfRef.__PVT__replay_issue_instr1_valid) 
            & VL_BITSEL_IWII(205, vlSelfRef.__PVT__replay_issue_instr1_pack, 0x65U)) 
           & (~ (IData)(vlSelfRef.__PVT__muldiv_issuable)));
    vlSelfRef.__PVT__replay_fifo_issue_muldiv = (((IData)(vlSelfRef.__PVT__replay_issue_instr1_valid) 
                                                  & VL_BITSEL_IWII(205, vlSelfRef.__PVT__replay_issue_instr1_pack, 0x65U)) 
                                                 | ((IData)(vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid) 
                                                    & VL_BITSEL_IWII(205, vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack, 0x65U)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__replay_issue_muldiv 
        = vlSelfRef.__PVT__replay_fifo_issue_muldiv;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__INT_selector__recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__recovery_flush 
        = vlSelfRef.__Vcellinp__INT_selector__recovery_flush;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__branch_miss_flush 
        = vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__1(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__2(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__INT_selector__non_posion_issue 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__PVT__issue_lock = ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall));
    vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__Vcellinp__INT_selector__issue_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__load_wake_up_kill 
        = vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__non_posion_issue 
        = vlSelfRef.__Vcellinp__INT_selector__non_posion_issue;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_replay 
        = vlSelfRef.__Vcellinp__INT_selector__issue_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__3(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___ico_comb__TOP__falco_top__core__INT_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0;
    vlSelfRef.__PVT__issue_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1;
    vlSelfRef.__PVT__issue_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0_valid;
    vlSelfRef.__PVT__issue_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___act_sequent__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___act_sequent__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__INT_selector__icache_miss 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss_stall_branch;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__icache_miss 
        = vlSelfRef.__Vcellinp__INT_selector__icache_miss;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__INT_selector__recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__recovery_flush 
        = vlSelfRef.__Vcellinp__INT_selector__recovery_flush;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__branch_miss_flush 
        = vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__1(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__2(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__INT_selector__non_posion_issue 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__PVT__issue_lock = ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall));
    vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__Vcellinp__INT_selector__issue_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__load_wake_up_kill 
        = vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__non_posion_issue 
        = vlSelfRef.__Vcellinp__INT_selector__non_posion_issue;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_replay 
        = vlSelfRef.__Vcellinp__INT_selector__issue_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__3(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___act_comb__TOP__falco_top__core__INT_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0;
    vlSelfRef.__PVT__issue_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1;
    vlSelfRef.__PVT__issue_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0_valid;
    vlSelfRef.__PVT__issue_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    VlWide<7>/*223:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<7>/*223:0*/ __Vtemp_4;
    VlWide<7>/*223:0*/ __Vtemp_5;
    CData/*31:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    VlWide<7>/*223:0*/ __Vtemp_9;
    VlWide<7>/*223:0*/ __Vtemp_10;
    VlWide<7>/*223:0*/ __Vtemp_11;
    CData/*31:0*/ __Vtemp_12;
    VlWide<7>/*223:0*/ __Vtemp_13;
    VlWide<7>/*223:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<7>/*223:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<7>/*223:0*/ __Vtemp_18;
    VlWide<7>/*223:0*/ __Vtemp_19;
    VlWide<7>/*223:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<7>/*223:0*/ __Vtemp_22;
    VlWide<7>/*223:0*/ __Vtemp_23;
    CData/*31:0*/ __Vtemp_24;
    VlWide<7>/*223:0*/ __Vtemp_25;
    CData/*31:0*/ __Vtemp_26;
    VlWide<7>/*223:0*/ __Vtemp_27;
    VlWide<7>/*223:0*/ __Vtemp_28;
    VlWide<7>/*223:0*/ __Vtemp_29;
    CData/*31:0*/ __Vtemp_30;
    VlWide<7>/*223:0*/ __Vtemp_31;
    VlWide<7>/*223:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<7>/*223:0*/ __Vtemp_36;
    VlWide<7>/*223:0*/ __Vtemp_37;
    VlWide<7>/*223:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<7>/*223:0*/ __Vtemp_40;
    VlWide<7>/*223:0*/ __Vtemp_41;
    CData/*31:0*/ __Vtemp_42;
    VlWide<7>/*223:0*/ __Vtemp_43;
    CData/*31:0*/ __Vtemp_44;
    VlWide<7>/*223:0*/ __Vtemp_45;
    VlWide<7>/*223:0*/ __Vtemp_46;
    VlWide<7>/*223:0*/ __Vtemp_47;
    CData/*31:0*/ __Vtemp_48;
    VlWide<7>/*223:0*/ __Vtemp_49;
    VlWide<7>/*223:0*/ __Vtemp_50;
    CData/*31:0*/ __Vtemp_51;
    VlWide<7>/*223:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<7>/*223:0*/ __Vtemp_54;
    VlWide<7>/*223:0*/ __Vtemp_55;
    VlWide<7>/*223:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<7>/*223:0*/ __Vtemp_58;
    VlWide<7>/*223:0*/ __Vtemp_59;
    CData/*31:0*/ __Vtemp_60;
    VlWide<7>/*223:0*/ __Vtemp_61;
    CData/*31:0*/ __Vtemp_62;
    VlWide<7>/*223:0*/ __Vtemp_63;
    VlWide<7>/*223:0*/ __Vtemp_64;
    VlWide<7>/*223:0*/ __Vtemp_65;
    CData/*31:0*/ __Vtemp_66;
    VlWide<7>/*223:0*/ __Vtemp_67;
    VlWide<7>/*223:0*/ __Vtemp_68;
    CData/*31:0*/ __Vtemp_69;
    VlWide<7>/*223:0*/ __Vtemp_70;
    CData/*31:0*/ __Vtemp_71;
    VlWide<7>/*223:0*/ __Vtemp_72;
    // Body
    vlSelfRef.__Vdly__counter = vlSelfRef.__PVT__counter;
    vlSelfRef.__VdlySet__rs1_ready__v0 = 0U;
    vlSelfRef.__VdlySet__rs1_ready__v1 = 0U;
    vlSelfRef.__VdlySet__rs1_ready__v2 = 0U;
    vlSelfRef.__VdlySet__rs1_ready__v3 = 0U;
    vlSelfRef.__VdlySet__rs1_ready__v4 = 0U;
    vlSelfRef.__VdlySet__rs1_ready__v5 = 0U;
    vlSelfRef.__VdlySet__rs1_ready__v6 = 0U;
    vlSelfRef.__VdlySet__rs1_ready__v7 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v0 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v1 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v2 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v3 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v4 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v5 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v6 = 0U;
    vlSelfRef.__VdlySet__rs2_ready__v7 = 0U;
    vlSelfRef.__VdlySet__valid__v0 = 0U;
    vlSelfRef.__VdlySet__valid__v1 = 0U;
    vlSelfRef.__VdlySet__valid__v2 = 0U;
    vlSelfRef.__VdlySet__valid__v3 = 0U;
    vlSelfRef.__VdlySet__valid__v4 = 0U;
    vlSelfRef.__VdlySet__valid__v5 = 0U;
    vlSelfRef.__VdlySet__valid__v6 = 0U;
    vlSelfRef.__VdlySet__valid__v7 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v0 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v1 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v2 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v3 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v4 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v5 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v6 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v7 = 0U;
    vlSelfRef.__Vdly__allocatable_slot_idx0_valid_reg 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg;
    vlSelfRef.__Vdly__allocatable_slot_idx1_valid_reg 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg;
    vlSelfRef.__Vdly__counter = ((IData)(vlSelfRef.__PVT__rst)
                                  ? 8U : (IData)(vlSelfRef.__PVT__counter));
    vlSelfRef.__VdlyVal__rs1_ready__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((0U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__16__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__16__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__16__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__16__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__16__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__16__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__16__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__16__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__16__Vfuncout))
                                               : ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__17__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__17__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__17__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__17__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__17__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__18__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__18__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__18__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__18__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__18__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__18__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__18__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [0U]))));
    vlSelfRef.__VdlySet__rs1_ready__v0 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((1U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__19__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__19__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__19__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__19__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__19__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__19__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__19__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__19__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__19__Vfuncout))
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__20__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__20__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__20__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__20__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__20__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__21__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__21__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__21__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__21__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__21__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__21__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__21__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [1U]))));
    vlSelfRef.__VdlySet__rs1_ready__v1 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((2U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__22__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__22__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__22__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__22__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__22__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__22__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__22__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__22__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__22__Vfuncout))
                                               : ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__23__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__23__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__23__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__23__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__23__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__24__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__24__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__24__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__24__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__24__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__24__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__24__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [2U]))));
    vlSelfRef.__VdlySet__rs1_ready__v2 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((3U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__25__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__25__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__25__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__25__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__25__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__25__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__25__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__25__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__25__Vfuncout))
                                               : ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__26__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__26__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__26__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__26__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__26__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__27__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__27__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__27__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__27__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__27__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__27__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__27__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [3U]))));
    vlSelfRef.__VdlySet__rs1_ready__v3 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((4U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__28__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__28__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__28__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__28__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__28__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__28__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__28__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__28__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__28__Vfuncout))
                                               : ((
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__29__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__29__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__29__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__29__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__29__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__30__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__30__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__30__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__30__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__30__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__30__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__30__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [4U]))));
    vlSelfRef.__VdlySet__rs1_ready__v4 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((5U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__31__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__31__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__31__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__31__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__31__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__31__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__31__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__31__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__31__Vfuncout))
                                               : ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__32__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__32__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__32__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__32__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__32__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__33__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__33__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__33__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__33__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__33__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__33__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__33__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [5U]))));
    vlSelfRef.__VdlySet__rs1_ready__v5 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((6U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__34__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__34__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__34__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__34__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__34__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__34__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__34__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__34__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__34__Vfuncout))
                                               : ((
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__35__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__35__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__35__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__35__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__35__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__36__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__36__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__36__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__36__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__36__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__36__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__36__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [6U]))));
    vlSelfRef.__VdlySet__rs1_ready__v6 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((7U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__37__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__37__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x16U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__37__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__37__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__37__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__37__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__37__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__37__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__37__Vfuncout))
                                               : ((
                                                   (7U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__38__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__38__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x16U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__38__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__38__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__38__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__39__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x16U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__39__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__39__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__39__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__39__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__39__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__39__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs1_ready
                                                   [7U]))));
    vlSelfRef.__VdlySet__rs1_ready__v7 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((0U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__40__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__40__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__40__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__40__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__40__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__40__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__40__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__40__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__40__Vfuncout))
                                               : ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__41__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__41__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__41__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__41__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__41__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__42__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__42__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__42__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__42__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__42__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__42__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__42__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [0U]))));
    vlSelfRef.__VdlySet__rs2_ready__v0 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((1U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__43__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__43__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__43__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__43__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__43__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__43__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__43__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__43__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__43__Vfuncout))
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__44__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__44__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__44__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__44__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__44__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__45__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__45__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__45__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__45__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__45__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__45__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__45__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [1U]))));
    vlSelfRef.__VdlySet__rs2_ready__v1 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((2U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__46__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__46__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__46__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__46__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__46__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__46__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__46__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__46__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__46__Vfuncout))
                                               : ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__47__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__47__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__47__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__47__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__47__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__48__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__48__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__48__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__48__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__48__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__48__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__48__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [2U]))));
    vlSelfRef.__VdlySet__rs2_ready__v2 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((3U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__49__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__49__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__49__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__49__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__49__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__49__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__49__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__49__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__49__Vfuncout))
                                               : ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__50__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__50__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__50__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__50__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__50__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__51__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__51__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__51__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__51__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__51__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__51__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__51__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [3U]))));
    vlSelfRef.__VdlySet__rs2_ready__v3 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((4U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__52__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__52__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__52__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__52__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__52__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__52__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__52__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__52__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__52__Vfuncout))
                                               : ((
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__53__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__53__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__53__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__53__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__53__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__54__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__54__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__54__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__54__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__54__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__54__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__54__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [4U]))));
    vlSelfRef.__VdlySet__rs2_ready__v4 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((5U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__55__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__55__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__55__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__55__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__55__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__55__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__55__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__55__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__55__Vfuncout))
                                               : ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__56__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__56__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__56__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__56__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__56__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__56__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__56__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__56__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__56__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__57__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__57__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__57__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__57__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__57__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__57__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__57__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [5U]))));
    vlSelfRef.__VdlySet__rs2_ready__v5 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((6U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__58__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__58__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__58__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__58__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__58__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__58__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__58__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__58__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__58__Vfuncout))
                                               : ((
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__59__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__59__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__59__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__59__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__59__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__59__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__59__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__59__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__59__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__60__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__60__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__60__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__60__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__60__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__60__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__60__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [6U]))));
    vlSelfRef.__VdlySet__rs2_ready__v6 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((7U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__61__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__61__prf_addr 
                        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, 0x10U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__61__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__61__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__61__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSelfRef.__Vfunc_bypass_network__61__prf_addr) 
                                 == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSelfRef.__Vfunc_bypass_network__61__prf_addr) 
                                == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__61__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__61__Vfuncout))
                                               : ((
                                                   (7U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__62__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__62__prf_addr 
                            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, 0x10U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__62__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__62__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__62__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSelfRef.__Vfunc_bypass_network__62__prf_addr) 
                                     == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSelfRef.__Vfunc_bypass_network__62__prf_addr) 
                                    == (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__62__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__62__Vfuncout))
                                                   : 
                                                  (((([&]() {
                                    vlSelfRef.__Vfunc_wakeup_network__63__prf_addr 
                                        = (0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x10U, 6U));
                                    vlSelfRef.__Vfunc_wakeup_network__63__Vfuncout 
                                        = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__63__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                              & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                             | (((IData)(vlSelfRef.__Vfunc_wakeup_network__63__prf_addr) 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                            | (((IData)(vlSelfRef.__Vfunc_wakeup_network__63__prf_addr) 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                           | (((IData)(vlSelfRef.__Vfunc_wakeup_network__63__prf_addr) 
                                               == (0x3fU 
                                                   & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U))) 
                                              & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                                }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__63__Vfuncout)) 
                                                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed))) 
                                                   || vlSelfRef.rs2_ready
                                                   [7U]))));
    vlSelfRef.__VdlySet__rs2_ready__v7 = 1U;
    vlSelfRef.__VdlyVal__valid__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [0U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__8__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [0U])), 0U)
                                                 : 
                                                ((((0U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((0U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((0U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((0U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [0U])))));
    vlSelfRef.__VdlySet__valid__v0 = 1U;
    vlSelfRef.__VdlyVal__valid__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__9__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [1U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__9__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [1U])), 0U)
                                                 : 
                                                ((((1U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((1U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((1U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [1U])))));
    vlSelfRef.__VdlySet__valid__v1 = 1U;
    vlSelfRef.__VdlyVal__valid__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__10__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [2U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__10__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [2U])), 0U)
                                                 : 
                                                ((((2U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((2U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((2U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((2U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [2U])))));
    vlSelfRef.__VdlySet__valid__v2 = 1U;
    vlSelfRef.__VdlyVal__valid__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__11__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [3U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__11__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [3U])), 0U)
                                                 : 
                                                ((((3U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((3U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((3U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [3U])))));
    vlSelfRef.__VdlySet__valid__v3 = 1U;
    vlSelfRef.__VdlyVal__valid__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__12__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [4U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__12__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [4U])), 0U)
                                                 : 
                                                ((((4U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((4U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((4U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((4U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [4U])))));
    vlSelfRef.__VdlySet__valid__v4 = 1U;
    vlSelfRef.__VdlyVal__valid__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__13__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [5U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__13__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [5U])), 0U)
                                                 : 
                                                ((((5U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((5U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((5U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((5U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [5U])))));
    vlSelfRef.__VdlySet__valid__v5 = 1U;
    vlSelfRef.__VdlyVal__valid__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__14__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [6U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__14__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [6U])), 0U)
                                                 : 
                                                ((((6U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((6U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((6U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((6U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [6U])))));
    vlSelfRef.__VdlySet__valid__v6 = 1U;
    vlSelfRef.__VdlyVal__valid__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__15__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [7U], 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__15__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__Vfuncout))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [7U])), 0U)
                                                 : 
                                                ((((7U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                  | ((7U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                 || ((1U 
                                                      & (~ 
                                                         ((((7U 
                                                             == (IData)(vlSelfRef.__PVT__issue_slot_idx0)) 
                                                            & (IData)(vlSelfRef.__PVT__issue_slot_idx0_valid)) 
                                                           | ((7U 
                                                               == (IData)(vlSelfRef.__PVT__issue_slot_idx1)) 
                                                              & (IData)(vlSelfRef.__PVT__issue_slot_idx1_valid))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                     && vlSelfRef.valid
                                                     [7U])))));
    vlSelfRef.__VdlySet__valid__v7 = 1U;
    VL_CONST_W_1X(205,__Vtemp_1,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_2,0x00000000);
    __Vtemp_3 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [0U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_4, __Vtemp_3, __Vtemp_2, 
                 vlSelfRef.__PVT__issue_slot[0U]);
    VL_COND_WIWW(205, __Vtemp_5, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_4, 
                 vlSelfRef.__PVT__issue_slot[0U]);
    __Vtemp_6 = ((0U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                 & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_7, __Vtemp_6, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_5);
    __Vtemp_8 = ((0U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_9, __Vtemp_8, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_7);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v0, (IData)(vlSelfRef.__PVT__rst), __Vtemp_1, __Vtemp_9);
    vlSelfRef.__VdlySet__issue_slot__v0 = 1U;
    VL_CONST_W_1X(205,__Vtemp_10,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_11,0x00000000);
    __Vtemp_12 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [1U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_13, __Vtemp_12, __Vtemp_11, 
                 vlSelfRef.__PVT__issue_slot[1U]);
    VL_COND_WIWW(205, __Vtemp_14, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_13, 
                 vlSelfRef.__PVT__issue_slot[1U]);
    __Vtemp_15 = ((1U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_16, __Vtemp_15, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_14);
    __Vtemp_17 = ((1U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_18, __Vtemp_17, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_16);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v1, (IData)(vlSelfRef.__PVT__rst), __Vtemp_10, __Vtemp_18);
    vlSelfRef.__VdlySet__issue_slot__v1 = 1U;
    VL_CONST_W_1X(205,__Vtemp_19,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_20,0x00000000);
    __Vtemp_21 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [2U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_22, __Vtemp_21, __Vtemp_20, 
                 vlSelfRef.__PVT__issue_slot[2U]);
    VL_COND_WIWW(205, __Vtemp_23, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_22, 
                 vlSelfRef.__PVT__issue_slot[2U]);
    __Vtemp_24 = ((2U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_25, __Vtemp_24, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_23);
    __Vtemp_26 = ((2U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_27, __Vtemp_26, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_25);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v2, (IData)(vlSelfRef.__PVT__rst), __Vtemp_19, __Vtemp_27);
    vlSelfRef.__VdlySet__issue_slot__v2 = 1U;
    VL_CONST_W_1X(205,__Vtemp_28,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_29,0x00000000);
    __Vtemp_30 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [3U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_31, __Vtemp_30, __Vtemp_29, 
                 vlSelfRef.__PVT__issue_slot[3U]);
    VL_COND_WIWW(205, __Vtemp_32, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_31, 
                 vlSelfRef.__PVT__issue_slot[3U]);
    __Vtemp_33 = ((3U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_34, __Vtemp_33, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_32);
    __Vtemp_35 = ((3U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_36, __Vtemp_35, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_34);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v3, (IData)(vlSelfRef.__PVT__rst), __Vtemp_28, __Vtemp_36);
    vlSelfRef.__VdlySet__issue_slot__v3 = 1U;
    VL_CONST_W_1X(205,__Vtemp_37,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_38,0x00000000);
    __Vtemp_39 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [4U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_40, __Vtemp_39, __Vtemp_38, 
                 vlSelfRef.__PVT__issue_slot[4U]);
    VL_COND_WIWW(205, __Vtemp_41, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_40, 
                 vlSelfRef.__PVT__issue_slot[4U]);
    __Vtemp_42 = ((4U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_43, __Vtemp_42, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_41);
    __Vtemp_44 = ((4U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_45, __Vtemp_44, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_43);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v4, (IData)(vlSelfRef.__PVT__rst), __Vtemp_37, __Vtemp_45);
    vlSelfRef.__VdlySet__issue_slot__v4 = 1U;
    VL_CONST_W_1X(205,__Vtemp_46,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_47,0x00000000);
    __Vtemp_48 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [5U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_49, __Vtemp_48, __Vtemp_47, 
                 vlSelfRef.__PVT__issue_slot[5U]);
    VL_COND_WIWW(205, __Vtemp_50, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_49, 
                 vlSelfRef.__PVT__issue_slot[5U]);
    __Vtemp_51 = ((5U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_52, __Vtemp_51, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_50);
    __Vtemp_53 = ((5U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_54, __Vtemp_53, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_52);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v5, (IData)(vlSelfRef.__PVT__rst), __Vtemp_46, __Vtemp_54);
    vlSelfRef.__VdlySet__issue_slot__v5 = 1U;
    VL_CONST_W_1X(205,__Vtemp_55,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_56,0x00000000);
    __Vtemp_57 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [6U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_58, __Vtemp_57, __Vtemp_56, 
                 vlSelfRef.__PVT__issue_slot[6U]);
    VL_COND_WIWW(205, __Vtemp_59, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_58, 
                 vlSelfRef.__PVT__issue_slot[6U]);
    __Vtemp_60 = ((6U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_61, __Vtemp_60, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_59);
    __Vtemp_62 = ((6U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_63, __Vtemp_62, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_61);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v6, (IData)(vlSelfRef.__PVT__rst), __Vtemp_55, __Vtemp_63);
    vlSelfRef.__VdlySet__issue_slot__v6 = 1U;
    VL_CONST_W_1X(205,__Vtemp_64,0x00000000);
    VL_CONST_W_1X(205,__Vtemp_65,0x00000000);
    __Vtemp_66 = ([&]() {
            vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                                       [7U], 0xaU, 6U));
            vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush 
                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
            vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout 
                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 0U) 
                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag)) 
                       ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                          >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))) 
                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag) 
                         >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))));
        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout));
    VL_COND_WIWW(205, __Vtemp_67, __Vtemp_66, __Vtemp_65, 
                 vlSelfRef.__PVT__issue_slot[7U]);
    VL_COND_WIWW(205, __Vtemp_68, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall), __Vtemp_67, 
                 vlSelfRef.__PVT__issue_slot[7U]);
    __Vtemp_69 = ((7U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(205, __Vtemp_70, __Vtemp_69, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1, __Vtemp_68);
    __Vtemp_71 = ((7U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(205, __Vtemp_72, __Vtemp_71, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0, __Vtemp_70);
    VL_COND_WIWW(205, vlSelfRef.__VdlyVal__issue_slot__v7, (IData)(vlSelfRef.__PVT__rst), __Vtemp_64, __Vtemp_72);
    vlSelfRef.__VdlySet__issue_slot__v7 = 1U;
    vlSelfRef.__PVT__counter = vlSelfRef.__Vdly__counter;
    if (vlSelfRef.__VdlySet__rs1_ready__v0) {
        vlSelfRef.rs1_ready[0U] = vlSelfRef.__VdlyVal__rs1_ready__v0;
    }
    if (vlSelfRef.__VdlySet__rs1_ready__v1) {
        vlSelfRef.rs1_ready[1U] = vlSelfRef.__VdlyVal__rs1_ready__v1;
    }
    if (vlSelfRef.__VdlySet__rs1_ready__v2) {
        vlSelfRef.rs1_ready[2U] = vlSelfRef.__VdlyVal__rs1_ready__v2;
    }
    if (vlSelfRef.__VdlySet__rs1_ready__v3) {
        vlSelfRef.rs1_ready[3U] = vlSelfRef.__VdlyVal__rs1_ready__v3;
    }
    if (vlSelfRef.__VdlySet__rs1_ready__v4) {
        vlSelfRef.rs1_ready[4U] = vlSelfRef.__VdlyVal__rs1_ready__v4;
    }
    if (vlSelfRef.__VdlySet__rs1_ready__v5) {
        vlSelfRef.rs1_ready[5U] = vlSelfRef.__VdlyVal__rs1_ready__v5;
    }
    if (vlSelfRef.__VdlySet__rs1_ready__v6) {
        vlSelfRef.rs1_ready[6U] = vlSelfRef.__VdlyVal__rs1_ready__v6;
    }
    if (vlSelfRef.__VdlySet__rs1_ready__v7) {
        vlSelfRef.rs1_ready[7U] = vlSelfRef.__VdlyVal__rs1_ready__v7;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v0) {
        vlSelfRef.rs2_ready[0U] = vlSelfRef.__VdlyVal__rs2_ready__v0;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v1) {
        vlSelfRef.rs2_ready[1U] = vlSelfRef.__VdlyVal__rs2_ready__v1;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v2) {
        vlSelfRef.rs2_ready[2U] = vlSelfRef.__VdlyVal__rs2_ready__v2;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v3) {
        vlSelfRef.rs2_ready[3U] = vlSelfRef.__VdlyVal__rs2_ready__v3;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v4) {
        vlSelfRef.rs2_ready[4U] = vlSelfRef.__VdlyVal__rs2_ready__v4;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v5) {
        vlSelfRef.rs2_ready[5U] = vlSelfRef.__VdlyVal__rs2_ready__v5;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v6) {
        vlSelfRef.rs2_ready[6U] = vlSelfRef.__VdlyVal__rs2_ready__v6;
    }
    if (vlSelfRef.__VdlySet__rs2_ready__v7) {
        vlSelfRef.rs2_ready[7U] = vlSelfRef.__VdlyVal__rs2_ready__v7;
    }
    if (vlSelfRef.__VdlySet__valid__v0) {
        vlSelfRef.valid[0U] = vlSelfRef.__VdlyVal__valid__v0;
    }
    if (vlSelfRef.__VdlySet__valid__v1) {
        vlSelfRef.valid[1U] = vlSelfRef.__VdlyVal__valid__v1;
    }
    if (vlSelfRef.__VdlySet__valid__v2) {
        vlSelfRef.valid[2U] = vlSelfRef.__VdlyVal__valid__v2;
    }
    if (vlSelfRef.__VdlySet__valid__v3) {
        vlSelfRef.valid[3U] = vlSelfRef.__VdlyVal__valid__v3;
    }
    if (vlSelfRef.__VdlySet__valid__v4) {
        vlSelfRef.valid[4U] = vlSelfRef.__VdlyVal__valid__v4;
    }
    if (vlSelfRef.__VdlySet__valid__v5) {
        vlSelfRef.valid[5U] = vlSelfRef.__VdlyVal__valid__v5;
    }
    if (vlSelfRef.__VdlySet__valid__v6) {
        vlSelfRef.valid[6U] = vlSelfRef.__VdlyVal__valid__v6;
    }
    if (vlSelfRef.__VdlySet__valid__v7) {
        vlSelfRef.valid[7U] = vlSelfRef.__VdlyVal__valid__v7;
    }
    vlSelfRef.__Vdly__dispatch_slot_idx0 = vlSelfRef.__PVT__dispatch_slot_idx0;
    vlSelfRef.__Vdly__dispatch_slot_idx1 = vlSelfRef.__PVT__dispatch_slot_idx1;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[7U] 
        = vlSelfRef.valid[7U];
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__Vdly__dispatch_slot_idx0 = 0U;
        vlSelfRef.__Vdly__dispatch_slot_idx1 = 1U;
        vlSelfRef.__Vdly__allocatable_slot_idx0_valid_reg = 1U;
        vlSelfRef.__Vdly__allocatable_slot_idx1_valid_reg = 1U;
    } else {
        vlSelfRef.__Vdly__dispatch_slot_idx0 = vlSelfRef.__PVT__allocatable_slot_idx0;
        vlSelfRef.__Vdly__dispatch_slot_idx1 = vlSelfRef.__PVT__allocatable_slot_idx1;
        vlSelfRef.__Vdly__allocatable_slot_idx0_valid_reg 
            = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
        vlSelfRef.__Vdly__allocatable_slot_idx1_valid_reg 
            = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
    }
    vlSelfRef.__PVT__dispatch_slot_idx0 = vlSelfRef.__Vdly__dispatch_slot_idx0;
    vlSelfRef.__PVT__dispatch_slot_idx1 = vlSelfRef.__Vdly__dispatch_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg 
        = vlSelfRef.__Vdly__allocatable_slot_idx0_valid_reg;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg 
        = vlSelfRef.__Vdly__allocatable_slot_idx1_valid_reg;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0 
        = vlSelfRef.__PVT__dispatch_slot_idx0;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1 
        = vlSelfRef.__PVT__dispatch_slot_idx1;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__1(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    // Body
    if (vlSelfRef.__PVT__rst) {
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_valid = 0U;
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_valid = 0U;
        VL_CONST_W_1X(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_pack,0x00000000);
        VL_CONST_W_1X(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_pack,0x00000000);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall) {
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_valid 
            = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid;
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_valid 
            = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid;
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_pack, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack);
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_pack, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) {
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_valid 
            = (1U & VL_BITSEL_IIII(32, (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__72__rob_tag 
                                = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0xaU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__72__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__72__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__72__Vfuncout))
                                         ? 0U : VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid))), 0U));
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_valid 
            = (1U & VL_BITSEL_IIII(32, (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__73__rob_tag 
                                = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0xaU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__73__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__73__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__73__Vfuncout))
                                         ? 0U : VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid))), 0U));
        VL_CONST_W_1X(205,__Vtemp_1,0x00000000);
        __Vtemp_2 = ([&]() {
                vlSelfRef.__Vfunc_IsBrROBKill__74__rob_tag 
                    = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0xaU, 6U));
                vlSelfRef.__Vfunc_IsBrROBKill__74__branch_recovery_flush 
                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                vlSelfRef.__Vfunc_IsBrROBKill__74__Vfuncout 
                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__branch_recovery_flush), 0U) 
                       & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__branch_recovery_flush), 3U, 6U)) 
                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__rob_tag)) 
                           ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__branch_recovery_flush), 3U, 6U)) 
                              >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__branch_recovery_flush), 9U, 6U)))) 
                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__rob_tag) 
                             >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__branch_recovery_flush), 9U, 6U)))));
            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__74__Vfuncout));
        VL_COND_WIWW(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_pack, __Vtemp_2, __Vtemp_1, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack);
        VL_CONST_W_1X(205,__Vtemp_3,0x00000000);
        __Vtemp_4 = ([&]() {
                vlSelfRef.__Vfunc_IsBrROBKill__75__rob_tag 
                    = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0xaU, 6U));
                vlSelfRef.__Vfunc_IsBrROBKill__75__branch_recovery_flush 
                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                vlSelfRef.__Vfunc_IsBrROBKill__75__Vfuncout 
                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__branch_recovery_flush), 0U) 
                       & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__branch_recovery_flush), 3U, 6U)) 
                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__rob_tag)) 
                           ^ ((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__branch_recovery_flush), 3U, 6U)) 
                              >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__branch_recovery_flush), 9U, 6U)))) 
                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__rob_tag) 
                             >= (0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__branch_recovery_flush), 9U, 6U)))));
            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__75__Vfuncout));
        VL_COND_WIWW(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_pack, __Vtemp_4, __Vtemp_3, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack);
    } else if (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall))) {
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_valid = 0U;
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_valid = 0U;
        VL_CONST_W_1X(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_pack,0x00000000);
        VL_CONST_W_1X(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_pack,0x00000000);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay) {
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_valid 
            = vlSelfRef.__PVT__replay_issue_instr0_valid;
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_valid 
            = vlSelfRef.__PVT__replay_issue_instr1_valid;
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_pack, vlSelfRef.__PVT__replay_issue_instr0_pack);
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_pack, vlSelfRef.__PVT__replay_issue_instr1_pack);
    } else if (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall) 
                & (IData)(vlSelfRef.__PVT__replay_issue_first))) {
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_valid 
            = vlSelfRef.__PVT__wake_up_stall_issue_instr0_valid;
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_valid 
            = vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid;
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_pack, vlSelfRef.__PVT__wake_up_stall_issue_instr0_pack);
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_pack, vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack);
    } else {
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_valid 
            = vlSelfRef.__PVT__issue_slot_idx0_valid;
        vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_valid 
            = vlSelfRef.__PVT__issue_slot_idx1_valid;
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr0_pack, 
                    vlSelfRef.__PVT__issue_slot[vlSelfRef.__PVT__issue_slot_idx0]);
        VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__int_iq_io_inst.__Vdly__instr1_pack, 
                    vlSelfRef.__PVT__issue_slot[vlSelfRef.__PVT__issue_slot_idx1]);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v0) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [0U], vlSelfRef.__VdlyVal__issue_slot__v0);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v1) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [1U], vlSelfRef.__VdlyVal__issue_slot__v1);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v2) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [2U], vlSelfRef.__VdlyVal__issue_slot__v2);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v3) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [3U], vlSelfRef.__VdlyVal__issue_slot__v3);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v4) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [4U], vlSelfRef.__VdlyVal__issue_slot__v4);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v5) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [5U], vlSelfRef.__VdlyVal__issue_slot__v5);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v6) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [6U], vlSelfRef.__VdlyVal__issue_slot__v6);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v7) {
        VL_ASSIGN_W(205,vlSelfRef.__PVT__issue_slot
                    [7U], vlSelfRef.__VdlyVal__issue_slot__v7);
    }
    vlSelfRef.__PVT__entry_is_muldiv_instr[0U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [0U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[1U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [1U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[2U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [2U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[3U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [3U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[4U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [4U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[5U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [5U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[6U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [6U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[7U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [7U], 0x65U));
    vlSelfRef.__PVT__entry_is_csr_instr[0U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [0U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[1U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [1U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[2U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [2U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[3U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [3U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[4U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [4U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[5U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [5U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[6U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [6U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[7U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [7U], 0x60U));
    vlSelfRef.__PVT__entry_is_ctrl_instr[0U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [0U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [0U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [0U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[1U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [1U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [1U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [1U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[2U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [2U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [2U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [2U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[3U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [3U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [3U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [3U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[4U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [4U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [4U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [4U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[5U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [5U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [5U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [5U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[6U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [6U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [6U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [6U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[7U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [7U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [7U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [7U], 0x62U)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[0U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[1U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[2U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[3U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[4U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[5U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[6U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[7U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[0U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[1U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[2U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[3U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[4U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[5U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[6U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[7U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[7U];
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__2(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__cur_lsu_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__cur_lsu_tag 
        = vlSelfRef.__Vcellinp__Replay_Unit__cur_lsu_tag;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__3(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__rst 
        = vlSelfRef.__PVT__rst;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__4(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__replay_issue_instr0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr0_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr0_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr0_pack);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__wake_up_stall_issue_instr0_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr0_pack);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr1_pack);
    vlSelfRef.__PVT__replay_issue_instr1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr1_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr1_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr1_pack);
    vlSelfRef.__PVT__replay_issue_first = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_first;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__replay_issue_first 
        = vlSelfRef.__PVT__replay_issue_first;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__5(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__muldiv_busy 
        = vlSelfRef.__PVT__muldiv_busy;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__6(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__cur_commit_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__cur_commit_tag 
        = vlSelfRef.__Vcellinp__Replay_Unit__cur_commit_tag;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__7(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_slot_idx0 
        = vlSelfRef.__PVT__dispatch_slot_idx0;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_slot_idx1 
        = vlSelfRef.__PVT__dispatch_slot_idx1;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[0U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[1U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[2U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[3U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[4U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[5U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[6U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[7U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[7U];
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__8(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_sequent__TOP__falco_top__core__INT_IQ__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(205,vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_pack, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack);
    VL_ASSIGN_W(205,vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_pack, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack);
    vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_valid 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid;
    vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_valid 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid;
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid 
        = (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
            & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x63U))) 
           & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x65U)));
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid 
        = (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
            & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x63U))) 
           & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x65U)));
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd 
        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U));
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd 
        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U));
    VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr1_pack, vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_pack);
    VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr0_pack, vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_pack);
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr1_valid 
        = vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr0_valid 
        = vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_valid;
    vlSelfRef.__PVT__issue_rs1[0U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [0U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[1U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [1U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[2U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [2U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[3U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [3U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[4U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [4U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[5U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [5U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[6U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [6U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[7U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [7U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[0U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [0U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[1U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [1U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[2U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [2U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[3U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [3U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[4U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [4U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[5U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [5U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[6U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [6U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[7U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [7U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_ready[0U] = ((vlSelfRef.rs1_ready
                                  [0U] | vlSelfRef.__PVT__issue_rs1
                                  [0U]) & (vlSelfRef.rs2_ready
                                           [0U] | vlSelfRef.__PVT__issue_rs2
                                           [0U]));
    vlSelfRef.issue_ready[1U] = ((vlSelfRef.rs1_ready
                                  [1U] | vlSelfRef.__PVT__issue_rs1
                                  [1U]) & (vlSelfRef.rs2_ready
                                           [1U] | vlSelfRef.__PVT__issue_rs2
                                           [1U]));
    vlSelfRef.issue_ready[2U] = ((vlSelfRef.rs1_ready
                                  [2U] | vlSelfRef.__PVT__issue_rs1
                                  [2U]) & (vlSelfRef.rs2_ready
                                           [2U] | vlSelfRef.__PVT__issue_rs2
                                           [2U]));
    vlSelfRef.issue_ready[3U] = ((vlSelfRef.rs1_ready
                                  [3U] | vlSelfRef.__PVT__issue_rs1
                                  [3U]) & (vlSelfRef.rs2_ready
                                           [3U] | vlSelfRef.__PVT__issue_rs2
                                           [3U]));
    vlSelfRef.issue_ready[4U] = ((vlSelfRef.rs1_ready
                                  [4U] | vlSelfRef.__PVT__issue_rs1
                                  [4U]) & (vlSelfRef.rs2_ready
                                           [4U] | vlSelfRef.__PVT__issue_rs2
                                           [4U]));
    vlSelfRef.issue_ready[5U] = ((vlSelfRef.rs1_ready
                                  [5U] | vlSelfRef.__PVT__issue_rs1
                                  [5U]) & (vlSelfRef.rs2_ready
                                           [5U] | vlSelfRef.__PVT__issue_rs2
                                           [5U]));
    vlSelfRef.issue_ready[6U] = ((vlSelfRef.rs1_ready
                                  [6U] | vlSelfRef.__PVT__issue_rs1
                                  [6U]) & (vlSelfRef.rs2_ready
                                           [6U] | vlSelfRef.__PVT__issue_rs2
                                           [6U]));
    vlSelfRef.issue_ready[7U] = ((vlSelfRef.rs1_ready
                                  [7U] | vlSelfRef.__PVT__issue_rs1
                                  [7U]) & (vlSelfRef.rs2_ready
                                           [7U] | vlSelfRef.__PVT__issue_rs2
                                           [7U]));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[0U] 
        = vlSelfRef.issue_ready[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[1U] 
        = vlSelfRef.issue_ready[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[2U] 
        = vlSelfRef.issue_ready[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[3U] 
        = vlSelfRef.issue_ready[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[4U] 
        = vlSelfRef.issue_ready[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[5U] 
        = vlSelfRef.issue_ready[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[6U] 
        = vlSelfRef.issue_ready[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[7U] 
        = vlSelfRef.issue_ready[7U];
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__recovery_flush_BCAST 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__recovery_flush_BCAST 
        = vlSelfRef.__Vcellinp__Replay_Unit__recovery_flush_BCAST;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__1(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__muldiv_issuable = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__muldiv_issuable;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__2(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [0U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__64__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[0U] = vlSelfRef.__Vfunc_InstrIsCritcal__64__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [1U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__65__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[1U] = vlSelfRef.__Vfunc_InstrIsCritcal__65__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [2U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__66__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[2U] = vlSelfRef.__Vfunc_InstrIsCritcal__66__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [3U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__67__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[3U] = vlSelfRef.__Vfunc_InstrIsCritcal__67__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [4U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__68__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[4U] = vlSelfRef.__Vfunc_InstrIsCritcal__68__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [5U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__69__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[5U] = vlSelfRef.__Vfunc_InstrIsCritcal__69__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [6U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__70__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[6U] = vlSelfRef.__Vfunc_InstrIsCritcal__70__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [7U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__71__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[7U] = vlSelfRef.__Vfunc_InstrIsCritcal__71__Vfuncout;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[0U] 
        = vlSelfRef.__PVT__entry_is_critical[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[1U] 
        = vlSelfRef.__PVT__entry_is_critical[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[2U] 
        = vlSelfRef.__PVT__entry_is_critical[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[3U] 
        = vlSelfRef.__PVT__entry_is_critical[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[4U] 
        = vlSelfRef.__PVT__entry_is_critical[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[5U] 
        = vlSelfRef.__PVT__entry_is_critical[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[6U] 
        = vlSelfRef.__PVT__entry_is_critical[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[7U] 
        = vlSelfRef.__PVT__entry_is_critical[7U];
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__3(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wake_up_stall_issue_instr0_valid 
        = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr0_valid;
    vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid 
        = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr1_valid;
    vlSelfRef.__PVT__replay_fifo_issue_muldiv = (((IData)(vlSelfRef.__PVT__replay_issue_instr1_valid) 
                                                  & VL_BITSEL_IWII(205, vlSelfRef.__PVT__replay_issue_instr1_pack, 0x65U)) 
                                                 | ((IData)(vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid) 
                                                    & VL_BITSEL_IWII(205, vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack, 0x65U)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__replay_issue_muldiv 
        = vlSelfRef.__PVT__replay_fifo_issue_muldiv;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__4(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_failed_to_issue_muldiv 
        = (((IData)(vlSelfRef.__PVT__replay_issue_instr1_valid) 
            & VL_BITSEL_IWII(205, vlSelfRef.__PVT__replay_issue_instr1_pack, 0x65U)) 
           & (~ (IData)(vlSelfRef.__PVT__muldiv_issuable)));
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__5(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__INT_selector__recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__recovery_flush 
        = vlSelfRef.__Vcellinp__INT_selector__recovery_flush;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__branch_miss_flush 
        = vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__6(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__7(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__8(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__INT_selector__non_posion_issue 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__PVT__issue_lock = ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall));
    vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__Vcellinp__INT_selector__issue_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__load_wake_up_kill 
        = vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__non_posion_issue 
        = vlSelfRef.__Vcellinp__INT_selector__non_posion_issue;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_replay 
        = vlSelfRef.__Vcellinp__INT_selector__issue_replay;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__9(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall;
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__10(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___nba_comb__TOP__falco_top__core__INT_IQ__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0;
    vlSelfRef.__PVT__issue_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1;
    vlSelfRef.__PVT__issue_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0_valid;
    vlSelfRef.__PVT__issue_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1_valid;
}
