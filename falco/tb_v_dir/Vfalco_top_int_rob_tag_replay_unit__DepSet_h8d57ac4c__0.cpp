// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_int_rob_tag_replay_unit.h"

VL_INLINE_OPT void Vfalco_top_int_rob_tag_replay_unit___ico_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__0(Vfalco_top_int_rob_tag_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_rob_tag_replay_unit___ico_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx0_p0, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__0__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx0_p0_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__0__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx0_p1, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__1__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx0_p1_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__1__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx1_p0, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__2__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx1_p0_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__2__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx1_p1, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__3__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx1_p1_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__3__Vfuncout;
    vlSelfRef.__PVT__wake_up_stall_issue_instr0_valid 
        = ((IData)(vlSelfRef.__PVT__wake_up_replay_select)
            ? ((IData)(vlSelfRef.__PVT__buffer_idx0_p0_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx0_p0_is_critcal))
            : ((IData)(vlSelfRef.__PVT__buffer_idx0_p1_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx0_p1_is_critcal)));
    vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid 
        = ((IData)(vlSelfRef.__PVT__wake_up_replay_select)
            ? ((IData)(vlSelfRef.__PVT__buffer_idx1_p0_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx1_p0_is_critcal))
            : ((IData)(vlSelfRef.__PVT__buffer_idx1_p1_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx1_p1_is_critcal)));
}

