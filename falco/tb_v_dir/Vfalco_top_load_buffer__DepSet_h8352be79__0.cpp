// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_load_buffer.h"

VL_INLINE_OPT void Vfalco_top_load_buffer___ico_sequent__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___ico_sequent__TOP__falco_top__core__LDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.LDB_valid[0U]) {
        if (vlSelfRef.LDB_valid[1U]) {
            if (vlSelfRef.LDB_valid[2U]) {
                if (vlSelfRef.LDB_valid[3U]) {
                    if (vlSelfRef.LDB_valid[4U]) {
                        if (vlSelfRef.LDB_valid[5U]) {
                            if (vlSelfRef.LDB_valid
                                [6U]) {
                                if (vlSelfRef.LDB_valid
                                    [7U]) {
                                    if (vlSelfRef.LDB_valid
                                        [8U]) {
                                        if (vlSelfRef.LDB_valid
                                            [9U]) {
                                            if (vlSelfRef.LDB_valid
                                                [0xaU]) {
                                                if (
                                                    vlSelfRef.LDB_valid
                                                    [0xbU]) {
                                                    if (
                                                        vlSelfRef.LDB_valid
                                                        [0xcU]) {
                                                        if (
                                                            vlSelfRef.LDB_valid
                                                            [0xdU]) {
                                                            if (
                                                                vlSelfRef.LDB_valid
                                                                [0xeU]) {
                                                                if (
                                                                    vlSelfRef.LDB_valid
                                                                    [0xfU]) {
                                                                    vlSelfRef.alloc_ptr = 0U;
                                                                    vlSelfRef.__PVT__alloc_ptr_valid = 0U;
                                                                } else {
                                                                    vlSelfRef.alloc_ptr = 0xfU;
                                                                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                                }
                                                            } else {
                                                                vlSelfRef.alloc_ptr = 0xeU;
                                                                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                            }
                                                        } else {
                                                            vlSelfRef.alloc_ptr = 0xdU;
                                                            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                        }
                                                    } else {
                                                        vlSelfRef.alloc_ptr = 0xcU;
                                                        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.alloc_ptr = 0xbU;
                                                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                }
                                            } else {
                                                vlSelfRef.alloc_ptr = 0xaU;
                                                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                            }
                                        } else {
                                            vlSelfRef.alloc_ptr = 9U;
                                            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                        }
                                    } else {
                                        vlSelfRef.alloc_ptr = 8U;
                                        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                    }
                                } else {
                                    vlSelfRef.alloc_ptr = 7U;
                                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                }
                            } else {
                                vlSelfRef.alloc_ptr = 6U;
                                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                            }
                        } else {
                            vlSelfRef.alloc_ptr = 5U;
                            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                        }
                    } else {
                        vlSelfRef.alloc_ptr = 4U;
                        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                    }
                } else {
                    vlSelfRef.alloc_ptr = 3U;
                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                }
            } else {
                vlSelfRef.alloc_ptr = 2U;
                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
            }
        } else {
            vlSelfRef.alloc_ptr = 1U;
            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
        }
    } else {
        vlSelfRef.alloc_ptr = 0U;
        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
    }
    vlSelfRef.__PVT__next_tag = (0x3fU & VL_SEL_IIII(32, 
                                                     ((0x3fU 
                                                       == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       VL_EXTEND_II(32,6, (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag)))), 0U, 6U));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___ico_comb__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___ico_comb__TOP__falco_top__core__LDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compare_rob_tag[0U] = ((vlSelfRef.LDB_valid
                                             [0U] & 
                                             (vlSelfRef.LDB_tag
                                              [0U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [0U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [0U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[1U] = ((vlSelfRef.LDB_valid
                                             [1U] & 
                                             (vlSelfRef.LDB_tag
                                              [1U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [1U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [1U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[2U] = ((vlSelfRef.LDB_valid
                                             [2U] & 
                                             (vlSelfRef.LDB_tag
                                              [2U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [2U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [2U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[3U] = ((vlSelfRef.LDB_valid
                                             [3U] & 
                                             (vlSelfRef.LDB_tag
                                              [3U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [3U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [3U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[4U] = ((vlSelfRef.LDB_valid
                                             [4U] & 
                                             (vlSelfRef.LDB_tag
                                              [4U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [4U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [4U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[5U] = ((vlSelfRef.LDB_valid
                                             [5U] & 
                                             (vlSelfRef.LDB_tag
                                              [5U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [5U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [5U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[6U] = ((vlSelfRef.LDB_valid
                                             [6U] & 
                                             (vlSelfRef.LDB_tag
                                              [6U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [6U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [6U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[7U] = ((vlSelfRef.LDB_valid
                                             [7U] & 
                                             (vlSelfRef.LDB_tag
                                              [7U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [7U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [7U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[8U] = ((vlSelfRef.LDB_valid
                                             [8U] & 
                                             (vlSelfRef.LDB_tag
                                              [8U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [8U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [8U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[9U] = ((vlSelfRef.LDB_valid
                                             [9U] & 
                                             (vlSelfRef.LDB_tag
                                              [9U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [9U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [9U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xaU] = ((vlSelfRef.LDB_valid
                                               [0xaU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xaU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xaU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xaU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xbU] = ((vlSelfRef.LDB_valid
                                               [0xbU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xbU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xbU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xbU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xcU] = ((vlSelfRef.LDB_valid
                                               [0xcU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xcU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xcU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xcU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xdU] = ((vlSelfRef.LDB_valid
                                               [0xdU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xdU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xdU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xdU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xeU] = ((vlSelfRef.LDB_valid
                                               [0xeU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xeU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xeU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xeU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xfU] = ((vlSelfRef.LDB_valid
                                               [0xfU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xfU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xfU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xfU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___ico_comb__TOP__falco_top__core__LDB__1(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___ico_comb__TOP__falco_top__core__LDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(16,2,0U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [1U] & vlSelfRef.__PVT__compare_rob_tag
                                          [1U]), (vlSelfRef.__PVT__compare_address
                                                  [0U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [0U])));
    VL_ASSIGNSEL_II(16,2,2U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [3U] & vlSelfRef.__PVT__compare_rob_tag
                                          [3U]), (vlSelfRef.__PVT__compare_address
                                                  [2U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [2U])));
    VL_ASSIGNSEL_II(16,2,4U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [5U] & vlSelfRef.__PVT__compare_rob_tag
                                          [5U]), (vlSelfRef.__PVT__compare_address
                                                  [4U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [4U])));
    VL_ASSIGNSEL_II(16,2,6U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [7U] & vlSelfRef.__PVT__compare_rob_tag
                                          [7U]), (vlSelfRef.__PVT__compare_address
                                                  [6U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [6U])));
    VL_ASSIGNSEL_II(16,2,8U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [9U] & vlSelfRef.__PVT__compare_rob_tag
                                          [9U]), (vlSelfRef.__PVT__compare_address
                                                  [8U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [8U])));
    VL_ASSIGNSEL_II(16,2,0xaU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xbU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xbU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xaU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xaU])));
    VL_ASSIGNSEL_II(16,2,0xcU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xdU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xdU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xcU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xcU])));
    VL_ASSIGNSEL_II(16,2,0xeU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xfU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xfU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xeU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xeU])));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_pc 
        = ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0U))
            ? vlSelfRef.LDB_store_set_pc[0U] : ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 1U))
                                                 ? 
                                                vlSelfRef.LDB_store_set_pc
                                                [1U]
                                                 : 
                                                ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 2U))
                                                  ? 
                                                 vlSelfRef.LDB_store_set_pc
                                                 [2U]
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 3U))
                                                   ? 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [3U]
                                                   : 
                                                  ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 4U))
                                                    ? 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [4U]
                                                    : 
                                                   ((1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 5U))
                                                     ? 
                                                    vlSelfRef.LDB_store_set_pc
                                                    [5U]
                                                     : 
                                                    ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 6U))
                                                      ? 
                                                     vlSelfRef.LDB_store_set_pc
                                                     [6U]
                                                      : 
                                                     ((1U 
                                                       & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 7U))
                                                       ? 
                                                      vlSelfRef.LDB_store_set_pc
                                                      [7U]
                                                       : 
                                                      ((1U 
                                                        & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 8U))
                                                        ? 
                                                       vlSelfRef.LDB_store_set_pc
                                                       [8U]
                                                        : 
                                                       ((1U 
                                                         & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 9U))
                                                         ? 
                                                        vlSelfRef.LDB_store_set_pc
                                                        [9U]
                                                         : 
                                                        ((1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xaU))
                                                          ? 
                                                         vlSelfRef.LDB_store_set_pc
                                                         [0xaU]
                                                          : 
                                                         ((1U 
                                                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xbU))
                                                           ? 
                                                          vlSelfRef.LDB_store_set_pc
                                                          [0xbU]
                                                           : 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xcU))
                                                            ? 
                                                           vlSelfRef.LDB_store_set_pc
                                                           [0xcU]
                                                            : 
                                                           ((1U 
                                                             & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xdU))
                                                             ? 
                                                            vlSelfRef.LDB_store_set_pc
                                                            [0xdU]
                                                             : 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xeU))
                                                              ? 
                                                             vlSelfRef.LDB_store_set_pc
                                                             [0xeU]
                                                              : 
                                                             vlSelfRef.LDB_store_set_pc
                                                             [0xfU])))))))))))))));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_id 
        = ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0U))
            ? vlSelfRef.LDB_store_set_id[0U] : ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 1U))
                                                 ? 
                                                vlSelfRef.LDB_store_set_id
                                                [1U]
                                                 : 
                                                ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 2U))
                                                  ? 
                                                 vlSelfRef.LDB_store_set_id
                                                 [2U]
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 3U))
                                                   ? 
                                                  vlSelfRef.LDB_store_set_id
                                                  [3U]
                                                   : 
                                                  ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 4U))
                                                    ? 
                                                   vlSelfRef.LDB_store_set_id
                                                   [4U]
                                                    : 
                                                   ((1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 5U))
                                                     ? 
                                                    vlSelfRef.LDB_store_set_id
                                                    [5U]
                                                     : 
                                                    ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 6U))
                                                      ? 
                                                     vlSelfRef.LDB_store_set_id
                                                     [6U]
                                                      : 
                                                     ((1U 
                                                       & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 7U))
                                                       ? 
                                                      vlSelfRef.LDB_store_set_id
                                                      [7U]
                                                       : 
                                                      ((1U 
                                                        & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 8U))
                                                        ? 
                                                       vlSelfRef.LDB_store_set_id
                                                       [8U]
                                                        : 
                                                       ((1U 
                                                         & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 9U))
                                                         ? 
                                                        vlSelfRef.LDB_store_set_id
                                                        [9U]
                                                         : 
                                                        ((1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xaU))
                                                          ? 
                                                         vlSelfRef.LDB_store_set_id
                                                         [0xaU]
                                                          : 
                                                         ((1U 
                                                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xbU))
                                                           ? 
                                                          vlSelfRef.LDB_store_set_id
                                                          [0xbU]
                                                           : 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xcU))
                                                            ? 
                                                           vlSelfRef.LDB_store_set_id
                                                           [0xcU]
                                                            : 
                                                           ((1U 
                                                             & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xdU))
                                                             ? 
                                                            vlSelfRef.LDB_store_set_id
                                                            [0xdU]
                                                             : 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xeU))
                                                              ? 
                                                             vlSelfRef.LDB_store_set_id
                                                             [0xeU]
                                                              : 
                                                             vlSelfRef.LDB_store_set_id
                                                             [0xfU])))))))))))))));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_detect 
        = (0U != (IData)(vlSelfRef.__PVT__compare_all));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___ico_comb__TOP__falco_top__core__LDB__2(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___ico_comb__TOP__falco_top__core__LDB__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_new_entry = (((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate) 
                                            & (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__instr_valid)) 
                                           & (IData)(vlSelfRef.__PVT__alloc_ptr_valid));
    vlSelfRef.__PVT__compare_address[0U] = (vlSelfRef.LDB_addr
                                            [0U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[1U] = (vlSelfRef.LDB_addr
                                            [1U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[2U] = (vlSelfRef.LDB_addr
                                            [2U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[3U] = (vlSelfRef.LDB_addr
                                            [3U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[4U] = (vlSelfRef.LDB_addr
                                            [4U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[5U] = (vlSelfRef.LDB_addr
                                            [5U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[6U] = (vlSelfRef.LDB_addr
                                            [6U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[7U] = (vlSelfRef.LDB_addr
                                            [7U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[8U] = (vlSelfRef.LDB_addr
                                            [8U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[9U] = (vlSelfRef.LDB_addr
                                            [9U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xaU] = (vlSelfRef.LDB_addr
                                              [0xaU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xbU] = (vlSelfRef.LDB_addr
                                              [0xbU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xcU] = (vlSelfRef.LDB_addr
                                              [0xcU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xdU] = (vlSelfRef.LDB_addr
                                              [0xdU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xeU] = (vlSelfRef.LDB_addr
                                              [0xeU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xfU] = (vlSelfRef.LDB_addr
                                              [0xfU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
}

VL_INLINE_OPT void Vfalco_top_load_buffer___act_sequent__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___act_sequent__TOP__falco_top__core__LDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compare_rob_tag[0U] = ((vlSelfRef.LDB_valid
                                             [0U] & 
                                             (vlSelfRef.LDB_tag
                                              [0U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [0U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [0U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[1U] = ((vlSelfRef.LDB_valid
                                             [1U] & 
                                             (vlSelfRef.LDB_tag
                                              [1U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [1U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [1U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[2U] = ((vlSelfRef.LDB_valid
                                             [2U] & 
                                             (vlSelfRef.LDB_tag
                                              [2U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [2U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [2U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[3U] = ((vlSelfRef.LDB_valid
                                             [3U] & 
                                             (vlSelfRef.LDB_tag
                                              [3U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [3U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [3U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[4U] = ((vlSelfRef.LDB_valid
                                             [4U] & 
                                             (vlSelfRef.LDB_tag
                                              [4U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [4U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [4U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[5U] = ((vlSelfRef.LDB_valid
                                             [5U] & 
                                             (vlSelfRef.LDB_tag
                                              [5U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [5U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [5U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[6U] = ((vlSelfRef.LDB_valid
                                             [6U] & 
                                             (vlSelfRef.LDB_tag
                                              [6U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [6U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [6U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[7U] = ((vlSelfRef.LDB_valid
                                             [7U] & 
                                             (vlSelfRef.LDB_tag
                                              [7U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [7U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [7U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[8U] = ((vlSelfRef.LDB_valid
                                             [8U] & 
                                             (vlSelfRef.LDB_tag
                                              [8U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [8U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [8U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[9U] = ((vlSelfRef.LDB_valid
                                             [9U] & 
                                             (vlSelfRef.LDB_tag
                                              [9U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [9U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [9U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xaU] = ((vlSelfRef.LDB_valid
                                               [0xaU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xaU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xaU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xaU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xbU] = ((vlSelfRef.LDB_valid
                                               [0xbU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xbU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xbU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xbU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xcU] = ((vlSelfRef.LDB_valid
                                               [0xcU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xcU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xcU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xcU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xdU] = ((vlSelfRef.LDB_valid
                                               [0xdU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xdU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xdU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xdU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xeU] = ((vlSelfRef.LDB_valid
                                               [0xeU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xeU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xeU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xeU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xfU] = ((vlSelfRef.LDB_valid
                                               [0xfU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xfU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xfU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xfU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___act_comb__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___act_comb__TOP__falco_top__core__LDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(16,2,0U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [1U] & vlSelfRef.__PVT__compare_rob_tag
                                          [1U]), (vlSelfRef.__PVT__compare_address
                                                  [0U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [0U])));
    VL_ASSIGNSEL_II(16,2,2U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [3U] & vlSelfRef.__PVT__compare_rob_tag
                                          [3U]), (vlSelfRef.__PVT__compare_address
                                                  [2U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [2U])));
    VL_ASSIGNSEL_II(16,2,4U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [5U] & vlSelfRef.__PVT__compare_rob_tag
                                          [5U]), (vlSelfRef.__PVT__compare_address
                                                  [4U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [4U])));
    VL_ASSIGNSEL_II(16,2,6U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [7U] & vlSelfRef.__PVT__compare_rob_tag
                                          [7U]), (vlSelfRef.__PVT__compare_address
                                                  [6U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [6U])));
    VL_ASSIGNSEL_II(16,2,8U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [9U] & vlSelfRef.__PVT__compare_rob_tag
                                          [9U]), (vlSelfRef.__PVT__compare_address
                                                  [8U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [8U])));
    VL_ASSIGNSEL_II(16,2,0xaU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xbU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xbU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xaU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xaU])));
    VL_ASSIGNSEL_II(16,2,0xcU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xdU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xdU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xcU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xcU])));
    VL_ASSIGNSEL_II(16,2,0xeU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xfU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xfU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xeU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xeU])));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_pc 
        = ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0U))
            ? vlSelfRef.LDB_store_set_pc[0U] : ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 1U))
                                                 ? 
                                                vlSelfRef.LDB_store_set_pc
                                                [1U]
                                                 : 
                                                ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 2U))
                                                  ? 
                                                 vlSelfRef.LDB_store_set_pc
                                                 [2U]
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 3U))
                                                   ? 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [3U]
                                                   : 
                                                  ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 4U))
                                                    ? 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [4U]
                                                    : 
                                                   ((1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 5U))
                                                     ? 
                                                    vlSelfRef.LDB_store_set_pc
                                                    [5U]
                                                     : 
                                                    ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 6U))
                                                      ? 
                                                     vlSelfRef.LDB_store_set_pc
                                                     [6U]
                                                      : 
                                                     ((1U 
                                                       & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 7U))
                                                       ? 
                                                      vlSelfRef.LDB_store_set_pc
                                                      [7U]
                                                       : 
                                                      ((1U 
                                                        & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 8U))
                                                        ? 
                                                       vlSelfRef.LDB_store_set_pc
                                                       [8U]
                                                        : 
                                                       ((1U 
                                                         & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 9U))
                                                         ? 
                                                        vlSelfRef.LDB_store_set_pc
                                                        [9U]
                                                         : 
                                                        ((1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xaU))
                                                          ? 
                                                         vlSelfRef.LDB_store_set_pc
                                                         [0xaU]
                                                          : 
                                                         ((1U 
                                                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xbU))
                                                           ? 
                                                          vlSelfRef.LDB_store_set_pc
                                                          [0xbU]
                                                           : 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xcU))
                                                            ? 
                                                           vlSelfRef.LDB_store_set_pc
                                                           [0xcU]
                                                            : 
                                                           ((1U 
                                                             & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xdU))
                                                             ? 
                                                            vlSelfRef.LDB_store_set_pc
                                                            [0xdU]
                                                             : 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xeU))
                                                              ? 
                                                             vlSelfRef.LDB_store_set_pc
                                                             [0xeU]
                                                              : 
                                                             vlSelfRef.LDB_store_set_pc
                                                             [0xfU])))))))))))))));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_id 
        = ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0U))
            ? vlSelfRef.LDB_store_set_id[0U] : ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 1U))
                                                 ? 
                                                vlSelfRef.LDB_store_set_id
                                                [1U]
                                                 : 
                                                ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 2U))
                                                  ? 
                                                 vlSelfRef.LDB_store_set_id
                                                 [2U]
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 3U))
                                                   ? 
                                                  vlSelfRef.LDB_store_set_id
                                                  [3U]
                                                   : 
                                                  ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 4U))
                                                    ? 
                                                   vlSelfRef.LDB_store_set_id
                                                   [4U]
                                                    : 
                                                   ((1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 5U))
                                                     ? 
                                                    vlSelfRef.LDB_store_set_id
                                                    [5U]
                                                     : 
                                                    ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 6U))
                                                      ? 
                                                     vlSelfRef.LDB_store_set_id
                                                     [6U]
                                                      : 
                                                     ((1U 
                                                       & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 7U))
                                                       ? 
                                                      vlSelfRef.LDB_store_set_id
                                                      [7U]
                                                       : 
                                                      ((1U 
                                                        & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 8U))
                                                        ? 
                                                       vlSelfRef.LDB_store_set_id
                                                       [8U]
                                                        : 
                                                       ((1U 
                                                         & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 9U))
                                                         ? 
                                                        vlSelfRef.LDB_store_set_id
                                                        [9U]
                                                         : 
                                                        ((1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xaU))
                                                          ? 
                                                         vlSelfRef.LDB_store_set_id
                                                         [0xaU]
                                                          : 
                                                         ((1U 
                                                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xbU))
                                                           ? 
                                                          vlSelfRef.LDB_store_set_id
                                                          [0xbU]
                                                           : 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xcU))
                                                            ? 
                                                           vlSelfRef.LDB_store_set_id
                                                           [0xcU]
                                                            : 
                                                           ((1U 
                                                             & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xdU))
                                                             ? 
                                                            vlSelfRef.LDB_store_set_id
                                                            [0xdU]
                                                             : 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xeU))
                                                              ? 
                                                             vlSelfRef.LDB_store_set_id
                                                             [0xeU]
                                                              : 
                                                             vlSelfRef.LDB_store_set_id
                                                             [0xfU])))))))))))))));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_detect 
        = (0U != (IData)(vlSelfRef.__PVT__compare_all));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___act_comb__TOP__falco_top__core__LDB__1(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___act_comb__TOP__falco_top__core__LDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_new_entry = (((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate) 
                                            & (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__instr_valid)) 
                                           & (IData)(vlSelfRef.__PVT__alloc_ptr_valid));
    vlSelfRef.__PVT__compare_address[0U] = (vlSelfRef.LDB_addr
                                            [0U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[1U] = (vlSelfRef.LDB_addr
                                            [1U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[2U] = (vlSelfRef.LDB_addr
                                            [2U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[3U] = (vlSelfRef.LDB_addr
                                            [3U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[4U] = (vlSelfRef.LDB_addr
                                            [4U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[5U] = (vlSelfRef.LDB_addr
                                            [5U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[6U] = (vlSelfRef.LDB_addr
                                            [6U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[7U] = (vlSelfRef.LDB_addr
                                            [7U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[8U] = (vlSelfRef.LDB_addr
                                            [8U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[9U] = (vlSelfRef.LDB_addr
                                            [9U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xaU] = (vlSelfRef.LDB_addr
                                              [0xaU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xbU] = (vlSelfRef.LDB_addr
                                              [0xbU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xcU] = (vlSelfRef.LDB_addr
                                              [0xcU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xdU] = (vlSelfRef.LDB_addr
                                              [0xdU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xeU] = (vlSelfRef.LDB_addr
                                              [0xeU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xfU] = (vlSelfRef.LDB_addr
                                              [0xfU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
}

VL_INLINE_OPT void Vfalco_top_load_buffer___nba_sequent__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___nba_sequent__TOP__falco_top__core__LDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__LDB_mask__v0 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v1 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v2 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v3 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v4 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v5 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v6 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v7 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v8 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v9 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v10 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v11 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v12 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v13 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v14 = 0U;
    vlSelfRef.__VdlySet__LDB_mask__v15 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v0 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v1 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v2 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v3 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v4 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v5 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v6 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v7 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v8 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v9 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v10 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v11 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v12 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v13 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v14 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_pc__v15 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v0 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v1 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v2 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v3 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v4 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v5 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v6 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v7 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v8 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v9 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v10 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v11 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v12 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v13 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v14 = 0U;
    vlSelfRef.__VdlySet__LDB_store_set_id__v15 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v0 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v1 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v2 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v3 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v4 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v5 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v6 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v7 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v8 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v9 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v10 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v11 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v12 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v13 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v14 = 0U;
    vlSelfRef.__VdlySet__LDB_addr__v15 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v0 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v1 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v2 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v3 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v4 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v5 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v6 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v7 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v8 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v9 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v10 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v11 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v12 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v13 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v14 = 0U;
    vlSelfRef.__VdlySet__LDB_tag__v15 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v0 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v1 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v2 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v3 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v4 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v5 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v6 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v7 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v8 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v9 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v10 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v11 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v12 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v13 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v14 = 0U;
    vlSelfRef.__VdlySet__LDB_valid__v15 = 0U;
    vlSelfRef.__VdlyVal__LDB_mask__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [0U]));
    vlSelfRef.__VdlySet__LDB_mask__v0 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (1U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [1U]));
    vlSelfRef.__VdlySet__LDB_mask__v1 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [2U]));
    vlSelfRef.__VdlySet__LDB_mask__v2 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [3U]));
    vlSelfRef.__VdlySet__LDB_mask__v3 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (4U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [4U]));
    vlSelfRef.__VdlySet__LDB_mask__v4 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [5U]));
    vlSelfRef.__VdlySet__LDB_mask__v5 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (6U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [6U]));
    vlSelfRef.__VdlySet__LDB_mask__v6 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (7U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [7U]));
    vlSelfRef.__VdlySet__LDB_mask__v7 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v8 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (8U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [8U]));
    vlSelfRef.__VdlySet__LDB_mask__v8 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v9 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (9U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                   : 
                                                  vlSelfRef.LDB_mask
                                                  [9U]));
    vlSelfRef.__VdlySet__LDB_mask__v9 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v10 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xaU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                    : 
                                                   vlSelfRef.LDB_mask
                                                   [0xaU]));
    vlSelfRef.__VdlySet__LDB_mask__v10 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v11 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xbU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                    : 
                                                   vlSelfRef.LDB_mask
                                                   [0xbU]));
    vlSelfRef.__VdlySet__LDB_mask__v11 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v12 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xcU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                    : 
                                                   vlSelfRef.LDB_mask
                                                   [0xcU]));
    vlSelfRef.__VdlySet__LDB_mask__v12 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v13 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                    : 
                                                   vlSelfRef.LDB_mask
                                                   [0xdU]));
    vlSelfRef.__VdlySet__LDB_mask__v13 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v14 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xeU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                    : 
                                                   vlSelfRef.LDB_mask
                                                   [0xeU]));
    vlSelfRef.__VdlySet__LDB_mask__v14 = 1U;
    vlSelfRef.__VdlyVal__LDB_mask__v15 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xfU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask)
                                                    : 
                                                   vlSelfRef.LDB_mask
                                                   [0xfU]));
    vlSelfRef.__VdlySet__LDB_mask__v15 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [0U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v0 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [1U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v1 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [2U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v2 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [3U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v3 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((4U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [4U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v4 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((5U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [5U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v5 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [6U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v6 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [7U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v7 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v8 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((8U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [8U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v8 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v9 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((9U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                   : 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [9U]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v9 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v10 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xaU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                    : 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [0xaU]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v10 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v11 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xbU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                    : 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [0xbU]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v11 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v12 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xcU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                    : 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [0xcU]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v12 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v13 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xdU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                    : 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [0xdU]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v13 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v14 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xeU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                    : 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [0xeU]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v14 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_pc__v15 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xfU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc)
                                                    : 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [0xfU]));
    vlSelfRef.__VdlySet__LDB_store_set_pc__v15 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [0U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v0 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [1U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v1 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [2U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v2 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [3U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v3 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((4U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [4U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v4 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((5U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [5U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v5 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [6U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v6 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [7U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v7 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v8 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((8U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [8U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v8 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v9 = ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 (((9U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                   : 
                                                  vlSelfRef.LDB_store_set_id
                                                  [9U]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v9 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v10 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xaU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                    : 
                                                   vlSelfRef.LDB_store_set_id
                                                   [0xaU]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v10 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v11 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xbU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                    : 
                                                   vlSelfRef.LDB_store_set_id
                                                   [0xbU]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v11 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v12 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xcU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                    : 
                                                   vlSelfRef.LDB_store_set_id
                                                   [0xcU]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v12 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v13 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xdU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                    : 
                                                   vlSelfRef.LDB_store_set_id
                                                   [0xdU]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v13 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v14 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xeU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                    : 
                                                   vlSelfRef.LDB_store_set_id
                                                   [0xeU]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v14 = 1U;
    vlSelfRef.__VdlyVal__LDB_store_set_id__v15 = ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 0U
                                                   : 
                                                  (((0xfU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id)
                                                    : 
                                                   vlSelfRef.LDB_store_set_id
                                                   [0xfU]));
    vlSelfRef.__VdlySet__LDB_store_set_id__v15 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [0U]));
    vlSelfRef.__VdlySet__LDB_addr__v0 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (1U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [1U]));
    vlSelfRef.__VdlySet__LDB_addr__v1 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [2U]));
    vlSelfRef.__VdlySet__LDB_addr__v2 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [3U]));
    vlSelfRef.__VdlySet__LDB_addr__v3 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (4U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [4U]));
    vlSelfRef.__VdlySet__LDB_addr__v4 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [5U]));
    vlSelfRef.__VdlySet__LDB_addr__v5 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (6U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [6U]));
    vlSelfRef.__VdlySet__LDB_addr__v6 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (7U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [7U]));
    vlSelfRef.__VdlySet__LDB_addr__v7 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v8 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (8U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [8U]));
    vlSelfRef.__VdlySet__LDB_addr__v8 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v9 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (9U 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                   : 
                                                  vlSelfRef.LDB_addr
                                                  [9U]));
    vlSelfRef.__VdlySet__LDB_addr__v9 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v10 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xaU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                    : 
                                                   vlSelfRef.LDB_addr
                                                   [0xaU]));
    vlSelfRef.__VdlySet__LDB_addr__v10 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v11 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xbU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                    : 
                                                   vlSelfRef.LDB_addr
                                                   [0xbU]));
    vlSelfRef.__VdlySet__LDB_addr__v11 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v12 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xcU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                    : 
                                                   vlSelfRef.LDB_addr
                                                   [0xcU]));
    vlSelfRef.__VdlySet__LDB_addr__v12 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v13 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                    : 
                                                   vlSelfRef.LDB_addr
                                                   [0xdU]));
    vlSelfRef.__VdlySet__LDB_addr__v13 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v14 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xeU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                    : 
                                                   vlSelfRef.LDB_addr
                                                   [0xeU]));
    vlSelfRef.__VdlySet__LDB_addr__v14 = 1U;
    vlSelfRef.__VdlyVal__LDB_addr__v15 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   ((0xfU 
                                                     == (IData)(vlSelfRef.alloc_ptr)) 
                                                    & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                    ? vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr
                                                    : 
                                                   vlSelfRef.LDB_addr
                                                   [0xfU]));
    vlSelfRef.__VdlySet__LDB_addr__v15 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((0U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [0U]));
    vlSelfRef.__VdlySet__LDB_tag__v0 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((1U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [1U]));
    vlSelfRef.__VdlySet__LDB_tag__v1 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((2U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [2U]));
    vlSelfRef.__VdlySet__LDB_tag__v2 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((3U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [3U]));
    vlSelfRef.__VdlySet__LDB_tag__v3 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((4U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [4U]));
    vlSelfRef.__VdlySet__LDB_tag__v4 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((5U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [5U]));
    vlSelfRef.__VdlySet__LDB_tag__v5 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((6U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [6U]));
    vlSelfRef.__VdlySet__LDB_tag__v6 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((7U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [7U]));
    vlSelfRef.__VdlySet__LDB_tag__v7 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v8 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((8U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [8U]));
    vlSelfRef.__VdlySet__LDB_tag__v8 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v9 = ((IData)(vlSelfRef.__PVT__rst)
                                         ? 0U : (((9U 
                                                   == (IData)(vlSelfRef.alloc_ptr)) 
                                                  & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                  ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                  : 
                                                 vlSelfRef.LDB_tag
                                                 [9U]));
    vlSelfRef.__VdlySet__LDB_tag__v9 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v10 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0xaU 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                   : 
                                                  vlSelfRef.LDB_tag
                                                  [0xaU]));
    vlSelfRef.__VdlySet__LDB_tag__v10 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v11 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0xbU 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                   : 
                                                  vlSelfRef.LDB_tag
                                                  [0xbU]));
    vlSelfRef.__VdlySet__LDB_tag__v11 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v12 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                   : 
                                                  vlSelfRef.LDB_tag
                                                  [0xcU]));
    vlSelfRef.__VdlySet__LDB_tag__v12 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v13 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                   : 
                                                  vlSelfRef.LDB_tag
                                                  [0xdU]));
    vlSelfRef.__VdlySet__LDB_tag__v13 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v14 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0xeU 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                   : 
                                                  vlSelfRef.LDB_tag
                                                  [0xeU]));
    vlSelfRef.__VdlySet__LDB_tag__v14 = 1U;
    vlSelfRef.__VdlyVal__LDB_tag__v15 = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.alloc_ptr)) 
                                                   & (IData)(vlSelfRef.__PVT__allocate_new_entry))
                                                   ? (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag)
                                                   : 
                                                  vlSelfRef.LDB_tag
                                                  [0xfU]));
    vlSelfRef.__VdlySet__LDB_tag__v15 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v0 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [0U];
                                vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
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
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [0U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [0U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [0U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [0U]))))) 
                                                   & (((0U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [0U])))));
    vlSelfRef.__VdlySet__LDB_valid__v0 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v1 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [1U];
                                vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
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
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [1U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [1U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [1U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [1U]))))) 
                                                   & (((1U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [1U])))));
    vlSelfRef.__VdlySet__LDB_valid__v1 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v2 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [2U];
                                vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [2U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [2U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [2U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [2U]))))) 
                                                   & (((2U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [2U])))));
    vlSelfRef.__VdlySet__LDB_valid__v2 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v3 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [3U];
                                vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout))
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [3U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [3U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [3U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [3U]))))) 
                                                   & (((3U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [3U])))));
    vlSelfRef.__VdlySet__LDB_valid__v3 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v4 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [4U];
                                vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
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
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [4U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [4U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [4U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [4U]))))) 
                                                   & (((4U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [4U])))));
    vlSelfRef.__VdlySet__LDB_valid__v4 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v5 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [5U];
                                vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
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
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [5U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [5U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [5U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [5U]))))) 
                                                   & (((5U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [5U])))));
    vlSelfRef.__VdlySet__LDB_valid__v5 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v6 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [6U];
                                vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
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
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [6U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [6U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [6U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [6U]))))) 
                                                   & (((6U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [6U])))));
    vlSelfRef.__VdlySet__LDB_valid__v6 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v7 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [7U];
                                vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
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
                                                                  VL_EXTEND_II(32,1, 
                                                                               vlSelfRef.LDB_valid
                                                                               [7U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [7U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [7U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [7U]))))) 
                                                   & (((7U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [7U])))));
    vlSelfRef.__VdlySet__LDB_valid__v7 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v8 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [8U];
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
                                                                               vlSelfRef.LDB_valid
                                                                               [8U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [8U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [8U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [8U]))))) 
                                                   & (((8U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [8U])))));
    vlSelfRef.__VdlySet__LDB_valid__v8 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v9 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                          && (1U & 
                                              ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                ? VL_BITSEL_IIII(32, 
                                                                 (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__9__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [9U];
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
                                                                               vlSelfRef.LDB_valid
                                                                               [9U])), 0U)
                                                : (
                                                   (~ 
                                                    (vlSelfRef.LDB_valid
                                                     [9U] 
                                                     & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                         & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [9U])) 
                                                        | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                           & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                              == 
                                                              vlSelfRef.LDB_tag
                                                              [9U]))))) 
                                                   & (((9U 
                                                        == (IData)(vlSelfRef.alloc_ptr)) 
                                                       & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                      | vlSelfRef.LDB_valid
                                                      [9U])))));
    vlSelfRef.__VdlySet__LDB_valid__v9 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v10 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && (1U & 
                                               ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__10__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [0xaU];
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
                                                                             vlSelfRef.LDB_valid
                                                                             [0xaU])), 0U)
                                                 : 
                                                ((~ 
                                                  (vlSelfRef.LDB_valid
                                                   [0xaU] 
                                                   & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                       & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                          == 
                                                          vlSelfRef.LDB_tag
                                                          [0xaU])) 
                                                      | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                         & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [0xaU]))))) 
                                                 & (((0xaU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                    | vlSelfRef.LDB_valid
                                                    [0xaU])))));
    vlSelfRef.__VdlySet__LDB_valid__v10 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v11 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && (1U & 
                                               ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__11__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [0xbU];
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
                                                                             vlSelfRef.LDB_valid
                                                                             [0xbU])), 0U)
                                                 : 
                                                ((~ 
                                                  (vlSelfRef.LDB_valid
                                                   [0xbU] 
                                                   & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                       & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                          == 
                                                          vlSelfRef.LDB_tag
                                                          [0xbU])) 
                                                      | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                         & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [0xbU]))))) 
                                                 & (((0xbU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                    | vlSelfRef.LDB_valid
                                                    [0xbU])))));
    vlSelfRef.__VdlySet__LDB_valid__v11 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v12 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && (1U & 
                                               ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__12__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [0xcU];
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
                                                                             vlSelfRef.LDB_valid
                                                                             [0xcU])), 0U)
                                                 : 
                                                ((~ 
                                                  (vlSelfRef.LDB_valid
                                                   [0xcU] 
                                                   & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                       & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                          == 
                                                          vlSelfRef.LDB_tag
                                                          [0xcU])) 
                                                      | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                         & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [0xcU]))))) 
                                                 & (((0xcU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                    | vlSelfRef.LDB_valid
                                                    [0xcU])))));
    vlSelfRef.__VdlySet__LDB_valid__v12 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v13 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && (1U & 
                                               ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__13__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [0xdU];
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
                                                                             vlSelfRef.LDB_valid
                                                                             [0xdU])), 0U)
                                                 : 
                                                ((~ 
                                                  (vlSelfRef.LDB_valid
                                                   [0xdU] 
                                                   & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                       & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                          == 
                                                          vlSelfRef.LDB_tag
                                                          [0xdU])) 
                                                      | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                         & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [0xdU]))))) 
                                                 & (((0xdU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                    | vlSelfRef.LDB_valid
                                                    [0xdU])))));
    vlSelfRef.__VdlySet__LDB_valid__v13 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v14 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && (1U & 
                                               ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__14__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [0xeU];
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
                                                                             vlSelfRef.LDB_valid
                                                                             [0xeU])), 0U)
                                                 : 
                                                ((~ 
                                                  (vlSelfRef.LDB_valid
                                                   [0xeU] 
                                                   & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                       & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                          == 
                                                          vlSelfRef.LDB_tag
                                                          [0xeU])) 
                                                      | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                         & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [0xeU]))))) 
                                                 & (((0xeU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                    | vlSelfRef.LDB_valid
                                                    [0xeU])))));
    vlSelfRef.__VdlySet__LDB_valid__v14 = 1U;
    vlSelfRef.__VdlyVal__LDB_valid__v15 = ((1U & (~ (IData)(vlSelfRef.__PVT__rst))) 
                                           && (1U & 
                                               ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                 ? 
                                                VL_BITSEL_IIII(32, 
                                                               (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__15__rob_tag 
                                    = vlSelfRef.LDB_tag
                                    [0xfU];
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
                                                                             vlSelfRef.LDB_valid
                                                                             [0xfU])), 0U)
                                                 : 
                                                ((~ 
                                                  (vlSelfRef.LDB_valid
                                                   [0xfU] 
                                                   & (((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr0) 
                                                       & ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag) 
                                                          == 
                                                          vlSelfRef.LDB_tag
                                                          [0xfU])) 
                                                      | ((IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__commit_instr1) 
                                                         & ((IData)(vlSelfRef.__PVT__next_tag) 
                                                            == 
                                                            vlSelfRef.LDB_tag
                                                            [0xfU]))))) 
                                                 & (((0xfU 
                                                      == (IData)(vlSelfRef.alloc_ptr)) 
                                                     & (IData)(vlSelfRef.__PVT__allocate_new_entry)) 
                                                    | vlSelfRef.LDB_valid
                                                    [0xfU])))));
    vlSelfRef.__VdlySet__LDB_valid__v15 = 1U;
    if (vlSelfRef.__VdlySet__LDB_mask__v0) {
        vlSelfRef.LDB_mask[0U] = vlSelfRef.__VdlyVal__LDB_mask__v0;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v1) {
        vlSelfRef.LDB_mask[1U] = vlSelfRef.__VdlyVal__LDB_mask__v1;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v2) {
        vlSelfRef.LDB_mask[2U] = vlSelfRef.__VdlyVal__LDB_mask__v2;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v3) {
        vlSelfRef.LDB_mask[3U] = vlSelfRef.__VdlyVal__LDB_mask__v3;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v4) {
        vlSelfRef.LDB_mask[4U] = vlSelfRef.__VdlyVal__LDB_mask__v4;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v5) {
        vlSelfRef.LDB_mask[5U] = vlSelfRef.__VdlyVal__LDB_mask__v5;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v6) {
        vlSelfRef.LDB_mask[6U] = vlSelfRef.__VdlyVal__LDB_mask__v6;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v7) {
        vlSelfRef.LDB_mask[7U] = vlSelfRef.__VdlyVal__LDB_mask__v7;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v8) {
        vlSelfRef.LDB_mask[8U] = vlSelfRef.__VdlyVal__LDB_mask__v8;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v9) {
        vlSelfRef.LDB_mask[9U] = vlSelfRef.__VdlyVal__LDB_mask__v9;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v10) {
        vlSelfRef.LDB_mask[0xaU] = vlSelfRef.__VdlyVal__LDB_mask__v10;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v11) {
        vlSelfRef.LDB_mask[0xbU] = vlSelfRef.__VdlyVal__LDB_mask__v11;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v12) {
        vlSelfRef.LDB_mask[0xcU] = vlSelfRef.__VdlyVal__LDB_mask__v12;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v13) {
        vlSelfRef.LDB_mask[0xdU] = vlSelfRef.__VdlyVal__LDB_mask__v13;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v14) {
        vlSelfRef.LDB_mask[0xeU] = vlSelfRef.__VdlyVal__LDB_mask__v14;
    }
    if (vlSelfRef.__VdlySet__LDB_mask__v15) {
        vlSelfRef.LDB_mask[0xfU] = vlSelfRef.__VdlyVal__LDB_mask__v15;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v0) {
        vlSelfRef.LDB_store_set_pc[0U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v0;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v1) {
        vlSelfRef.LDB_store_set_pc[1U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v1;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v2) {
        vlSelfRef.LDB_store_set_pc[2U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v2;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v3) {
        vlSelfRef.LDB_store_set_pc[3U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v3;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v4) {
        vlSelfRef.LDB_store_set_pc[4U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v4;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v5) {
        vlSelfRef.LDB_store_set_pc[5U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v5;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v6) {
        vlSelfRef.LDB_store_set_pc[6U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v6;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v7) {
        vlSelfRef.LDB_store_set_pc[7U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v7;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v8) {
        vlSelfRef.LDB_store_set_pc[8U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v8;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v9) {
        vlSelfRef.LDB_store_set_pc[9U] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v9;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v10) {
        vlSelfRef.LDB_store_set_pc[0xaU] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v10;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v11) {
        vlSelfRef.LDB_store_set_pc[0xbU] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v11;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v12) {
        vlSelfRef.LDB_store_set_pc[0xcU] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v12;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v13) {
        vlSelfRef.LDB_store_set_pc[0xdU] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v13;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v14) {
        vlSelfRef.LDB_store_set_pc[0xeU] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v14;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_pc__v15) {
        vlSelfRef.LDB_store_set_pc[0xfU] = vlSelfRef.__VdlyVal__LDB_store_set_pc__v15;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v0) {
        vlSelfRef.LDB_store_set_id[0U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v0;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v1) {
        vlSelfRef.LDB_store_set_id[1U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v1;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v2) {
        vlSelfRef.LDB_store_set_id[2U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v2;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v3) {
        vlSelfRef.LDB_store_set_id[3U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v3;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v4) {
        vlSelfRef.LDB_store_set_id[4U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v4;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v5) {
        vlSelfRef.LDB_store_set_id[5U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v5;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v6) {
        vlSelfRef.LDB_store_set_id[6U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v6;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v7) {
        vlSelfRef.LDB_store_set_id[7U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v7;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v8) {
        vlSelfRef.LDB_store_set_id[8U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v8;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v9) {
        vlSelfRef.LDB_store_set_id[9U] = vlSelfRef.__VdlyVal__LDB_store_set_id__v9;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v10) {
        vlSelfRef.LDB_store_set_id[0xaU] = vlSelfRef.__VdlyVal__LDB_store_set_id__v10;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v11) {
        vlSelfRef.LDB_store_set_id[0xbU] = vlSelfRef.__VdlyVal__LDB_store_set_id__v11;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v12) {
        vlSelfRef.LDB_store_set_id[0xcU] = vlSelfRef.__VdlyVal__LDB_store_set_id__v12;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v13) {
        vlSelfRef.LDB_store_set_id[0xdU] = vlSelfRef.__VdlyVal__LDB_store_set_id__v13;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v14) {
        vlSelfRef.LDB_store_set_id[0xeU] = vlSelfRef.__VdlyVal__LDB_store_set_id__v14;
    }
    if (vlSelfRef.__VdlySet__LDB_store_set_id__v15) {
        vlSelfRef.LDB_store_set_id[0xfU] = vlSelfRef.__VdlyVal__LDB_store_set_id__v15;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v0) {
        vlSelfRef.LDB_addr[0U] = vlSelfRef.__VdlyVal__LDB_addr__v0;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v1) {
        vlSelfRef.LDB_addr[1U] = vlSelfRef.__VdlyVal__LDB_addr__v1;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v2) {
        vlSelfRef.LDB_addr[2U] = vlSelfRef.__VdlyVal__LDB_addr__v2;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v3) {
        vlSelfRef.LDB_addr[3U] = vlSelfRef.__VdlyVal__LDB_addr__v3;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v4) {
        vlSelfRef.LDB_addr[4U] = vlSelfRef.__VdlyVal__LDB_addr__v4;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v5) {
        vlSelfRef.LDB_addr[5U] = vlSelfRef.__VdlyVal__LDB_addr__v5;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v6) {
        vlSelfRef.LDB_addr[6U] = vlSelfRef.__VdlyVal__LDB_addr__v6;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v7) {
        vlSelfRef.LDB_addr[7U] = vlSelfRef.__VdlyVal__LDB_addr__v7;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v8) {
        vlSelfRef.LDB_addr[8U] = vlSelfRef.__VdlyVal__LDB_addr__v8;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v9) {
        vlSelfRef.LDB_addr[9U] = vlSelfRef.__VdlyVal__LDB_addr__v9;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v10) {
        vlSelfRef.LDB_addr[0xaU] = vlSelfRef.__VdlyVal__LDB_addr__v10;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v11) {
        vlSelfRef.LDB_addr[0xbU] = vlSelfRef.__VdlyVal__LDB_addr__v11;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v12) {
        vlSelfRef.LDB_addr[0xcU] = vlSelfRef.__VdlyVal__LDB_addr__v12;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v13) {
        vlSelfRef.LDB_addr[0xdU] = vlSelfRef.__VdlyVal__LDB_addr__v13;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v14) {
        vlSelfRef.LDB_addr[0xeU] = vlSelfRef.__VdlyVal__LDB_addr__v14;
    }
    if (vlSelfRef.__VdlySet__LDB_addr__v15) {
        vlSelfRef.LDB_addr[0xfU] = vlSelfRef.__VdlyVal__LDB_addr__v15;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v0) {
        vlSelfRef.LDB_tag[0U] = vlSelfRef.__VdlyVal__LDB_tag__v0;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v1) {
        vlSelfRef.LDB_tag[1U] = vlSelfRef.__VdlyVal__LDB_tag__v1;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v2) {
        vlSelfRef.LDB_tag[2U] = vlSelfRef.__VdlyVal__LDB_tag__v2;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v3) {
        vlSelfRef.LDB_tag[3U] = vlSelfRef.__VdlyVal__LDB_tag__v3;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v4) {
        vlSelfRef.LDB_tag[4U] = vlSelfRef.__VdlyVal__LDB_tag__v4;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v5) {
        vlSelfRef.LDB_tag[5U] = vlSelfRef.__VdlyVal__LDB_tag__v5;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v6) {
        vlSelfRef.LDB_tag[6U] = vlSelfRef.__VdlyVal__LDB_tag__v6;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v7) {
        vlSelfRef.LDB_tag[7U] = vlSelfRef.__VdlyVal__LDB_tag__v7;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v8) {
        vlSelfRef.LDB_tag[8U] = vlSelfRef.__VdlyVal__LDB_tag__v8;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v9) {
        vlSelfRef.LDB_tag[9U] = vlSelfRef.__VdlyVal__LDB_tag__v9;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v10) {
        vlSelfRef.LDB_tag[0xaU] = vlSelfRef.__VdlyVal__LDB_tag__v10;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v11) {
        vlSelfRef.LDB_tag[0xbU] = vlSelfRef.__VdlyVal__LDB_tag__v11;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v12) {
        vlSelfRef.LDB_tag[0xcU] = vlSelfRef.__VdlyVal__LDB_tag__v12;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v13) {
        vlSelfRef.LDB_tag[0xdU] = vlSelfRef.__VdlyVal__LDB_tag__v13;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v14) {
        vlSelfRef.LDB_tag[0xeU] = vlSelfRef.__VdlyVal__LDB_tag__v14;
    }
    if (vlSelfRef.__VdlySet__LDB_tag__v15) {
        vlSelfRef.LDB_tag[0xfU] = vlSelfRef.__VdlyVal__LDB_tag__v15;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v0) {
        vlSelfRef.LDB_valid[0U] = vlSelfRef.__VdlyVal__LDB_valid__v0;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v1) {
        vlSelfRef.LDB_valid[1U] = vlSelfRef.__VdlyVal__LDB_valid__v1;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v2) {
        vlSelfRef.LDB_valid[2U] = vlSelfRef.__VdlyVal__LDB_valid__v2;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v3) {
        vlSelfRef.LDB_valid[3U] = vlSelfRef.__VdlyVal__LDB_valid__v3;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v4) {
        vlSelfRef.LDB_valid[4U] = vlSelfRef.__VdlyVal__LDB_valid__v4;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v5) {
        vlSelfRef.LDB_valid[5U] = vlSelfRef.__VdlyVal__LDB_valid__v5;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v6) {
        vlSelfRef.LDB_valid[6U] = vlSelfRef.__VdlyVal__LDB_valid__v6;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v7) {
        vlSelfRef.LDB_valid[7U] = vlSelfRef.__VdlyVal__LDB_valid__v7;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v8) {
        vlSelfRef.LDB_valid[8U] = vlSelfRef.__VdlyVal__LDB_valid__v8;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v9) {
        vlSelfRef.LDB_valid[9U] = vlSelfRef.__VdlyVal__LDB_valid__v9;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v10) {
        vlSelfRef.LDB_valid[0xaU] = vlSelfRef.__VdlyVal__LDB_valid__v10;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v11) {
        vlSelfRef.LDB_valid[0xbU] = vlSelfRef.__VdlyVal__LDB_valid__v11;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v12) {
        vlSelfRef.LDB_valid[0xcU] = vlSelfRef.__VdlyVal__LDB_valid__v12;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v13) {
        vlSelfRef.LDB_valid[0xdU] = vlSelfRef.__VdlyVal__LDB_valid__v13;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v14) {
        vlSelfRef.LDB_valid[0xeU] = vlSelfRef.__VdlyVal__LDB_valid__v14;
    }
    if (vlSelfRef.__VdlySet__LDB_valid__v15) {
        vlSelfRef.LDB_valid[0xfU] = vlSelfRef.__VdlyVal__LDB_valid__v15;
    }
    if (vlSelfRef.LDB_valid[0U]) {
        if (vlSelfRef.LDB_valid[1U]) {
            if (vlSelfRef.LDB_valid[2U]) {
                if (vlSelfRef.LDB_valid[3U]) {
                    if (vlSelfRef.LDB_valid[4U]) {
                        if (vlSelfRef.LDB_valid[5U]) {
                            if (vlSelfRef.LDB_valid
                                [6U]) {
                                if (vlSelfRef.LDB_valid
                                    [7U]) {
                                    if (vlSelfRef.LDB_valid
                                        [8U]) {
                                        if (vlSelfRef.LDB_valid
                                            [9U]) {
                                            if (vlSelfRef.LDB_valid
                                                [0xaU]) {
                                                if (
                                                    vlSelfRef.LDB_valid
                                                    [0xbU]) {
                                                    if (
                                                        vlSelfRef.LDB_valid
                                                        [0xcU]) {
                                                        if (
                                                            vlSelfRef.LDB_valid
                                                            [0xdU]) {
                                                            if (
                                                                vlSelfRef.LDB_valid
                                                                [0xeU]) {
                                                                if (
                                                                    vlSelfRef.LDB_valid
                                                                    [0xfU]) {
                                                                    vlSelfRef.alloc_ptr = 0U;
                                                                    vlSelfRef.__PVT__alloc_ptr_valid = 0U;
                                                                } else {
                                                                    vlSelfRef.alloc_ptr = 0xfU;
                                                                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                                }
                                                            } else {
                                                                vlSelfRef.alloc_ptr = 0xeU;
                                                                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                            }
                                                        } else {
                                                            vlSelfRef.alloc_ptr = 0xdU;
                                                            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                        }
                                                    } else {
                                                        vlSelfRef.alloc_ptr = 0xcU;
                                                        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.alloc_ptr = 0xbU;
                                                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                                }
                                            } else {
                                                vlSelfRef.alloc_ptr = 0xaU;
                                                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                            }
                                        } else {
                                            vlSelfRef.alloc_ptr = 9U;
                                            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                        }
                                    } else {
                                        vlSelfRef.alloc_ptr = 8U;
                                        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                    }
                                } else {
                                    vlSelfRef.alloc_ptr = 7U;
                                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                                }
                            } else {
                                vlSelfRef.alloc_ptr = 6U;
                                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                            }
                        } else {
                            vlSelfRef.alloc_ptr = 5U;
                            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                        }
                    } else {
                        vlSelfRef.alloc_ptr = 4U;
                        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                    }
                } else {
                    vlSelfRef.alloc_ptr = 3U;
                    vlSelfRef.__PVT__alloc_ptr_valid = 1U;
                }
            } else {
                vlSelfRef.alloc_ptr = 2U;
                vlSelfRef.__PVT__alloc_ptr_valid = 1U;
            }
        } else {
            vlSelfRef.alloc_ptr = 1U;
            vlSelfRef.__PVT__alloc_ptr_valid = 1U;
        }
    } else {
        vlSelfRef.alloc_ptr = 0U;
        vlSelfRef.__PVT__alloc_ptr_valid = 1U;
    }
}

VL_INLINE_OPT void Vfalco_top_load_buffer___nba_sequent__TOP__falco_top__core__LDB__1(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___nba_sequent__TOP__falco_top__core__LDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_tag = (0x3fU & VL_SEL_IIII(32, 
                                                     ((0x3fU 
                                                       == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       VL_EXTEND_II(32,6, (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag)))), 0U, 6U));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___nba_comb__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___nba_comb__TOP__falco_top__core__LDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compare_rob_tag[0U] = ((vlSelfRef.LDB_valid
                                             [0U] & 
                                             (vlSelfRef.LDB_tag
                                              [0U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [0U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [0U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[1U] = ((vlSelfRef.LDB_valid
                                             [1U] & 
                                             (vlSelfRef.LDB_tag
                                              [1U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [1U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [1U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[2U] = ((vlSelfRef.LDB_valid
                                             [2U] & 
                                             (vlSelfRef.LDB_tag
                                              [2U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [2U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [2U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[3U] = ((vlSelfRef.LDB_valid
                                             [3U] & 
                                             (vlSelfRef.LDB_tag
                                              [3U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [3U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [3U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[4U] = ((vlSelfRef.LDB_valid
                                             [4U] & 
                                             (vlSelfRef.LDB_tag
                                              [4U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [4U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [4U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[5U] = ((vlSelfRef.LDB_valid
                                             [5U] & 
                                             (vlSelfRef.LDB_tag
                                              [5U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [5U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [5U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[6U] = ((vlSelfRef.LDB_valid
                                             [6U] & 
                                             (vlSelfRef.LDB_tag
                                              [6U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [6U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [6U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[7U] = ((vlSelfRef.LDB_valid
                                             [7U] & 
                                             (vlSelfRef.LDB_tag
                                              [7U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [7U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [7U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[8U] = ((vlSelfRef.LDB_valid
                                             [8U] & 
                                             (vlSelfRef.LDB_tag
                                              [8U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [8U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [8U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[9U] = ((vlSelfRef.LDB_valid
                                             [9U] & 
                                             (vlSelfRef.LDB_tag
                                              [9U] 
                                              != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                            & ((((vlSelfRef.LDB_tag
                                                  [9U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                 ^ 
                                                 (vlSelfRef.LDB_tag
                                                  [9U] 
                                                  > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                ^ ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                               | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xaU] = ((vlSelfRef.LDB_valid
                                               [0xaU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xaU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xaU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xaU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xbU] = ((vlSelfRef.LDB_valid
                                               [0xbU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xbU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xbU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xbU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xcU] = ((vlSelfRef.LDB_valid
                                               [0xcU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xcU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xcU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xcU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xdU] = ((vlSelfRef.LDB_valid
                                               [0xdU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xdU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xdU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xdU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xeU] = ((vlSelfRef.LDB_valid
                                               [0xeU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xeU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xeU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xeU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
    vlSelfRef.__PVT__compare_rob_tag[0xfU] = ((vlSelfRef.LDB_valid
                                               [0xfU] 
                                               & (vlSelfRef.LDB_tag
                                                  [0xfU] 
                                                  != (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                              & ((((vlSelfRef.LDB_tag
                                                    [0xfU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag)) 
                                                   ^ 
                                                   (vlSelfRef.LDB_tag
                                                    [0xfU] 
                                                    > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                   > (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))) 
                                                 | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag) 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag))));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___nba_comb__TOP__falco_top__core__LDB__1(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___nba_comb__TOP__falco_top__core__LDB__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(16,2,0U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [1U] & vlSelfRef.__PVT__compare_rob_tag
                                          [1U]), (vlSelfRef.__PVT__compare_address
                                                  [0U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [0U])));
    VL_ASSIGNSEL_II(16,2,2U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [3U] & vlSelfRef.__PVT__compare_rob_tag
                                          [3U]), (vlSelfRef.__PVT__compare_address
                                                  [2U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [2U])));
    VL_ASSIGNSEL_II(16,2,4U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [5U] & vlSelfRef.__PVT__compare_rob_tag
                                          [5U]), (vlSelfRef.__PVT__compare_address
                                                  [4U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [4U])));
    VL_ASSIGNSEL_II(16,2,6U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [7U] & vlSelfRef.__PVT__compare_rob_tag
                                          [7U]), (vlSelfRef.__PVT__compare_address
                                                  [6U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [6U])));
    VL_ASSIGNSEL_II(16,2,8U, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [9U] & vlSelfRef.__PVT__compare_rob_tag
                                          [9U]), (vlSelfRef.__PVT__compare_address
                                                  [8U] 
                                                  & vlSelfRef.__PVT__compare_rob_tag
                                                  [8U])));
    VL_ASSIGNSEL_II(16,2,0xaU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xbU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xbU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xaU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xaU])));
    VL_ASSIGNSEL_II(16,2,0xcU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xdU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xdU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xcU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xcU])));
    VL_ASSIGNSEL_II(16,2,0xeU, vlSelfRef.__PVT__compare_all, 
                    VL_CONCAT_III(2,1,1, (vlSelfRef.__PVT__compare_address
                                          [0xfU] & 
                                          vlSelfRef.__PVT__compare_rob_tag
                                          [0xfU]), 
                                  (vlSelfRef.__PVT__compare_address
                                   [0xeU] & vlSelfRef.__PVT__compare_rob_tag
                                   [0xeU])));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_pc 
        = ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0U))
            ? vlSelfRef.LDB_store_set_pc[0U] : ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 1U))
                                                 ? 
                                                vlSelfRef.LDB_store_set_pc
                                                [1U]
                                                 : 
                                                ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 2U))
                                                  ? 
                                                 vlSelfRef.LDB_store_set_pc
                                                 [2U]
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 3U))
                                                   ? 
                                                  vlSelfRef.LDB_store_set_pc
                                                  [3U]
                                                   : 
                                                  ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 4U))
                                                    ? 
                                                   vlSelfRef.LDB_store_set_pc
                                                   [4U]
                                                    : 
                                                   ((1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 5U))
                                                     ? 
                                                    vlSelfRef.LDB_store_set_pc
                                                    [5U]
                                                     : 
                                                    ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 6U))
                                                      ? 
                                                     vlSelfRef.LDB_store_set_pc
                                                     [6U]
                                                      : 
                                                     ((1U 
                                                       & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 7U))
                                                       ? 
                                                      vlSelfRef.LDB_store_set_pc
                                                      [7U]
                                                       : 
                                                      ((1U 
                                                        & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 8U))
                                                        ? 
                                                       vlSelfRef.LDB_store_set_pc
                                                       [8U]
                                                        : 
                                                       ((1U 
                                                         & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 9U))
                                                         ? 
                                                        vlSelfRef.LDB_store_set_pc
                                                        [9U]
                                                         : 
                                                        ((1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xaU))
                                                          ? 
                                                         vlSelfRef.LDB_store_set_pc
                                                         [0xaU]
                                                          : 
                                                         ((1U 
                                                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xbU))
                                                           ? 
                                                          vlSelfRef.LDB_store_set_pc
                                                          [0xbU]
                                                           : 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xcU))
                                                            ? 
                                                           vlSelfRef.LDB_store_set_pc
                                                           [0xcU]
                                                            : 
                                                           ((1U 
                                                             & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xdU))
                                                             ? 
                                                            vlSelfRef.LDB_store_set_pc
                                                            [0xdU]
                                                             : 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xeU))
                                                              ? 
                                                             vlSelfRef.LDB_store_set_pc
                                                             [0xeU]
                                                              : 
                                                             vlSelfRef.LDB_store_set_pc
                                                             [0xfU])))))))))))))));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_id 
        = ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0U))
            ? vlSelfRef.LDB_store_set_id[0U] : ((1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 1U))
                                                 ? 
                                                vlSelfRef.LDB_store_set_id
                                                [1U]
                                                 : 
                                                ((1U 
                                                  & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 2U))
                                                  ? 
                                                 vlSelfRef.LDB_store_set_id
                                                 [2U]
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 3U))
                                                   ? 
                                                  vlSelfRef.LDB_store_set_id
                                                  [3U]
                                                   : 
                                                  ((1U 
                                                    & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 4U))
                                                    ? 
                                                   vlSelfRef.LDB_store_set_id
                                                   [4U]
                                                    : 
                                                   ((1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 5U))
                                                     ? 
                                                    vlSelfRef.LDB_store_set_id
                                                    [5U]
                                                     : 
                                                    ((1U 
                                                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 6U))
                                                      ? 
                                                     vlSelfRef.LDB_store_set_id
                                                     [6U]
                                                      : 
                                                     ((1U 
                                                       & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 7U))
                                                       ? 
                                                      vlSelfRef.LDB_store_set_id
                                                      [7U]
                                                       : 
                                                      ((1U 
                                                        & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 8U))
                                                        ? 
                                                       vlSelfRef.LDB_store_set_id
                                                       [8U]
                                                        : 
                                                       ((1U 
                                                         & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 9U))
                                                         ? 
                                                        vlSelfRef.LDB_store_set_id
                                                        [9U]
                                                         : 
                                                        ((1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xaU))
                                                          ? 
                                                         vlSelfRef.LDB_store_set_id
                                                         [0xaU]
                                                          : 
                                                         ((1U 
                                                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xbU))
                                                           ? 
                                                          vlSelfRef.LDB_store_set_id
                                                          [0xbU]
                                                           : 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xcU))
                                                            ? 
                                                           vlSelfRef.LDB_store_set_id
                                                           [0xcU]
                                                            : 
                                                           ((1U 
                                                             & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xdU))
                                                             ? 
                                                            vlSelfRef.LDB_store_set_id
                                                            [0xdU]
                                                             : 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__compare_all), 0xeU))
                                                              ? 
                                                             vlSelfRef.LDB_store_set_id
                                                             [0xeU]
                                                              : 
                                                             vlSelfRef.LDB_store_set_id
                                                             [0xfU])))))))))))))));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_detect 
        = (0U != (IData)(vlSelfRef.__PVT__compare_all));
}

VL_INLINE_OPT void Vfalco_top_load_buffer___nba_comb__TOP__falco_top__core__LDB__2(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___nba_comb__TOP__falco_top__core__LDB__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_new_entry = (((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate) 
                                            & (IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__instr_valid)) 
                                           & (IData)(vlSelfRef.__PVT__alloc_ptr_valid));
    vlSelfRef.__PVT__compare_address[0U] = (vlSelfRef.LDB_addr
                                            [0U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[1U] = (vlSelfRef.LDB_addr
                                            [1U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[2U] = (vlSelfRef.LDB_addr
                                            [2U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[3U] = (vlSelfRef.LDB_addr
                                            [3U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[4U] = (vlSelfRef.LDB_addr
                                            [4U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[5U] = (vlSelfRef.LDB_addr
                                            [5U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[6U] = (vlSelfRef.LDB_addr
                                            [6U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[7U] = (vlSelfRef.LDB_addr
                                            [7U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[8U] = (vlSelfRef.LDB_addr
                                            [8U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[9U] = (vlSelfRef.LDB_addr
                                            [9U] == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xaU] = (vlSelfRef.LDB_addr
                                              [0xaU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xbU] = (vlSelfRef.LDB_addr
                                              [0xbU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xcU] = (vlSelfRef.LDB_addr
                                              [0xcU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xdU] = (vlSelfRef.LDB_addr
                                              [0xdU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xeU] = (vlSelfRef.LDB_addr
                                              [0xeU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
    vlSelfRef.__PVT__compare_address[0xfU] = (vlSelfRef.LDB_addr
                                              [0xfU] 
                                              == vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr);
}
