// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_int_rob_tag_replay_unit.h"

VL_ATTR_COLD void Vfalco_top_int_rob_tag_replay_unit___stl_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__0(Vfalco_top_int_rob_tag_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_rob_tag_replay_unit___stl_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__replay_issue_instr0_valid = vlSelfRef.__PVT__buffer_idx0_p1_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr0_pack, vlSelfRef.__PVT__replay_buffer_idx0_p1);
    VL_COND_WIWW(205, vlSelfRef.__PVT__wake_up_stall_issue_instr0_pack, (IData)(vlSelfRef.__PVT__wake_up_replay_select), vlSelfRef.__PVT__replay_buffer_idx0_p0, vlSelfRef.__PVT__replay_buffer_idx0_p1);
    VL_COND_WIWW(205, vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack, (IData)(vlSelfRef.__PVT__wake_up_replay_select), vlSelfRef.__PVT__replay_buffer_idx1_p0, vlSelfRef.__PVT__replay_buffer_idx1_p1);
    vlSelfRef.__PVT__replay_issue_instr1_valid = vlSelfRef.__PVT__buffer_idx1_p1_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr1_pack, vlSelfRef.__PVT__replay_buffer_idx1_p1);
    vlSelfRef.__PVT__replay_issue_first = ((1U >= (IData)(vlSelfRef.__PVT__replay_issue_first_counter)) 
                                           & ((((IData)(vlSelfRef.__PVT__buffer_idx0_p0_valid) 
                                                | (IData)(vlSelfRef.__PVT__buffer_idx0_p1_valid)) 
                                               | (IData)(vlSelfRef.__PVT__buffer_idx1_p0_valid)) 
                                              | (IData)(vlSelfRef.__PVT__buffer_idx1_p1_valid)));
}

VL_ATTR_COLD void Vfalco_top_int_rob_tag_replay_unit___stl_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__1(Vfalco_top_int_rob_tag_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_rob_tag_replay_unit___stl_sequent__TOP__falco_top__core__INT_IQ__Replay_Unit__1\n"); );
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

VL_ATTR_COLD void Vfalco_top_int_rob_tag_replay_unit___ctor_var_reset(Vfalco_top_int_rob_tag_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_rob_tag_replay_unit___ctor_var_reset\n"); );
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
    vlSelf->__PVT__cur_commit_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cur_lsu_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__issue_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_instr1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__PVT__issue_instr0_pack);
    VL_RAND_RESET_W(205, vlSelf->__PVT__issue_instr1_pack);
    vlSelf->__PVT__replay_issue_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wake_up_stall_issue_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wake_up_stall_issue_instr1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__PVT__wake_up_stall_issue_instr0_pack);
    VL_RAND_RESET_W(205, vlSelf->__PVT__wake_up_stall_issue_instr1_pack);
    vlSelf->__PVT__replay_issue_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_issue_instr1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_issue_instr0_pack);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_issue_instr1_pack);
    vlSelf->__PVT__buffer_idx0_p0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_idx0_p1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_buffer_idx0_p0);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_buffer_idx0_p1);
    vlSelf->__PVT__buffer_idx1_p0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_idx1_p1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_buffer_idx1_p0);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_buffer_idx1_p1);
    vlSelf->__PVT__buffer_idx0_p0_is_critcal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_idx0_p1_is_critcal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_idx1_p0_is_critcal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_idx1_p1_is_critcal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_idx0_issue_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_idx1_issue_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_issue_buffer_idx0);
    VL_RAND_RESET_W(205, vlSelf->__PVT__replay_issue_buffer_idx1);
    vlSelf->__PVT__wake_up_replay_select = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_issue_first_counter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__replay_drop_first = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_InstrIsCritcal__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_InstrIsCritcal__0__instr_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__0__commit_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__0__lsu_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_InstrIsCritcal__1__instr_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__1__commit_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__1__lsu_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_InstrIsCritcal__2__instr_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__2__commit_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__2__lsu_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_InstrIsCritcal__3__instr_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__3__commit_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_InstrIsCritcal__3__lsu_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__4__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__4__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__4__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__5__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__5__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__5__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__6__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__6__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__6__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__7__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__7__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__7__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__replay_issue_first_counter = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__wake_up_replay_select = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__replay_drop_first = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buffer_idx0_p0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buffer_idx1_p0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buffer_idx0_p1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buffer_idx1_p1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__replay_buffer_idx0_p0);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__replay_buffer_idx1_p0);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__replay_buffer_idx0_p1);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__replay_buffer_idx1_p1);
}