VL_INLINE_OPT void Vfalco_top_int_rob_tag_replay_unit___nba_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__0(Vfalco_top_int_rob_tag_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_rob_tag_replay_unit___nba_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_3;
    VlWide<7>/*223:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    VlWide<7>/*223:0*/ __Vtemp_9;
    VlWide<7>/*223:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<7>/*223:0*/ __Vtemp_12;
    // Body
    vlSelfRef.__Vdly__replay_drop_first = vlSelfRef.__PVT__replay_drop_first;
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__replay_buffer_idx0_p0, vlSelfRef.__PVT__replay_buffer_idx0_p0);
    vlSelfRef.__Vdly__replay_issue_first_counter = vlSelfRef.__PVT__replay_issue_first_counter;
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__replay_buffer_idx0_p1, vlSelfRef.__PVT__replay_buffer_idx0_p1);
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__replay_buffer_idx1_p0, vlSelfRef.__PVT__replay_buffer_idx1_p0);
    vlSelfRef.__Vdly__wake_up_replay_select = vlSelfRef.__PVT__wake_up_replay_select;
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__replay_buffer_idx1_p1, vlSelfRef.__PVT__replay_buffer_idx1_p1);
    vlSelfRef.__Vdly__buffer_idx0_p0_valid = vlSelfRef.__PVT__buffer_idx0_p0_valid;
    vlSelfRef.__Vdly__buffer_idx1_p0_valid = vlSelfRef.__PVT__buffer_idx1_p0_valid;
    vlSelfRef.__Vdly__buffer_idx0_p1_valid = vlSelfRef.__PVT__buffer_idx0_p1_valid;
    vlSelfRef.__Vdly__buffer_idx1_p1_valid = vlSelfRef.__PVT__buffer_idx1_p1_valid;
    vlSelfRef.__Vdly__replay_drop_first = ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                           & ((~ ((IData)(vlSelfRef.__PVT__load_wake_up_predict_failed) 
                                                  | (IData)(vlSelfRef.__PVT__load_wake_up_failed_stall))) 
                                              & ((IData)(vlSelfRef.__PVT__recovery_stall)
                                                  ? (IData)(vlSelfRef.__PVT__replay_drop_first)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__load_depend_replay) 
                                                  | (IData)(vlSelfRef.__PVT__replay_drop_first)))));
    VL_CONST_W_1X(205,__Vtemp_1,0x00000000);
    __Vtemp_2 = (((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall) 
                  | (IData)(vlSelfRef.__PVT__recovery_stall)) 
                 | (IData)(vlSelfRef.__PVT__replay_muldiv_stall));
    VL_COND_WIWW(205, __Vtemp_3, __Vtemp_2, vlSelfRef.__PVT__replay_buffer_idx0_p0, vlSelfRef.__PVT__issue_instr0_pack);
    VL_COND_WIWW(205, vlSelfRef.__Vdly__replay_buffer_idx0_p0, (IData)(vlSelfRef.__PVT__rst), __Vtemp_1, __Vtemp_3);
    vlSelfRef.__Vdly__replay_issue_first_counter = 
        (3U & ((IData)(vlSelfRef.__PVT__rst) ? 0U : 
               ((IData)(vlSelfRef.__PVT__load_wake_up_predict_failed)
                 ? 0U : ((IData)(vlSelfRef.__PVT__recovery_stall)
                          ? (IData)(vlSelfRef.__PVT__replay_issue_first_counter)
                          : ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall)
                              ? VL_SEL_IIII(32, ((1U 
                                                  >= (IData)(vlSelfRef.__PVT__replay_issue_first_counter))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__replay_issue_first_counter)))
                                                  : 
                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__replay_issue_first_counter))), 0U, 2U)
                              : (IData)(vlSelfRef.__PVT__replay_issue_first_counter))))));
    VL_CONST_W_1X(205,__Vtemp_4,0x00000000);
    __Vtemp_5 = (((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall) 
                  | (IData)(vlSelfRef.__PVT__recovery_stall)) 
                 | (IData)(vlSelfRef.__PVT__replay_muldiv_stall));
    VL_COND_WIWW(205, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__replay_buffer_idx0_p1, vlSelfRef.__PVT__replay_buffer_idx0_p0);
    VL_COND_WIWW(205, vlSelfRef.__Vdly__replay_buffer_idx0_p1, (IData)(vlSelfRef.__PVT__rst), __Vtemp_4, __Vtemp_6);
    VL_CONST_W_1X(205,__Vtemp_7,0x00000000);
    __Vtemp_8 = (((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall) 
                  | (IData)(vlSelfRef.__PVT__recovery_stall)) 
                 | (IData)(vlSelfRef.__PVT__replay_muldiv_stall));
    VL_COND_WIWW(205, __Vtemp_9, __Vtemp_8, vlSelfRef.__PVT__replay_buffer_idx1_p0, vlSelfRef.__PVT__issue_instr1_pack);
    VL_COND_WIWW(205, vlSelfRef.__Vdly__replay_buffer_idx1_p0, (IData)(vlSelfRef.__PVT__rst), __Vtemp_7, __Vtemp_9);
    vlSelfRef.__Vdly__wake_up_replay_select = ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & ((~ (IData)(vlSelfRef.__PVT__load_wake_up_predict_failed)) 
                                                  & ((IData)(vlSelfRef.__PVT__recovery_stall)
                                                      ? (IData)(vlSelfRef.__PVT__wake_up_replay_select)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall) 
                                                      | (IData)(vlSelfRef.__PVT__wake_up_replay_select)))));
    VL_CONST_W_1X(205,__Vtemp_10,0x00000000);
    __Vtemp_11 = (((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall) 
                   | (IData)(vlSelfRef.__PVT__recovery_stall)) 
                  | (IData)(vlSelfRef.__PVT__replay_muldiv_stall));
    VL_COND_WIWW(205, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__replay_buffer_idx1_p1, vlSelfRef.__PVT__replay_buffer_idx1_p0);
    VL_COND_WIWW(205, vlSelfRef.__Vdly__replay_buffer_idx1_p1, (IData)(vlSelfRef.__PVT__rst), __Vtemp_10, __Vtemp_12);
    vlSelfRef.__Vdly__buffer_idx0_p0_valid = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & (((IData)(vlSelfRef.__PVT__recovery_stall) 
                                                   | (IData)(vlSelfRef.__PVT__replay_muldiv_stall))
                                                   ? 
                                                  VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx0_p0, 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush 
                                    = vlSelfRef.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx0_p0_valid))), 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall)
                                                    ? 
                                                   VL_BITSEL_IIII(32, 
                                                                  ((((IData)(vlSelfRef.__PVT__wake_up_replay_select) 
                                                                     & (IData)(vlSelfRef.__PVT__buffer_idx0_p0_is_critcal)) 
                                                                    & (IData)(vlSelfRef.__PVT__replay_issue_first))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx0_p0_valid))), 0U)
                                                    : 
                                                   ((~ 
                                                     ((IData)(vlSelfRef.__PVT__load_depend_replay) 
                                                      & (~ (IData)(vlSelfRef.__PVT__replay_drop_first)))) 
                                                    & (IData)(vlSelfRef.__PVT__issue_instr0_valid))))));
    vlSelfRef.__Vdly__buffer_idx1_p0_valid = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & (((IData)(vlSelfRef.__PVT__recovery_stall) 
                                                   | (IData)(vlSelfRef.__PVT__replay_muldiv_stall))
                                                   ? 
                                                  VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx1_p0, 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush 
                                    = vlSelfRef.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx1_p0_valid))), 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall)
                                                    ? 
                                                   VL_BITSEL_IIII(32, 
                                                                  ((((IData)(vlSelfRef.__PVT__wake_up_replay_select) 
                                                                     & (IData)(vlSelfRef.__PVT__buffer_idx1_p0_is_critcal)) 
                                                                    & (IData)(vlSelfRef.__PVT__replay_issue_first))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx1_p0_valid))), 0U)
                                                    : 
                                                   ((~ 
                                                     ((IData)(vlSelfRef.__PVT__load_depend_replay) 
                                                      & (~ (IData)(vlSelfRef.__PVT__replay_drop_first)))) 
                                                    & (IData)(vlSelfRef.__PVT__issue_instr1_valid))))));
    vlSelfRef.__Vdly__buffer_idx0_p1_valid = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & (((IData)(vlSelfRef.__PVT__recovery_stall) 
                                                   | (IData)(vlSelfRef.__PVT__replay_muldiv_stall))
                                                   ? 
                                                  VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx0_p1, 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush 
                                    = vlSelfRef.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx0_p1_valid))), 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall)
                                                    ? 
                                                   VL_BITSEL_IIII(32, 
                                                                  ((((~ (IData)(vlSelfRef.__PVT__wake_up_replay_select)) 
                                                                     & (IData)(vlSelfRef.__PVT__buffer_idx0_p1_is_critcal)) 
                                                                    & (IData)(vlSelfRef.__PVT__replay_issue_first))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx0_p1_valid))), 0U)
                                                    : (IData)(vlSelfRef.__PVT__buffer_idx0_p0_valid)))));
    vlSelfRef.__Vdly__buffer_idx1_p1_valid = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & (((IData)(vlSelfRef.__PVT__recovery_stall) 
                                                   | (IData)(vlSelfRef.__PVT__replay_muldiv_stall))
                                                   ? 
                                                  VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx1_p1, 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush 
                                    = vlSelfRef.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx1_p1_valid))), 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall)
                                                    ? 
                                                   VL_BITSEL_IIII(32, 
                                                                  ((((~ (IData)(vlSelfRef.__PVT__wake_up_replay_select)) 
                                                                     & (IData)(vlSelfRef.__PVT__buffer_idx1_p1_is_critcal)) 
                                                                    & (IData)(vlSelfRef.__PVT__replay_issue_first))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_idx1_p1_valid))), 0U)
                                                    : (IData)(vlSelfRef.__PVT__buffer_idx1_p0_valid)))));
    vlSelfRef.__PVT__replay_issue_first_counter = vlSelfRef.__Vdly__replay_issue_first_counter;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_buffer_idx0_p0, vlSelfRef.__Vdly__replay_buffer_idx0_p0);
    vlSelfRef.__PVT__replay_drop_first = vlSelfRef.__Vdly__replay_drop_first;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_buffer_idx1_p0, vlSelfRef.__Vdly__replay_buffer_idx1_p0);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_buffer_idx0_p1, vlSelfRef.__Vdly__replay_buffer_idx0_p1);
    vlSelfRef.__PVT__buffer_idx0_p0_valid = vlSelfRef.__Vdly__buffer_idx0_p0_valid;
    vlSelfRef.__PVT__buffer_idx0_p1_valid = vlSelfRef.__Vdly__buffer_idx0_p1_valid;
    vlSelfRef.__PVT__wake_up_replay_select = vlSelfRef.__Vdly__wake_up_replay_select;
    vlSelfRef.__PVT__buffer_idx1_p0_valid = vlSelfRef.__Vdly__buffer_idx1_p0_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_buffer_idx1_p1, vlSelfRef.__Vdly__replay_buffer_idx1_p1);
    vlSelfRef.__PVT__buffer_idx1_p1_valid = vlSelfRef.__Vdly__buffer_idx1_p1_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr0_pack, vlSelfRef.__PVT__replay_buffer_idx0_p1);
    vlSelfRef.__PVT__replay_issue_instr0_valid = vlSelfRef.__PVT__buffer_idx0_p1_valid;
    VL_COND_WIWW(205, vlSelfRef.__PVT__wake_up_stall_issue_instr0_pack, (IData)(vlSelfRef.__PVT__wake_up_replay_select), vlSelfRef.__PVT__replay_buffer_idx0_p0, vlSelfRef.__PVT__replay_buffer_idx0_p1);
    VL_COND_WIWW(205, vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack, (IData)(vlSelfRef.__PVT__wake_up_replay_select), vlSelfRef.__PVT__replay_buffer_idx1_p0, vlSelfRef.__PVT__replay_buffer_idx1_p1);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr1_pack, vlSelfRef.__PVT__replay_buffer_idx1_p1);
    vlSelfRef.__PVT__replay_issue_instr1_valid = vlSelfRef.__PVT__buffer_idx1_p1_valid;
    vlSelfRef.__PVT__replay_issue_first = ((1U >= (IData)(vlSelfRef.__PVT__replay_issue_first_counter)) 
                                           & ((((IData)(vlSelfRef.__PVT__buffer_idx0_p0_valid) 
                                                | (IData)(vlSelfRef.__PVT__buffer_idx0_p1_valid)) 
                                               | (IData)(vlSelfRef.__PVT__buffer_idx1_p0_valid)) 
                                              | (IData)(vlSelfRef.__PVT__buffer_idx1_p1_valid)));
}

