// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_gshare_branch_predictor.h"

VL_INLINE_OPT void Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__1(Vfalco_top_gshare_branch_predictor* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v370 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v371 
            = vlSelfRef.__PVT__gshare_pht_table[0xb9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v371 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v372 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xbaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xbaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v373 
            = vlSelfRef.__PVT__gshare_pht_table[0xbaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v373 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v374 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xbbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xbbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v375 
            = vlSelfRef.__PVT__gshare_pht_table[0xbbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v375 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v376 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xbcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xbcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v377 
            = vlSelfRef.__PVT__gshare_pht_table[0xbcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v377 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v378 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xbdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xbdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v379 
            = vlSelfRef.__PVT__gshare_pht_table[0xbdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v379 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v380 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xbeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xbeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v381 
            = vlSelfRef.__PVT__gshare_pht_table[0xbeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v381 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v382 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xbfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xbfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v383 
            = vlSelfRef.__PVT__gshare_pht_table[0xbfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v383 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v384 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v385 
            = vlSelfRef.__PVT__gshare_pht_table[0xc0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v385 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v386 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v387 
            = vlSelfRef.__PVT__gshare_pht_table[0xc1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v387 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v388 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v389 
            = vlSelfRef.__PVT__gshare_pht_table[0xc2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v389 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v390 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v391 
            = vlSelfRef.__PVT__gshare_pht_table[0xc3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v391 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v392 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v393 
            = vlSelfRef.__PVT__gshare_pht_table[0xc4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v393 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v394 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v395 
            = vlSelfRef.__PVT__gshare_pht_table[0xc5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v395 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v396 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v397 
            = vlSelfRef.__PVT__gshare_pht_table[0xc6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v397 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v398 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v399 
            = vlSelfRef.__PVT__gshare_pht_table[0xc7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v399 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v400 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v401 
            = vlSelfRef.__PVT__gshare_pht_table[0xc8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v401 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v402 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xc9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xc9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xc9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xc9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v403 
            = vlSelfRef.__PVT__gshare_pht_table[0xc9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v403 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v404 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xcaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xcaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v405 
            = vlSelfRef.__PVT__gshare_pht_table[0xcaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v405 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v406 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xcbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xcbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v407 
            = vlSelfRef.__PVT__gshare_pht_table[0xcbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v407 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v408 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xccU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v409 
            = vlSelfRef.__PVT__gshare_pht_table[0xccU];
        vlSelfRef.__VdlySet__gshare_pht_table__v409 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v410 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xcdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xcdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v411 
            = vlSelfRef.__PVT__gshare_pht_table[0xcdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v411 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v412 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xceU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v413 
            = vlSelfRef.__PVT__gshare_pht_table[0xceU];
        vlSelfRef.__VdlySet__gshare_pht_table__v413 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v414 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xcfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xcfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v415 
            = vlSelfRef.__PVT__gshare_pht_table[0xcfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v415 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v416 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v417 
            = vlSelfRef.__PVT__gshare_pht_table[0xd0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v417 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v418 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v419 
            = vlSelfRef.__PVT__gshare_pht_table[0xd1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v419 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v420 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v421 
            = vlSelfRef.__PVT__gshare_pht_table[0xd2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v421 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v422 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v423 
            = vlSelfRef.__PVT__gshare_pht_table[0xd3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v423 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v424 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v425 
            = vlSelfRef.__PVT__gshare_pht_table[0xd4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v425 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v426 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v427 
            = vlSelfRef.__PVT__gshare_pht_table[0xd5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v427 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v428 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v429 
            = vlSelfRef.__PVT__gshare_pht_table[0xd6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v429 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v430 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v431 
            = vlSelfRef.__PVT__gshare_pht_table[0xd7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v431 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v432 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v433 
            = vlSelfRef.__PVT__gshare_pht_table[0xd8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v433 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v434 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xd9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xd9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xd9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xd9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v435 
            = vlSelfRef.__PVT__gshare_pht_table[0xd9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v435 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v436 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xdaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xdaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v437 
            = vlSelfRef.__PVT__gshare_pht_table[0xdaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v437 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v438 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xdbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xdbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v439 
            = vlSelfRef.__PVT__gshare_pht_table[0xdbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v439 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v440 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xdcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xdcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v441 
            = vlSelfRef.__PVT__gshare_pht_table[0xdcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v441 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v442 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xddU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v443 
            = vlSelfRef.__PVT__gshare_pht_table[0xddU];
        vlSelfRef.__VdlySet__gshare_pht_table__v443 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v444 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xdeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xdeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v445 
            = vlSelfRef.__PVT__gshare_pht_table[0xdeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v445 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v446 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xdfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xdfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v447 
            = vlSelfRef.__PVT__gshare_pht_table[0xdfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v447 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v448 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v449 
            = vlSelfRef.__PVT__gshare_pht_table[0xe0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v449 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v450 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v451 
            = vlSelfRef.__PVT__gshare_pht_table[0xe1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v451 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v452 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v453 
            = vlSelfRef.__PVT__gshare_pht_table[0xe2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v453 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v454 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v455 
            = vlSelfRef.__PVT__gshare_pht_table[0xe3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v455 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v456 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v457 
            = vlSelfRef.__PVT__gshare_pht_table[0xe4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v457 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v458 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v459 
            = vlSelfRef.__PVT__gshare_pht_table[0xe5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v459 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v460 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v461 
            = vlSelfRef.__PVT__gshare_pht_table[0xe6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v461 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v462 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v463 
            = vlSelfRef.__PVT__gshare_pht_table[0xe7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v463 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v464 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v465 
            = vlSelfRef.__PVT__gshare_pht_table[0xe8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v465 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v466 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xe9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xe9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xe9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xe9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v467 
            = vlSelfRef.__PVT__gshare_pht_table[0xe9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v467 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v468 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xeaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xeaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v469 
            = vlSelfRef.__PVT__gshare_pht_table[0xeaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v469 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v470 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xebU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v471 
            = vlSelfRef.__PVT__gshare_pht_table[0xebU];
        vlSelfRef.__VdlySet__gshare_pht_table__v471 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v472 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xecU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v473 
            = vlSelfRef.__PVT__gshare_pht_table[0xecU];
        vlSelfRef.__VdlySet__gshare_pht_table__v473 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v474 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xedU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xedU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xedU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xedU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xedU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xedU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xedU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xedU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xedU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v475 
            = vlSelfRef.__PVT__gshare_pht_table[0xedU];
        vlSelfRef.__VdlySet__gshare_pht_table__v475 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v476 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xeeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xeeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v477 
            = vlSelfRef.__PVT__gshare_pht_table[0xeeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v477 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v478 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xefU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xefU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xefU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xefU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xefU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xefU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xefU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xefU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xefU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v479 
            = vlSelfRef.__PVT__gshare_pht_table[0xefU];
        vlSelfRef.__VdlySet__gshare_pht_table__v479 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v480 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v481 
            = vlSelfRef.__PVT__gshare_pht_table[0xf0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v481 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v482 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v483 
            = vlSelfRef.__PVT__gshare_pht_table[0xf1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v483 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v484 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v485 
            = vlSelfRef.__PVT__gshare_pht_table[0xf2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v485 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v486 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v487 
            = vlSelfRef.__PVT__gshare_pht_table[0xf3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v487 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v488 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v489 
            = vlSelfRef.__PVT__gshare_pht_table[0xf4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v489 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v490 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v491 
            = vlSelfRef.__PVT__gshare_pht_table[0xf5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v491 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v492 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v493 
            = vlSelfRef.__PVT__gshare_pht_table[0xf6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v493 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v494 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v495 
            = vlSelfRef.__PVT__gshare_pht_table[0xf7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v495 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v496 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v497 
            = vlSelfRef.__PVT__gshare_pht_table[0xf8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v497 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v498 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xf9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xf9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xf9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xf9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v499 
            = vlSelfRef.__PVT__gshare_pht_table[0xf9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v499 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v500 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xfaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xfaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v501 
            = vlSelfRef.__PVT__gshare_pht_table[0xfaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v501 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v502 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xfbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xfbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v503 
            = vlSelfRef.__PVT__gshare_pht_table[0xfbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v503 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v504 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xfcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xfcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v505 
            = vlSelfRef.__PVT__gshare_pht_table[0xfcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v505 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v506 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xfdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xfdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v507 
            = vlSelfRef.__PVT__gshare_pht_table[0xfdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v507 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v508 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xfeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xfeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v509 
            = vlSelfRef.__PVT__gshare_pht_table[0xfeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v509 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v510 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xffU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v511 
            = vlSelfRef.__PVT__gshare_pht_table[0xffU];
        vlSelfRef.__VdlySet__gshare_pht_table__v511 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v512 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x100U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x100U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x100U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x100U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x100U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x100U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x100U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x100U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x100U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v513 
            = vlSelfRef.__PVT__gshare_pht_table[0x100U];
        vlSelfRef.__VdlySet__gshare_pht_table__v513 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v514 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x101U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x101U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x101U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x101U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x101U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x101U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x101U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x101U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x101U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v515 
            = vlSelfRef.__PVT__gshare_pht_table[0x101U];
        vlSelfRef.__VdlySet__gshare_pht_table__v515 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v516 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x102U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x102U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x102U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x102U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x102U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x102U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x102U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x102U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x102U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v517 
            = vlSelfRef.__PVT__gshare_pht_table[0x102U];
        vlSelfRef.__VdlySet__gshare_pht_table__v517 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v518 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x103U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x103U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x103U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x103U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x103U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x103U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x103U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x103U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x103U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v519 
            = vlSelfRef.__PVT__gshare_pht_table[0x103U];
        vlSelfRef.__VdlySet__gshare_pht_table__v519 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v520 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x104U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x104U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x104U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x104U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x104U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x104U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x104U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x104U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x104U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v521 
            = vlSelfRef.__PVT__gshare_pht_table[0x104U];
        vlSelfRef.__VdlySet__gshare_pht_table__v521 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v522 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x105U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x105U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x105U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x105U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x105U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x105U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x105U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x105U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x105U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v523 
            = vlSelfRef.__PVT__gshare_pht_table[0x105U];
        vlSelfRef.__VdlySet__gshare_pht_table__v523 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v524 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x106U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x106U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x106U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x106U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x106U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x106U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x106U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x106U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x106U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v525 
            = vlSelfRef.__PVT__gshare_pht_table[0x106U];
        vlSelfRef.__VdlySet__gshare_pht_table__v525 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v526 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x107U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x107U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x107U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x107U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x107U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x107U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x107U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x107U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x107U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v527 
            = vlSelfRef.__PVT__gshare_pht_table[0x107U];
        vlSelfRef.__VdlySet__gshare_pht_table__v527 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v528 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x108U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x108U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x108U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x108U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x108U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x108U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x108U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x108U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x108U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v529 
            = vlSelfRef.__PVT__gshare_pht_table[0x108U];
        vlSelfRef.__VdlySet__gshare_pht_table__v529 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v530 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x109U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x109U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x109U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x109U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x109U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x109U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x109U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x109U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x109U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v531 
            = vlSelfRef.__PVT__gshare_pht_table[0x109U];
        vlSelfRef.__VdlySet__gshare_pht_table__v531 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v532 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x10aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x10aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v533 
            = vlSelfRef.__PVT__gshare_pht_table[0x10aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v533 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v534 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x10bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x10bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v535 
            = vlSelfRef.__PVT__gshare_pht_table[0x10bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v535 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v536 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x10cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x10cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v537 
            = vlSelfRef.__PVT__gshare_pht_table[0x10cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v537 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v538 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x10dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x10dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v539 
            = vlSelfRef.__PVT__gshare_pht_table[0x10dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v539 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v540 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x10eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x10eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v541 
            = vlSelfRef.__PVT__gshare_pht_table[0x10eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v541 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v542 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x10fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x10fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v543 
            = vlSelfRef.__PVT__gshare_pht_table[0x10fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v543 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v544 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x110U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x110U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x110U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x110U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x110U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x110U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x110U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x110U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x110U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v545 
            = vlSelfRef.__PVT__gshare_pht_table[0x110U];
        vlSelfRef.__VdlySet__gshare_pht_table__v545 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v546 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x111U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x111U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x111U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x111U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x111U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x111U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x111U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x111U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x111U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v547 
            = vlSelfRef.__PVT__gshare_pht_table[0x111U];
        vlSelfRef.__VdlySet__gshare_pht_table__v547 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v548 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x112U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x112U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x112U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x112U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x112U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x112U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x112U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x112U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x112U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v549 
            = vlSelfRef.__PVT__gshare_pht_table[0x112U];
        vlSelfRef.__VdlySet__gshare_pht_table__v549 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v550 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x113U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x113U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x113U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x113U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x113U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x113U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x113U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x113U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x113U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v551 
            = vlSelfRef.__PVT__gshare_pht_table[0x113U];
        vlSelfRef.__VdlySet__gshare_pht_table__v551 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v552 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x114U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x114U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x114U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x114U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x114U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x114U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x114U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x114U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x114U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v553 
            = vlSelfRef.__PVT__gshare_pht_table[0x114U];
        vlSelfRef.__VdlySet__gshare_pht_table__v553 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v554 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x115U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x115U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x115U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x115U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x115U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x115U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x115U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x115U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x115U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v555 
            = vlSelfRef.__PVT__gshare_pht_table[0x115U];
        vlSelfRef.__VdlySet__gshare_pht_table__v555 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v556 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x116U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x116U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x116U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x116U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x116U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x116U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x116U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x116U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x116U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v557 
            = vlSelfRef.__PVT__gshare_pht_table[0x116U];
        vlSelfRef.__VdlySet__gshare_pht_table__v557 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v558 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x117U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x117U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x117U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x117U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x117U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x117U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x117U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x117U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x117U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v559 
            = vlSelfRef.__PVT__gshare_pht_table[0x117U];
        vlSelfRef.__VdlySet__gshare_pht_table__v559 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v560 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x118U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x118U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x118U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x118U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x118U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x118U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x118U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x118U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x118U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v561 
            = vlSelfRef.__PVT__gshare_pht_table[0x118U];
        vlSelfRef.__VdlySet__gshare_pht_table__v561 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v562 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x119U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x119U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x119U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x119U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x119U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x119U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x119U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x119U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x119U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v563 
            = vlSelfRef.__PVT__gshare_pht_table[0x119U];
        vlSelfRef.__VdlySet__gshare_pht_table__v563 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v564 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x11aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x11aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v565 
            = vlSelfRef.__PVT__gshare_pht_table[0x11aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v565 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v566 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x11bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x11bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v567 
            = vlSelfRef.__PVT__gshare_pht_table[0x11bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v567 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v568 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x11cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x11cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v569 
            = vlSelfRef.__PVT__gshare_pht_table[0x11cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v569 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v570 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x11dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x11dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v571 
            = vlSelfRef.__PVT__gshare_pht_table[0x11dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v571 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v572 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x11eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x11eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v573 
            = vlSelfRef.__PVT__gshare_pht_table[0x11eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v573 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v574 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x11fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x11fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v575 
            = vlSelfRef.__PVT__gshare_pht_table[0x11fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v575 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v576 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x120U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x120U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x120U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x120U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x120U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x120U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x120U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x120U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x120U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v577 
            = vlSelfRef.__PVT__gshare_pht_table[0x120U];
        vlSelfRef.__VdlySet__gshare_pht_table__v577 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v578 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x121U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x121U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x121U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x121U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x121U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x121U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x121U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x121U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x121U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v579 
            = vlSelfRef.__PVT__gshare_pht_table[0x121U];
        vlSelfRef.__VdlySet__gshare_pht_table__v579 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v580 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x122U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x122U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x122U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x122U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x122U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x122U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x122U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x122U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x122U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v581 
            = vlSelfRef.__PVT__gshare_pht_table[0x122U];
        vlSelfRef.__VdlySet__gshare_pht_table__v581 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v582 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x123U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x123U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x123U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x123U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x123U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x123U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x123U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x123U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x123U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v583 
            = vlSelfRef.__PVT__gshare_pht_table[0x123U];
        vlSelfRef.__VdlySet__gshare_pht_table__v583 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v584 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x124U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x124U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x124U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x124U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x124U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x124U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x124U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x124U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x124U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v585 
            = vlSelfRef.__PVT__gshare_pht_table[0x124U];
        vlSelfRef.__VdlySet__gshare_pht_table__v585 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v586 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x125U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x125U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x125U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x125U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x125U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x125U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x125U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x125U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x125U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v587 
            = vlSelfRef.__PVT__gshare_pht_table[0x125U];
        vlSelfRef.__VdlySet__gshare_pht_table__v587 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v588 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x126U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x126U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x126U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x126U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x126U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x126U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x126U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x126U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x126U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v589 
            = vlSelfRef.__PVT__gshare_pht_table[0x126U];
        vlSelfRef.__VdlySet__gshare_pht_table__v589 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v590 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x127U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x127U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x127U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x127U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x127U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x127U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x127U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x127U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x127U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v591 
            = vlSelfRef.__PVT__gshare_pht_table[0x127U];
        vlSelfRef.__VdlySet__gshare_pht_table__v591 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v592 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x128U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x128U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x128U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x128U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x128U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x128U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x128U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x128U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x128U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v593 
            = vlSelfRef.__PVT__gshare_pht_table[0x128U];
        vlSelfRef.__VdlySet__gshare_pht_table__v593 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v594 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x129U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x129U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x129U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x129U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x129U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x129U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x129U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x129U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x129U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v595 
            = vlSelfRef.__PVT__gshare_pht_table[0x129U];
        vlSelfRef.__VdlySet__gshare_pht_table__v595 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v596 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x12aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x12aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v597 
            = vlSelfRef.__PVT__gshare_pht_table[0x12aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v597 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v598 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x12bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x12bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v599 
            = vlSelfRef.__PVT__gshare_pht_table[0x12bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v599 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v600 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x12cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x12cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v601 
            = vlSelfRef.__PVT__gshare_pht_table[0x12cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v601 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v602 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x12dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x12dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v603 
            = vlSelfRef.__PVT__gshare_pht_table[0x12dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v603 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v604 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x12eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x12eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v605 
            = vlSelfRef.__PVT__gshare_pht_table[0x12eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v605 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v606 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x12fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x12fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v607 
            = vlSelfRef.__PVT__gshare_pht_table[0x12fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v607 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v608 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x130U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x130U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x130U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x130U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x130U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x130U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x130U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x130U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x130U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v609 
            = vlSelfRef.__PVT__gshare_pht_table[0x130U];
        vlSelfRef.__VdlySet__gshare_pht_table__v609 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v610 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x131U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x131U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x131U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x131U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x131U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x131U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x131U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x131U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x131U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v611 
            = vlSelfRef.__PVT__gshare_pht_table[0x131U];
        vlSelfRef.__VdlySet__gshare_pht_table__v611 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v612 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x132U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x132U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x132U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x132U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x132U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x132U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x132U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x132U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x132U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v613 
            = vlSelfRef.__PVT__gshare_pht_table[0x132U];
        vlSelfRef.__VdlySet__gshare_pht_table__v613 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v614 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x133U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x133U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x133U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x133U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x133U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x133U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x133U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x133U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x133U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v615 
            = vlSelfRef.__PVT__gshare_pht_table[0x133U];
        vlSelfRef.__VdlySet__gshare_pht_table__v615 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v616 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x134U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x134U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x134U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x134U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x134U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x134U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x134U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x134U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x134U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v617 
            = vlSelfRef.__PVT__gshare_pht_table[0x134U];
        vlSelfRef.__VdlySet__gshare_pht_table__v617 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v618 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x135U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x135U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x135U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x135U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x135U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x135U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x135U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x135U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x135U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v619 
            = vlSelfRef.__PVT__gshare_pht_table[0x135U];
        vlSelfRef.__VdlySet__gshare_pht_table__v619 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v620 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x136U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x136U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x136U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x136U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x136U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x136U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x136U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x136U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x136U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v621 
            = vlSelfRef.__PVT__gshare_pht_table[0x136U];
        vlSelfRef.__VdlySet__gshare_pht_table__v621 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v622 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x137U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x137U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x137U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x137U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x137U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x137U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x137U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x137U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x137U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v623 
            = vlSelfRef.__PVT__gshare_pht_table[0x137U];
        vlSelfRef.__VdlySet__gshare_pht_table__v623 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v624 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x138U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x138U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x138U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x138U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x138U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x138U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x138U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x138U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x138U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v625 
            = vlSelfRef.__PVT__gshare_pht_table[0x138U];
        vlSelfRef.__VdlySet__gshare_pht_table__v625 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v626 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x139U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x139U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x139U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x139U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x139U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x139U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x139U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x139U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x139U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v627 
            = vlSelfRef.__PVT__gshare_pht_table[0x139U];
        vlSelfRef.__VdlySet__gshare_pht_table__v627 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v628 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x13aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x13aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v629 
            = vlSelfRef.__PVT__gshare_pht_table[0x13aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v629 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v630 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x13bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x13bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v631 
            = vlSelfRef.__PVT__gshare_pht_table[0x13bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v631 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v632 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x13cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x13cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v633 
            = vlSelfRef.__PVT__gshare_pht_table[0x13cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v633 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v634 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x13dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x13dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v635 
            = vlSelfRef.__PVT__gshare_pht_table[0x13dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v635 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v636 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x13eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x13eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v637 
            = vlSelfRef.__PVT__gshare_pht_table[0x13eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v637 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v638 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x13fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x13fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v639 
            = vlSelfRef.__PVT__gshare_pht_table[0x13fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v639 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v640 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x140U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x140U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x140U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x140U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x140U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x140U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x140U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x140U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x140U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v641 
            = vlSelfRef.__PVT__gshare_pht_table[0x140U];
        vlSelfRef.__VdlySet__gshare_pht_table__v641 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v642 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x141U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x141U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x141U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x141U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x141U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x141U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x141U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x141U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x141U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v643 
            = vlSelfRef.__PVT__gshare_pht_table[0x141U];
        vlSelfRef.__VdlySet__gshare_pht_table__v643 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v644 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x142U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x142U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x142U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x142U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x142U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x142U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x142U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x142U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x142U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v645 
            = vlSelfRef.__PVT__gshare_pht_table[0x142U];
        vlSelfRef.__VdlySet__gshare_pht_table__v645 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v646 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x143U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x143U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x143U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x143U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x143U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x143U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x143U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x143U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x143U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v647 
            = vlSelfRef.__PVT__gshare_pht_table[0x143U];
        vlSelfRef.__VdlySet__gshare_pht_table__v647 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v648 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x144U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x144U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x144U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x144U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x144U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x144U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x144U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x144U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x144U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v649 
            = vlSelfRef.__PVT__gshare_pht_table[0x144U];
        vlSelfRef.__VdlySet__gshare_pht_table__v649 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v650 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x145U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x145U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x145U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x145U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x145U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x145U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x145U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x145U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x145U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v651 
            = vlSelfRef.__PVT__gshare_pht_table[0x145U];
        vlSelfRef.__VdlySet__gshare_pht_table__v651 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v652 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x146U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x146U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x146U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x146U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x146U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x146U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x146U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x146U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x146U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v653 
            = vlSelfRef.__PVT__gshare_pht_table[0x146U];
        vlSelfRef.__VdlySet__gshare_pht_table__v653 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v654 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x147U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x147U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x147U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x147U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x147U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x147U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x147U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x147U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x147U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v655 
            = vlSelfRef.__PVT__gshare_pht_table[0x147U];
        vlSelfRef.__VdlySet__gshare_pht_table__v655 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v656 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x148U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x148U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x148U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x148U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x148U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x148U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x148U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x148U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x148U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v657 
            = vlSelfRef.__PVT__gshare_pht_table[0x148U];
        vlSelfRef.__VdlySet__gshare_pht_table__v657 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v658 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x149U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x149U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x149U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x149U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x149U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x149U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x149U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x149U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x149U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v659 
            = vlSelfRef.__PVT__gshare_pht_table[0x149U];
        vlSelfRef.__VdlySet__gshare_pht_table__v659 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v660 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x14aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x14aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v661 
            = vlSelfRef.__PVT__gshare_pht_table[0x14aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v661 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v662 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x14bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x14bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v663 
            = vlSelfRef.__PVT__gshare_pht_table[0x14bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v663 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v664 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x14cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x14cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v665 
            = vlSelfRef.__PVT__gshare_pht_table[0x14cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v665 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v666 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x14dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x14dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v667 
            = vlSelfRef.__PVT__gshare_pht_table[0x14dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v667 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v668 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x14eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x14eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v669 
            = vlSelfRef.__PVT__gshare_pht_table[0x14eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v669 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v670 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x14fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x14fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v671 
            = vlSelfRef.__PVT__gshare_pht_table[0x14fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v671 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v672 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x150U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x150U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x150U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x150U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x150U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x150U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x150U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x150U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x150U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v673 
            = vlSelfRef.__PVT__gshare_pht_table[0x150U];
        vlSelfRef.__VdlySet__gshare_pht_table__v673 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v674 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x151U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x151U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x151U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x151U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x151U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x151U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x151U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x151U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x151U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v675 
            = vlSelfRef.__PVT__gshare_pht_table[0x151U];
        vlSelfRef.__VdlySet__gshare_pht_table__v675 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v676 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x152U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x152U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x152U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x152U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x152U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x152U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x152U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x152U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x152U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v677 
            = vlSelfRef.__PVT__gshare_pht_table[0x152U];
        vlSelfRef.__VdlySet__gshare_pht_table__v677 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v678 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x153U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x153U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x153U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x153U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x153U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x153U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x153U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x153U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x153U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v679 
            = vlSelfRef.__PVT__gshare_pht_table[0x153U];
        vlSelfRef.__VdlySet__gshare_pht_table__v679 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v680 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x154U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x154U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x154U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x154U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x154U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x154U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x154U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x154U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x154U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v681 
            = vlSelfRef.__PVT__gshare_pht_table[0x154U];
        vlSelfRef.__VdlySet__gshare_pht_table__v681 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v682 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x155U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x155U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x155U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x155U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x155U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x155U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x155U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x155U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x155U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v683 
            = vlSelfRef.__PVT__gshare_pht_table[0x155U];
        vlSelfRef.__VdlySet__gshare_pht_table__v683 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v684 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x156U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x156U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x156U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x156U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x156U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x156U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x156U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x156U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x156U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v685 
            = vlSelfRef.__PVT__gshare_pht_table[0x156U];
        vlSelfRef.__VdlySet__gshare_pht_table__v685 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v686 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x157U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x157U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x157U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x157U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x157U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x157U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x157U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x157U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x157U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v687 
            = vlSelfRef.__PVT__gshare_pht_table[0x157U];
        vlSelfRef.__VdlySet__gshare_pht_table__v687 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v688 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x158U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x158U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x158U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x158U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x158U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x158U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x158U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x158U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x158U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v689 
            = vlSelfRef.__PVT__gshare_pht_table[0x158U];
        vlSelfRef.__VdlySet__gshare_pht_table__v689 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v690 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x159U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x159U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x159U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x159U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x159U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x159U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x159U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x159U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x159U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v691 
            = vlSelfRef.__PVT__gshare_pht_table[0x159U];
        vlSelfRef.__VdlySet__gshare_pht_table__v691 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v692 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x15aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x15aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v693 
            = vlSelfRef.__PVT__gshare_pht_table[0x15aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v693 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v694 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x15bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x15bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v695 
            = vlSelfRef.__PVT__gshare_pht_table[0x15bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v695 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v696 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x15cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x15cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v697 
            = vlSelfRef.__PVT__gshare_pht_table[0x15cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v697 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v698 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x15dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x15dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v699 
            = vlSelfRef.__PVT__gshare_pht_table[0x15dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v699 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v700 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x15eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x15eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v701 
            = vlSelfRef.__PVT__gshare_pht_table[0x15eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v701 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v702 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x15fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x15fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v703 
            = vlSelfRef.__PVT__gshare_pht_table[0x15fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v703 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v704 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x160U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x160U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x160U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x160U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x160U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x160U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x160U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x160U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x160U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v705 
            = vlSelfRef.__PVT__gshare_pht_table[0x160U];
        vlSelfRef.__VdlySet__gshare_pht_table__v705 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v706 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x161U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x161U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x161U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x161U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x161U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x161U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x161U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x161U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x161U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v707 
            = vlSelfRef.__PVT__gshare_pht_table[0x161U];
        vlSelfRef.__VdlySet__gshare_pht_table__v707 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v708 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x162U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x162U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x162U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x162U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x162U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x162U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x162U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x162U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x162U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v709 
            = vlSelfRef.__PVT__gshare_pht_table[0x162U];
        vlSelfRef.__VdlySet__gshare_pht_table__v709 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v710 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x163U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x163U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x163U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x163U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x163U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x163U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x163U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x163U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x163U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v711 
            = vlSelfRef.__PVT__gshare_pht_table[0x163U];
        vlSelfRef.__VdlySet__gshare_pht_table__v711 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v712 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x164U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x164U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x164U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x164U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x164U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x164U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x164U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x164U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x164U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v713 
            = vlSelfRef.__PVT__gshare_pht_table[0x164U];
        vlSelfRef.__VdlySet__gshare_pht_table__v713 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v714 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x165U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x165U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x165U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x165U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x165U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x165U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x165U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x165U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x165U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v715 
            = vlSelfRef.__PVT__gshare_pht_table[0x165U];
        vlSelfRef.__VdlySet__gshare_pht_table__v715 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v716 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x166U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x166U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x166U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x166U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x166U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x166U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x166U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x166U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x166U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v717 
            = vlSelfRef.__PVT__gshare_pht_table[0x166U];
        vlSelfRef.__VdlySet__gshare_pht_table__v717 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v718 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x167U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x167U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x167U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x167U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x167U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x167U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x167U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x167U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x167U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v719 
            = vlSelfRef.__PVT__gshare_pht_table[0x167U];
        vlSelfRef.__VdlySet__gshare_pht_table__v719 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v720 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x168U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x168U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x168U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x168U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x168U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x168U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x168U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x168U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x168U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v721 
            = vlSelfRef.__PVT__gshare_pht_table[0x168U];
        vlSelfRef.__VdlySet__gshare_pht_table__v721 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v722 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x169U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x169U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x169U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x169U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x169U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x169U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x169U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x169U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x169U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v723 
            = vlSelfRef.__PVT__gshare_pht_table[0x169U];
        vlSelfRef.__VdlySet__gshare_pht_table__v723 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v724 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x16aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x16aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v725 
            = vlSelfRef.__PVT__gshare_pht_table[0x16aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v725 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v726 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x16bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x16bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v727 
            = vlSelfRef.__PVT__gshare_pht_table[0x16bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v727 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v728 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x16cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x16cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v729 
            = vlSelfRef.__PVT__gshare_pht_table[0x16cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v729 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v730 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x16dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x16dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v731 
            = vlSelfRef.__PVT__gshare_pht_table[0x16dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v731 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v732 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x16eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x16eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v733 
            = vlSelfRef.__PVT__gshare_pht_table[0x16eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v733 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v734 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x16fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x16fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v735 
            = vlSelfRef.__PVT__gshare_pht_table[0x16fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v735 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v736 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x170U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x170U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x170U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x170U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x170U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x170U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x170U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x170U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x170U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v737 
            = vlSelfRef.__PVT__gshare_pht_table[0x170U];
        vlSelfRef.__VdlySet__gshare_pht_table__v737 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v738 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x171U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x171U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x171U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x171U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x171U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x171U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x171U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x171U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x171U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v739 
            = vlSelfRef.__PVT__gshare_pht_table[0x171U];
        vlSelfRef.__VdlySet__gshare_pht_table__v739 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v740 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x172U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x172U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x172U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x172U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x172U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x172U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x172U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x172U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x172U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v741 
            = vlSelfRef.__PVT__gshare_pht_table[0x172U];
        vlSelfRef.__VdlySet__gshare_pht_table__v741 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v742 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x173U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x173U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x173U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x173U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x173U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x173U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x173U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x173U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x173U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v743 
            = vlSelfRef.__PVT__gshare_pht_table[0x173U];
        vlSelfRef.__VdlySet__gshare_pht_table__v743 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v744 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x174U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x174U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x174U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x174U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x174U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x174U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x174U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x174U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x174U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v745 
            = vlSelfRef.__PVT__gshare_pht_table[0x174U];
        vlSelfRef.__VdlySet__gshare_pht_table__v745 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v746 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x175U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x175U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x175U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x175U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x175U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x175U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x175U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x175U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x175U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v747 
            = vlSelfRef.__PVT__gshare_pht_table[0x175U];
        vlSelfRef.__VdlySet__gshare_pht_table__v747 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v748 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x176U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x176U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x176U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x176U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x176U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x176U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x176U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x176U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x176U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v749 
            = vlSelfRef.__PVT__gshare_pht_table[0x176U];
        vlSelfRef.__VdlySet__gshare_pht_table__v749 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v750 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x177U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x177U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x177U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x177U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x177U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x177U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x177U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x177U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x177U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v751 
            = vlSelfRef.__PVT__gshare_pht_table[0x177U];
        vlSelfRef.__VdlySet__gshare_pht_table__v751 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v752 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x178U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x178U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x178U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x178U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x178U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x178U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x178U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x178U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x178U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v753 
            = vlSelfRef.__PVT__gshare_pht_table[0x178U];
        vlSelfRef.__VdlySet__gshare_pht_table__v753 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v754 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x179U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x179U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x179U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x179U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x179U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x179U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x179U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x179U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x179U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v755 
            = vlSelfRef.__PVT__gshare_pht_table[0x179U];
        vlSelfRef.__VdlySet__gshare_pht_table__v755 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v756 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x17aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x17aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v757 
            = vlSelfRef.__PVT__gshare_pht_table[0x17aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v757 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v758 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x17bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x17bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v759 
            = vlSelfRef.__PVT__gshare_pht_table[0x17bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v759 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v760 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x17cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x17cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v761 
            = vlSelfRef.__PVT__gshare_pht_table[0x17cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v761 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v762 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x17dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x17dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v763 
            = vlSelfRef.__PVT__gshare_pht_table[0x17dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v763 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v764 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x17eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x17eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v765 
            = vlSelfRef.__PVT__gshare_pht_table[0x17eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v765 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v766 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x17fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x17fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v767 
            = vlSelfRef.__PVT__gshare_pht_table[0x17fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v767 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v768 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x180U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x180U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x180U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x180U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x180U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x180U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x180U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x180U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x180U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v769 
            = vlSelfRef.__PVT__gshare_pht_table[0x180U];
        vlSelfRef.__VdlySet__gshare_pht_table__v769 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v770 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x181U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x181U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x181U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x181U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x181U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x181U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x181U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x181U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x181U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v771 
            = vlSelfRef.__PVT__gshare_pht_table[0x181U];
        vlSelfRef.__VdlySet__gshare_pht_table__v771 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v772 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x182U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x182U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x182U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x182U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x182U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x182U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x182U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x182U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x182U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v773 
            = vlSelfRef.__PVT__gshare_pht_table[0x182U];
        vlSelfRef.__VdlySet__gshare_pht_table__v773 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v774 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x183U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x183U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x183U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x183U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x183U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x183U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x183U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x183U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x183U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v775 
            = vlSelfRef.__PVT__gshare_pht_table[0x183U];
        vlSelfRef.__VdlySet__gshare_pht_table__v775 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v776 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x184U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x184U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x184U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x184U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x184U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x184U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x184U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x184U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x184U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v777 
            = vlSelfRef.__PVT__gshare_pht_table[0x184U];
        vlSelfRef.__VdlySet__gshare_pht_table__v777 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v778 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x185U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x185U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x185U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x185U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x185U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x185U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x185U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x185U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x185U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v779 
            = vlSelfRef.__PVT__gshare_pht_table[0x185U];
        vlSelfRef.__VdlySet__gshare_pht_table__v779 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v780 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x186U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x186U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x186U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x186U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x186U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x186U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x186U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x186U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x186U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v781 
            = vlSelfRef.__PVT__gshare_pht_table[0x186U];
        vlSelfRef.__VdlySet__gshare_pht_table__v781 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v782 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x187U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x187U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x187U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x187U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x187U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x187U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x187U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x187U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x187U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v783 
            = vlSelfRef.__PVT__gshare_pht_table[0x187U];
        vlSelfRef.__VdlySet__gshare_pht_table__v783 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v784 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x188U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x188U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x188U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x188U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x188U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x188U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x188U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x188U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x188U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v785 
            = vlSelfRef.__PVT__gshare_pht_table[0x188U];
        vlSelfRef.__VdlySet__gshare_pht_table__v785 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v786 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x189U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x189U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x189U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x189U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x189U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x189U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x189U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x189U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x189U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v787 
            = vlSelfRef.__PVT__gshare_pht_table[0x189U];
        vlSelfRef.__VdlySet__gshare_pht_table__v787 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v788 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x18aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x18aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v789 
            = vlSelfRef.__PVT__gshare_pht_table[0x18aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v789 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v790 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x18bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x18bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v791 
            = vlSelfRef.__PVT__gshare_pht_table[0x18bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v791 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v792 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x18cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x18cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v793 
            = vlSelfRef.__PVT__gshare_pht_table[0x18cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v793 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v794 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x18dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x18dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v795 
            = vlSelfRef.__PVT__gshare_pht_table[0x18dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v795 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v796 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x18eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x18eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v797 
            = vlSelfRef.__PVT__gshare_pht_table[0x18eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v797 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v798 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x18fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x18fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v799 
            = vlSelfRef.__PVT__gshare_pht_table[0x18fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v799 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v800 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x190U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x190U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x190U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x190U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x190U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x190U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x190U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x190U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x190U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v801 
            = vlSelfRef.__PVT__gshare_pht_table[0x190U];
        vlSelfRef.__VdlySet__gshare_pht_table__v801 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v802 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x191U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x191U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x191U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x191U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x191U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x191U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x191U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x191U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x191U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v803 
            = vlSelfRef.__PVT__gshare_pht_table[0x191U];
        vlSelfRef.__VdlySet__gshare_pht_table__v803 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v804 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x192U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x192U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x192U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x192U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x192U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x192U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x192U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x192U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x192U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v805 
            = vlSelfRef.__PVT__gshare_pht_table[0x192U];
        vlSelfRef.__VdlySet__gshare_pht_table__v805 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v806 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x193U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x193U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x193U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x193U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x193U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x193U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x193U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x193U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x193U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v807 
            = vlSelfRef.__PVT__gshare_pht_table[0x193U];
        vlSelfRef.__VdlySet__gshare_pht_table__v807 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v808 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x194U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x194U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x194U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x194U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x194U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x194U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x194U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x194U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x194U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v809 
            = vlSelfRef.__PVT__gshare_pht_table[0x194U];
        vlSelfRef.__VdlySet__gshare_pht_table__v809 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v810 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x195U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x195U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x195U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x195U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x195U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x195U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x195U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x195U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x195U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v811 
            = vlSelfRef.__PVT__gshare_pht_table[0x195U];
        vlSelfRef.__VdlySet__gshare_pht_table__v811 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v812 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x196U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x196U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x196U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x196U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x196U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x196U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x196U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x196U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x196U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v813 
            = vlSelfRef.__PVT__gshare_pht_table[0x196U];
        vlSelfRef.__VdlySet__gshare_pht_table__v813 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v814 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x197U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x197U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x197U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x197U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x197U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x197U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x197U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x197U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x197U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v815 
            = vlSelfRef.__PVT__gshare_pht_table[0x197U];
        vlSelfRef.__VdlySet__gshare_pht_table__v815 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v816 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x198U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x198U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x198U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x198U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x198U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x198U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x198U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x198U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x198U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v817 
            = vlSelfRef.__PVT__gshare_pht_table[0x198U];
        vlSelfRef.__VdlySet__gshare_pht_table__v817 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v818 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x199U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x199U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x199U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x199U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x199U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x199U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x199U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x199U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x199U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v819 
            = vlSelfRef.__PVT__gshare_pht_table[0x199U];
        vlSelfRef.__VdlySet__gshare_pht_table__v819 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v820 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x19aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x19aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v821 
            = vlSelfRef.__PVT__gshare_pht_table[0x19aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v821 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v822 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x19bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x19bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v823 
            = vlSelfRef.__PVT__gshare_pht_table[0x19bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v823 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v824 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x19cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x19cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v825 
            = vlSelfRef.__PVT__gshare_pht_table[0x19cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v825 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v826 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x19dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x19dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v827 
            = vlSelfRef.__PVT__gshare_pht_table[0x19dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v827 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v828 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x19eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x19eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v829 
            = vlSelfRef.__PVT__gshare_pht_table[0x19eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v829 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v830 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x19fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x19fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v831 
            = vlSelfRef.__PVT__gshare_pht_table[0x19fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v831 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v832 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v833 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v833 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v834 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v835 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v835 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v836 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v837 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v837 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v838 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v839 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v839 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v840 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v841 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v841 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v842 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v843 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v843 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v844 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v845 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v845 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v846 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v847 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v847 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v848 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v849 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v849 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v850 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1a9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v851 
            = vlSelfRef.__PVT__gshare_pht_table[0x1a9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v851 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v852 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1aaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v853 
            = vlSelfRef.__PVT__gshare_pht_table[0x1aaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v853 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v854 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1abU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v855 
            = vlSelfRef.__PVT__gshare_pht_table[0x1abU];
        vlSelfRef.__VdlySet__gshare_pht_table__v855 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v856 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1acU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v857 
            = vlSelfRef.__PVT__gshare_pht_table[0x1acU];
        vlSelfRef.__VdlySet__gshare_pht_table__v857 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v858 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1adU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v859 
            = vlSelfRef.__PVT__gshare_pht_table[0x1adU];
        vlSelfRef.__VdlySet__gshare_pht_table__v859 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v860 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1aeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v861 
            = vlSelfRef.__PVT__gshare_pht_table[0x1aeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v861 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v862 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1afU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v863 
            = vlSelfRef.__PVT__gshare_pht_table[0x1afU];
        vlSelfRef.__VdlySet__gshare_pht_table__v863 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v864 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v865 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v865 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v866 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v867 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v867 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v868 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v869 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v869 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v870 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v871 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v871 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v872 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v873 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v873 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v874 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v875 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v875 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v876 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v877 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v877 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v878 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v879 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v879 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v880 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v881 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v881 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v882 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1b9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v883 
            = vlSelfRef.__PVT__gshare_pht_table[0x1b9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v883 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v884 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1baU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v885 
            = vlSelfRef.__PVT__gshare_pht_table[0x1baU];
        vlSelfRef.__VdlySet__gshare_pht_table__v885 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v886 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1bbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v887 
            = vlSelfRef.__PVT__gshare_pht_table[0x1bbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v887 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v888 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1bcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v889 
            = vlSelfRef.__PVT__gshare_pht_table[0x1bcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v889 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v890 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1bdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v891 
            = vlSelfRef.__PVT__gshare_pht_table[0x1bdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v891 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v892 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1beU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v893 
            = vlSelfRef.__PVT__gshare_pht_table[0x1beU];
        vlSelfRef.__VdlySet__gshare_pht_table__v893 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v894 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1bfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v895 
            = vlSelfRef.__PVT__gshare_pht_table[0x1bfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v895 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v896 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v897 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v897 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v898 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v899 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v899 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v900 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v901 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v901 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v902 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v903 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v903 = 1U;
    }
}
