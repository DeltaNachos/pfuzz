// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_store_buffer.h"

VL_INLINE_OPT void Vfalco_top_store_buffer___ico_sequent__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___ico_sequent__TOP__falco_top__core__SDB__0\n"); );
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
    vlSelfRef.__PVT__store_pop = (1U & (VL_BITSEL_IWII(69, vlSelfRef.__PVT__store_req, 0x44U) 
                                        & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__store_resp), 1U)));
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

VL_INLINE_OPT void Vfalco_top_store_buffer___ico_sequent__TOP__falco_top__core__SDB__1(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___ico_sequent__TOP__falco_top__core__SDB__1\n"); );
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

VL_INLINE_OPT void Vfalco_top_store_buffer___ico_comb__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___ico_comb__TOP__falco_top__core__SDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop = ((IData)(vlSelfRef.__PVT__store_pop) 
                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall));
}

VL_INLINE_OPT void Vfalco_top_store_buffer___ico_comb__TOP__falco_top__core__SDB__1(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___ico_comb__TOP__falco_top__core__SDB__1\n"); );
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

VL_INLINE_OPT void Vfalco_top_store_buffer___ico_comb__TOP__falco_top__core__SDB__2(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___ico_comb__TOP__falco_top__core__SDB__2\n"); );
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

VL_INLINE_OPT void Vfalco_top_store_buffer___act_comb__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___act_comb__TOP__falco_top__core__SDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop = ((IData)(vlSelfRef.__PVT__store_pop) 
                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall));
}