VL_INLINE_OPT void Vfalco_top_int_rob_tag_replay_unit___nba_comb__TOP__falco_top__core__INT_IQ__Replay_Unit__0(Vfalco_top_int_rob_tag_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_rob_tag_replay_unit___nba_comb__TOP__falco_top__core__INT_IQ__Replay_Unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx0_p0, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__0__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__0__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx0_p0_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__0__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx0_p1, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__1__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__1__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx0_p1_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__1__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx1_p0, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__2__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__2__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx1_p0_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__2__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag 
        = vlSelfRef.__PVT__cur_lsu_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag 
        = vlSelfRef.__PVT__cur_commit_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__replay_buffer_idx1_p1, 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__3__Vfuncout = 
        (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag) 
          != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag)) 
         & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag) 
               > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag)) 
              ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag))) 
             ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag) 
                > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag))) 
            | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__instr_rob_tag) 
               == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__3__commit_rob_tag))));
    vlSelfRef.__PVT__buffer_idx1_p1_is_critcal = vlSelfRef.__Vfunc_InstrIsCritcal__3__Vfuncout;
    vlSelfRef.__PVT__wake_up_stall_issue_instr0_valid 
        = ((IData)(vlSelfRef.__PVT__wake_up_replay_select)
            ? ((IData)(vlSelfRef.__PVT__buffer_idx0_p0_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx0_p0_is_critcal))
            : ((IData)(vlSelfRef.__PVT__buffer_idx0_p1_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx0_p1_is_critcal)));
    vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid 
        = ((IData)(vlSelfRef.__PVT__wake_up_replay_select)
            ? ((IData)(vlSelfRef.__PVT__buffer_idx1_p0_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx1_p0_is_critcal))
            : ((IData)(vlSelfRef.__PVT__buffer_idx1_p1_valid) 
               & (IData)(vlSelfRef.__PVT__buffer_idx1_p1_is_critcal)));
}
