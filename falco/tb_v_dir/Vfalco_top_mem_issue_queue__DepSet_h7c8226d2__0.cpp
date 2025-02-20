// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_mem_issue_queue.h"

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__0(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [0U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [1U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [2U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [3U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [4U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [5U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [6U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [7U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    vlSelfRef.issue_ready[0U] = (((vlSelfRef.valid[0U] 
                                   & vlSelfRef.rs1_ready
                                   [0U]) & vlSelfRef.rs2_ready
                                  [0U]) & (0U == vlSelfRef.depvec
                                           [0U]));
    vlSelfRef.issue_ready[1U] = (((vlSelfRef.valid[1U] 
                                   & vlSelfRef.rs1_ready
                                   [1U]) & vlSelfRef.rs2_ready
                                  [1U]) & (0U == vlSelfRef.depvec
                                           [1U]));
    vlSelfRef.issue_ready[2U] = (((vlSelfRef.valid[2U] 
                                   & vlSelfRef.rs1_ready
                                   [2U]) & vlSelfRef.rs2_ready
                                  [2U]) & (0U == vlSelfRef.depvec
                                           [2U]));
    vlSelfRef.issue_ready[3U] = (((vlSelfRef.valid[3U] 
                                   & vlSelfRef.rs1_ready
                                   [3U]) & vlSelfRef.rs2_ready
                                  [3U]) & (0U == vlSelfRef.depvec
                                           [3U]));
    vlSelfRef.issue_ready[4U] = (((vlSelfRef.valid[4U] 
                                   & vlSelfRef.rs1_ready
                                   [4U]) & vlSelfRef.rs2_ready
                                  [4U]) & (0U == vlSelfRef.depvec
                                           [4U]));
    vlSelfRef.issue_ready[5U] = (((vlSelfRef.valid[5U] 
                                   & vlSelfRef.rs1_ready
                                   [5U]) & vlSelfRef.rs2_ready
                                  [5U]) & (0U == vlSelfRef.depvec
                                           [5U]));
    vlSelfRef.issue_ready[6U] = (((vlSelfRef.valid[6U] 
                                   & vlSelfRef.rs1_ready
                                   [6U]) & vlSelfRef.rs2_ready
                                  [6U]) & (0U == vlSelfRef.depvec
                                           [6U]));
    vlSelfRef.issue_ready[7U] = (((vlSelfRef.valid[7U] 
                                   & vlSelfRef.rs1_ready
                                   [7U]) & vlSelfRef.rs2_ready
                                  [7U]) & (0U == vlSelfRef.depvec
                                           [7U]));
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[0U] 
        = vlSelfRef.issue_ready[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[1U] 
        = vlSelfRef.issue_ready[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[2U] 
        = vlSelfRef.issue_ready[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[3U] 
        = vlSelfRef.issue_ready[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[4U] 
        = vlSelfRef.issue_ready[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[5U] 
        = vlSelfRef.issue_ready[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[6U] 
        = vlSelfRef.issue_ready[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[7U] 
        = vlSelfRef.issue_ready[7U];
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__1(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__recovery_flush_BCAST 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    VL_ASSIGNBIT_II(0U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__recovery_flush_BCAST 
        = vlSelfRef.__Vcellinp__replay_unit__recovery_flush_BCAST;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__2(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__3(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_sequent__TOP__falco_top__core__MEM_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx = vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_slot_idx;
    vlSelfRef.issue_flush_vec = (0xffU & ((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__issue_slot_idx)));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__0(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__Vcellinp__replay_unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__replay_unit__recovery_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__1(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__2(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__replay_unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__PVT__issue_lock = (((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                      | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MEM_IQ_stall)) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay));
    vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__replay_unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_lock 
        = vlSelfRef.__PVT__issue_lock;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__3(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___ico_comb__TOP__falco_top__core__MEM_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_slot_idx_valid;
    vlSelfRef.instr0_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec)) 
                                                         & (~ 
                                                            VL_EXTEND_II(32,8, (IData)(vlSelfRef.issue_flush_vec))))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec))), 0U, 8U)));
    vlSelfRef.instr0_depvec_ori = ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                    ? ((IData)(vlSelfRef.cur_depvec) 
                                       & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                    : (IData)(vlSelfRef.cur_depvec));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store 
        = (1U & VL_BITSEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,1, 
                                                         (1U 
                                                          & VL_BITSEL_IWII(129, 
                                                                           vlSelfRef.__PVT__issue_slot
                                                                           [vlSelfRef.__PVT__issue_slot_idx], 0x44U)))), 0U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_id 
        = (0x7fU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,7, 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x46U, 7U)))), 0U, 7U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_set_id 
        = (0xffU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,8, 
                                                         (0xffU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x4eU, 8U)))), 0U, 8U));
    vlSelfRef.instr1_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__dispatch_instr0_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori)) 
                                                         | ((IData)(1U) 
                                                            << (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori))), 0U, 8U)));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__0(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__Vcellinp__replay_unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__replay_unit__recovery_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__1(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__2(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__replay_unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__PVT__issue_lock = (((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                      | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MEM_IQ_stall)) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay));
    vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__replay_unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_lock 
        = vlSelfRef.__PVT__issue_lock;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__3(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___act_comb__TOP__falco_top__core__MEM_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_slot_idx_valid;
    vlSelfRef.instr0_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec)) 
                                                         & (~ 
                                                            VL_EXTEND_II(32,8, (IData)(vlSelfRef.issue_flush_vec))))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec))), 0U, 8U)));
    vlSelfRef.instr0_depvec_ori = ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                    ? ((IData)(vlSelfRef.cur_depvec) 
                                       & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                    : (IData)(vlSelfRef.cur_depvec));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store 
        = (1U & VL_BITSEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,1, 
                                                         (1U 
                                                          & VL_BITSEL_IWII(129, 
                                                                           vlSelfRef.__PVT__issue_slot
                                                                           [vlSelfRef.__PVT__issue_slot_idx], 0x44U)))), 0U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_id 
        = (0x7fU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,7, 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x46U, 7U)))), 0U, 7U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_set_id 
        = (0xffU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,8, 
                                                         (0xffU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x4eU, 8U)))), 0U, 8U));
    vlSelfRef.instr1_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__dispatch_instr0_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori)) 
                                                         | ((IData)(1U) 
                                                            << (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori))), 0U, 8U)));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__0(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    CData/*31:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    CData/*31:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<5>/*159:0*/ __Vtemp_21;
    CData/*31:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_23;
    CData/*31:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_28;
    CData/*31:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    CData/*31:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_33;
    CData/*31:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<5>/*159:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_40;
    // Body
    vlSelfRef.__VdlySet__issue_slot__v0 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v1 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v2 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v3 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v4 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v5 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v6 = 0U;
    vlSelfRef.__VdlySet__issue_slot__v7 = 0U;
    vlSelfRef.__VdlySet__depvec__v0 = 0U;
    vlSelfRef.__VdlySet__depvec__v1 = 0U;
    vlSelfRef.__VdlySet__depvec__v2 = 0U;
    vlSelfRef.__VdlySet__depvec__v3 = 0U;
    vlSelfRef.__VdlySet__depvec__v4 = 0U;
    vlSelfRef.__VdlySet__depvec__v5 = 0U;
    vlSelfRef.__VdlySet__depvec__v6 = 0U;
    vlSelfRef.__VdlySet__depvec__v7 = 0U;
    vlSelfRef.__VdlySet__valid__v0 = 0U;
    vlSelfRef.__VdlySet__valid__v1 = 0U;
    vlSelfRef.__VdlySet__valid__v2 = 0U;
    vlSelfRef.__VdlySet__valid__v3 = 0U;
    vlSelfRef.__VdlySet__valid__v4 = 0U;
    vlSelfRef.__VdlySet__valid__v5 = 0U;
    vlSelfRef.__VdlySet__valid__v6 = 0U;
    vlSelfRef.__VdlySet__valid__v7 = 0U;
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
    vlSelfRef.__Vdly__ld_spec_rob_tag = vlSelfRef.__PVT__ld_spec_rob_tag;
    vlSelfRef.__Vdly__allocatable_slot_idx1_valid_reg 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg;
    vlSelfRef.__Vdly__allocatable_slot_idx0_valid_reg 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg;
    VL_CONST_W_1X(129,__Vtemp_1,0x00000000);
    __Vtemp_2 = ((0U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                 & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_3, __Vtemp_2, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[0U]);
    __Vtemp_4 = ((0U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_5, __Vtemp_4, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_3);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v0, (IData)(vlSelfRef.__PVT__rst), __Vtemp_1, __Vtemp_5);
    vlSelfRef.__VdlySet__issue_slot__v0 = 1U;
    VL_CONST_W_1X(129,__Vtemp_6,0x00000000);
    __Vtemp_7 = ((1U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                 & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_8, __Vtemp_7, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[1U]);
    __Vtemp_9 = ((1U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_10, __Vtemp_9, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_8);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v1, (IData)(vlSelfRef.__PVT__rst), __Vtemp_6, __Vtemp_10);
    vlSelfRef.__VdlySet__issue_slot__v1 = 1U;
    VL_CONST_W_1X(129,__Vtemp_11,0x00000000);
    __Vtemp_12 = ((2U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_13, __Vtemp_12, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[2U]);
    __Vtemp_14 = ((2U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_15, __Vtemp_14, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_13);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v2, (IData)(vlSelfRef.__PVT__rst), __Vtemp_11, __Vtemp_15);
    vlSelfRef.__VdlySet__issue_slot__v2 = 1U;
    VL_CONST_W_1X(129,__Vtemp_16,0x00000000);
    __Vtemp_17 = ((3U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_18, __Vtemp_17, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[3U]);
    __Vtemp_19 = ((3U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_20, __Vtemp_19, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_18);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v3, (IData)(vlSelfRef.__PVT__rst), __Vtemp_16, __Vtemp_20);
    vlSelfRef.__VdlySet__issue_slot__v3 = 1U;
    VL_CONST_W_1X(129,__Vtemp_21,0x00000000);
    __Vtemp_22 = ((4U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_23, __Vtemp_22, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[4U]);
    __Vtemp_24 = ((4U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_25, __Vtemp_24, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_23);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v4, (IData)(vlSelfRef.__PVT__rst), __Vtemp_21, __Vtemp_25);
    vlSelfRef.__VdlySet__issue_slot__v4 = 1U;
    VL_CONST_W_1X(129,__Vtemp_26,0x00000000);
    __Vtemp_27 = ((5U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_28, __Vtemp_27, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[5U]);
    __Vtemp_29 = ((5U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_30, __Vtemp_29, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_28);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v5, (IData)(vlSelfRef.__PVT__rst), __Vtemp_26, __Vtemp_30);
    vlSelfRef.__VdlySet__issue_slot__v5 = 1U;
    VL_CONST_W_1X(129,__Vtemp_31,0x00000000);
    __Vtemp_32 = ((6U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_33, __Vtemp_32, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[6U]);
    __Vtemp_34 = ((6U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_35, __Vtemp_34, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_33);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v6, (IData)(vlSelfRef.__PVT__rst), __Vtemp_31, __Vtemp_35);
    vlSelfRef.__VdlySet__issue_slot__v6 = 1U;
    VL_CONST_W_1X(129,__Vtemp_36,0x00000000);
    __Vtemp_37 = ((7U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid));
    VL_COND_WIWW(129, __Vtemp_38, __Vtemp_37, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 
                 vlSelfRef.__PVT__issue_slot[7U]);
    __Vtemp_39 = ((7U == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                  & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid));
    VL_COND_WIWW(129, __Vtemp_40, __Vtemp_39, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, __Vtemp_38);
    VL_COND_WIWW(129, vlSelfRef.__VdlyVal__issue_slot__v7, (IData)(vlSelfRef.__PVT__rst), __Vtemp_36, __Vtemp_40);
    vlSelfRef.__VdlySet__issue_slot__v7 = 1U;
    vlSelfRef.__VdlyVal__depvec__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((0U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((0U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [0U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [0U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [0U])))));
    vlSelfRef.__VdlySet__depvec__v0 = 1U;
    vlSelfRef.__VdlyVal__depvec__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((1U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((1U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [1U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [1U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [1U])))));
    vlSelfRef.__VdlySet__depvec__v1 = 1U;
    vlSelfRef.__VdlyVal__depvec__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((2U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((2U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [2U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [2U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [2U])))));
    vlSelfRef.__VdlySet__depvec__v2 = 1U;
    vlSelfRef.__VdlyVal__depvec__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((3U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((3U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [3U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [3U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [3U])))));
    vlSelfRef.__VdlySet__depvec__v3 = 1U;
    vlSelfRef.__VdlyVal__depvec__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((4U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((4U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [4U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [4U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [4U])))));
    vlSelfRef.__VdlySet__depvec__v4 = 1U;
    vlSelfRef.__VdlyVal__depvec__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((5U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((5U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [5U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [5U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [5U])))));
    vlSelfRef.__VdlySet__depvec__v5 = 1U;
    vlSelfRef.__VdlyVal__depvec__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((6U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [6U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [6U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [6U])))));
    vlSelfRef.__VdlySet__depvec__v6 = 1U;
    vlSelfRef.__VdlyVal__depvec__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                        ? 0U : (((7U 
                                                  == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                 & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                                 ? (IData)(vlSelfRef.instr0_depvec)
                                                 : 
                                                (((7U 
                                                   == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                  & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                  ? (IData)(vlSelfRef.instr1_depvec)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                   ? 
                                                  (vlSelfRef.depvec
                                                   [7U] 
                                                   & (~ (IData)(vlSelfRef.flush_vec)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                                    ? 
                                                   (vlSelfRef.depvec
                                                    [7U] 
                                                    & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                                    : 
                                                   vlSelfRef.depvec
                                                   [7U])))));
    vlSelfRef.__VdlySet__depvec__v7 = 1U;
    vlSelfRef.__VdlyVal__valid__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 0U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [0U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((0U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((0U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((0U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [0U])))));
    vlSelfRef.__VdlySet__valid__v0 = 1U;
    vlSelfRef.__VdlyVal__valid__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 1U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [1U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((1U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((1U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [1U])))));
    vlSelfRef.__VdlySet__valid__v1 = 1U;
    vlSelfRef.__VdlyVal__valid__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 2U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [2U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((2U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((2U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((2U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [2U])))));
    vlSelfRef.__VdlySet__valid__v2 = 1U;
    vlSelfRef.__VdlyVal__valid__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 3U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [3U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((3U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((3U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((3U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [3U])))));
    vlSelfRef.__VdlySet__valid__v3 = 1U;
    vlSelfRef.__VdlyVal__valid__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 4U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [4U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((4U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((4U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((4U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [4U])))));
    vlSelfRef.__VdlySet__valid__v4 = 1U;
    vlSelfRef.__VdlyVal__valid__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 5U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [5U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((5U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((5U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((5U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [5U])))));
    vlSelfRef.__VdlySet__valid__v5 = 1U;
    vlSelfRef.__VdlyVal__valid__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 6U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [6U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((6U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((6U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((6U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [6U])))));
    vlSelfRef.__VdlySet__valid__v6 = 1U;
    vlSelfRef.__VdlyVal__valid__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (1U & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               ((1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.flush_vec), 7U))
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,1, 
                                                                             vlSelfRef.valid
                                                                             [7U])), 0U)
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (((7U 
                                                        == (IData)(vlSelfRef.__PVT__issue_slot_idx)) 
                                                       & (IData)(vlSelfRef.__PVT__issue_slot_idx_valid)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__issue_lock))))) 
                                                 && ((((7U 
                                                        == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                       & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid)) 
                                                      | ((7U 
                                                          == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                         & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))) 
                                                     || vlSelfRef.valid
                                                     [7U])))));
    vlSelfRef.__VdlySet__valid__v7 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((0U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__8__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__8__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__8__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__8__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__8__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__8__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__8__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__8__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__8__Vfuncout))
                                               : ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__9__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__9__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__9__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__9__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__9__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__9__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__9__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__9__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__9__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__10__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [0U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__10__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__10__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__10__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__10__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__10__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__10__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [0U]))));
    vlSelfRef.__VdlySet__rs1_ready__v0 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((1U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__11__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__11__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__11__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__11__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__11__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__11__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__11__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__11__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__11__Vfuncout))
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__12__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__12__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__12__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__12__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__12__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__12__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__12__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__12__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__12__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__13__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [1U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__13__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__13__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__13__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__13__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__13__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__13__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [1U]))));
    vlSelfRef.__VdlySet__rs1_ready__v1 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((2U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__14__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__14__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__14__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__14__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__14__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__14__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__14__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__14__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__14__Vfuncout))
                                               : ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__15__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__15__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__15__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__15__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__15__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__15__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__15__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__15__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__15__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__16__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [2U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__16__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__16__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__16__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__16__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__16__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__16__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [2U]))));
    vlSelfRef.__VdlySet__rs1_ready__v2 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((3U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__17__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__17__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__17__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__17__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__17__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__17__Vfuncout))
                                               : ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__18__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__18__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__18__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__18__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__18__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__18__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__18__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__18__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__18__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__19__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [3U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__19__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__19__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__19__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__19__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__19__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__19__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [3U]))));
    vlSelfRef.__VdlySet__rs1_ready__v3 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((4U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__20__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__20__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__20__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__20__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__20__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__20__Vfuncout))
                                               : ((
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__21__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__21__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__21__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__21__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__21__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__21__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__21__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__21__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__21__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__22__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [4U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__22__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__22__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__22__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__22__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__22__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__22__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [4U]))));
    vlSelfRef.__VdlySet__rs1_ready__v4 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((5U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__23__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__23__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__23__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__23__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__23__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__23__Vfuncout))
                                               : ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__24__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__24__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__24__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__24__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__24__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__24__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__24__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__24__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__24__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__25__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [5U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__25__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__25__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__25__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__25__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__25__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__25__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [5U]))));
    vlSelfRef.__VdlySet__rs1_ready__v5 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((6U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__26__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__26__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__26__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__26__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__26__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__26__Vfuncout))
                                               : ((
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__27__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__27__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__27__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__27__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__27__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__27__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__27__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__27__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__27__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__28__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [6U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__28__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__28__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__28__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__28__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__28__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__28__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [6U]))));
    vlSelfRef.__VdlySet__rs1_ready__v6 = 1U;
    vlSelfRef.__VdlyVal__rs1_ready__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((7U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__29__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs1_ready;
                    vlSelfRef.__Vfunc_bypass_network__29__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x36U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__29__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__29__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__29__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__29__Vfuncout))
                                               : ((
                                                   (7U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__30__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs1_ready;
                        vlSelfRef.__Vfunc_bypass_network__30__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x36U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__30__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__30__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__30__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__30__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__30__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__30__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__30__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__31__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [7U], 0x36U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__31__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__31__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__31__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__31__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__31__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__31__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs1_ready
                                                   [7U]))));
    vlSelfRef.__VdlySet__rs1_ready__v7 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((0U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__32__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__32__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__32__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__32__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__32__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__32__Vfuncout))
                                               : ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__33__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__33__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__33__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__33__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__33__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__33__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__33__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__33__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__33__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__34__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [0U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__34__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__34__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__34__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__34__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__34__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__34__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [0U]))));
    vlSelfRef.__VdlySet__rs2_ready__v0 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((1U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__35__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__35__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__35__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__35__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__35__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__35__Vfuncout))
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__36__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__36__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__36__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__36__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__36__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__36__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__36__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__36__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__36__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__37__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [1U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__37__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__37__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__37__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__37__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__37__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__37__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [1U]))));
    vlSelfRef.__VdlySet__rs2_ready__v1 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((2U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__38__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__38__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__38__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__38__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__38__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__38__Vfuncout))
                                               : ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__39__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__39__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__39__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__39__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__39__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__39__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__39__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__39__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__39__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__40__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [2U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__40__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__40__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__40__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__40__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__40__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__40__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [2U]))));
    vlSelfRef.__VdlySet__rs2_ready__v2 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((3U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__41__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__41__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__41__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__41__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__41__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__41__Vfuncout))
                                               : ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__42__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__42__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__42__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__42__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__42__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__42__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__42__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__42__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__42__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__43__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [3U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__43__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__43__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__43__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__43__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__43__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__43__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [3U]))));
    vlSelfRef.__VdlySet__rs2_ready__v3 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((4U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__44__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__44__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__44__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__44__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__44__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__44__Vfuncout))
                                               : ((
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__45__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__45__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__45__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__45__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__45__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__45__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__45__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__45__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__45__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__46__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [4U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__46__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__46__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__46__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__46__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__46__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__46__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [4U]))));
    vlSelfRef.__VdlySet__rs2_ready__v4 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((5U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__47__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__47__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__47__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__47__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__47__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__47__Vfuncout))
                                               : ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__48__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__48__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__48__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__48__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__48__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__48__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__48__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__48__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__48__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__49__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [5U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__49__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__49__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__49__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__49__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__49__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__49__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [5U]))));
    vlSelfRef.__VdlySet__rs2_ready__v5 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((6U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__50__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__50__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__50__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__50__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__50__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__50__Vfuncout))
                                               : ((
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__51__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__51__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__51__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__51__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__51__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__51__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__51__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__51__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__51__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__52__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [6U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__52__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__52__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__52__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__52__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__52__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__52__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [6U]))));
    vlSelfRef.__VdlySet__rs2_ready__v6 = 1U;
    vlSelfRef.__VdlyVal__rs2_ready__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (((7U 
                                                == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                               & (IData)(vlSelfRef.__PVT__dispatch_instr0_valid))
                                               ? ([&]() {
                    vlSelfRef.__Vfunc_bypass_network__53__ready 
                        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr0_rs2_ready;
                    vlSelfRef.__Vfunc_bypass_network__53__prf_addr 
                        = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x30U, 6U));
                    vlSelfRef.__Vfunc_bypass_network__53__Vfuncout 
                        = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                               & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                              | (((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                  == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                 & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                             | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                 & ((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                    == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                            | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                & ((IData)(vlSelfRef.__Vfunc_bypass_network__53__prf_addr) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                               & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                           || (IData)(vlSelfRef.__Vfunc_bypass_network__53__ready));
                }(), (IData)(vlSelfRef.__Vfunc_bypass_network__53__Vfuncout))
                                               : ((
                                                   (7U 
                                                    == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                   & (IData)(vlSelfRef.__PVT__dispatch_instr1_valid))
                                                   ? 
                                                  ([&]() {
                        vlSelfRef.__Vfunc_bypass_network__54__ready 
                            = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_instr1_rs2_ready;
                        vlSelfRef.__Vfunc_bypass_network__54__prf_addr 
                            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x30U, 6U));
                        vlSelfRef.__Vfunc_bypass_network__54__Vfuncout 
                            = (((((((IData)(vlSelfRef.__Vfunc_bypass_network__54__prf_addr) 
                                    == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                   & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                  | (((IData)(vlSelfRef.__Vfunc_bypass_network__54__prf_addr) 
                                      == (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                     & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                 | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                     & ((IData)(vlSelfRef.__Vfunc_bypass_network__54__prf_addr) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                    & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                    & ((IData)(vlSelfRef.__Vfunc_bypass_network__54__prf_addr) 
                                       == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                   & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid))) 
                               || (IData)(vlSelfRef.__Vfunc_bypass_network__54__ready));
                    }(), (IData)(vlSelfRef.__Vfunc_bypass_network__54__Vfuncout))
                                                   : 
                                                  ((([&]() {
                                vlSelfRef.__Vfunc_wakeup_network__55__prf_addr 
                                    = (0x3fU & VL_SEL_IWII(129, 
                                                           vlSelfRef.__PVT__issue_slot
                                                           [7U], 0x30U, 6U));
                                vlSelfRef.__Vfunc_wakeup_network__55__Vfuncout 
                                    = ((((((IData)(vlSelfRef.__Vfunc_wakeup_network__55__prf_addr) 
                                           == (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 0U, 6U))) 
                                          & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv), 6U)) 
                                         | (((IData)(vlSelfRef.__Vfunc_wakeup_network__55__prf_addr) 
                                             == (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U))) 
                                            & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U))) 
                                        | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
                                            & ((IData)(vlSelfRef.__Vfunc_wakeup_network__55__prf_addr) 
                                               == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd))) 
                                           & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid))) 
                                       | (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
                                           & ((IData)(vlSelfRef.__Vfunc_wakeup_network__55__prf_addr) 
                                              == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd))) 
                                          & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
                            }(), (IData)(vlSelfRef.__Vfunc_wakeup_network__55__Vfuncout)) 
                                                    & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) 
                                                   || vlSelfRef.rs2_ready
                                                   [7U]))));
    vlSelfRef.__VdlySet__rs2_ready__v7 = 1U;
    if (vlSelfRef.__VdlySet__depvec__v0) {
        vlSelfRef.depvec[0U] = vlSelfRef.__VdlyVal__depvec__v0;
    }
    if (vlSelfRef.__VdlySet__depvec__v1) {
        vlSelfRef.depvec[1U] = vlSelfRef.__VdlyVal__depvec__v1;
    }
    if (vlSelfRef.__VdlySet__depvec__v2) {
        vlSelfRef.depvec[2U] = vlSelfRef.__VdlyVal__depvec__v2;
    }
    if (vlSelfRef.__VdlySet__depvec__v3) {
        vlSelfRef.depvec[3U] = vlSelfRef.__VdlyVal__depvec__v3;
    }
    if (vlSelfRef.__VdlySet__depvec__v4) {
        vlSelfRef.depvec[4U] = vlSelfRef.__VdlyVal__depvec__v4;
    }
    if (vlSelfRef.__VdlySet__depvec__v5) {
        vlSelfRef.depvec[5U] = vlSelfRef.__VdlyVal__depvec__v5;
    }
    if (vlSelfRef.__VdlySet__depvec__v6) {
        vlSelfRef.depvec[6U] = vlSelfRef.__VdlyVal__depvec__v6;
    }
    if (vlSelfRef.__VdlySet__depvec__v7) {
        vlSelfRef.depvec[7U] = vlSelfRef.__VdlyVal__depvec__v7;
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
    vlSelfRef.__Vdly__dispatch_slot_idx1 = vlSelfRef.__PVT__dispatch_slot_idx1;
    vlSelfRef.__Vdly__dispatch_slot_idx0 = vlSelfRef.__PVT__dispatch_slot_idx0;
    VL_ASSIGNBIT_II(0U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [0U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [1U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [2U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [3U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [4U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [5U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [6U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [7U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSelfRef.issue_ready[0U] = (((vlSelfRef.valid[0U] 
                                   & vlSelfRef.rs1_ready
                                   [0U]) & vlSelfRef.rs2_ready
                                  [0U]) & (0U == vlSelfRef.depvec
                                           [0U]));
    vlSelfRef.issue_ready[1U] = (((vlSelfRef.valid[1U] 
                                   & vlSelfRef.rs1_ready
                                   [1U]) & vlSelfRef.rs2_ready
                                  [1U]) & (0U == vlSelfRef.depvec
                                           [1U]));
    vlSelfRef.issue_ready[2U] = (((vlSelfRef.valid[2U] 
                                   & vlSelfRef.rs1_ready
                                   [2U]) & vlSelfRef.rs2_ready
                                  [2U]) & (0U == vlSelfRef.depvec
                                           [2U]));
    vlSelfRef.issue_ready[3U] = (((vlSelfRef.valid[3U] 
                                   & vlSelfRef.rs1_ready
                                   [3U]) & vlSelfRef.rs2_ready
                                  [3U]) & (0U == vlSelfRef.depvec
                                           [3U]));
    vlSelfRef.issue_ready[4U] = (((vlSelfRef.valid[4U] 
                                   & vlSelfRef.rs1_ready
                                   [4U]) & vlSelfRef.rs2_ready
                                  [4U]) & (0U == vlSelfRef.depvec
                                           [4U]));
    vlSelfRef.issue_ready[5U] = (((vlSelfRef.valid[5U] 
                                   & vlSelfRef.rs1_ready
                                   [5U]) & vlSelfRef.rs2_ready
                                  [5U]) & (0U == vlSelfRef.depvec
                                           [5U]));
    vlSelfRef.issue_ready[6U] = (((vlSelfRef.valid[6U] 
                                   & vlSelfRef.rs1_ready
                                   [6U]) & vlSelfRef.rs2_ready
                                  [6U]) & (0U == vlSelfRef.depvec
                                           [6U]));
    vlSelfRef.issue_ready[7U] = (((vlSelfRef.valid[7U] 
                                   & vlSelfRef.rs1_ready
                                   [7U]) & vlSelfRef.rs2_ready
                                  [7U]) & (0U == vlSelfRef.depvec
                                           [7U]));
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
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[0U] 
        = vlSelfRef.issue_ready[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[1U] 
        = vlSelfRef.issue_ready[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[2U] 
        = vlSelfRef.issue_ready[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[3U] 
        = vlSelfRef.issue_ready[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[4U] 
        = vlSelfRef.issue_ready[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[5U] 
        = vlSelfRef.issue_ready[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[6U] 
        = vlSelfRef.issue_ready[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[7U] 
        = vlSelfRef.issue_ready[7U];
    vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg 
        = vlSelfRef.__Vdly__allocatable_slot_idx1_valid_reg;
    vlSelfRef.__PVT__dispatch_slot_idx1 = vlSelfRef.__Vdly__dispatch_slot_idx1;
    vlSelfRef.__PVT__dispatch_slot_idx0 = vlSelfRef.__Vdly__dispatch_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg 
        = vlSelfRef.__Vdly__allocatable_slot_idx0_valid_reg;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1 
        = vlSelfRef.__PVT__dispatch_slot_idx1;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0 
        = vlSelfRef.__PVT__dispatch_slot_idx0;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__1(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__BCAST_ld_spec = 0U;
        vlSelfRef.__Vdly__ld_spec_rob_tag = 0U;
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) {
        VL_ASSIGNBIT_II(6U, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__BCAST_ld_spec, 
                        (1U & VL_BITSEL_IIII(32, (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__57__rob_tag 
                                    = vlSelfRef.__PVT__ld_spec_rob_tag;
                                vlSelfRef.__Vfunc_IsBrROBKill__57__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__57__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__57__Vfuncout))
                                                   ? 0U
                                                   : 
                                                  VL_EXTEND_II(32,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 6U)))), 0U)));
        VL_ASSIGNSEL_II(7,6,0U, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__BCAST_ld_spec, 
                        (0x3fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec), 0U, 6U)));
        vlSelfRef.__Vdly__ld_spec_rob_tag = vlSelfRef.__PVT__ld_spec_rob_tag;
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed) {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__BCAST_ld_spec = 0U;
        vlSelfRef.__Vdly__ld_spec_rob_tag = 0U;
    } else {
        VL_ASSIGNBIT_II(6U, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__BCAST_ld_spec, 
                        ((IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_valid) 
                         & (~ VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x44U))));
        VL_ASSIGNSEL_II(7,6,0U, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__BCAST_ld_spec, 
                        (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x3cU, 6U)));
        vlSelfRef.__Vdly__ld_spec_rob_tag = (0x3fU 
                                             & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x2aU, 6U));
    }
    if (vlSelfRef.__PVT__rst) {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_valid = 0U;
        VL_CONST_W_1X(129,vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_pack,0x00000000);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_valid 
            = (1U & VL_BITSEL_IIII(32, (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__56__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__56__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__56__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__56__Vfuncout))
                                         ? 0U : VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_valid))), 0U));
        VL_ASSIGN_W(129,vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_pack, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full) {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_valid 
            = vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_valid;
        VL_ASSIGN_W(129,vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_pack, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack);
    } else if ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed) 
                 | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall)) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall))) {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_valid = 0U;
        VL_CONST_W_1X(129,vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_pack,0x00000000);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay) {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_valid 
            = vlSelfRef.__PVT__replay_issue_instr_valid;
        VL_ASSIGN_W(129,vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_pack, vlSelfRef.__PVT__replay_issue_instr_pack);
    } else {
        vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_valid 
            = vlSelfRef.__PVT__issue_slot_idx_valid;
        VL_ASSIGN_W(129,vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__Vdly__instr_pack, 
                    vlSelfRef.__PVT__issue_slot[vlSelfRef.__PVT__issue_slot_idx]);
    }
    vlSelfRef.__PVT__ld_spec_rob_tag = vlSelfRef.__Vdly__ld_spec_rob_tag;
    if (vlSelfRef.__VdlySet__issue_slot__v0) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [0U], vlSelfRef.__VdlyVal__issue_slot__v0);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v1) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [1U], vlSelfRef.__VdlyVal__issue_slot__v1);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v2) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [2U], vlSelfRef.__VdlyVal__issue_slot__v2);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v3) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [3U], vlSelfRef.__VdlyVal__issue_slot__v3);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v4) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [4U], vlSelfRef.__VdlyVal__issue_slot__v4);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v5) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [5U], vlSelfRef.__VdlyVal__issue_slot__v5);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v6) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [6U], vlSelfRef.__VdlyVal__issue_slot__v6);
    }
    if (vlSelfRef.__VdlySet__issue_slot__v7) {
        VL_ASSIGN_W(129,vlSelfRef.__PVT__issue_slot
                    [7U], vlSelfRef.__VdlyVal__issue_slot__v7);
    }
    vlSelfRef.entry_is_store[0U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [0U], 0x44U));
    vlSelfRef.entry_is_store[1U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [1U], 0x44U));
    vlSelfRef.entry_is_store[2U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [2U], 0x44U));
    vlSelfRef.entry_is_store[3U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [3U], 0x44U));
    vlSelfRef.entry_is_store[4U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [4U], 0x44U));
    vlSelfRef.entry_is_store[5U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [5U], 0x44U));
    vlSelfRef.entry_is_store[6U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [6U], 0x44U));
    vlSelfRef.entry_is_store[7U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [7U], 0x44U));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__2(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx = vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_slot_idx;
    vlSelfRef.issue_flush_vec = (0xffU & ((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__issue_slot_idx)));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__3(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__rst 
        = vlSelfRef.__PVT__rst;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__4(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__replay_issue_instr_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_issue_instr_valid;
    VL_ASSIGN_W(129,vlSelfRef.__PVT__replay_issue_instr_pack, vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_issue_instr_pack);
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__5(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_sequent__TOP__falco_top__core__MEM_IQ__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(129,vlSelfRef.__Vcellinp__replay_unit__issue_instr_pack, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack);
    vlSelfRef.__Vcellinp__replay_unit__issue_instr_valid 
        = vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_valid;
    VL_ASSIGN_W(129,vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__issue_instr_pack, vlSelfRef.__Vcellinp__replay_unit__issue_instr_pack);
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__issue_instr_valid 
        = vlSelfRef.__Vcellinp__replay_unit__issue_instr_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__0(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__recovery_flush_BCAST 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__recovery_flush_BCAST 
        = vlSelfRef.__Vcellinp__replay_unit__recovery_flush_BCAST;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__1(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.issue_rs1[0U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [0U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [0U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[1U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [1U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [1U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[2U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [2U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [2U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[3U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [3U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [3U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[4U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [4U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [4U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[5U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [5U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [5U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[6U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [6U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [6U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[7U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [7U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [7U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[0U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [0U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [0U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[1U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [1U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [1U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[2U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [2U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [2U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[3U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [3U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [3U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[4U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [4U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [4U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[5U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [5U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [5U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[6U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [6U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [6U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[7U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [7U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [7U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__2(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__3(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__replay_unit__recovery_stall;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__4(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__5(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__6(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__replay_unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__PVT__issue_lock = (((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                      | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MEM_IQ_stall)) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay));
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__replay_unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_lock 
        = vlSelfRef.__PVT__issue_lock;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__7(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall;
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__8(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_slot_idx_valid;
    vlSelfRef.instr0_depvec_ori = ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                    ? ((IData)(vlSelfRef.cur_depvec) 
                                       & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                    : (IData)(vlSelfRef.cur_depvec));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store 
        = (1U & VL_BITSEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,1, 
                                                         (1U 
                                                          & VL_BITSEL_IWII(129, 
                                                                           vlSelfRef.__PVT__issue_slot
                                                                           [vlSelfRef.__PVT__issue_slot_idx], 0x44U)))), 0U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_id 
        = (0x7fU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,7, 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x46U, 7U)))), 0U, 7U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_set_id 
        = (0xffU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,8, 
                                                         (0xffU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x4eU, 8U)))), 0U, 8U));
}

VL_INLINE_OPT void Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__9(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___nba_comb__TOP__falco_top__core__MEM_IQ__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instr0_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec)) 
                                                         & (~ 
                                                            VL_EXTEND_II(32,8, (IData)(vlSelfRef.issue_flush_vec))))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec))), 0U, 8U)));
    vlSelfRef.instr1_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__dispatch_instr0_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori)) 
                                                         | ((IData)(1U) 
                                                            << (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori))), 0U, 8U)));
}
