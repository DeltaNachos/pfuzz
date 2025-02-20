// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_mem_replay_unit.h"

VL_INLINE_OPT void Vfalco_top_mem_replay_unit___nba_sequent__TOP__falco_top__core__MEM_IQ__replay_unit__0(Vfalco_top_mem_replay_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_replay_unit___nba_sequent__TOP__falco_top__core__MEM_IQ__replay_unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    VL_ASSIGN_W(129,vlSelfRef.__Vdly__replay_buffer_p0, vlSelfRef.__PVT__replay_buffer_p0);
    VL_ASSIGN_W(129,vlSelfRef.__Vdly__replay_buffer_p1, vlSelfRef.__PVT__replay_buffer_p1);
    vlSelfRef.__Vdly__buffer_p0_valid = vlSelfRef.__PVT__buffer_p0_valid;
    vlSelfRef.__Vdly__buffer_p1_valid = vlSelfRef.__PVT__buffer_p1_valid;
    VL_CONST_W_1X(129,__Vtemp_1,0x00000000);
    __Vtemp_2 = (((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall) 
                  | (IData)(vlSelfRef.__PVT__recovery_stall)) 
                 | (IData)(vlSelfRef.__PVT__replay_muldiv_stall));
    VL_COND_WIWW(129, __Vtemp_3, __Vtemp_2, vlSelfRef.__PVT__replay_buffer_p0, vlSelfRef.__PVT__issue_instr_pack);
    VL_COND_WIWW(129, vlSelfRef.__Vdly__replay_buffer_p0, (IData)(vlSelfRef.__PVT__rst), __Vtemp_1, __Vtemp_3);
    VL_CONST_W_1X(129,__Vtemp_4,0x00000000);
    __Vtemp_5 = (((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall) 
                  | (IData)(vlSelfRef.__PVT__recovery_stall)) 
                 | (IData)(vlSelfRef.__PVT__replay_muldiv_stall));
    VL_COND_WIWW(129, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__replay_buffer_p1, vlSelfRef.__PVT__replay_buffer_p0);
    VL_COND_WIWW(129, vlSelfRef.__Vdly__replay_buffer_p1, (IData)(vlSelfRef.__PVT__rst), __Vtemp_4, __Vtemp_6);
    vlSelfRef.__Vdly__buffer_p0_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & (((IData)(vlSelfRef.__PVT__recovery_stall) 
                                                   | (IData)(vlSelfRef.__PVT__replay_muldiv_stall))
                                                   ? 
                                                  VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(129, vlSelfRef.__PVT__replay_buffer_p0, 0x2aU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
                                    = vlSelfRef.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_p0_valid))), 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall)
                                                    ? (IData)(vlSelfRef.__PVT__buffer_p0_valid)
                                                    : (IData)(vlSelfRef.__PVT__issue_instr_valid)))));
    vlSelfRef.__Vdly__buffer_p1_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & (((IData)(vlSelfRef.__PVT__recovery_stall) 
                                                   | (IData)(vlSelfRef.__PVT__replay_muldiv_stall))
                                                   ? 
                                                  VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(129, vlSelfRef.__PVT__replay_buffer_p1, 0x2aU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush 
                                    = vlSelfRef.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__buffer_p1_valid))), 0U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__load_wake_up_failed_stall)
                                                    ? (IData)(vlSelfRef.__PVT__buffer_p1_valid)
                                                    : (IData)(vlSelfRef.__PVT__buffer_p0_valid)))));
    VL_ASSIGN_W(129,vlSelfRef.__PVT__replay_buffer_p0, vlSelfRef.__Vdly__replay_buffer_p0);
    vlSelfRef.__PVT__buffer_p0_valid = vlSelfRef.__Vdly__buffer_p0_valid;
    VL_ASSIGN_W(129,vlSelfRef.__PVT__replay_buffer_p1, vlSelfRef.__Vdly__replay_buffer_p1);
    vlSelfRef.__PVT__buffer_p1_valid = vlSelfRef.__Vdly__buffer_p1_valid;
    VL_ASSIGN_W(129,vlSelfRef.__PVT__replay_issue_instr_pack, vlSelfRef.__PVT__replay_buffer_p1);
    vlSelfRef.__PVT__replay_issue_instr_valid = vlSelfRef.__PVT__buffer_p1_valid;
}
