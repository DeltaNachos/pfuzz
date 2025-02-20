// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_load_buffer.h"

VL_ATTR_COLD void Vfalco_top_load_buffer___stl_sequent__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___stl_sequent__TOP__falco_top__core__LDB__0\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_buffer___stl_comb__TOP__falco_top__core__LDB__0(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___stl_comb__TOP__falco_top__core__LDB__0\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_buffer___stl_comb__TOP__falco_top__core__LDB__1(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___stl_comb__TOP__falco_top__core__LDB__1\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_buffer___stl_comb__TOP__falco_top__core__LDB__2(Vfalco_top_load_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_buffer___stl_comb__TOP__falco_top__core__LDB__2\n"); );
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