VL_INLINE_OPT void Vfalco_top_store_buffer___act_comb__TOP__falco_top__core__SDB__1(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___act_comb__TOP__falco_top__core__SDB__1\n"); );
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

VL_INLINE_OPT void Vfalco_top_store_buffer___act_comb__TOP__falco_top__core__SDB__2(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___act_comb__TOP__falco_top__core__SDB__2\n"); );
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

VL_INLINE_OPT void Vfalco_top_store_buffer___nba_sequent__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___nba_sequent__TOP__falco_top__core__SDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__retire_ptr = vlSelfRef.retire_ptr;
    vlSelfRef.__Vdly__pop_ptr = vlSelfRef.pop_ptr;
    vlSelfRef.__VdlySet__retirement__v0 = 0U;
    vlSelfRef.__VdlySet__retirement__v1 = 0U;
    vlSelfRef.__VdlySet__retirement__v2 = 0U;
    vlSelfRef.__VdlySet__retirement__v3 = 0U;
    vlSelfRef.__VdlySet__retirement__v4 = 0U;
    vlSelfRef.__VdlySet__retirement__v5 = 0U;
    vlSelfRef.__VdlySet__retirement__v6 = 0U;
    vlSelfRef.__VdlySet__retirement__v7 = 0U;
    vlSelfRef.__VdlySet__retirement__v8 = 0U;
    vlSelfRef.__VdlySet__retirement__v9 = 0U;
    vlSelfRef.__VdlySet__retirement__v10 = 0U;
    vlSelfRef.__VdlySet__retirement__v11 = 0U;
    vlSelfRef.__VdlySet__retirement__v12 = 0U;
    vlSelfRef.__VdlySet__retirement__v13 = 0U;
    vlSelfRef.__VdlySet__retirement__v14 = 0U;
    vlSelfRef.__VdlySet__retirement__v15 = 0U;
    vlSelfRef.__Vdly__alloc_ptr = vlSelfRef.alloc_ptr;
    vlSelfRef.__VdlySet__valid__v0 = 0U;
    vlSelfRef.__VdlySet__valid__v1 = 0U;
    vlSelfRef.__VdlySet__valid__v2 = 0U;
    vlSelfRef.__VdlySet__valid__v3 = 0U;
    vlSelfRef.__VdlySet__valid__v4 = 0U;
    vlSelfRef.__VdlySet__valid__v5 = 0U;
    vlSelfRef.__VdlySet__valid__v6 = 0U;
    vlSelfRef.__VdlySet__valid__v7 = 0U;
    vlSelfRef.__VdlySet__valid__v8 = 0U;
    vlSelfRef.__VdlySet__valid__v9 = 0U;
    vlSelfRef.__VdlySet__valid__v10 = 0U;
    vlSelfRef.__VdlySet__valid__v11 = 0U;
    vlSelfRef.__VdlySet__valid__v12 = 0U;
    vlSelfRef.__VdlySet__valid__v13 = 0U;
    vlSelfRef.__VdlySet__valid__v14 = 0U;
    vlSelfRef.__VdlySet__valid__v15 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v0 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v1 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v2 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v3 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v4 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v5 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v6 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v7 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v8 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v9 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v10 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v11 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v12 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v13 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v14 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v15 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v16 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v17 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v18 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v19 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v20 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v21 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v22 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v23 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v24 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v25 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v26 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v27 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v28 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v29 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v30 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v31 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v32 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v33 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v34 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v35 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v36 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v37 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v38 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v39 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v40 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v41 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v42 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v43 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v44 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v45 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v46 = 0U;
    vlSelfRef.__VdlySet__SDB_addr__v47 = 0U;
    vlSelfRef.__Vdly__retire_ptr = (0xfU & ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            (((IData)(vlSelfRef.retire_ptr) 
                                              + VL_EXTEND_II(4,1, (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid))) 
                                             + VL_EXTEND_II(4,1, (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)))));
    vlSelfRef.__Vdly__pop_ptr = (0xfU & ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((IData)(vlSelfRef.__PVT__store_pop)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.pop_ptr))
                                                   : (IData)(vlSelfRef.pop_ptr))));
    vlSelfRef.__VdlyVal__retirement__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((0U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((0U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [0U]))));
    vlSelfRef.__VdlySet__retirement__v0 = 1U;
    vlSelfRef.__VdlyVal__retirement__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((1U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((1U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [1U]))));
    vlSelfRef.__VdlySet__retirement__v1 = 1U;
    vlSelfRef.__VdlyVal__retirement__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((2U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((2U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [2U]))));
    vlSelfRef.__VdlySet__retirement__v2 = 1U;
    vlSelfRef.__VdlyVal__retirement__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((3U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((3U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [3U]))));
    vlSelfRef.__VdlySet__retirement__v3 = 1U;
    vlSelfRef.__VdlyVal__retirement__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((4U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((4U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [4U]))));
    vlSelfRef.__VdlySet__retirement__v4 = 1U;
    vlSelfRef.__VdlyVal__retirement__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((5U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((5U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [5U]))));
    vlSelfRef.__VdlySet__retirement__v5 = 1U;
    vlSelfRef.__VdlyVal__retirement__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((6U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((6U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [6U]))));
    vlSelfRef.__VdlySet__retirement__v6 = 1U;
    vlSelfRef.__VdlyVal__retirement__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((7U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((7U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [7U]))));
    vlSelfRef.__VdlySet__retirement__v7 = 1U;
    vlSelfRef.__VdlyVal__retirement__v8 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((8U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((8U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [8U]))));
    vlSelfRef.__VdlySet__retirement__v8 = 1U;
    vlSelfRef.__VdlyVal__retirement__v9 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && ((1U 
                                                & (~ 
                                                   ((9U 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                               && ((((9U 
                                                      == (IData)(vlSelfRef.retire_next_ptr)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                    & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                   || (((9U 
                                                         == (IData)(vlSelfRef.retire_ptr)) 
                                                        & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                           | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                       || vlSelfRef.retirement
                                                       [9U]))));
    vlSelfRef.__VdlySet__retirement__v9 = 1U;
    vlSelfRef.__VdlyVal__retirement__v10 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((0xaU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                                && ((((0xaU 
                                                       == (IData)(vlSelfRef.retire_next_ptr)) 
                                                      & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                    || (((0xaU 
                                                          == (IData)(vlSelfRef.retire_ptr)) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                            | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                        || vlSelfRef.retirement
                                                        [0xaU]))));
    vlSelfRef.__VdlySet__retirement__v10 = 1U;
    vlSelfRef.__VdlyVal__retirement__v11 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((0xbU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                                && ((((0xbU 
                                                       == (IData)(vlSelfRef.retire_next_ptr)) 
                                                      & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                    || (((0xbU 
                                                          == (IData)(vlSelfRef.retire_ptr)) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                            | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                        || vlSelfRef.retirement
                                                        [0xbU]))));
    vlSelfRef.__VdlySet__retirement__v11 = 1U;
    vlSelfRef.__VdlyVal__retirement__v12 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((0xcU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                                && ((((0xcU 
                                                       == (IData)(vlSelfRef.retire_next_ptr)) 
                                                      & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                    || (((0xcU 
                                                          == (IData)(vlSelfRef.retire_ptr)) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                            | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                        || vlSelfRef.retirement
                                                        [0xcU]))));
    vlSelfRef.__VdlySet__retirement__v12 = 1U;
    vlSelfRef.__VdlyVal__retirement__v13 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((0xdU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                                && ((((0xdU 
                                                       == (IData)(vlSelfRef.retire_next_ptr)) 
                                                      & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                    || (((0xdU 
                                                          == (IData)(vlSelfRef.retire_ptr)) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                            | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                        || vlSelfRef.retirement
                                                        [0xdU]))));
    vlSelfRef.__VdlySet__retirement__v13 = 1U;
    vlSelfRef.__VdlyVal__retirement__v14 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((0xeU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                                && ((((0xeU 
                                                       == (IData)(vlSelfRef.retire_next_ptr)) 
                                                      & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                    || (((0xeU 
                                                          == (IData)(vlSelfRef.retire_ptr)) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                            | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                        || vlSelfRef.retirement
                                                        [0xeU]))));
    vlSelfRef.__VdlySet__retirement__v14 = 1U;
    vlSelfRef.__VdlyVal__retirement__v15 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((0xfU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)))) 
                                                && ((((0xfU 
                                                       == (IData)(vlSelfRef.retire_next_ptr)) 
                                                      & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid)) 
                                                     & (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid)) 
                                                    || (((0xfU 
                                                          == (IData)(vlSelfRef.retire_ptr)) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_0_valid) 
                                                            | (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__store_commit_1_valid))) 
                                                        || vlSelfRef.retirement
                                                        [0xfU]))));
    vlSelfRef.__VdlySet__retirement__v15 = 1U;
    vlSelfRef.__Vdly__alloc_ptr = (0xfU & ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & VL_BITSEL_IIII(15, (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST), 0U))
                                             ? ((IData)(vlSelfRef.alloc_ptr) 
                                                - (IData)(vlSelfRef.flush_counter))
                                             : ((IData)(vlSelfRef.__PVT__allocate_new_entry)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelfRef.alloc_ptr))
                                                 : (IData)(vlSelfRef.alloc_ptr)))));
    vlSelfRef.__VdlyVal__valid__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((0U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0U)))) 
                                              && vlSelfRef.valid
                                              [0U])));
    vlSelfRef.__VdlySet__valid__v0 = 1U;
    vlSelfRef.__VdlyVal__valid__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((1U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 1U)))) 
                                              && vlSelfRef.valid
                                              [1U])));
    vlSelfRef.__VdlySet__valid__v1 = 1U;
    vlSelfRef.__VdlyVal__valid__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((2U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((2U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 2U)))) 
                                              && vlSelfRef.valid
                                              [2U])));
    vlSelfRef.__VdlySet__valid__v2 = 1U;
    vlSelfRef.__VdlyVal__valid__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((3U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((3U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 3U)))) 
                                              && vlSelfRef.valid
                                              [3U])));
    vlSelfRef.__VdlySet__valid__v3 = 1U;
    vlSelfRef.__VdlyVal__valid__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((4U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((4U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 4U)))) 
                                              && vlSelfRef.valid
                                              [4U])));
    vlSelfRef.__VdlySet__valid__v4 = 1U;
    vlSelfRef.__VdlyVal__valid__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((5U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((5U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 5U)))) 
                                              && vlSelfRef.valid
                                              [5U])));
    vlSelfRef.__VdlySet__valid__v5 = 1U;
    vlSelfRef.__VdlyVal__valid__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((6U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((6U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 6U)))) 
                                              && vlSelfRef.valid
                                              [6U])));
    vlSelfRef.__VdlySet__valid__v6 = 1U;
    vlSelfRef.__VdlyVal__valid__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((7U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((7U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 7U)))) 
                                              && vlSelfRef.valid
                                              [7U])));
    vlSelfRef.__VdlySet__valid__v7 = 1U;
    vlSelfRef.__VdlyVal__valid__v8 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((8U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((8U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 8U)))) 
                                              && vlSelfRef.valid
                                              [8U])));
    vlSelfRef.__VdlySet__valid__v8 = 1U;
    vlSelfRef.__VdlyVal__valid__v9 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                      && (((9U == (IData)(vlSelfRef.alloc_ptr)) 
                                           & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                          || ((1U & 
                                               (~ (
                                                   ((9U 
                                                     == (IData)(vlSelfRef.pop_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                   | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 9U)))) 
                                              && vlSelfRef.valid
                                              [9U])));
    vlSelfRef.__VdlySet__valid__v9 = 1U;
    vlSelfRef.__VdlyVal__valid__v10 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                       && (((0xaU == (IData)(vlSelfRef.alloc_ptr)) 
                                            & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                           || ((1U 
                                                & (~ 
                                                   (((0xaU 
                                                      == (IData)(vlSelfRef.pop_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                    | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xaU)))) 
                                               && vlSelfRef.valid
                                               [0xaU])));
    vlSelfRef.__VdlySet__valid__v10 = 1U;
    vlSelfRef.__VdlyVal__valid__v11 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                       && (((0xbU == (IData)(vlSelfRef.alloc_ptr)) 
                                            & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                           || ((1U 
                                                & (~ 
                                                   (((0xbU 
                                                      == (IData)(vlSelfRef.pop_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                    | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xbU)))) 
                                               && vlSelfRef.valid
                                               [0xbU])));
    vlSelfRef.__VdlySet__valid__v11 = 1U;
    vlSelfRef.__VdlyVal__valid__v12 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                       && (((0xcU == (IData)(vlSelfRef.alloc_ptr)) 
                                            & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                           || ((1U 
                                                & (~ 
                                                   (((0xcU 
                                                      == (IData)(vlSelfRef.pop_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                    | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xcU)))) 
                                               && vlSelfRef.valid
                                               [0xcU])));
    vlSelfRef.__VdlySet__valid__v12 = 1U;
    vlSelfRef.__VdlyVal__valid__v13 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                       && (((0xdU == (IData)(vlSelfRef.alloc_ptr)) 
                                            & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                           || ((1U 
                                                & (~ 
                                                   (((0xdU 
                                                      == (IData)(vlSelfRef.pop_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                    | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xdU)))) 
                                               && vlSelfRef.valid
                                               [0xdU])));
    vlSelfRef.__VdlySet__valid__v13 = 1U;
    vlSelfRef.__VdlyVal__valid__v14 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                       && (((0xeU == (IData)(vlSelfRef.alloc_ptr)) 
                                            & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                           || ((1U 
                                                & (~ 
                                                   (((0xeU 
                                                      == (IData)(vlSelfRef.pop_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                    | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xeU)))) 
                                               && vlSelfRef.valid
                                               [0xeU])));
    vlSelfRef.__VdlySet__valid__v14 = 1U;
    vlSelfRef.__VdlyVal__valid__v15 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                       && (((0xfU == (IData)(vlSelfRef.alloc_ptr)) 
                                            & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                           || ((1U 
                                                & (~ 
                                                   (((0xfU 
                                                      == (IData)(vlSelfRef.pop_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__store_pop)) 
                                                    | VL_BITSEL_IIII(16, (IData)(vlSelfRef.flush_vec), 0xfU)))) 
                                               && vlSelfRef.valid
                                               [0xfU])));
    vlSelfRef.__VdlySet__valid__v15 = 1U;
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v0 = 1U;
    } else if (((0U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v1 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v1 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v1 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v1 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v1 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v1 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v2 = vlSelfRef.SDB_addr
            [0U];
        vlSelfRef.__VdlySet__SDB_addr__v2 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v2 = vlSelfRef.SDB_data
            [0U];
        vlSelfRef.__VdlyVal__st_mask__v2 = vlSelfRef.st_mask
            [0U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v2 = vlSelfRef.SDB_rob_tag
            [0U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v2 
            = vlSelfRef.is_non_idempotent[0U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v3 = 1U;
    } else if (((1U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v4 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v4 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v4 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v4 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v4 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v4 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v5 = vlSelfRef.SDB_addr
            [1U];
        vlSelfRef.__VdlySet__SDB_addr__v5 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v5 = vlSelfRef.SDB_data
            [1U];
        vlSelfRef.__VdlyVal__st_mask__v5 = vlSelfRef.st_mask
            [1U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v5 = vlSelfRef.SDB_rob_tag
            [1U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v5 
            = vlSelfRef.is_non_idempotent[1U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v6 = 1U;
    } else if (((2U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v7 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v7 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v7 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v7 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v7 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v7 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v8 = vlSelfRef.SDB_addr
            [2U];
        vlSelfRef.__VdlySet__SDB_addr__v8 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v8 = vlSelfRef.SDB_data
            [2U];
        vlSelfRef.__VdlyVal__st_mask__v8 = vlSelfRef.st_mask
            [2U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v8 = vlSelfRef.SDB_rob_tag
            [2U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v8 
            = vlSelfRef.is_non_idempotent[2U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v9 = 1U;
    } else if (((3U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v10 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v10 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v10 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v10 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v10 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v10 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v11 = vlSelfRef.SDB_addr
            [3U];
        vlSelfRef.__VdlySet__SDB_addr__v11 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v11 = vlSelfRef.SDB_data
            [3U];
        vlSelfRef.__VdlyVal__st_mask__v11 = vlSelfRef.st_mask
            [3U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v11 = vlSelfRef.SDB_rob_tag
            [3U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v11 
            = vlSelfRef.is_non_idempotent[3U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v12 = 1U;
    } else if (((4U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v13 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v13 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v13 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v13 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v13 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v13 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v14 = vlSelfRef.SDB_addr
            [4U];
        vlSelfRef.__VdlySet__SDB_addr__v14 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v14 = vlSelfRef.SDB_data
            [4U];
        vlSelfRef.__VdlyVal__st_mask__v14 = vlSelfRef.st_mask
            [4U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v14 = vlSelfRef.SDB_rob_tag
            [4U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v14 
            = vlSelfRef.is_non_idempotent[4U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v15 = 1U;
    } else if (((5U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v16 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v16 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v16 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v16 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v16 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v16 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v17 = vlSelfRef.SDB_addr
            [5U];
        vlSelfRef.__VdlySet__SDB_addr__v17 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v17 = vlSelfRef.SDB_data
            [5U];
        vlSelfRef.__VdlyVal__st_mask__v17 = vlSelfRef.st_mask
            [5U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v17 = vlSelfRef.SDB_rob_tag
            [5U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v17 
            = vlSelfRef.is_non_idempotent[5U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v18 = 1U;
    } else if (((6U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v19 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v19 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v19 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v19 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v19 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v19 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v20 = vlSelfRef.SDB_addr
            [6U];
        vlSelfRef.__VdlySet__SDB_addr__v20 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v20 = vlSelfRef.SDB_data
            [6U];
        vlSelfRef.__VdlyVal__st_mask__v20 = vlSelfRef.st_mask
            [6U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v20 = vlSelfRef.SDB_rob_tag
            [6U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v20 
            = vlSelfRef.is_non_idempotent[6U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v21 = 1U;
    } else if (((7U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v22 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v22 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v22 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v22 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v22 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v22 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v23 = vlSelfRef.SDB_addr
            [7U];
        vlSelfRef.__VdlySet__SDB_addr__v23 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v23 = vlSelfRef.SDB_data
            [7U];
        vlSelfRef.__VdlyVal__st_mask__v23 = vlSelfRef.st_mask
            [7U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v23 = vlSelfRef.SDB_rob_tag
            [7U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v23 
            = vlSelfRef.is_non_idempotent[7U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v24 = 1U;
    } else if (((8U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v25 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v25 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v25 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v25 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v25 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v25 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v26 = vlSelfRef.SDB_addr
            [8U];
        vlSelfRef.__VdlySet__SDB_addr__v26 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v26 = vlSelfRef.SDB_data
            [8U];
        vlSelfRef.__VdlyVal__st_mask__v26 = vlSelfRef.st_mask
            [8U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v26 = vlSelfRef.SDB_rob_tag
            [8U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v26 
            = vlSelfRef.is_non_idempotent[8U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v27 = 1U;
    } else if (((9U == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v28 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v28 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v28 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v28 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v28 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v28 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v29 = vlSelfRef.SDB_addr
            [9U];
        vlSelfRef.__VdlySet__SDB_addr__v29 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v29 = vlSelfRef.SDB_data
            [9U];
        vlSelfRef.__VdlyVal__st_mask__v29 = vlSelfRef.st_mask
            [9U];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v29 = vlSelfRef.SDB_rob_tag
            [9U];
        vlSelfRef.__VdlyVal__is_non_idempotent__v29 
            = vlSelfRef.is_non_idempotent[9U];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v30 = 1U;
    } else if (((0xaU == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v31 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v31 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v31 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v31 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v31 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v31 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v32 = vlSelfRef.SDB_addr
            [0xaU];
        vlSelfRef.__VdlySet__SDB_addr__v32 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v32 = vlSelfRef.SDB_data
            [0xaU];
        vlSelfRef.__VdlyVal__st_mask__v32 = vlSelfRef.st_mask
            [0xaU];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v32 = vlSelfRef.SDB_rob_tag
            [0xaU];
        vlSelfRef.__VdlyVal__is_non_idempotent__v32 
            = vlSelfRef.is_non_idempotent[0xaU];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v33 = 1U;
    } else if (((0xbU == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v34 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v34 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v34 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v34 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v34 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v34 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v35 = vlSelfRef.SDB_addr
            [0xbU];
        vlSelfRef.__VdlySet__SDB_addr__v35 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v35 = vlSelfRef.SDB_data
            [0xbU];
        vlSelfRef.__VdlyVal__st_mask__v35 = vlSelfRef.st_mask
            [0xbU];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v35 = vlSelfRef.SDB_rob_tag
            [0xbU];
        vlSelfRef.__VdlyVal__is_non_idempotent__v35 
            = vlSelfRef.is_non_idempotent[0xbU];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v36 = 1U;
    } else if (((0xcU == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v37 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v37 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v37 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v37 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v37 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v37 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v38 = vlSelfRef.SDB_addr
            [0xcU];
        vlSelfRef.__VdlySet__SDB_addr__v38 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v38 = vlSelfRef.SDB_data
            [0xcU];
        vlSelfRef.__VdlyVal__st_mask__v38 = vlSelfRef.st_mask
            [0xcU];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v38 = vlSelfRef.SDB_rob_tag
            [0xcU];
        vlSelfRef.__VdlyVal__is_non_idempotent__v38 
            = vlSelfRef.is_non_idempotent[0xcU];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v39 = 1U;
    } else if (((0xdU == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v40 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v40 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v40 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v40 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v40 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v40 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v41 = vlSelfRef.SDB_addr
            [0xdU];
        vlSelfRef.__VdlySet__SDB_addr__v41 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v41 = vlSelfRef.SDB_data
            [0xdU];
        vlSelfRef.__VdlyVal__st_mask__v41 = vlSelfRef.st_mask
            [0xdU];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v41 = vlSelfRef.SDB_rob_tag
            [0xdU];
        vlSelfRef.__VdlyVal__is_non_idempotent__v41 
            = vlSelfRef.is_non_idempotent[0xdU];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v42 = 1U;
    } else if (((0xeU == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v43 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v43 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v43 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v43 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v43 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v43 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v44 = vlSelfRef.SDB_addr
            [0xeU];
        vlSelfRef.__VdlySet__SDB_addr__v44 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v44 = vlSelfRef.SDB_data
            [0xeU];
        vlSelfRef.__VdlyVal__st_mask__v44 = vlSelfRef.st_mask
            [0xeU];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v44 = vlSelfRef.SDB_rob_tag
            [0xeU];
        vlSelfRef.__VdlyVal__is_non_idempotent__v44 
            = vlSelfRef.is_non_idempotent[0xeU];
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__SDB_addr__v45 = 1U;
    } else if (((0xfU == (IData)(vlSelfRef.alloc_ptr)) 
                & (IData)(vlSelfRef.__PVT__allocate_new_entry))) {
        vlSelfRef.__VdlyVal__SDB_addr__v46 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr;
        vlSelfRef.__VdlySet__SDB_addr__v46 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v46 = vlSelfRef.__PVT__sdb_input_data;
        vlSelfRef.__VdlyVal__st_mask__v46 = vlSelfRef.__PVT__sdb_input_mask;
        vlSelfRef.__VdlyVal__SDB_rob_tag__v46 = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag;
        vlSelfRef.__VdlyVal__is_non_idempotent__v46 
            = vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region;
    } else {
        vlSelfRef.__VdlyVal__SDB_addr__v47 = vlSelfRef.SDB_addr
            [0xfU];
        vlSelfRef.__VdlySet__SDB_addr__v47 = 1U;
        vlSelfRef.__VdlyVal__SDB_data__v47 = vlSelfRef.SDB_data
            [0xfU];
        vlSelfRef.__VdlyVal__st_mask__v47 = vlSelfRef.st_mask
            [0xfU];
        vlSelfRef.__VdlyVal__SDB_rob_tag__v47 = vlSelfRef.SDB_rob_tag
            [0xfU];
        vlSelfRef.__VdlyVal__is_non_idempotent__v47 
            = vlSelfRef.is_non_idempotent[0xfU];
    }
    vlSelfRef.retire_ptr = vlSelfRef.__Vdly__retire_ptr;
    if (vlSelfRef.__VdlySet__retirement__v0) {
        vlSelfRef.retirement[0U] = vlSelfRef.__VdlyVal__retirement__v0;
    }
    if (vlSelfRef.__VdlySet__retirement__v1) {
        vlSelfRef.retirement[1U] = vlSelfRef.__VdlyVal__retirement__v1;
    }
    if (vlSelfRef.__VdlySet__retirement__v2) {
        vlSelfRef.retirement[2U] = vlSelfRef.__VdlyVal__retirement__v2;
    }
    if (vlSelfRef.__VdlySet__retirement__v3) {
        vlSelfRef.retirement[3U] = vlSelfRef.__VdlyVal__retirement__v3;
    }
    if (vlSelfRef.__VdlySet__retirement__v4) {
        vlSelfRef.retirement[4U] = vlSelfRef.__VdlyVal__retirement__v4;
    }
    if (vlSelfRef.__VdlySet__retirement__v5) {
        vlSelfRef.retirement[5U] = vlSelfRef.__VdlyVal__retirement__v5;
    }
    if (vlSelfRef.__VdlySet__retirement__v6) {
        vlSelfRef.retirement[6U] = vlSelfRef.__VdlyVal__retirement__v6;
    }
    if (vlSelfRef.__VdlySet__retirement__v7) {
        vlSelfRef.retirement[7U] = vlSelfRef.__VdlyVal__retirement__v7;
    }
    if (vlSelfRef.__VdlySet__retirement__v8) {
        vlSelfRef.retirement[8U] = vlSelfRef.__VdlyVal__retirement__v8;
    }
    if (vlSelfRef.__VdlySet__retirement__v9) {
        vlSelfRef.retirement[9U] = vlSelfRef.__VdlyVal__retirement__v9;
    }
    if (vlSelfRef.__VdlySet__retirement__v10) {
        vlSelfRef.retirement[0xaU] = vlSelfRef.__VdlyVal__retirement__v10;
    }
    if (vlSelfRef.__VdlySet__retirement__v11) {
        vlSelfRef.retirement[0xbU] = vlSelfRef.__VdlyVal__retirement__v11;
    }
    if (vlSelfRef.__VdlySet__retirement__v12) {
        vlSelfRef.retirement[0xcU] = vlSelfRef.__VdlyVal__retirement__v12;
    }
    if (vlSelfRef.__VdlySet__retirement__v13) {
        vlSelfRef.retirement[0xdU] = vlSelfRef.__VdlyVal__retirement__v13;
    }
    if (vlSelfRef.__VdlySet__retirement__v14) {
        vlSelfRef.retirement[0xeU] = vlSelfRef.__VdlyVal__retirement__v14;
    }
    if (vlSelfRef.__VdlySet__retirement__v15) {
        vlSelfRef.retirement[0xfU] = vlSelfRef.__VdlyVal__retirement__v15;
    }
    vlSelfRef.pop_ptr = vlSelfRef.__Vdly__pop_ptr;
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
    if (vlSelfRef.__VdlySet__valid__v8) {
        vlSelfRef.valid[8U] = vlSelfRef.__VdlyVal__valid__v8;
    }
    if (vlSelfRef.__VdlySet__valid__v9) {
        vlSelfRef.valid[9U] = vlSelfRef.__VdlyVal__valid__v9;
    }
    if (vlSelfRef.__VdlySet__valid__v10) {
        vlSelfRef.valid[0xaU] = vlSelfRef.__VdlyVal__valid__v10;
    }
    if (vlSelfRef.__VdlySet__valid__v11) {
        vlSelfRef.valid[0xbU] = vlSelfRef.__VdlyVal__valid__v11;
    }
    if (vlSelfRef.__VdlySet__valid__v12) {
        vlSelfRef.valid[0xcU] = vlSelfRef.__VdlyVal__valid__v12;
    }
    if (vlSelfRef.__VdlySet__valid__v13) {
        vlSelfRef.valid[0xdU] = vlSelfRef.__VdlyVal__valid__v13;
    }
    if (vlSelfRef.__VdlySet__valid__v14) {
        vlSelfRef.valid[0xeU] = vlSelfRef.__VdlyVal__valid__v14;
    }
    if (vlSelfRef.__VdlySet__valid__v15) {
        vlSelfRef.valid[0xfU] = vlSelfRef.__VdlyVal__valid__v15;
    }
    vlSelfRef.alloc_ptr = vlSelfRef.__Vdly__alloc_ptr;
    if (vlSelfRef.__VdlySet__SDB_addr__v0) {
        vlSelfRef.SDB_addr[0U] = 0U;
        vlSelfRef.SDB_data[0U] = 0U;
        vlSelfRef.st_mask[0U] = 0U;
        vlSelfRef.SDB_rob_tag[0U] = 0U;
        vlSelfRef.is_non_idempotent[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v1) {
        vlSelfRef.SDB_addr[0U] = vlSelfRef.__VdlyVal__SDB_addr__v1;
        vlSelfRef.SDB_data[0U] = vlSelfRef.__VdlyVal__SDB_data__v1;
        vlSelfRef.st_mask[0U] = vlSelfRef.__VdlyVal__st_mask__v1;
        vlSelfRef.SDB_rob_tag[0U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v1;
        vlSelfRef.is_non_idempotent[0U] = vlSelfRef.__VdlyVal__is_non_idempotent__v1;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v2) {
        vlSelfRef.SDB_addr[0U] = vlSelfRef.__VdlyVal__SDB_addr__v2;
        vlSelfRef.SDB_data[0U] = vlSelfRef.__VdlyVal__SDB_data__v2;
        vlSelfRef.st_mask[0U] = vlSelfRef.__VdlyVal__st_mask__v2;
        vlSelfRef.SDB_rob_tag[0U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v2;
        vlSelfRef.is_non_idempotent[0U] = vlSelfRef.__VdlyVal__is_non_idempotent__v2;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v3) {
        vlSelfRef.SDB_addr[1U] = 0U;
        vlSelfRef.SDB_data[1U] = 0U;
        vlSelfRef.st_mask[1U] = 0U;
        vlSelfRef.SDB_rob_tag[1U] = 0U;
        vlSelfRef.is_non_idempotent[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v4) {
        vlSelfRef.SDB_addr[1U] = vlSelfRef.__VdlyVal__SDB_addr__v4;
        vlSelfRef.SDB_data[1U] = vlSelfRef.__VdlyVal__SDB_data__v4;
        vlSelfRef.st_mask[1U] = vlSelfRef.__VdlyVal__st_mask__v4;
        vlSelfRef.SDB_rob_tag[1U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v4;
        vlSelfRef.is_non_idempotent[1U] = vlSelfRef.__VdlyVal__is_non_idempotent__v4;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v5) {
        vlSelfRef.SDB_addr[1U] = vlSelfRef.__VdlyVal__SDB_addr__v5;
        vlSelfRef.SDB_data[1U] = vlSelfRef.__VdlyVal__SDB_data__v5;
        vlSelfRef.st_mask[1U] = vlSelfRef.__VdlyVal__st_mask__v5;
        vlSelfRef.SDB_rob_tag[1U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v5;
        vlSelfRef.is_non_idempotent[1U] = vlSelfRef.__VdlyVal__is_non_idempotent__v5;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v6) {
        vlSelfRef.SDB_addr[2U] = 0U;
        vlSelfRef.SDB_data[2U] = 0U;
        vlSelfRef.st_mask[2U] = 0U;
        vlSelfRef.SDB_rob_tag[2U] = 0U;
        vlSelfRef.is_non_idempotent[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v7) {
        vlSelfRef.SDB_addr[2U] = vlSelfRef.__VdlyVal__SDB_addr__v7;
        vlSelfRef.SDB_data[2U] = vlSelfRef.__VdlyVal__SDB_data__v7;
        vlSelfRef.st_mask[2U] = vlSelfRef.__VdlyVal__st_mask__v7;
        vlSelfRef.SDB_rob_tag[2U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v7;
        vlSelfRef.is_non_idempotent[2U] = vlSelfRef.__VdlyVal__is_non_idempotent__v7;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v8) {
        vlSelfRef.SDB_addr[2U] = vlSelfRef.__VdlyVal__SDB_addr__v8;
        vlSelfRef.SDB_data[2U] = vlSelfRef.__VdlyVal__SDB_data__v8;
        vlSelfRef.st_mask[2U] = vlSelfRef.__VdlyVal__st_mask__v8;
        vlSelfRef.SDB_rob_tag[2U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v8;
        vlSelfRef.is_non_idempotent[2U] = vlSelfRef.__VdlyVal__is_non_idempotent__v8;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v9) {
        vlSelfRef.SDB_addr[3U] = 0U;
        vlSelfRef.SDB_data[3U] = 0U;
        vlSelfRef.st_mask[3U] = 0U;
        vlSelfRef.SDB_rob_tag[3U] = 0U;
        vlSelfRef.is_non_idempotent[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v10) {
        vlSelfRef.SDB_addr[3U] = vlSelfRef.__VdlyVal__SDB_addr__v10;
        vlSelfRef.SDB_data[3U] = vlSelfRef.__VdlyVal__SDB_data__v10;
        vlSelfRef.st_mask[3U] = vlSelfRef.__VdlyVal__st_mask__v10;
        vlSelfRef.SDB_rob_tag[3U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v10;
        vlSelfRef.is_non_idempotent[3U] = vlSelfRef.__VdlyVal__is_non_idempotent__v10;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v11) {
        vlSelfRef.SDB_addr[3U] = vlSelfRef.__VdlyVal__SDB_addr__v11;
        vlSelfRef.SDB_data[3U] = vlSelfRef.__VdlyVal__SDB_data__v11;
        vlSelfRef.st_mask[3U] = vlSelfRef.__VdlyVal__st_mask__v11;
        vlSelfRef.SDB_rob_tag[3U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v11;
        vlSelfRef.is_non_idempotent[3U] = vlSelfRef.__VdlyVal__is_non_idempotent__v11;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v12) {
        vlSelfRef.SDB_addr[4U] = 0U;
        vlSelfRef.SDB_data[4U] = 0U;
        vlSelfRef.st_mask[4U] = 0U;
        vlSelfRef.SDB_rob_tag[4U] = 0U;
        vlSelfRef.is_non_idempotent[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v13) {
        vlSelfRef.SDB_addr[4U] = vlSelfRef.__VdlyVal__SDB_addr__v13;
        vlSelfRef.SDB_data[4U] = vlSelfRef.__VdlyVal__SDB_data__v13;
        vlSelfRef.st_mask[4U] = vlSelfRef.__VdlyVal__st_mask__v13;
        vlSelfRef.SDB_rob_tag[4U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v13;
        vlSelfRef.is_non_idempotent[4U] = vlSelfRef.__VdlyVal__is_non_idempotent__v13;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v14) {
        vlSelfRef.SDB_addr[4U] = vlSelfRef.__VdlyVal__SDB_addr__v14;
        vlSelfRef.SDB_data[4U] = vlSelfRef.__VdlyVal__SDB_data__v14;
        vlSelfRef.st_mask[4U] = vlSelfRef.__VdlyVal__st_mask__v14;
        vlSelfRef.SDB_rob_tag[4U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v14;
        vlSelfRef.is_non_idempotent[4U] = vlSelfRef.__VdlyVal__is_non_idempotent__v14;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v15) {
        vlSelfRef.SDB_addr[5U] = 0U;
        vlSelfRef.SDB_data[5U] = 0U;
        vlSelfRef.st_mask[5U] = 0U;
        vlSelfRef.SDB_rob_tag[5U] = 0U;
        vlSelfRef.is_non_idempotent[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v16) {
        vlSelfRef.SDB_addr[5U] = vlSelfRef.__VdlyVal__SDB_addr__v16;
        vlSelfRef.SDB_data[5U] = vlSelfRef.__VdlyVal__SDB_data__v16;
        vlSelfRef.st_mask[5U] = vlSelfRef.__VdlyVal__st_mask__v16;
        vlSelfRef.SDB_rob_tag[5U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v16;
        vlSelfRef.is_non_idempotent[5U] = vlSelfRef.__VdlyVal__is_non_idempotent__v16;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v17) {
        vlSelfRef.SDB_addr[5U] = vlSelfRef.__VdlyVal__SDB_addr__v17;
        vlSelfRef.SDB_data[5U] = vlSelfRef.__VdlyVal__SDB_data__v17;
        vlSelfRef.st_mask[5U] = vlSelfRef.__VdlyVal__st_mask__v17;
        vlSelfRef.SDB_rob_tag[5U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v17;
        vlSelfRef.is_non_idempotent[5U] = vlSelfRef.__VdlyVal__is_non_idempotent__v17;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v18) {
        vlSelfRef.SDB_addr[6U] = 0U;
        vlSelfRef.SDB_data[6U] = 0U;
        vlSelfRef.st_mask[6U] = 0U;
        vlSelfRef.SDB_rob_tag[6U] = 0U;
        vlSelfRef.is_non_idempotent[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v19) {
        vlSelfRef.SDB_addr[6U] = vlSelfRef.__VdlyVal__SDB_addr__v19;
        vlSelfRef.SDB_data[6U] = vlSelfRef.__VdlyVal__SDB_data__v19;
        vlSelfRef.st_mask[6U] = vlSelfRef.__VdlyVal__st_mask__v19;
        vlSelfRef.SDB_rob_tag[6U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v19;
        vlSelfRef.is_non_idempotent[6U] = vlSelfRef.__VdlyVal__is_non_idempotent__v19;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v20) {
        vlSelfRef.SDB_addr[6U] = vlSelfRef.__VdlyVal__SDB_addr__v20;
        vlSelfRef.SDB_data[6U] = vlSelfRef.__VdlyVal__SDB_data__v20;
        vlSelfRef.st_mask[6U] = vlSelfRef.__VdlyVal__st_mask__v20;
        vlSelfRef.SDB_rob_tag[6U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v20;
        vlSelfRef.is_non_idempotent[6U] = vlSelfRef.__VdlyVal__is_non_idempotent__v20;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v21) {
        vlSelfRef.SDB_addr[7U] = 0U;
        vlSelfRef.SDB_data[7U] = 0U;
        vlSelfRef.st_mask[7U] = 0U;
        vlSelfRef.SDB_rob_tag[7U] = 0U;
        vlSelfRef.is_non_idempotent[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v22) {
        vlSelfRef.SDB_addr[7U] = vlSelfRef.__VdlyVal__SDB_addr__v22;
        vlSelfRef.SDB_data[7U] = vlSelfRef.__VdlyVal__SDB_data__v22;
        vlSelfRef.st_mask[7U] = vlSelfRef.__VdlyVal__st_mask__v22;
        vlSelfRef.SDB_rob_tag[7U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v22;
        vlSelfRef.is_non_idempotent[7U] = vlSelfRef.__VdlyVal__is_non_idempotent__v22;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v23) {
        vlSelfRef.SDB_addr[7U] = vlSelfRef.__VdlyVal__SDB_addr__v23;
        vlSelfRef.SDB_data[7U] = vlSelfRef.__VdlyVal__SDB_data__v23;
        vlSelfRef.st_mask[7U] = vlSelfRef.__VdlyVal__st_mask__v23;
        vlSelfRef.SDB_rob_tag[7U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v23;
        vlSelfRef.is_non_idempotent[7U] = vlSelfRef.__VdlyVal__is_non_idempotent__v23;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v24) {
        vlSelfRef.SDB_addr[8U] = 0U;
        vlSelfRef.SDB_data[8U] = 0U;
        vlSelfRef.st_mask[8U] = 0U;
        vlSelfRef.SDB_rob_tag[8U] = 0U;
        vlSelfRef.is_non_idempotent[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v25) {
        vlSelfRef.SDB_addr[8U] = vlSelfRef.__VdlyVal__SDB_addr__v25;
        vlSelfRef.SDB_data[8U] = vlSelfRef.__VdlyVal__SDB_data__v25;
        vlSelfRef.st_mask[8U] = vlSelfRef.__VdlyVal__st_mask__v25;
        vlSelfRef.SDB_rob_tag[8U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v25;
        vlSelfRef.is_non_idempotent[8U] = vlSelfRef.__VdlyVal__is_non_idempotent__v25;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v26) {
        vlSelfRef.SDB_addr[8U] = vlSelfRef.__VdlyVal__SDB_addr__v26;
        vlSelfRef.SDB_data[8U] = vlSelfRef.__VdlyVal__SDB_data__v26;
        vlSelfRef.st_mask[8U] = vlSelfRef.__VdlyVal__st_mask__v26;
        vlSelfRef.SDB_rob_tag[8U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v26;
        vlSelfRef.is_non_idempotent[8U] = vlSelfRef.__VdlyVal__is_non_idempotent__v26;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v27) {
        vlSelfRef.SDB_addr[9U] = 0U;
        vlSelfRef.SDB_data[9U] = 0U;
        vlSelfRef.st_mask[9U] = 0U;
        vlSelfRef.SDB_rob_tag[9U] = 0U;
        vlSelfRef.is_non_idempotent[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v28) {
        vlSelfRef.SDB_addr[9U] = vlSelfRef.__VdlyVal__SDB_addr__v28;
        vlSelfRef.SDB_data[9U] = vlSelfRef.__VdlyVal__SDB_data__v28;
        vlSelfRef.st_mask[9U] = vlSelfRef.__VdlyVal__st_mask__v28;
        vlSelfRef.SDB_rob_tag[9U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v28;
        vlSelfRef.is_non_idempotent[9U] = vlSelfRef.__VdlyVal__is_non_idempotent__v28;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v29) {
        vlSelfRef.SDB_addr[9U] = vlSelfRef.__VdlyVal__SDB_addr__v29;
        vlSelfRef.SDB_data[9U] = vlSelfRef.__VdlyVal__SDB_data__v29;
        vlSelfRef.st_mask[9U] = vlSelfRef.__VdlyVal__st_mask__v29;
        vlSelfRef.SDB_rob_tag[9U] = vlSelfRef.__VdlyVal__SDB_rob_tag__v29;
        vlSelfRef.is_non_idempotent[9U] = vlSelfRef.__VdlyVal__is_non_idempotent__v29;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v30) {
        vlSelfRef.SDB_addr[0xaU] = 0U;
        vlSelfRef.SDB_data[0xaU] = 0U;
        vlSelfRef.st_mask[0xaU] = 0U;
        vlSelfRef.SDB_rob_tag[0xaU] = 0U;
        vlSelfRef.is_non_idempotent[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v31) {
        vlSelfRef.SDB_addr[0xaU] = vlSelfRef.__VdlyVal__SDB_addr__v31;
        vlSelfRef.SDB_data[0xaU] = vlSelfRef.__VdlyVal__SDB_data__v31;
        vlSelfRef.st_mask[0xaU] = vlSelfRef.__VdlyVal__st_mask__v31;
        vlSelfRef.SDB_rob_tag[0xaU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v31;
        vlSelfRef.is_non_idempotent[0xaU] = vlSelfRef.__VdlyVal__is_non_idempotent__v31;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v32) {
        vlSelfRef.SDB_addr[0xaU] = vlSelfRef.__VdlyVal__SDB_addr__v32;
        vlSelfRef.SDB_data[0xaU] = vlSelfRef.__VdlyVal__SDB_data__v32;
        vlSelfRef.st_mask[0xaU] = vlSelfRef.__VdlyVal__st_mask__v32;
        vlSelfRef.SDB_rob_tag[0xaU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v32;
        vlSelfRef.is_non_idempotent[0xaU] = vlSelfRef.__VdlyVal__is_non_idempotent__v32;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v33) {
        vlSelfRef.SDB_addr[0xbU] = 0U;
        vlSelfRef.SDB_data[0xbU] = 0U;
        vlSelfRef.st_mask[0xbU] = 0U;
        vlSelfRef.SDB_rob_tag[0xbU] = 0U;
        vlSelfRef.is_non_idempotent[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v34) {
        vlSelfRef.SDB_addr[0xbU] = vlSelfRef.__VdlyVal__SDB_addr__v34;
        vlSelfRef.SDB_data[0xbU] = vlSelfRef.__VdlyVal__SDB_data__v34;
        vlSelfRef.st_mask[0xbU] = vlSelfRef.__VdlyVal__st_mask__v34;
        vlSelfRef.SDB_rob_tag[0xbU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v34;
        vlSelfRef.is_non_idempotent[0xbU] = vlSelfRef.__VdlyVal__is_non_idempotent__v34;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v35) {
        vlSelfRef.SDB_addr[0xbU] = vlSelfRef.__VdlyVal__SDB_addr__v35;
        vlSelfRef.SDB_data[0xbU] = vlSelfRef.__VdlyVal__SDB_data__v35;
        vlSelfRef.st_mask[0xbU] = vlSelfRef.__VdlyVal__st_mask__v35;
        vlSelfRef.SDB_rob_tag[0xbU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v35;
        vlSelfRef.is_non_idempotent[0xbU] = vlSelfRef.__VdlyVal__is_non_idempotent__v35;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v36) {
        vlSelfRef.SDB_addr[0xcU] = 0U;
        vlSelfRef.SDB_data[0xcU] = 0U;
        vlSelfRef.st_mask[0xcU] = 0U;
        vlSelfRef.SDB_rob_tag[0xcU] = 0U;
        vlSelfRef.is_non_idempotent[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v37) {
        vlSelfRef.SDB_addr[0xcU] = vlSelfRef.__VdlyVal__SDB_addr__v37;
        vlSelfRef.SDB_data[0xcU] = vlSelfRef.__VdlyVal__SDB_data__v37;
        vlSelfRef.st_mask[0xcU] = vlSelfRef.__VdlyVal__st_mask__v37;
        vlSelfRef.SDB_rob_tag[0xcU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v37;
        vlSelfRef.is_non_idempotent[0xcU] = vlSelfRef.__VdlyVal__is_non_idempotent__v37;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v38) {
        vlSelfRef.SDB_addr[0xcU] = vlSelfRef.__VdlyVal__SDB_addr__v38;
        vlSelfRef.SDB_data[0xcU] = vlSelfRef.__VdlyVal__SDB_data__v38;
        vlSelfRef.st_mask[0xcU] = vlSelfRef.__VdlyVal__st_mask__v38;
        vlSelfRef.SDB_rob_tag[0xcU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v38;
        vlSelfRef.is_non_idempotent[0xcU] = vlSelfRef.__VdlyVal__is_non_idempotent__v38;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v39) {
        vlSelfRef.SDB_addr[0xdU] = 0U;
        vlSelfRef.SDB_data[0xdU] = 0U;
        vlSelfRef.st_mask[0xdU] = 0U;
        vlSelfRef.SDB_rob_tag[0xdU] = 0U;
        vlSelfRef.is_non_idempotent[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v40) {
        vlSelfRef.SDB_addr[0xdU] = vlSelfRef.__VdlyVal__SDB_addr__v40;
        vlSelfRef.SDB_data[0xdU] = vlSelfRef.__VdlyVal__SDB_data__v40;
        vlSelfRef.st_mask[0xdU] = vlSelfRef.__VdlyVal__st_mask__v40;
        vlSelfRef.SDB_rob_tag[0xdU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v40;
        vlSelfRef.is_non_idempotent[0xdU] = vlSelfRef.__VdlyVal__is_non_idempotent__v40;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v41) {
        vlSelfRef.SDB_addr[0xdU] = vlSelfRef.__VdlyVal__SDB_addr__v41;
        vlSelfRef.SDB_data[0xdU] = vlSelfRef.__VdlyVal__SDB_data__v41;
        vlSelfRef.st_mask[0xdU] = vlSelfRef.__VdlyVal__st_mask__v41;
        vlSelfRef.SDB_rob_tag[0xdU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v41;
        vlSelfRef.is_non_idempotent[0xdU] = vlSelfRef.__VdlyVal__is_non_idempotent__v41;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v42) {
        vlSelfRef.SDB_addr[0xeU] = 0U;
        vlSelfRef.SDB_data[0xeU] = 0U;
        vlSelfRef.st_mask[0xeU] = 0U;
        vlSelfRef.SDB_rob_tag[0xeU] = 0U;
        vlSelfRef.is_non_idempotent[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v43) {
        vlSelfRef.SDB_addr[0xeU] = vlSelfRef.__VdlyVal__SDB_addr__v43;
        vlSelfRef.SDB_data[0xeU] = vlSelfRef.__VdlyVal__SDB_data__v43;
        vlSelfRef.st_mask[0xeU] = vlSelfRef.__VdlyVal__st_mask__v43;
        vlSelfRef.SDB_rob_tag[0xeU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v43;
        vlSelfRef.is_non_idempotent[0xeU] = vlSelfRef.__VdlyVal__is_non_idempotent__v43;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v44) {
        vlSelfRef.SDB_addr[0xeU] = vlSelfRef.__VdlyVal__SDB_addr__v44;
        vlSelfRef.SDB_data[0xeU] = vlSelfRef.__VdlyVal__SDB_data__v44;
        vlSelfRef.st_mask[0xeU] = vlSelfRef.__VdlyVal__st_mask__v44;
        vlSelfRef.SDB_rob_tag[0xeU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v44;
        vlSelfRef.is_non_idempotent[0xeU] = vlSelfRef.__VdlyVal__is_non_idempotent__v44;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v45) {
        vlSelfRef.SDB_addr[0xfU] = 0U;
        vlSelfRef.SDB_data[0xfU] = 0U;
        vlSelfRef.st_mask[0xfU] = 0U;
        vlSelfRef.SDB_rob_tag[0xfU] = 0U;
        vlSelfRef.is_non_idempotent[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v46) {
        vlSelfRef.SDB_addr[0xfU] = vlSelfRef.__VdlyVal__SDB_addr__v46;
        vlSelfRef.SDB_data[0xfU] = vlSelfRef.__VdlyVal__SDB_data__v46;
        vlSelfRef.st_mask[0xfU] = vlSelfRef.__VdlyVal__st_mask__v46;
        vlSelfRef.SDB_rob_tag[0xfU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v46;
        vlSelfRef.is_non_idempotent[0xfU] = vlSelfRef.__VdlyVal__is_non_idempotent__v46;
    }
    if (vlSelfRef.__VdlySet__SDB_addr__v47) {
        vlSelfRef.SDB_addr[0xfU] = vlSelfRef.__VdlyVal__SDB_addr__v47;
        vlSelfRef.SDB_data[0xfU] = vlSelfRef.__VdlyVal__SDB_data__v47;
        vlSelfRef.st_mask[0xfU] = vlSelfRef.__VdlyVal__st_mask__v47;
        vlSelfRef.SDB_rob_tag[0xfU] = vlSelfRef.__VdlyVal__SDB_rob_tag__v47;
        vlSelfRef.is_non_idempotent[0xfU] = vlSelfRef.__VdlyVal__is_non_idempotent__v47;
    }
    vlSelfRef.retire_next_ptr = (0xfU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.retire_ptr)));
    vlSelfRef.__PVT__alloc_pre_0_ptr = (0xfU & ((IData)(vlSelfRef.alloc_ptr) 
                                                - (IData)(1U)));
    vlSelfRef.__PVT__alloc_pre_1_ptr = (0xfU & ((IData)(vlSelfRef.alloc_ptr) 
                                                - (IData)(2U)));
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
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__0__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__1__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__2__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__SDB__genblk9__BRA__3__KET____DOT__CDU.__PVT__push_head 
        = vlSelfRef.alloc_ptr;
    vlSymsp->TOP__falco_top__core__SDB__LFU.__PVT__push_head 
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
    vlSelfRef.__PVT__store_pop = (1U & (VL_BITSEL_IWII(69, vlSelfRef.__PVT__store_req, 0x44U) 
                                        & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__store_resp), 1U)));
}

VL_INLINE_OPT void Vfalco_top_store_buffer___nba_sequent__TOP__falco_top__core__SDB__1(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___nba_sequent__TOP__falco_top__core__SDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__SDA_full 
        = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.alloc_ptr)) 
            == (VL_EXTEND_II(32,4, (IData)(vlSelfRef.pop_ptr)) 
                - (IData)(1U))) | ((0xfU == (IData)(vlSelfRef.alloc_ptr)) 
                                   & (0U == (IData)(vlSelfRef.pop_ptr))));
}

VL_INLINE_OPT void Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__0\n"); );
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

VL_INLINE_OPT void Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__1(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pop = ((IData)(vlSelfRef.__PVT__store_pop) 
                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall));
}

VL_INLINE_OPT void Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__2(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__2\n"); );
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

VL_INLINE_OPT void Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__3(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___nba_comb__TOP__falco_top__core__SDB__3\n"); );
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
