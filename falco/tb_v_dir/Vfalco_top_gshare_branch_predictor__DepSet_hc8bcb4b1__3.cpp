// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_gshare_branch_predictor.h"

VL_INLINE_OPT void Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__3(Vfalco_top_gshare_branch_predictor* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1438 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2cfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1439 
            = vlSelfRef.__PVT__gshare_pht_table[0x2cfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1439 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1440 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1441 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1441 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1442 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1443 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1443 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1444 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1445 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1445 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1446 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1447 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1447 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1448 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1449 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1449 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1450 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1451 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1451 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1452 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1453 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1453 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1454 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1455 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1455 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1456 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1457 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1457 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1458 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2d9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1459 
            = vlSelfRef.__PVT__gshare_pht_table[0x2d9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1459 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1460 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2daU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1461 
            = vlSelfRef.__PVT__gshare_pht_table[0x2daU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1461 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1462 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2dbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1463 
            = vlSelfRef.__PVT__gshare_pht_table[0x2dbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1463 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1464 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2dcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1465 
            = vlSelfRef.__PVT__gshare_pht_table[0x2dcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1465 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1466 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2ddU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1467 
            = vlSelfRef.__PVT__gshare_pht_table[0x2ddU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1467 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1468 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2deU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1469 
            = vlSelfRef.__PVT__gshare_pht_table[0x2deU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1469 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1470 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2dfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1471 
            = vlSelfRef.__PVT__gshare_pht_table[0x2dfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1471 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1472 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1473 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1473 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1474 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1475 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1475 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1476 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1477 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1477 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1478 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1479 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1479 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1480 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1481 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1481 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1482 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1483 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1483 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1484 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1485 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1485 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1486 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1487 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1487 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1488 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1489 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1489 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1490 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2e9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1491 
            = vlSelfRef.__PVT__gshare_pht_table[0x2e9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1491 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1492 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2eaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1493 
            = vlSelfRef.__PVT__gshare_pht_table[0x2eaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1493 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1494 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2ebU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1495 
            = vlSelfRef.__PVT__gshare_pht_table[0x2ebU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1495 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1496 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2ecU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1497 
            = vlSelfRef.__PVT__gshare_pht_table[0x2ecU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1497 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1498 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2edU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1499 
            = vlSelfRef.__PVT__gshare_pht_table[0x2edU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1499 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1500 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2eeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1501 
            = vlSelfRef.__PVT__gshare_pht_table[0x2eeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1501 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1502 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2efU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1503 
            = vlSelfRef.__PVT__gshare_pht_table[0x2efU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1503 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1504 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1505 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1505 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1506 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1507 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1507 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1508 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1509 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1509 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1510 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1511 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1511 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1512 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1513 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1513 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1514 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1515 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1515 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1516 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1517 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1517 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1518 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1519 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1519 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1520 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1521 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1521 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1522 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2f9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1523 
            = vlSelfRef.__PVT__gshare_pht_table[0x2f9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1523 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1524 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2faU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1525 
            = vlSelfRef.__PVT__gshare_pht_table[0x2faU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1525 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1526 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2fbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1527 
            = vlSelfRef.__PVT__gshare_pht_table[0x2fbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1527 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1528 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2fcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1529 
            = vlSelfRef.__PVT__gshare_pht_table[0x2fcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1529 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1530 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2fdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1531 
            = vlSelfRef.__PVT__gshare_pht_table[0x2fdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1531 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1532 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2feU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1533 
            = vlSelfRef.__PVT__gshare_pht_table[0x2feU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1533 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1534 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2ffU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1535 
            = vlSelfRef.__PVT__gshare_pht_table[0x2ffU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1535 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1536 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x300U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x300U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x300U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x300U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x300U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x300U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x300U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x300U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x300U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1537 
            = vlSelfRef.__PVT__gshare_pht_table[0x300U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1537 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1538 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x301U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x301U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x301U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x301U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x301U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x301U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x301U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x301U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x301U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1539 
            = vlSelfRef.__PVT__gshare_pht_table[0x301U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1539 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1540 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x302U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x302U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x302U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x302U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x302U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x302U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x302U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x302U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x302U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1541 
            = vlSelfRef.__PVT__gshare_pht_table[0x302U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1541 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1542 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x303U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x303U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x303U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x303U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x303U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x303U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x303U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x303U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x303U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1543 
            = vlSelfRef.__PVT__gshare_pht_table[0x303U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1543 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1544 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x304U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x304U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x304U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x304U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x304U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x304U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x304U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x304U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x304U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1545 
            = vlSelfRef.__PVT__gshare_pht_table[0x304U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1545 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1546 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x305U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x305U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x305U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x305U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x305U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x305U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x305U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x305U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x305U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1547 
            = vlSelfRef.__PVT__gshare_pht_table[0x305U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1547 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1548 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x306U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x306U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x306U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x306U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x306U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x306U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x306U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x306U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x306U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1549 
            = vlSelfRef.__PVT__gshare_pht_table[0x306U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1549 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1550 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x307U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x307U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x307U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x307U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x307U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x307U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x307U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x307U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x307U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1551 
            = vlSelfRef.__PVT__gshare_pht_table[0x307U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1551 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1552 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x308U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x308U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x308U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x308U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x308U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x308U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x308U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x308U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x308U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1553 
            = vlSelfRef.__PVT__gshare_pht_table[0x308U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1553 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1554 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x309U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x309U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x309U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x309U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x309U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x309U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x309U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x309U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x309U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1555 
            = vlSelfRef.__PVT__gshare_pht_table[0x309U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1555 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1556 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x30aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x30aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1557 
            = vlSelfRef.__PVT__gshare_pht_table[0x30aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1557 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1558 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x30bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x30bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1559 
            = vlSelfRef.__PVT__gshare_pht_table[0x30bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1559 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1560 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x30cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x30cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1561 
            = vlSelfRef.__PVT__gshare_pht_table[0x30cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1561 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1562 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x30dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x30dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1563 
            = vlSelfRef.__PVT__gshare_pht_table[0x30dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1563 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1564 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x30eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x30eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1565 
            = vlSelfRef.__PVT__gshare_pht_table[0x30eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1565 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1566 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x30fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x30fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1567 
            = vlSelfRef.__PVT__gshare_pht_table[0x30fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1567 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1568 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x310U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x310U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x310U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x310U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x310U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x310U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x310U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x310U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x310U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1569 
            = vlSelfRef.__PVT__gshare_pht_table[0x310U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1569 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1570 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x311U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x311U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x311U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x311U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x311U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x311U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x311U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x311U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x311U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1571 
            = vlSelfRef.__PVT__gshare_pht_table[0x311U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1571 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1572 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x312U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x312U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x312U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x312U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x312U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x312U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x312U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x312U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x312U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1573 
            = vlSelfRef.__PVT__gshare_pht_table[0x312U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1573 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1574 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x313U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x313U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x313U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x313U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x313U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x313U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x313U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x313U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x313U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1575 
            = vlSelfRef.__PVT__gshare_pht_table[0x313U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1575 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1576 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x314U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x314U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x314U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x314U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x314U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x314U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x314U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x314U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x314U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1577 
            = vlSelfRef.__PVT__gshare_pht_table[0x314U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1577 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1578 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x315U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x315U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x315U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x315U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x315U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x315U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x315U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x315U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x315U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1579 
            = vlSelfRef.__PVT__gshare_pht_table[0x315U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1579 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1580 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x316U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x316U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x316U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x316U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x316U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x316U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x316U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x316U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x316U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1581 
            = vlSelfRef.__PVT__gshare_pht_table[0x316U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1581 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1582 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x317U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x317U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x317U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x317U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x317U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x317U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x317U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x317U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x317U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1583 
            = vlSelfRef.__PVT__gshare_pht_table[0x317U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1583 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1584 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x318U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x318U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x318U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x318U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x318U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x318U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x318U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x318U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x318U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1585 
            = vlSelfRef.__PVT__gshare_pht_table[0x318U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1585 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1586 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x319U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x319U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x319U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x319U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x319U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x319U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x319U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x319U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x319U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1587 
            = vlSelfRef.__PVT__gshare_pht_table[0x319U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1587 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1588 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x31aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x31aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1589 
            = vlSelfRef.__PVT__gshare_pht_table[0x31aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1589 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1590 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x31bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x31bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1591 
            = vlSelfRef.__PVT__gshare_pht_table[0x31bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1591 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1592 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x31cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x31cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1593 
            = vlSelfRef.__PVT__gshare_pht_table[0x31cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1593 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1594 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x31dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x31dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1595 
            = vlSelfRef.__PVT__gshare_pht_table[0x31dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1595 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1596 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x31eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x31eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1597 
            = vlSelfRef.__PVT__gshare_pht_table[0x31eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1597 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1598 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x31fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x31fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1599 
            = vlSelfRef.__PVT__gshare_pht_table[0x31fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1599 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1600 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x320U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x320U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x320U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x320U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x320U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x320U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x320U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x320U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x320U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1601 
            = vlSelfRef.__PVT__gshare_pht_table[0x320U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1601 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1602 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x321U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x321U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x321U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x321U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x321U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x321U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x321U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x321U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x321U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1603 
            = vlSelfRef.__PVT__gshare_pht_table[0x321U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1603 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1604 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x322U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x322U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x322U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x322U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x322U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x322U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x322U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x322U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x322U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1605 
            = vlSelfRef.__PVT__gshare_pht_table[0x322U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1605 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1606 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x323U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x323U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x323U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x323U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x323U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x323U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x323U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x323U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x323U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1607 
            = vlSelfRef.__PVT__gshare_pht_table[0x323U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1607 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1608 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x324U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x324U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x324U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x324U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x324U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x324U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x324U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x324U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x324U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1609 
            = vlSelfRef.__PVT__gshare_pht_table[0x324U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1609 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1610 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x325U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x325U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x325U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x325U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x325U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x325U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x325U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x325U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x325U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1611 
            = vlSelfRef.__PVT__gshare_pht_table[0x325U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1611 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1612 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x326U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x326U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x326U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x326U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x326U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x326U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x326U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x326U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x326U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1613 
            = vlSelfRef.__PVT__gshare_pht_table[0x326U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1613 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1614 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x327U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x327U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x327U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x327U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x327U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x327U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x327U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x327U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x327U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1615 
            = vlSelfRef.__PVT__gshare_pht_table[0x327U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1615 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1616 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x328U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x328U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x328U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x328U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x328U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x328U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x328U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x328U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x328U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1617 
            = vlSelfRef.__PVT__gshare_pht_table[0x328U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1617 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1618 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x329U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x329U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x329U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x329U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x329U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x329U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x329U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x329U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x329U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1619 
            = vlSelfRef.__PVT__gshare_pht_table[0x329U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1619 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1620 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x32aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x32aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1621 
            = vlSelfRef.__PVT__gshare_pht_table[0x32aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1621 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1622 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x32bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x32bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1623 
            = vlSelfRef.__PVT__gshare_pht_table[0x32bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1623 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1624 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x32cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x32cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1625 
            = vlSelfRef.__PVT__gshare_pht_table[0x32cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1625 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1626 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x32dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x32dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1627 
            = vlSelfRef.__PVT__gshare_pht_table[0x32dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1627 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1628 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x32eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x32eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1629 
            = vlSelfRef.__PVT__gshare_pht_table[0x32eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1629 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1630 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x32fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x32fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1631 
            = vlSelfRef.__PVT__gshare_pht_table[0x32fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1631 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1632 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x330U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x330U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x330U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x330U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x330U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x330U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x330U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x330U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x330U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1633 
            = vlSelfRef.__PVT__gshare_pht_table[0x330U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1633 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1634 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x331U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x331U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x331U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x331U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x331U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x331U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x331U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x331U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x331U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1635 
            = vlSelfRef.__PVT__gshare_pht_table[0x331U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1635 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1636 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x332U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x332U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x332U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x332U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x332U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x332U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x332U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x332U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x332U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1637 
            = vlSelfRef.__PVT__gshare_pht_table[0x332U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1637 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1638 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x333U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x333U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x333U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x333U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x333U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x333U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x333U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x333U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x333U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1639 
            = vlSelfRef.__PVT__gshare_pht_table[0x333U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1639 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1640 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x334U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x334U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x334U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x334U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x334U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x334U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x334U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x334U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x334U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1641 
            = vlSelfRef.__PVT__gshare_pht_table[0x334U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1641 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1642 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x335U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x335U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x335U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x335U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x335U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x335U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x335U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x335U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x335U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1643 
            = vlSelfRef.__PVT__gshare_pht_table[0x335U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1643 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1644 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x336U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x336U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x336U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x336U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x336U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x336U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x336U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x336U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x336U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1645 
            = vlSelfRef.__PVT__gshare_pht_table[0x336U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1645 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1646 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x337U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x337U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x337U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x337U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x337U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x337U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x337U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x337U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x337U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1647 
            = vlSelfRef.__PVT__gshare_pht_table[0x337U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1647 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1648 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x338U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x338U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x338U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x338U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x338U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x338U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x338U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x338U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x338U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1649 
            = vlSelfRef.__PVT__gshare_pht_table[0x338U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1649 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1650 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x339U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x339U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x339U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x339U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x339U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x339U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x339U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x339U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x339U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1651 
            = vlSelfRef.__PVT__gshare_pht_table[0x339U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1651 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1652 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x33aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x33aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1653 
            = vlSelfRef.__PVT__gshare_pht_table[0x33aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1653 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1654 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x33bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x33bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1655 
            = vlSelfRef.__PVT__gshare_pht_table[0x33bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1655 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1656 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x33cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x33cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1657 
            = vlSelfRef.__PVT__gshare_pht_table[0x33cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1657 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1658 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x33dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x33dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1659 
            = vlSelfRef.__PVT__gshare_pht_table[0x33dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1659 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1660 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x33eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x33eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1661 
            = vlSelfRef.__PVT__gshare_pht_table[0x33eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1661 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1662 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x33fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x33fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1663 
            = vlSelfRef.__PVT__gshare_pht_table[0x33fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1663 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1664 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x340U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x340U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x340U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x340U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x340U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x340U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x340U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x340U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x340U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1665 
            = vlSelfRef.__PVT__gshare_pht_table[0x340U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1665 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1666 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x341U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x341U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x341U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x341U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x341U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x341U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x341U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x341U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x341U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1667 
            = vlSelfRef.__PVT__gshare_pht_table[0x341U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1667 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1668 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x342U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x342U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x342U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x342U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x342U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x342U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x342U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x342U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x342U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1669 
            = vlSelfRef.__PVT__gshare_pht_table[0x342U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1669 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1670 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x343U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x343U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x343U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x343U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x343U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x343U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x343U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x343U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x343U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1671 
            = vlSelfRef.__PVT__gshare_pht_table[0x343U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1671 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1672 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x344U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x344U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x344U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x344U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x344U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x344U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x344U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x344U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x344U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1673 
            = vlSelfRef.__PVT__gshare_pht_table[0x344U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1673 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1674 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x345U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x345U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x345U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x345U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x345U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x345U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x345U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x345U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x345U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1675 
            = vlSelfRef.__PVT__gshare_pht_table[0x345U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1675 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1676 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x346U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x346U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x346U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x346U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x346U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x346U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x346U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x346U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x346U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1677 
            = vlSelfRef.__PVT__gshare_pht_table[0x346U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1677 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1678 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x347U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x347U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x347U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x347U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x347U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x347U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x347U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x347U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x347U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1679 
            = vlSelfRef.__PVT__gshare_pht_table[0x347U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1679 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1680 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x348U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x348U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x348U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x348U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x348U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x348U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x348U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x348U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x348U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1681 
            = vlSelfRef.__PVT__gshare_pht_table[0x348U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1681 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1682 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x349U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x349U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x349U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x349U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x349U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x349U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x349U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x349U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x349U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1683 
            = vlSelfRef.__PVT__gshare_pht_table[0x349U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1683 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1684 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x34aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x34aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1685 
            = vlSelfRef.__PVT__gshare_pht_table[0x34aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1685 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1686 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x34bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x34bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1687 
            = vlSelfRef.__PVT__gshare_pht_table[0x34bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1687 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1688 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x34cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x34cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1689 
            = vlSelfRef.__PVT__gshare_pht_table[0x34cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1689 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1690 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x34dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x34dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1691 
            = vlSelfRef.__PVT__gshare_pht_table[0x34dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1691 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1692 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x34eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x34eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1693 
            = vlSelfRef.__PVT__gshare_pht_table[0x34eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1693 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1694 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x34fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x34fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1695 
            = vlSelfRef.__PVT__gshare_pht_table[0x34fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1695 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1696 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x350U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x350U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x350U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x350U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x350U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x350U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x350U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x350U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x350U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1697 
            = vlSelfRef.__PVT__gshare_pht_table[0x350U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1697 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1698 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x351U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x351U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x351U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x351U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x351U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x351U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x351U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x351U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x351U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1699 
            = vlSelfRef.__PVT__gshare_pht_table[0x351U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1699 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1700 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x352U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x352U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x352U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x352U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x352U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x352U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x352U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x352U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x352U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1701 
            = vlSelfRef.__PVT__gshare_pht_table[0x352U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1701 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1702 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x353U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x353U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x353U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x353U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x353U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x353U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x353U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x353U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x353U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1703 
            = vlSelfRef.__PVT__gshare_pht_table[0x353U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1703 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1704 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x354U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x354U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x354U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x354U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x354U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x354U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x354U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x354U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x354U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1705 
            = vlSelfRef.__PVT__gshare_pht_table[0x354U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1705 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1706 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x355U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x355U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x355U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x355U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x355U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x355U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x355U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x355U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x355U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1707 
            = vlSelfRef.__PVT__gshare_pht_table[0x355U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1707 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1708 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x356U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x356U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x356U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x356U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x356U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x356U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x356U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x356U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x356U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1709 
            = vlSelfRef.__PVT__gshare_pht_table[0x356U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1709 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1710 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x357U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x357U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x357U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x357U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x357U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x357U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x357U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x357U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x357U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1711 
            = vlSelfRef.__PVT__gshare_pht_table[0x357U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1711 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1712 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x358U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x358U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x358U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x358U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x358U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x358U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x358U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x358U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x358U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1713 
            = vlSelfRef.__PVT__gshare_pht_table[0x358U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1713 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1714 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x359U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x359U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x359U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x359U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x359U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x359U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x359U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x359U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x359U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1715 
            = vlSelfRef.__PVT__gshare_pht_table[0x359U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1715 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1716 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x35aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x35aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1717 
            = vlSelfRef.__PVT__gshare_pht_table[0x35aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1717 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1718 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x35bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x35bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1719 
            = vlSelfRef.__PVT__gshare_pht_table[0x35bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1719 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1720 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x35cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x35cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1721 
            = vlSelfRef.__PVT__gshare_pht_table[0x35cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1721 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1722 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x35dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x35dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1723 
            = vlSelfRef.__PVT__gshare_pht_table[0x35dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1723 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1724 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x35eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x35eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1725 
            = vlSelfRef.__PVT__gshare_pht_table[0x35eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1725 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1726 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x35fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x35fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1727 
            = vlSelfRef.__PVT__gshare_pht_table[0x35fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1727 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1728 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x360U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x360U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x360U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x360U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x360U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x360U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x360U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x360U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x360U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1729 
            = vlSelfRef.__PVT__gshare_pht_table[0x360U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1729 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1730 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x361U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x361U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x361U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x361U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x361U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x361U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x361U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x361U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x361U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1731 
            = vlSelfRef.__PVT__gshare_pht_table[0x361U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1731 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1732 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x362U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x362U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x362U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x362U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x362U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x362U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x362U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x362U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x362U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1733 
            = vlSelfRef.__PVT__gshare_pht_table[0x362U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1733 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1734 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x363U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x363U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x363U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x363U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x363U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x363U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x363U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x363U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x363U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1735 
            = vlSelfRef.__PVT__gshare_pht_table[0x363U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1735 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1736 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x364U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x364U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x364U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x364U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x364U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x364U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x364U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x364U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x364U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1737 
            = vlSelfRef.__PVT__gshare_pht_table[0x364U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1737 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1738 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x365U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x365U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x365U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x365U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x365U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x365U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x365U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x365U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x365U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1739 
            = vlSelfRef.__PVT__gshare_pht_table[0x365U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1739 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1740 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x366U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x366U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x366U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x366U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x366U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x366U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x366U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x366U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x366U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1741 
            = vlSelfRef.__PVT__gshare_pht_table[0x366U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1741 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1742 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x367U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x367U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x367U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x367U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x367U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x367U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x367U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x367U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x367U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1743 
            = vlSelfRef.__PVT__gshare_pht_table[0x367U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1743 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1744 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x368U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x368U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x368U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x368U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x368U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x368U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x368U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x368U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x368U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1745 
            = vlSelfRef.__PVT__gshare_pht_table[0x368U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1745 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1746 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x369U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x369U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x369U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x369U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x369U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x369U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x369U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x369U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x369U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1747 
            = vlSelfRef.__PVT__gshare_pht_table[0x369U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1747 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1748 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x36aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x36aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1749 
            = vlSelfRef.__PVT__gshare_pht_table[0x36aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1749 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1750 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x36bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x36bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1751 
            = vlSelfRef.__PVT__gshare_pht_table[0x36bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1751 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1752 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x36cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x36cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1753 
            = vlSelfRef.__PVT__gshare_pht_table[0x36cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1753 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1754 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x36dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x36dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1755 
            = vlSelfRef.__PVT__gshare_pht_table[0x36dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1755 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1756 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x36eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x36eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1757 
            = vlSelfRef.__PVT__gshare_pht_table[0x36eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1757 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1758 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x36fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x36fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1759 
            = vlSelfRef.__PVT__gshare_pht_table[0x36fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1759 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1760 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x370U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x370U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x370U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x370U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x370U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x370U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x370U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x370U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x370U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1761 
            = vlSelfRef.__PVT__gshare_pht_table[0x370U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1761 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1762 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x371U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x371U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x371U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x371U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x371U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x371U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x371U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x371U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x371U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1763 
            = vlSelfRef.__PVT__gshare_pht_table[0x371U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1763 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1764 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x372U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x372U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x372U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x372U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x372U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x372U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x372U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x372U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x372U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1765 
            = vlSelfRef.__PVT__gshare_pht_table[0x372U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1765 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1766 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x373U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x373U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x373U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x373U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x373U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x373U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x373U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x373U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x373U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1767 
            = vlSelfRef.__PVT__gshare_pht_table[0x373U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1767 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1768 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x374U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x374U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x374U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x374U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x374U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x374U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x374U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x374U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x374U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1769 
            = vlSelfRef.__PVT__gshare_pht_table[0x374U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1769 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1770 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x375U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x375U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x375U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x375U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x375U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x375U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x375U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x375U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x375U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1771 
            = vlSelfRef.__PVT__gshare_pht_table[0x375U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1771 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1772 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x376U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x376U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x376U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x376U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x376U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x376U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x376U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x376U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x376U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1773 
            = vlSelfRef.__PVT__gshare_pht_table[0x376U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1773 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1774 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x377U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x377U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x377U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x377U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x377U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x377U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x377U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x377U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x377U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1775 
            = vlSelfRef.__PVT__gshare_pht_table[0x377U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1775 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1776 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x378U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x378U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x378U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x378U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x378U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x378U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x378U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x378U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x378U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1777 
            = vlSelfRef.__PVT__gshare_pht_table[0x378U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1777 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1778 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x379U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x379U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x379U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x379U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x379U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x379U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x379U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x379U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x379U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1779 
            = vlSelfRef.__PVT__gshare_pht_table[0x379U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1779 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1780 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x37aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x37aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1781 
            = vlSelfRef.__PVT__gshare_pht_table[0x37aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1781 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1782 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x37bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x37bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1783 
            = vlSelfRef.__PVT__gshare_pht_table[0x37bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1783 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1784 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x37cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x37cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1785 
            = vlSelfRef.__PVT__gshare_pht_table[0x37cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1785 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1786 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x37dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x37dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1787 
            = vlSelfRef.__PVT__gshare_pht_table[0x37dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1787 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1788 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x37eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x37eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1789 
            = vlSelfRef.__PVT__gshare_pht_table[0x37eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1789 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1790 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x37fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x37fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1791 
            = vlSelfRef.__PVT__gshare_pht_table[0x37fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1791 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1792 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x380U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x380U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x380U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x380U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x380U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x380U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x380U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x380U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x380U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1793 
            = vlSelfRef.__PVT__gshare_pht_table[0x380U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1793 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1794 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x381U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x381U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x381U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x381U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x381U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x381U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x381U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x381U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x381U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1795 
            = vlSelfRef.__PVT__gshare_pht_table[0x381U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1795 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1796 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x382U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x382U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x382U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x382U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x382U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x382U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x382U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x382U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x382U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1797 
            = vlSelfRef.__PVT__gshare_pht_table[0x382U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1797 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1798 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x383U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x383U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x383U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x383U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x383U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x383U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x383U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x383U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x383U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1799 
            = vlSelfRef.__PVT__gshare_pht_table[0x383U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1799 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1800 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x384U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x384U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x384U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x384U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x384U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x384U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x384U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x384U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x384U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1801 
            = vlSelfRef.__PVT__gshare_pht_table[0x384U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1801 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1802 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x385U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x385U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x385U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x385U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x385U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x385U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x385U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x385U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x385U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1803 
            = vlSelfRef.__PVT__gshare_pht_table[0x385U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1803 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1804 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x386U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x386U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x386U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x386U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x386U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x386U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x386U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x386U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x386U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1805 
            = vlSelfRef.__PVT__gshare_pht_table[0x386U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1805 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1806 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x387U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x387U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x387U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x387U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x387U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x387U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x387U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x387U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x387U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1807 
            = vlSelfRef.__PVT__gshare_pht_table[0x387U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1807 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1808 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x388U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x388U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x388U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x388U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x388U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x388U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x388U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x388U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x388U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1809 
            = vlSelfRef.__PVT__gshare_pht_table[0x388U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1809 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1810 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x389U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x389U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x389U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x389U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x389U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x389U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x389U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x389U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x389U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1811 
            = vlSelfRef.__PVT__gshare_pht_table[0x389U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1811 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1812 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x38aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x38aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1813 
            = vlSelfRef.__PVT__gshare_pht_table[0x38aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1813 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1814 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x38bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x38bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1815 
            = vlSelfRef.__PVT__gshare_pht_table[0x38bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1815 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1816 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x38cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x38cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1817 
            = vlSelfRef.__PVT__gshare_pht_table[0x38cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1817 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1818 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x38dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x38dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1819 
            = vlSelfRef.__PVT__gshare_pht_table[0x38dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1819 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1820 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x38eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x38eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1821 
            = vlSelfRef.__PVT__gshare_pht_table[0x38eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1821 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1822 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x38fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x38fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1823 
            = vlSelfRef.__PVT__gshare_pht_table[0x38fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1823 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1824 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x390U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x390U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x390U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x390U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x390U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x390U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x390U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x390U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x390U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1825 
            = vlSelfRef.__PVT__gshare_pht_table[0x390U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1825 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1826 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x391U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x391U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x391U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x391U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x391U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x391U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x391U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x391U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x391U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1827 
            = vlSelfRef.__PVT__gshare_pht_table[0x391U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1827 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1828 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x392U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x392U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x392U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x392U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x392U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x392U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x392U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x392U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x392U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1829 
            = vlSelfRef.__PVT__gshare_pht_table[0x392U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1829 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1830 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x393U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x393U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x393U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x393U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x393U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x393U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x393U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x393U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x393U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1831 
            = vlSelfRef.__PVT__gshare_pht_table[0x393U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1831 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1832 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x394U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x394U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x394U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x394U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x394U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x394U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x394U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x394U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x394U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1833 
            = vlSelfRef.__PVT__gshare_pht_table[0x394U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1833 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1834 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x395U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x395U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x395U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x395U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x395U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x395U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x395U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x395U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x395U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1835 
            = vlSelfRef.__PVT__gshare_pht_table[0x395U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1835 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1836 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x396U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x396U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x396U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x396U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x396U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x396U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x396U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x396U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x396U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1837 
            = vlSelfRef.__PVT__gshare_pht_table[0x396U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1837 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1838 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x397U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x397U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x397U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x397U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x397U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x397U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x397U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x397U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x397U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1839 
            = vlSelfRef.__PVT__gshare_pht_table[0x397U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1839 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1840 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x398U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x398U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x398U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x398U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x398U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x398U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x398U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x398U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x398U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1841 
            = vlSelfRef.__PVT__gshare_pht_table[0x398U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1841 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1842 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x399U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x399U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x399U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x399U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x399U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x399U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x399U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x399U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x399U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1843 
            = vlSelfRef.__PVT__gshare_pht_table[0x399U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1843 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1844 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x39aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x39aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1845 
            = vlSelfRef.__PVT__gshare_pht_table[0x39aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1845 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1846 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x39bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x39bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1847 
            = vlSelfRef.__PVT__gshare_pht_table[0x39bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1847 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1848 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x39cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x39cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1849 
            = vlSelfRef.__PVT__gshare_pht_table[0x39cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1849 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1850 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x39dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x39dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1851 
            = vlSelfRef.__PVT__gshare_pht_table[0x39dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1851 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1852 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x39eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x39eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1853 
            = vlSelfRef.__PVT__gshare_pht_table[0x39eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1853 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1854 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x39fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x39fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1855 
            = vlSelfRef.__PVT__gshare_pht_table[0x39fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1855 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1856 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1857 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1857 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1858 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1859 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1859 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1860 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1861 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1861 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1862 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1863 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1863 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1864 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1865 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1865 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1866 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1867 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1867 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1868 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1869 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1869 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1870 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1871 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1871 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1872 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1873 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1873 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1874 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3a9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1875 
            = vlSelfRef.__PVT__gshare_pht_table[0x3a9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1875 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1876 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3aaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1877 
            = vlSelfRef.__PVT__gshare_pht_table[0x3aaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1877 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1878 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3abU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1879 
            = vlSelfRef.__PVT__gshare_pht_table[0x3abU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1879 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1880 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3acU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1881 
            = vlSelfRef.__PVT__gshare_pht_table[0x3acU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1881 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1882 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3adU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1883 
            = vlSelfRef.__PVT__gshare_pht_table[0x3adU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1883 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1884 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3aeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1885 
            = vlSelfRef.__PVT__gshare_pht_table[0x3aeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1885 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1886 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3afU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1887 
            = vlSelfRef.__PVT__gshare_pht_table[0x3afU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1887 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1888 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1889 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1889 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1890 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1891 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1891 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1892 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1893 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1893 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1894 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1895 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1895 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1896 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1897 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1897 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1898 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1899 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1899 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1900 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1901 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1901 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1902 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1903 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1903 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1904 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1905 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1905 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1906 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3b9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1907 
            = vlSelfRef.__PVT__gshare_pht_table[0x3b9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1907 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1908 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3baU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1909 
            = vlSelfRef.__PVT__gshare_pht_table[0x3baU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1909 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1910 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3bbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1911 
            = vlSelfRef.__PVT__gshare_pht_table[0x3bbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1911 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1912 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3bcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1913 
            = vlSelfRef.__PVT__gshare_pht_table[0x3bcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1913 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1914 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3bdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1915 
            = vlSelfRef.__PVT__gshare_pht_table[0x3bdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1915 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1916 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3beU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1917 
            = vlSelfRef.__PVT__gshare_pht_table[0x3beU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1917 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1918 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3bfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1919 
            = vlSelfRef.__PVT__gshare_pht_table[0x3bfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1919 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1920 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1921 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1921 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1922 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1923 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1923 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1924 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1925 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1925 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1926 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1927 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1927 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1928 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1929 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1929 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1930 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1931 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1931 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1932 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1933 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1933 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1934 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1935 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1935 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1936 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1937 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1937 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1938 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3c9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1939 
            = vlSelfRef.__PVT__gshare_pht_table[0x3c9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1939 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1940 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3caU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1941 
            = vlSelfRef.__PVT__gshare_pht_table[0x3caU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1941 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1942 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3cbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1943 
            = vlSelfRef.__PVT__gshare_pht_table[0x3cbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1943 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1944 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3ccU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1945 
            = vlSelfRef.__PVT__gshare_pht_table[0x3ccU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1945 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1946 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3cdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1947 
            = vlSelfRef.__PVT__gshare_pht_table[0x3cdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1947 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1948 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3ceU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1949 
            = vlSelfRef.__PVT__gshare_pht_table[0x3ceU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1949 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1950 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3cfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1951 
            = vlSelfRef.__PVT__gshare_pht_table[0x3cfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1951 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1952 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1953 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1953 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1954 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1955 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1955 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1956 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1957 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1957 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1958 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1959 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1959 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1960 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1961 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1961 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1962 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1963 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1963 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1964 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1965 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1965 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1966 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1967 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1967 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1968 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1969 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1969 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1970 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3d9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1971 
            = vlSelfRef.__PVT__gshare_pht_table[0x3d9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1971 = 1U;
    }
}
