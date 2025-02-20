// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_store_buffer.h"

VL_ATTR_COLD void Vfalco_top_store_buffer___stl_sequent__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___stl_sequent__TOP__falco_top__core__SDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alloc_pre_0_ptr = (0xfU & ((IData)(vlSelfRef.alloc_ptr) 
                                                - (IData)(1U)));
    vlSelfRef.__PVT__alloc_pre_1_ptr = (0xfU & ((IData)(vlSelfRef.alloc_ptr) 
                                                - (IData)(2U)));
    vlSelfRef.retire_next_ptr = (0xfU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.retire_ptr)));
    vlSelfRef.__PVT__temp_ptr[0U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((0U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(1U))
                                                          : 
                                                         ((IData)(7U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[1U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((1U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(2U))
                                                          : 
                                                         ((IData)(6U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[2U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((2U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(3U))
                                                          : 
                                                         ((IData)(5U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[3U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((3U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(4U))
                                                          : 
                                                         ((IData)(4U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[4U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((4U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(5U))
                                                          : 
                                                         ((IData)(3U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[5U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((5U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(6U))
                                                          : 
                                                         ((IData)(2U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[6U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((6U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(7U))
                                                          : 
                                                         ((IData)(1U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[7U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((7U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(8U))
                                                          : 
                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[8U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((8U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(9U))
                                                          : 
                                                         ((IData)(0xffffffffU) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[9U] = (0xfU & VL_SEL_IIII(32, 
                                                        ((9U 
                                                          < (IData)(vlSelfRef.alloc_ptr))
                                                          ? 
                                                         (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                          - (IData)(0xaU))
                                                          : 
                                                         ((IData)(0xfffffffeU) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[0xaU] = (0xfU & VL_SEL_IIII(32, 
                                                          ((0xaU 
                                                            < (IData)(vlSelfRef.alloc_ptr))
                                                            ? 
                                                           (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                            - (IData)(0xbU))
                                                            : 
                                                           ((IData)(0xfffffffdU) 
                                                            + 
                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[0xbU] = (0xfU & VL_SEL_IIII(32, 
                                                          ((0xbU 
                                                            < (IData)(vlSelfRef.alloc_ptr))
                                                            ? 
                                                           (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                            - (IData)(0xcU))
                                                            : 
                                                           ((IData)(0xfffffffcU) 
                                                            + 
                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[0xcU] = (0xfU & VL_SEL_IIII(32, 
                                                          ((0xcU 
                                                            < (IData)(vlSelfRef.alloc_ptr))
                                                            ? 
                                                           (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                            - (IData)(0xdU))
                                                            : 
                                                           ((IData)(0xfffffffbU) 
                                                            + 
                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[0xdU] = (0xfU & VL_SEL_IIII(32, 
                                                          ((0xdU 
                                                            < (IData)(vlSelfRef.alloc_ptr))
                                                            ? 
                                                           (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                            - (IData)(0xeU))
                                                            : 
                                                           ((IData)(0xfffffffaU) 
                                                            + 
                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    vlSelfRef.__PVT__temp_ptr[0xeU] = (0xfU & VL_SEL_IIII(32, 
                                                          ((0xeU 
                                                            < (IData)(vlSelfRef.alloc_ptr))
                                                            ? 
                                                           (VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
                                                            - (IData)(0xfU))
                                                            : 
                                                           ((IData)(0xfffffff9U) 
                                                            + 
                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)))), 0U, 4U));
    VL_ASSIGNSEL_WQ(69,33,0x24U, vlSelfRef.__PVT__store_req, 
                    VL_CONCAT_QII(33,1,32, (vlSelfRef.valid
                                            [vlSelfRef.pop_ptr] 
                                            & vlSelfRef.retirement
                                            [vlSelfRef.pop_ptr]), 
                                  vlSelfRef.SDB_addr
                                  [vlSelfRef.pop_ptr]));
    VL_ASSIGNSEL_WQ(69,36,0U, vlSelfRef.__PVT__store_req, 
                    VL_CONCAT_QII(36,32,4, vlSelfRef.SDB_data
                                  [vlSelfRef.pop_ptr], 
                                  vlSelfRef.st_mask
                                  [vlSelfRef.pop_ptr]));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full 
        = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
            == (VL_EXTEND_II(32,4, (IData)(vlSelfRef.pop_ptr)) 
                - (IData)(1U))) | ((0xfU == (IData)(vlSelfRef.alloc_ptr)) 
                                   & (0U == (IData)(vlSelfRef.pop_ptr))));
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSelfRef.__PVT__entry_is_non_idempotent[0U] = 
        (vlSelfRef.valid[0U] & vlSelfRef.is_non_idempotent
         [0U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[1U] = 
        (vlSelfRef.valid[1U] & vlSelfRef.is_non_idempotent
         [1U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[2U] = 
        (vlSelfRef.valid[2U] & vlSelfRef.is_non_idempotent
         [2U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[3U] = 
        (vlSelfRef.valid[3U] & vlSelfRef.is_non_idempotent
         [3U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[4U] = 
        (vlSelfRef.valid[4U] & vlSelfRef.is_non_idempotent
         [4U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[5U] = 
        (vlSelfRef.valid[5U] & vlSelfRef.is_non_idempotent
         [5U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[6U] = 
        (vlSelfRef.valid[6U] & vlSelfRef.is_non_idempotent
         [6U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[7U] = 
        (vlSelfRef.valid[7U] & vlSelfRef.is_non_idempotent
         [7U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[8U] = 
        (vlSelfRef.valid[8U] & vlSelfRef.is_non_idempotent
         [8U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[9U] = 
        (vlSelfRef.valid[9U] & vlSelfRef.is_non_idempotent
         [9U]);
    vlSelfRef.__PVT__entry_is_non_idempotent[0xaU] 
        = (vlSelfRef.valid[0xaU] & vlSelfRef.is_non_idempotent
           [0xaU]);
    vlSelfRef.__PVT__entry_is_non_idempotent[0xbU] 
        = (vlSelfRef.valid[0xbU] & vlSelfRef.is_non_idempotent
           [0xbU]);
    vlSelfRef.__PVT__entry_is_non_idempotent[0xcU] 
        = (vlSelfRef.valid[0xcU] & vlSelfRef.is_non_idempotent
           [0xcU]);
    vlSelfRef.__PVT__entry_is_non_idempotent[0xdU] 
        = (vlSelfRef.valid[0xdU] & vlSelfRef.is_non_idempotent
           [0xdU]);
    vlSelfRef.__PVT__entry_is_non_idempotent[0xeU] 
        = (vlSelfRef.valid[0xeU] & vlSelfRef.is_non_idempotent
           [0xeU]);
    vlSelfRef.__PVT__entry_is_non_idempotent[0xfU] 
        = (vlSelfRef.valid[0xfU] & vlSelfRef.is_non_idempotent
           [0xfU]);
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__non_idempotent_instr_exists 
        = (((((((((((((((vlSelfRef.__PVT__entry_is_non_idempotent
                         [0U] | vlSelfRef.__PVT__entry_is_non_idempotent
                         [1U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                        [2U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                       [3U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                      [4U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                     [5U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                    [6U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                   [7U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                  [8U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                 [9U]) | vlSelfRef.__PVT__entry_is_non_idempotent
                [0xaU]) | vlSelfRef.__PVT__entry_is_non_idempotent
               [0xbU]) | vlSelfRef.__PVT__entry_is_non_idempotent
              [0xcU]) | vlSelfRef.__PVT__entry_is_non_idempotent
             [0xdU]) | vlSelfRef.__PVT__entry_is_non_idempotent
            [0xeU]) | vlSelfRef.__PVT__entry_is_non_idempotent
           [0xfU]);
}

VL_ATTR_COLD void Vfalco_top_store_buffer___stl_sequent__TOP__falco_top__core__SDB__1(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___stl_sequent__TOP__falco_top__core__SDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [0U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [0U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [1U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [1U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [2U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [2U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [3U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [3U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [4U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [4U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [5U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [5U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [6U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [6U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [7U];
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
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [7U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [8U];
                            vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__8__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__Vfuncout))
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [8U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__9__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [9U];
                            vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__9__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__9__Vfuncout))
                                                               ? 
                                                              VL_EXTEND_II(32,1, 
                                                                           vlSelfRef.valid
                                                                           [9U])
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.flush_vec, (1U 
                                                & VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__10__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [0xaU];
                            vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__10__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__10__Vfuncout))
                                                                   ? 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.valid
                                                                               [0xaU])
                                                                   : 0U), 0U)));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.flush_vec, (1U 
                                                & VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__11__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [0xbU];
                            vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__11__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__11__Vfuncout))
                                                                   ? 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.valid
                                                                               [0xbU])
                                                                   : 0U), 0U)));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.flush_vec, (1U 
                                                & VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__12__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [0xcU];
                            vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__12__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__12__Vfuncout))
                                                                   ? 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.valid
                                                                               [0xcU])
                                                                   : 0U), 0U)));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.flush_vec, (1U 
                                                & VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__13__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [0xdU];
                            vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__13__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__13__Vfuncout))
                                                                   ? 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.valid
                                                                               [0xdU])
                                                                   : 0U), 0U)));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.flush_vec, (1U 
                                                & VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__14__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [0xeU];
                            vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__14__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__14__Vfuncout))
                                                                   ? 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.valid
                                                                               [0xeU])
                                                                   : 0U), 0U)));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.flush_vec, (1U 
                                                & VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__15__rob_tag 
                                = vlSelfRef.SDB_rob_tag
                                [0xfU];
                            vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__15__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__15__Vfuncout))
                                                                   ? 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.valid
                                                                               [0xfU])
                                                                   : 0U), 0U)));
    vlSelfRef.__PVT__store_pop = (1U & (VL_BITSEL_IWII(69, vlSelfRef.__PVT__store_req, 0x44U) 
                                        & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__store_resp), 1U)));
    vlSelfRef.flush_counter = (0xfU & (((((((((((((
                                                   ((VL_EXTEND_II(4,1, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0U))) 
                                                     + 
                                                     VL_EXTEND_II(4,1, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 1U)))) 
                                                    + 
                                                    VL_EXTEND_II(4,1, 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 2U)))) 
                                                   + 
                                                   VL_EXTEND_II(4,1, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 3U)))) 
                                                  + 
                                                  VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 4U)))) 
                                                 + 
                                                 VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 5U)))) 
                                                + VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 6U)))) 
                                               + VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 7U)))) 
                                              + VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 8U)))) 
                                             + VL_EXTEND_II(4,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 9U)))) 
                                            + VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xaU)))) 
                                           + VL_EXTEND_II(4,1, 
                                                          (1U 
                                                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xbU)))) 
                                          + VL_EXTEND_II(4,1, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xcU)))) 
                                         + VL_EXTEND_II(4,1, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xdU)))) 
                                        + VL_EXTEND_II(4,1, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xeU)))) 
                                       + VL_EXTEND_II(4,1, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xfU)))));
}

VL_ATTR_COLD void Vfalco_top_store_buffer___stl_comb__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___stl_comb__TOP__falco_top__core__SDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop = ((IData)(vlSelfRef.__PVT__store_pop) 
                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall));
}

VL_ATTR_COLD void Vfalco_top_store_buffer___stl_comb__TOP__falco_top__core__SDB__1(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___stl_comb__TOP__falco_top__core__SDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_new_entry = (((IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate) 
                                            & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__instr_valid)) 
                                           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full)));
    vlSelfRef.__PVT__sdb_input_match[0U][0U] = ((vlSelfRef.valid
                                                 [0U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [0U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [0U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][0U] = ((vlSelfRef.valid
                                                 [0U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [0U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [0U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][0U] = ((vlSelfRef.valid
                                                 [0U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [0U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [0U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][0U] = ((vlSelfRef.valid
                                                 [0U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [0U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [0U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][1U] = ((vlSelfRef.valid
                                                 [1U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [1U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [1U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][1U] = ((vlSelfRef.valid
                                                 [1U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [1U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [1U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][1U] = ((vlSelfRef.valid
                                                 [1U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [1U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [1U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][1U] = ((vlSelfRef.valid
                                                 [1U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [1U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [1U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][2U] = ((vlSelfRef.valid
                                                 [2U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [2U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [2U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][2U] = ((vlSelfRef.valid
                                                 [2U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [2U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [2U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][2U] = ((vlSelfRef.valid
                                                 [2U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [2U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [2U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][2U] = ((vlSelfRef.valid
                                                 [2U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [2U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [2U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][3U] = ((vlSelfRef.valid
                                                 [3U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [3U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [3U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][3U] = ((vlSelfRef.valid
                                                 [3U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [3U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [3U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][3U] = ((vlSelfRef.valid
                                                 [3U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [3U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [3U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][3U] = ((vlSelfRef.valid
                                                 [3U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [3U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [3U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][4U] = ((vlSelfRef.valid
                                                 [4U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [4U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [4U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][4U] = ((vlSelfRef.valid
                                                 [4U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [4U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [4U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][4U] = ((vlSelfRef.valid
                                                 [4U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [4U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [4U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][4U] = ((vlSelfRef.valid
                                                 [4U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [4U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [4U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][5U] = ((vlSelfRef.valid
                                                 [5U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [5U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [5U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][5U] = ((vlSelfRef.valid
                                                 [5U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [5U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [5U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][5U] = ((vlSelfRef.valid
                                                 [5U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [5U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [5U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][5U] = ((vlSelfRef.valid
                                                 [5U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [5U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [5U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][6U] = ((vlSelfRef.valid
                                                 [6U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [6U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [6U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][6U] = ((vlSelfRef.valid
                                                 [6U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [6U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [6U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][6U] = ((vlSelfRef.valid
                                                 [6U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [6U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [6U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][6U] = ((vlSelfRef.valid
                                                 [6U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [6U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [6U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][7U] = ((vlSelfRef.valid
                                                 [7U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [7U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [7U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][7U] = ((vlSelfRef.valid
                                                 [7U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [7U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [7U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][7U] = ((vlSelfRef.valid
                                                 [7U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [7U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [7U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][7U] = ((vlSelfRef.valid
                                                 [7U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [7U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [7U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][8U] = ((vlSelfRef.valid
                                                 [8U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [8U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [8U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][8U] = ((vlSelfRef.valid
                                                 [8U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [8U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [8U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][8U] = ((vlSelfRef.valid
                                                 [8U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [8U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [8U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][8U] = ((vlSelfRef.valid
                                                 [8U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [8U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [8U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][9U] = ((vlSelfRef.valid
                                                 [9U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [9U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [9U], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][9U] = ((vlSelfRef.valid
                                                 [9U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [9U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [9U], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][9U] = ((vlSelfRef.valid
                                                 [9U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [9U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [9U], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][9U] = ((vlSelfRef.valid
                                                 [9U] 
                                                 & (vlSelfRef.SDB_addr
                                                    [9U] 
                                                    == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                & VL_BITSEL_IIII(4, 
                                                                 vlSelfRef.st_mask
                                                                 [9U], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][0xaU] = ((
                                                   vlSelfRef.valid
                                                   [0xaU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xaU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xaU], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][0xaU] = ((
                                                   vlSelfRef.valid
                                                   [0xaU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xaU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xaU], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][0xaU] = ((
                                                   vlSelfRef.valid
                                                   [0xaU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xaU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xaU], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][0xaU] = ((
                                                   vlSelfRef.valid
                                                   [0xaU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xaU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xaU], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][0xbU] = ((
                                                   vlSelfRef.valid
                                                   [0xbU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xbU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xbU], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][0xbU] = ((
                                                   vlSelfRef.valid
                                                   [0xbU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xbU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xbU], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][0xbU] = ((
                                                   vlSelfRef.valid
                                                   [0xbU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xbU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xbU], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][0xbU] = ((
                                                   vlSelfRef.valid
                                                   [0xbU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xbU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xbU], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][0xcU] = ((
                                                   vlSelfRef.valid
                                                   [0xcU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xcU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xcU], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][0xcU] = ((
                                                   vlSelfRef.valid
                                                   [0xcU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xcU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xcU], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][0xcU] = ((
                                                   vlSelfRef.valid
                                                   [0xcU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xcU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xcU], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][0xcU] = ((
                                                   vlSelfRef.valid
                                                   [0xcU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xcU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xcU], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][0xdU] = ((
                                                   vlSelfRef.valid
                                                   [0xdU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xdU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xdU], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][0xdU] = ((
                                                   vlSelfRef.valid
                                                   [0xdU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xdU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xdU], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][0xdU] = ((
                                                   vlSelfRef.valid
                                                   [0xdU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xdU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xdU], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][0xdU] = ((
                                                   vlSelfRef.valid
                                                   [0xdU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xdU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xdU], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][0xeU] = ((
                                                   vlSelfRef.valid
                                                   [0xeU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xeU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xeU], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][0xeU] = ((
                                                   vlSelfRef.valid
                                                   [0xeU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xeU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xeU], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][0xeU] = ((
                                                   vlSelfRef.valid
                                                   [0xeU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xeU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xeU], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][0xeU] = ((
                                                   vlSelfRef.valid
                                                   [0xeU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xeU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xeU], 3U));
    vlSelfRef.__PVT__sdb_input_match[0U][0xfU] = ((
                                                   vlSelfRef.valid
                                                   [0xfU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xfU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xfU], 0U));
    vlSelfRef.__PVT__sdb_input_match[1U][0xfU] = ((
                                                   vlSelfRef.valid
                                                   [0xfU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xfU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xfU], 1U));
    vlSelfRef.__PVT__sdb_input_match[2U][0xfU] = ((
                                                   vlSelfRef.valid
                                                   [0xfU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xfU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xfU], 2U));
    vlSelfRef.__PVT__sdb_input_match[3U][0xfU] = ((
                                                   vlSelfRef.valid
                                                   [0xfU] 
                                                   & (vlSelfRef.SDB_addr
                                                      [0xfU] 
                                                      == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr)) 
                                                  & VL_BITSEL_IIII(4, 
                                                                   vlSelfRef.st_mask
                                                                   [0xfU], 3U));
    vlSelfRef.__PVT__load_store_addr_match[0U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [0U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [0U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [0U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[1U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [1U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [1U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [1U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[2U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [2U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [2U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [2U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[3U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [3U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [3U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [3U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[4U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [4U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [4U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [4U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[5U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [5U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [5U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [5U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[6U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [6U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [6U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [6U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[7U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [7U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [7U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [7U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[8U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [8U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [8U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [8U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[9U] = ((
                                                   ((vlSelfRef.SDB_addr
                                                     [9U] 
                                                     == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
                                                     ? 1U
                                                     : 0U) 
                                                   && vlSelfRef.valid
                                                   [9U]) 
                                                  & VL_REDOR_I(
                                                               (vlSelfRef.st_mask
                                                                [9U] 
                                                                & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[0xaU] = 
        ((((vlSelfRef.SDB_addr[0xaU] == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
            ? 1U : 0U) && vlSelfRef.valid[0xaU]) & 
         VL_REDOR_I((vlSelfRef.st_mask[0xaU] & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[0xbU] = 
        ((((vlSelfRef.SDB_addr[0xbU] == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
            ? 1U : 0U) && vlSelfRef.valid[0xbU]) & 
         VL_REDOR_I((vlSelfRef.st_mask[0xbU] & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[0xcU] = 
        ((((vlSelfRef.SDB_addr[0xcU] == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
            ? 1U : 0U) && vlSelfRef.valid[0xcU]) & 
         VL_REDOR_I((vlSelfRef.st_mask[0xcU] & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[0xdU] = 
        ((((vlSelfRef.SDB_addr[0xdU] == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
            ? 1U : 0U) && vlSelfRef.valid[0xdU]) & 
         VL_REDOR_I((vlSelfRef.st_mask[0xdU] & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[0xeU] = 
        ((((vlSelfRef.SDB_addr[0xeU] == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
            ? 1U : 0U) && vlSelfRef.valid[0xeU]) & 
         VL_REDOR_I((vlSelfRef.st_mask[0xeU] & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__PVT__load_store_addr_match[0xfU] = 
        ((((vlSelfRef.SDB_addr[0xfU] == vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr)
            ? 1U : 0U) && vlSelfRef.valid[0xfU]) & 
         VL_REDOR_I((vlSelfRef.st_mask[0xfU] & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask))));
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[0U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][0U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[1U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][1U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[2U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][2U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[3U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][3U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[4U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][4U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[5U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][5U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[6U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][6U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[7U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][7U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[8U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][8U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[9U] 
        = vlSelfRef.__PVT__sdb_input_match[0U][9U];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[0xaU] 
        = vlSelfRef.__PVT__sdb_input_match[0U][0xaU];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[0xbU] 
        = vlSelfRef.__PVT__sdb_input_match[0U][0xbU];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[0xcU] 
        = vlSelfRef.__PVT__sdb_input_match[0U][0xcU];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[0xdU] 
        = vlSelfRef.__PVT__sdb_input_match[0U][0xdU];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[0xeU] 
        = vlSelfRef.__PVT__sdb_input_match[0U][0xeU];
    vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match[0xfU] 
        = vlSelfRef.__PVT__sdb_input_match[0U][0xfU];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[0U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][0U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[1U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][1U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[2U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][2U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[3U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][3U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[4U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][4U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[5U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][5U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[6U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][6U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[7U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][7U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[8U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][8U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[9U] 
        = vlSelfRef.__PVT__sdb_input_match[1U][9U];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[0xaU] 
        = vlSelfRef.__PVT__sdb_input_match[1U][0xaU];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[0xbU] 
        = vlSelfRef.__PVT__sdb_input_match[1U][0xbU];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[0xcU] 
        = vlSelfRef.__PVT__sdb_input_match[1U][0xcU];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[0xdU] 
        = vlSelfRef.__PVT__sdb_input_match[1U][0xdU];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[0xeU] 
        = vlSelfRef.__PVT__sdb_input_match[1U][0xeU];
    vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match[0xfU] 
        = vlSelfRef.__PVT__sdb_input_match[1U][0xfU];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[0U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][0U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[1U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][1U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[2U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][2U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[3U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][3U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[4U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][4U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[5U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][5U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[6U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][6U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[7U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][7U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[8U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][8U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[9U] 
        = vlSelfRef.__PVT__sdb_input_match[2U][9U];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[0xaU] 
        = vlSelfRef.__PVT__sdb_input_match[2U][0xaU];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[0xbU] 
        = vlSelfRef.__PVT__sdb_input_match[2U][0xbU];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[0xcU] 
        = vlSelfRef.__PVT__sdb_input_match[2U][0xcU];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[0xdU] 
        = vlSelfRef.__PVT__sdb_input_match[2U][0xdU];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[0xeU] 
        = vlSelfRef.__PVT__sdb_input_match[2U][0xeU];
    vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match[0xfU] 
        = vlSelfRef.__PVT__sdb_input_match[2U][0xfU];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[0U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][0U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[1U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][1U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[2U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][2U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[3U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][3U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[4U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][4U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[5U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][5U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[6U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][6U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[7U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][7U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[8U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][8U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[9U] 
        = vlSelfRef.__PVT__sdb_input_match[3U][9U];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[0xaU] 
        = vlSelfRef.__PVT__sdb_input_match[3U][0xaU];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[0xbU] 
        = vlSelfRef.__PVT__sdb_input_match[3U][0xbU];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[0xcU] 
        = vlSelfRef.__PVT__sdb_input_match[3U][0xcU];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[0xdU] 
        = vlSelfRef.__PVT__sdb_input_match[3U][0xdU];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[0xeU] 
        = vlSelfRef.__PVT__sdb_input_match[3U][0xeU];
    vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match[0xfU] 
        = vlSelfRef.__PVT__sdb_input_match[3U][0xfU];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[0U] 
        = vlSelfRef.__PVT__load_store_addr_match[0U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[1U] 
        = vlSelfRef.__PVT__load_store_addr_match[1U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[2U] 
        = vlSelfRef.__PVT__load_store_addr_match[2U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[3U] 
        = vlSelfRef.__PVT__load_store_addr_match[3U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[4U] 
        = vlSelfRef.__PVT__load_store_addr_match[4U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[5U] 
        = vlSelfRef.__PVT__load_store_addr_match[5U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[6U] 
        = vlSelfRef.__PVT__load_store_addr_match[6U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[7U] 
        = vlSelfRef.__PVT__load_store_addr_match[7U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[8U] 
        = vlSelfRef.__PVT__load_store_addr_match[8U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[9U] 
        = vlSelfRef.__PVT__load_store_addr_match[9U];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[0xaU] 
        = vlSelfRef.__PVT__load_store_addr_match[0xaU];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[0xbU] 
        = vlSelfRef.__PVT__load_store_addr_match[0xbU];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[0xcU] 
        = vlSelfRef.__PVT__load_store_addr_match[0xcU];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[0xdU] 
        = vlSelfRef.__PVT__load_store_addr_match[0xdU];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[0xeU] 
        = vlSelfRef.__PVT__load_store_addr_match[0xeU];
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__match[0xfU] 
        = vlSelfRef.__PVT__load_store_addr_match[0xfU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[0U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [0U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[1U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [1U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[2U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [2U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[3U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [3U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[4U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [4U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[5U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [5U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[6U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [6U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[7U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [7U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[8U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [8U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[9U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [9U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[0xaU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [0xaU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[0xbU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [0xbU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[0xcU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [0xcU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[0xdU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [0xdU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[0xeU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [0xeU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__match[0xfU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__0__KET____DOT__CDU__match
        [0xfU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[0U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [0U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[1U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [1U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[2U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [2U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[3U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [3U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[4U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [4U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[5U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [5U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[6U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [6U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[7U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [7U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[8U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [8U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[9U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [9U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[0xaU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [0xaU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[0xbU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [0xbU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[0xcU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [0xcU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[0xdU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [0xdU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[0xeU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [0xeU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__match[0xfU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__1__KET____DOT__CDU__match
        [0xfU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[0U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [0U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[1U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [1U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[2U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [2U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[3U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [3U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[4U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [4U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[5U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [5U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[6U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [6U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[7U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [7U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[8U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [8U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[9U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [9U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[0xaU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [0xaU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[0xbU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [0xbU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[0xcU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [0xcU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[0xdU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [0xdU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[0xeU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [0xeU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__match[0xfU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__2__KET____DOT__CDU__match
        [0xfU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[0U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [0U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[1U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [1U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[2U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [2U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[3U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [3U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[4U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [4U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[5U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [5U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[6U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [6U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[7U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [7U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[8U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [8U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[9U] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [9U];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[0xaU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [0xaU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[0xbU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [0xbU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[0xcU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [0xcU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[0xdU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [0xdU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[0xeU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [0xeU];
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__match[0xfU] 
        = vlSelfRef.__Vcellinp__genblk9__BRA__3__KET____DOT__CDU__match
        [0xfU];
}

VL_ATTR_COLD void Vfalco_top_store_buffer___stl_comb__TOP__falco_top__core__SDB__2(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___stl_comb__TOP__falco_top__core__SDB__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_forward_hit = vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__hit;
    vlSelfRef.__PVT__load_forward_hit_index = vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__hit_index;
    vlSelfRef.__Vcellout__genblk9__BRA__0__KET____DOT__CDU__hit 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__hit;
    vlSelfRef.__Vcellout__genblk9__BRA__0__KET____DOT__CDU__hit_index 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__hit_index;
    vlSelfRef.__Vcellout__genblk9__BRA__1__KET____DOT__CDU__hit 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__hit;
    vlSelfRef.__Vcellout__genblk9__BRA__1__KET____DOT__CDU__hit_index 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__hit_index;
    vlSelfRef.__Vcellout__genblk9__BRA__2__KET____DOT__CDU__hit 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__hit;
    vlSelfRef.__Vcellout__genblk9__BRA__2__KET____DOT__CDU__hit_index 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__hit_index;
    vlSelfRef.__Vcellout__genblk9__BRA__3__KET____DOT__CDU__hit 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__hit;
    vlSelfRef.__Vcellout__genblk9__BRA__3__KET____DOT__CDU__hit_index 
        = vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__hit_index;
    vlSelfRef.__PVT__load_forward_hit_mask = vlSelfRef.st_mask
        [vlSelfRef.__PVT__load_forward_hit_index];
    vlSelfRef.__PVT__load_forward_data = vlSelfRef.SDB_data
        [vlSelfRef.__PVT__load_forward_hit_index];
    vlSelfRef.__PVT__byte_match[0U] = vlSelfRef.__Vcellout__genblk9__BRA__0__KET____DOT__CDU__hit;
    vlSelfRef.__PVT__byte_match_index[0U] = vlSelfRef.__Vcellout__genblk9__BRA__0__KET____DOT__CDU__hit_index;
    vlSelfRef.__PVT__byte_match[1U] = vlSelfRef.__Vcellout__genblk9__BRA__1__KET____DOT__CDU__hit;
    vlSelfRef.__PVT__byte_match_index[1U] = vlSelfRef.__Vcellout__genblk9__BRA__1__KET____DOT__CDU__hit_index;
    vlSelfRef.__PVT__byte_match[2U] = vlSelfRef.__Vcellout__genblk9__BRA__2__KET____DOT__CDU__hit;
    vlSelfRef.__PVT__byte_match_index[2U] = vlSelfRef.__Vcellout__genblk9__BRA__2__KET____DOT__CDU__hit_index;
    vlSelfRef.__PVT__byte_match[3U] = vlSelfRef.__Vcellout__genblk9__BRA__3__KET____DOT__CDU__hit;
    vlSelfRef.__PVT__byte_match_index[3U] = vlSelfRef.__Vcellout__genblk9__BRA__3__KET____DOT__CDU__hit_index;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit 
        = vlSelfRef.__PVT__load_forward_hit;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_data 
        = vlSelfRef.__PVT__load_forward_data;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_mask 
        = vlSelfRef.__PVT__load_forward_hit_mask;
    VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__sdb_input_data, 
                    (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 0U))
                               ? VL_SEL_IIII(32, vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_data, 0U, 8U)
                               : (vlSelfRef.__PVT__byte_match
                                  [0U] ? VL_SEL_IIII(32, 
                                                     vlSelfRef.SDB_data
                                                     [
                                                     vlSelfRef.__PVT__byte_match_index
                                                     [0U]], 0U, 8U)
                                   : 0U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__sdb_input_mask, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 0U) 
                           | vlSelfRef.__PVT__byte_match
                           [0U])));
    VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__sdb_input_data, 
                    (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 1U))
                               ? VL_SEL_IIII(32, vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_data, 8U, 8U)
                               : (vlSelfRef.__PVT__byte_match
                                  [1U] ? VL_SEL_IIII(32, 
                                                     vlSelfRef.SDB_data
                                                     [
                                                     vlSelfRef.__PVT__byte_match_index
                                                     [1U]], 8U, 8U)
                                   : 0U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__sdb_input_mask, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 1U) 
                           | vlSelfRef.__PVT__byte_match
                           [1U])));
    VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__sdb_input_data, 
                    (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 2U))
                               ? VL_SEL_IIII(32, vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_data, 0x10U, 8U)
                               : (vlSelfRef.__PVT__byte_match
                                  [2U] ? VL_SEL_IIII(32, 
                                                     vlSelfRef.SDB_data
                                                     [
                                                     vlSelfRef.__PVT__byte_match_index
                                                     [2U]], 0x10U, 8U)
                                   : 0U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__sdb_input_mask, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 2U) 
                           | vlSelfRef.__PVT__byte_match
                           [2U])));
    VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__sdb_input_data, 
                    (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 3U))
                               ? VL_SEL_IIII(32, vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_data, 0x18U, 8U)
                               : (vlSelfRef.__PVT__byte_match
                                  [3U] ? VL_SEL_IIII(32, 
                                                     vlSelfRef.SDB_data
                                                     [
                                                     vlSelfRef.__PVT__byte_match_index
                                                     [3U]], 0x18U, 8U)
                                   : 0U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__sdb_input_mask, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask), 3U) 
                           | vlSelfRef.__PVT__byte_match
                           [3U])));
}
