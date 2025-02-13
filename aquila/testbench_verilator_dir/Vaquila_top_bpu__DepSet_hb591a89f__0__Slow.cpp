// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top_bpu.h"

VL_ATTR_COLD void Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__0(Vaquila_top_bpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__0\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__write_addr_i 
        = vlSelf->__PVT__write_addr;
}

VL_ATTR_COLD void Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__1(Vaquila_top_bpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__1\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    VL_ASSIGNSEL_QI(64,2,0U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [1U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,2U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [3U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [2U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,4U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [5U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [4U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,6U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [7U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [6U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,8U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [9U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [8U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0xaU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0xbU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0xaU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0xcU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0xdU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0xcU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0xeU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0xfU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0xeU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x10U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x11U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x10U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x12U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x13U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x12U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x14U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x15U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x14U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x16U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x17U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x16U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x18U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x19U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x18U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x1aU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x1bU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x1aU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x1cU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x1dU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x1cU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x1eU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x1fU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x1eU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x20U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x21U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x20U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x22U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x23U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x22U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x24U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x25U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x24U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x26U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x27U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x26U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x28U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x29U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x28U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x2aU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x2bU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x2aU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x2cU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x2dU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x2cU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x2eU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x2fU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x2eU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x30U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x31U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x30U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x32U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x33U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x32U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x34U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x35U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x34U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x36U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x37U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x36U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x38U, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x39U] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x38U] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x3aU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x3bU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x3aU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x3cU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x3dU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x3cU] == vlSelf->__PVT__dec_pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x3eU, vlSelf->__PVT__addr_hit_DEC, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x3fU] == vlSelf->__PVT__dec_pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x3eU] == vlSelf->__PVT__dec_pc_i)));
    vlSelf->__PVT__update_addr = (((((((((2ULL == vlSelf->__PVT__addr_hit_DEC) 
                                         | (4ULL == vlSelf->__PVT__addr_hit_DEC)) 
                                        | (8ULL == vlSelf->__PVT__addr_hit_DEC)) 
                                       | (0x10ULL == vlSelf->__PVT__addr_hit_DEC)) 
                                      | (0x20ULL == vlSelf->__PVT__addr_hit_DEC)) 
                                     | (0x40ULL == vlSelf->__PVT__addr_hit_DEC)) 
                                    | (0x80ULL == vlSelf->__PVT__addr_hit_DEC)) 
                                   | (0x100ULL == vlSelf->__PVT__addr_hit_DEC))
                                   ? ((2ULL == vlSelf->__PVT__addr_hit_DEC)
                                       ? 1U : ((4ULL 
                                                == vlSelf->__PVT__addr_hit_DEC)
                                                ? 2U
                                                : (
                                                   (8ULL 
                                                    == vlSelf->__PVT__addr_hit_DEC)
                                                    ? 3U
                                                    : 
                                                   ((0x10ULL 
                                                     == vlSelf->__PVT__addr_hit_DEC)
                                                     ? 4U
                                                     : 
                                                    ((0x20ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 5U
                                                      : 
                                                     ((0x40ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 6U
                                                       : 
                                                      ((0x80ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 7U
                                                        : 8U)))))))
                                   : (((((((((0x200ULL 
                                              == vlSelf->__PVT__addr_hit_DEC) 
                                             | (0x400ULL 
                                                == vlSelf->__PVT__addr_hit_DEC)) 
                                            | (0x800ULL 
                                               == vlSelf->__PVT__addr_hit_DEC)) 
                                           | (0x1000ULL 
                                              == vlSelf->__PVT__addr_hit_DEC)) 
                                          | (0x2000ULL 
                                             == vlSelf->__PVT__addr_hit_DEC)) 
                                         | (0x4000ULL 
                                            == vlSelf->__PVT__addr_hit_DEC)) 
                                        | (0x8000ULL 
                                           == vlSelf->__PVT__addr_hit_DEC)) 
                                       | (0x10000ULL 
                                          == vlSelf->__PVT__addr_hit_DEC))
                                       ? ((0x200ULL 
                                           == vlSelf->__PVT__addr_hit_DEC)
                                           ? 9U : (
                                                   (0x400ULL 
                                                    == vlSelf->__PVT__addr_hit_DEC)
                                                    ? 0xaU
                                                    : 
                                                   ((0x800ULL 
                                                     == vlSelf->__PVT__addr_hit_DEC)
                                                     ? 0xbU
                                                     : 
                                                    ((0x1000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 0xcU
                                                      : 
                                                     ((0x2000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 0xdU
                                                       : 
                                                      ((0x4000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 0xeU
                                                        : 
                                                       ((0x8000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)
                                                         ? 0xfU
                                                         : 0x10U)))))))
                                       : (((((((((0x20000ULL 
                                                  == vlSelf->__PVT__addr_hit_DEC) 
                                                 | (0x40000ULL 
                                                    == vlSelf->__PVT__addr_hit_DEC)) 
                                                | (0x80000ULL 
                                                   == vlSelf->__PVT__addr_hit_DEC)) 
                                               | (0x100000ULL 
                                                  == vlSelf->__PVT__addr_hit_DEC)) 
                                              | (0x200000ULL 
                                                 == vlSelf->__PVT__addr_hit_DEC)) 
                                             | (0x400000ULL 
                                                == vlSelf->__PVT__addr_hit_DEC)) 
                                            | (0x800000ULL 
                                               == vlSelf->__PVT__addr_hit_DEC)) 
                                           | (0x1000000ULL 
                                              == vlSelf->__PVT__addr_hit_DEC))
                                           ? ((0x20000ULL 
                                               == vlSelf->__PVT__addr_hit_DEC)
                                               ? 0x11U
                                               : ((0x40000ULL 
                                                   == vlSelf->__PVT__addr_hit_DEC)
                                                   ? 0x12U
                                                   : 
                                                  ((0x80000ULL 
                                                    == vlSelf->__PVT__addr_hit_DEC)
                                                    ? 0x13U
                                                    : 
                                                   ((0x100000ULL 
                                                     == vlSelf->__PVT__addr_hit_DEC)
                                                     ? 0x14U
                                                     : 
                                                    ((0x200000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 0x15U
                                                      : 
                                                     ((0x400000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 0x16U
                                                       : 
                                                      ((0x800000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 0x17U
                                                        : 0x18U)))))))
                                           : ((((((
                                                   (((0x2000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC) 
                                                     | (0x4000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)) 
                                                    | (0x8000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)) 
                                                   | (0x10000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)) 
                                                  | (0x20000000ULL 
                                                     == vlSelf->__PVT__addr_hit_DEC)) 
                                                 | (0x40000000ULL 
                                                    == vlSelf->__PVT__addr_hit_DEC)) 
                                                | (0x80000000ULL 
                                                   == vlSelf->__PVT__addr_hit_DEC)) 
                                               | (0x100000000ULL 
                                                  == vlSelf->__PVT__addr_hit_DEC))
                                               ? ((0x2000000ULL 
                                                   == vlSelf->__PVT__addr_hit_DEC)
                                                   ? 0x19U
                                                   : 
                                                  ((0x4000000ULL 
                                                    == vlSelf->__PVT__addr_hit_DEC)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x8000000ULL 
                                                     == vlSelf->__PVT__addr_hit_DEC)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x10000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 0x1cU
                                                      : 
                                                     ((0x20000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 0x1dU
                                                       : 
                                                      ((0x40000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 0x1eU
                                                        : 
                                                       ((0x80000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)
                                                         ? 0x1fU
                                                         : 0x20U)))))))
                                               : ((
                                                   (((((((0x200000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC) 
                                                         | (0x400000000ULL 
                                                            == vlSelf->__PVT__addr_hit_DEC)) 
                                                        | (0x800000000ULL 
                                                           == vlSelf->__PVT__addr_hit_DEC)) 
                                                       | (0x1000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC)) 
                                                      | (0x2000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)) 
                                                     | (0x4000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)) 
                                                    | (0x8000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)) 
                                                   | (0x10000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC))
                                                   ? 
                                                  ((0x200000000ULL 
                                                    == vlSelf->__PVT__addr_hit_DEC)
                                                    ? 0x21U
                                                    : 
                                                   ((0x400000000ULL 
                                                     == vlSelf->__PVT__addr_hit_DEC)
                                                     ? 0x22U
                                                     : 
                                                    ((0x800000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 0x23U
                                                      : 
                                                     ((0x1000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 0x24U
                                                       : 
                                                      ((0x2000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 0x25U
                                                        : 
                                                       ((0x4000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)
                                                         ? 0x26U
                                                         : 
                                                        ((0x8000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC)
                                                          ? 0x27U
                                                          : 0x28U)))))))
                                                   : 
                                                  (((((((((0x20000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_DEC) 
                                                          | (0x40000000000ULL 
                                                             == vlSelf->__PVT__addr_hit_DEC)) 
                                                         | (0x80000000000ULL 
                                                            == vlSelf->__PVT__addr_hit_DEC)) 
                                                        | (0x100000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_DEC)) 
                                                       | (0x200000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC)) 
                                                      | (0x400000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)) 
                                                     | (0x800000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)) 
                                                    | (0x1000000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC))
                                                    ? 
                                                   ((0x20000000000ULL 
                                                     == vlSelf->__PVT__addr_hit_DEC)
                                                     ? 0x29U
                                                     : 
                                                    ((0x40000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 0x2aU
                                                      : 
                                                     ((0x80000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 0x2bU
                                                       : 
                                                      ((0x100000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 0x2cU
                                                        : 
                                                       ((0x200000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)
                                                         ? 0x2dU
                                                         : 
                                                        ((0x400000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC)
                                                          ? 0x2eU
                                                          : 
                                                         ((0x800000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_DEC)
                                                           ? 0x2fU
                                                           : 0x30U)))))))
                                                    : 
                                                   (((((((((0x2000000000000ULL 
                                                            == vlSelf->__PVT__addr_hit_DEC) 
                                                           | (0x4000000000000ULL 
                                                              == vlSelf->__PVT__addr_hit_DEC)) 
                                                          | (0x8000000000000ULL 
                                                             == vlSelf->__PVT__addr_hit_DEC)) 
                                                         | (0x10000000000000ULL 
                                                            == vlSelf->__PVT__addr_hit_DEC)) 
                                                        | (0x20000000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_DEC)) 
                                                       | (0x40000000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC)) 
                                                      | (0x80000000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)) 
                                                     | (0x100000000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC))
                                                     ? 
                                                    ((0x2000000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 0x31U
                                                      : 
                                                     ((0x4000000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 0x32U
                                                       : 
                                                      ((0x8000000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 0x33U
                                                        : 
                                                       ((0x10000000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)
                                                         ? 0x34U
                                                         : 
                                                        ((0x20000000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC)
                                                          ? 0x35U
                                                          : 
                                                         ((0x40000000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_DEC)
                                                           ? 0x36U
                                                           : 
                                                          ((0x80000000000000ULL 
                                                            == vlSelf->__PVT__addr_hit_DEC)
                                                            ? 0x37U
                                                            : 0x38U)))))))
                                                     : 
                                                    ((0x200000000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_DEC)
                                                      ? 0x39U
                                                      : 
                                                     ((0x400000000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_DEC)
                                                       ? 0x3aU
                                                       : 
                                                      ((0x800000000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_DEC)
                                                        ? 0x3bU
                                                        : 
                                                       ((0x1000000000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_DEC)
                                                         ? 0x3cU
                                                         : 
                                                        ((0x2000000000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_DEC)
                                                          ? 0x3dU
                                                          : 
                                                         ((0x4000000000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_DEC)
                                                           ? 0x3eU
                                                           : 
                                                          ((0x8000000000000000ULL 
                                                            == vlSelf->__PVT__addr_hit_DEC)
                                                            ? 0x3fU
                                                            : 0U))))))))))))));
}

VL_ATTR_COLD void Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__2(Vaquila_top_bpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__2\n"); );
    // Body
    VL_ASSIGNSEL_QI(64,2,0U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [1U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,2U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [3U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [2U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,4U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [5U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [4U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,6U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [7U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [6U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,8U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [9U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [8U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0xaU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0xbU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0xaU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0xcU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0xdU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0xcU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0xeU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0xfU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0xeU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x10U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x11U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x10U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x12U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x13U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x12U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x14U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x15U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x14U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x16U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x17U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x16U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x18U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x19U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x18U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x1aU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x1bU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x1aU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x1cU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x1dU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x1cU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x1eU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x1fU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x1eU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x20U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x21U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x20U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x22U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x23U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x22U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x24U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x25U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x24U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x26U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x27U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x26U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x28U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x29U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x28U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x2aU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x2bU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x2aU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x2cU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x2dU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x2cU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x2eU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x2fU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x2eU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x30U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x31U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x30U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x32U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x33U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x32U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x34U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x35U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x34U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x36U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x37U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x36U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x38U, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x39U] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x38U] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x3aU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x3bU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x3aU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x3cU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x3dU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x3cU] == vlSelf->__PVT__pc_i)));
    VL_ASSIGNSEL_QI(64,2,0x3eU, vlSelf->__PVT__addr_hit_PCU, 
                    VL_CONCAT_III(2,1,1, (vlSelf->__PVT__branch_pc_table
                                          [0x3fU] == vlSelf->__PVT__pc_i), 
                                  (vlSelf->__PVT__branch_pc_table
                                   [0x3eU] == vlSelf->__PVT__pc_i)));
    vlSelf->__PVT__we = (((~ (IData)(vlSelf->__PVT__stall_i)) 
                          & ((IData)(vlSelf->__PVT__is_cond_branch_i) 
                             | (IData)(vlSelf->__PVT__is_jal_i))) 
                         & (~ VL_REDOR_Q(vlSelf->__PVT__addr_hit_DEC)));
    vlSelf->__PVT__branch_hit_o = (VL_REDOR_Q(vlSelf->__PVT__addr_hit_PCU) 
                                   & VL_REDOR_I(vlSelf->__PVT__pc_i));
    vlSelf->__PVT__read_addr = (((((((((2ULL == vlSelf->__PVT__addr_hit_PCU) 
                                       | (4ULL == vlSelf->__PVT__addr_hit_PCU)) 
                                      | (8ULL == vlSelf->__PVT__addr_hit_PCU)) 
                                     | (0x10ULL == vlSelf->__PVT__addr_hit_PCU)) 
                                    | (0x20ULL == vlSelf->__PVT__addr_hit_PCU)) 
                                   | (0x40ULL == vlSelf->__PVT__addr_hit_PCU)) 
                                  | (0x80ULL == vlSelf->__PVT__addr_hit_PCU)) 
                                 | (0x100ULL == vlSelf->__PVT__addr_hit_PCU))
                                 ? ((2ULL == vlSelf->__PVT__addr_hit_PCU)
                                     ? 1U : ((4ULL 
                                              == vlSelf->__PVT__addr_hit_PCU)
                                              ? 2U : 
                                             ((8ULL 
                                               == vlSelf->__PVT__addr_hit_PCU)
                                               ? 3U
                                               : ((0x10ULL 
                                                   == vlSelf->__PVT__addr_hit_PCU)
                                                   ? 4U
                                                   : 
                                                  ((0x20ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 5U
                                                    : 
                                                   ((0x40ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 6U
                                                     : 
                                                    ((0x80ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 7U
                                                      : 8U)))))))
                                 : (((((((((0x200ULL 
                                            == vlSelf->__PVT__addr_hit_PCU) 
                                           | (0x400ULL 
                                              == vlSelf->__PVT__addr_hit_PCU)) 
                                          | (0x800ULL 
                                             == vlSelf->__PVT__addr_hit_PCU)) 
                                         | (0x1000ULL 
                                            == vlSelf->__PVT__addr_hit_PCU)) 
                                        | (0x2000ULL 
                                           == vlSelf->__PVT__addr_hit_PCU)) 
                                       | (0x4000ULL 
                                          == vlSelf->__PVT__addr_hit_PCU)) 
                                      | (0x8000ULL 
                                         == vlSelf->__PVT__addr_hit_PCU)) 
                                     | (0x10000ULL 
                                        == vlSelf->__PVT__addr_hit_PCU))
                                     ? ((0x200ULL == vlSelf->__PVT__addr_hit_PCU)
                                         ? 9U : ((0x400ULL 
                                                  == vlSelf->__PVT__addr_hit_PCU)
                                                  ? 0xaU
                                                  : 
                                                 ((0x800ULL 
                                                   == vlSelf->__PVT__addr_hit_PCU)
                                                   ? 0xbU
                                                   : 
                                                  ((0x1000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 0xcU
                                                    : 
                                                   ((0x2000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 0xdU
                                                     : 
                                                    ((0x4000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 0xeU
                                                      : 
                                                     ((0x8000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)
                                                       ? 0xfU
                                                       : 0x10U)))))))
                                     : (((((((((0x20000ULL 
                                                == vlSelf->__PVT__addr_hit_PCU) 
                                               | (0x40000ULL 
                                                  == vlSelf->__PVT__addr_hit_PCU)) 
                                              | (0x80000ULL 
                                                 == vlSelf->__PVT__addr_hit_PCU)) 
                                             | (0x100000ULL 
                                                == vlSelf->__PVT__addr_hit_PCU)) 
                                            | (0x200000ULL 
                                               == vlSelf->__PVT__addr_hit_PCU)) 
                                           | (0x400000ULL 
                                              == vlSelf->__PVT__addr_hit_PCU)) 
                                          | (0x800000ULL 
                                             == vlSelf->__PVT__addr_hit_PCU)) 
                                         | (0x1000000ULL 
                                            == vlSelf->__PVT__addr_hit_PCU))
                                         ? ((0x20000ULL 
                                             == vlSelf->__PVT__addr_hit_PCU)
                                             ? 0x11U
                                             : ((0x40000ULL 
                                                 == vlSelf->__PVT__addr_hit_PCU)
                                                 ? 0x12U
                                                 : 
                                                ((0x80000ULL 
                                                  == vlSelf->__PVT__addr_hit_PCU)
                                                  ? 0x13U
                                                  : 
                                                 ((0x100000ULL 
                                                   == vlSelf->__PVT__addr_hit_PCU)
                                                   ? 0x14U
                                                   : 
                                                  ((0x200000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 0x15U
                                                    : 
                                                   ((0x400000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 0x16U
                                                     : 
                                                    ((0x800000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 0x17U
                                                      : 0x18U)))))))
                                         : ((((((((
                                                   (0x2000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU) 
                                                   | (0x4000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)) 
                                                  | (0x8000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)) 
                                                 | (0x10000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)) 
                                                | (0x20000000ULL 
                                                   == vlSelf->__PVT__addr_hit_PCU)) 
                                               | (0x40000000ULL 
                                                  == vlSelf->__PVT__addr_hit_PCU)) 
                                              | (0x80000000ULL 
                                                 == vlSelf->__PVT__addr_hit_PCU)) 
                                             | (0x100000000ULL 
                                                == vlSelf->__PVT__addr_hit_PCU))
                                             ? ((0x2000000ULL 
                                                 == vlSelf->__PVT__addr_hit_PCU)
                                                 ? 0x19U
                                                 : 
                                                ((0x4000000ULL 
                                                  == vlSelf->__PVT__addr_hit_PCU)
                                                  ? 0x1aU
                                                  : 
                                                 ((0x8000000ULL 
                                                   == vlSelf->__PVT__addr_hit_PCU)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x10000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x20000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 0x1dU
                                                     : 
                                                    ((0x40000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 0x1eU
                                                      : 
                                                     ((0x80000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)
                                                       ? 0x1fU
                                                       : 0x20U)))))))
                                             : ((((
                                                   (((((0x200000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU) 
                                                       | (0x400000000ULL 
                                                          == vlSelf->__PVT__addr_hit_PCU)) 
                                                      | (0x800000000ULL 
                                                         == vlSelf->__PVT__addr_hit_PCU)) 
                                                     | (0x1000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU)) 
                                                    | (0x2000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)) 
                                                   | (0x4000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)) 
                                                  | (0x8000000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)) 
                                                 | (0x10000000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU))
                                                 ? 
                                                ((0x200000000ULL 
                                                  == vlSelf->__PVT__addr_hit_PCU)
                                                  ? 0x21U
                                                  : 
                                                 ((0x400000000ULL 
                                                   == vlSelf->__PVT__addr_hit_PCU)
                                                   ? 0x22U
                                                   : 
                                                  ((0x800000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 0x23U
                                                    : 
                                                   ((0x1000000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 0x24U
                                                     : 
                                                    ((0x2000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 0x25U
                                                      : 
                                                     ((0x4000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)
                                                       ? 0x26U
                                                       : 
                                                      ((0x8000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU)
                                                        ? 0x27U
                                                        : 0x28U)))))))
                                                 : 
                                                (((((((((0x20000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_PCU) 
                                                        | (0x40000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_PCU)) 
                                                       | (0x80000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_PCU)) 
                                                      | (0x100000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_PCU)) 
                                                     | (0x200000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU)) 
                                                    | (0x400000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)) 
                                                   | (0x800000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)) 
                                                  | (0x1000000000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU))
                                                  ? 
                                                 ((0x20000000000ULL 
                                                   == vlSelf->__PVT__addr_hit_PCU)
                                                   ? 0x29U
                                                   : 
                                                  ((0x40000000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 0x2aU
                                                    : 
                                                   ((0x80000000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 0x2bU
                                                     : 
                                                    ((0x100000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 0x2cU
                                                      : 
                                                     ((0x200000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)
                                                       ? 0x2dU
                                                       : 
                                                      ((0x400000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU)
                                                        ? 0x2eU
                                                        : 
                                                       ((0x800000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_PCU)
                                                         ? 0x2fU
                                                         : 0x30U)))))))
                                                  : 
                                                 (((((((((0x2000000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_PCU) 
                                                         | (0x4000000000000ULL 
                                                            == vlSelf->__PVT__addr_hit_PCU)) 
                                                        | (0x8000000000000ULL 
                                                           == vlSelf->__PVT__addr_hit_PCU)) 
                                                       | (0x10000000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_PCU)) 
                                                      | (0x20000000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_PCU)) 
                                                     | (0x40000000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU)) 
                                                    | (0x80000000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)) 
                                                   | (0x100000000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU))
                                                   ? 
                                                  ((0x2000000000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 0x31U
                                                    : 
                                                   ((0x4000000000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 0x32U
                                                     : 
                                                    ((0x8000000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 0x33U
                                                      : 
                                                     ((0x10000000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)
                                                       ? 0x34U
                                                       : 
                                                      ((0x20000000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU)
                                                        ? 0x35U
                                                        : 
                                                       ((0x40000000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_PCU)
                                                         ? 0x36U
                                                         : 
                                                        ((0x80000000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_PCU)
                                                          ? 0x37U
                                                          : 0x38U)))))))
                                                   : 
                                                  ((0x200000000000000ULL 
                                                    == vlSelf->__PVT__addr_hit_PCU)
                                                    ? 0x39U
                                                    : 
                                                   ((0x400000000000000ULL 
                                                     == vlSelf->__PVT__addr_hit_PCU)
                                                     ? 0x3aU
                                                     : 
                                                    ((0x800000000000000ULL 
                                                      == vlSelf->__PVT__addr_hit_PCU)
                                                      ? 0x3bU
                                                      : 
                                                     ((0x1000000000000000ULL 
                                                       == vlSelf->__PVT__addr_hit_PCU)
                                                       ? 0x3cU
                                                       : 
                                                      ((0x2000000000000000ULL 
                                                        == vlSelf->__PVT__addr_hit_PCU)
                                                        ? 0x3dU
                                                        : 
                                                       ((0x4000000000000000ULL 
                                                         == vlSelf->__PVT__addr_hit_PCU)
                                                         ? 0x3eU
                                                         : 
                                                        ((0x8000000000000000ULL 
                                                          == vlSelf->__PVT__addr_hit_PCU)
                                                          ? 0x3fU
                                                          : 0U))))))))))))));
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__we_i 
        = vlSelf->__PVT__we;
    vlSelf->__PVT__branch_decision_o = (1U & VL_BITSEL_IIII(2, 
                                                            vlSelf->__PVT__branch_likelihood
                                                            [vlSelf->__PVT__read_addr], 1U));
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__read_addr_i 
        = vlSelf->__PVT__read_addr;
}

VL_ATTR_COLD void Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__3(Vaquila_top_bpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__3\n"); );
    // Body
    vlSelf->__PVT__predicted_pc = vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__data_o;
    vlSelf->__PVT__branch_target_addr_o = (VL_REPLICATE_IOI(1,
                                                            VL_REDOR_Q(vlSelf->__PVT__addr_hit_PCU), 0x20U) 
                                           & vlSelf->__PVT__predicted_pc);
}

VL_ATTR_COLD void Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__4(Vaquila_top_bpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_bpu___stl_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__4\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__data_i 
        = vlSelf->__PVT__branch_target_addr_i;
}
