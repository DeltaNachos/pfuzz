// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_gshare_branch_predictor.h"

VL_INLINE_OPT void Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__2(Vfalco_top_gshare_branch_predictor* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v904 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v905 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v905 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v906 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v907 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v907 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v908 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v909 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v909 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v910 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v911 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v911 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v912 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v913 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v913 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v914 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1c9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v915 
            = vlSelfRef.__PVT__gshare_pht_table[0x1c9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v915 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v916 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1caU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v917 
            = vlSelfRef.__PVT__gshare_pht_table[0x1caU];
        vlSelfRef.__VdlySet__gshare_pht_table__v917 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v918 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1cbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v919 
            = vlSelfRef.__PVT__gshare_pht_table[0x1cbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v919 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v920 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1ccU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v921 
            = vlSelfRef.__PVT__gshare_pht_table[0x1ccU];
        vlSelfRef.__VdlySet__gshare_pht_table__v921 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v922 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1cdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v923 
            = vlSelfRef.__PVT__gshare_pht_table[0x1cdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v923 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v924 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1ceU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v925 
            = vlSelfRef.__PVT__gshare_pht_table[0x1ceU];
        vlSelfRef.__VdlySet__gshare_pht_table__v925 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v926 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1cfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v927 
            = vlSelfRef.__PVT__gshare_pht_table[0x1cfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v927 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v928 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v929 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v929 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v930 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v931 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v931 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v932 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v933 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v933 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v934 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v935 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v935 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v936 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v937 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v937 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v938 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v939 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v939 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v940 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v941 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v941 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v942 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v943 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v943 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v944 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v945 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v945 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v946 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1d9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1d9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1d9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v947 
            = vlSelfRef.__PVT__gshare_pht_table[0x1d9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v947 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v948 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1daU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1daU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1daU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v949 
            = vlSelfRef.__PVT__gshare_pht_table[0x1daU];
        vlSelfRef.__VdlySet__gshare_pht_table__v949 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v950 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1dbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v951 
            = vlSelfRef.__PVT__gshare_pht_table[0x1dbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v951 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v952 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1dcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v953 
            = vlSelfRef.__PVT__gshare_pht_table[0x1dcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v953 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v954 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1ddU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ddU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ddU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v955 
            = vlSelfRef.__PVT__gshare_pht_table[0x1ddU];
        vlSelfRef.__VdlySet__gshare_pht_table__v955 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v956 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1deU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1deU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1deU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v957 
            = vlSelfRef.__PVT__gshare_pht_table[0x1deU];
        vlSelfRef.__VdlySet__gshare_pht_table__v957 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v958 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1dfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v959 
            = vlSelfRef.__PVT__gshare_pht_table[0x1dfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v959 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v960 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v961 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v961 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v962 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v963 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v963 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v964 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v965 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v965 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v966 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v967 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v967 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v968 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v969 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v969 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v970 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v971 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v971 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v972 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v973 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v973 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v974 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v975 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v975 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v976 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v977 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v977 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v978 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1e9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1e9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1e9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v979 
            = vlSelfRef.__PVT__gshare_pht_table[0x1e9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v979 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v980 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1eaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v981 
            = vlSelfRef.__PVT__gshare_pht_table[0x1eaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v981 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v982 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1ebU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ebU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ebU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v983 
            = vlSelfRef.__PVT__gshare_pht_table[0x1ebU];
        vlSelfRef.__VdlySet__gshare_pht_table__v983 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v984 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1ecU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ecU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ecU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v985 
            = vlSelfRef.__PVT__gshare_pht_table[0x1ecU];
        vlSelfRef.__VdlySet__gshare_pht_table__v985 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v986 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1edU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1edU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1edU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v987 
            = vlSelfRef.__PVT__gshare_pht_table[0x1edU];
        vlSelfRef.__VdlySet__gshare_pht_table__v987 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v988 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1eeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v989 
            = vlSelfRef.__PVT__gshare_pht_table[0x1eeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v989 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v990 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1efU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1efU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1efU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v991 
            = vlSelfRef.__PVT__gshare_pht_table[0x1efU];
        vlSelfRef.__VdlySet__gshare_pht_table__v991 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v992 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v993 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v993 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v994 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v995 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v995 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v996 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v997 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v997 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v998 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v999 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v999 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1000 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1001 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1001 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1002 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1003 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1003 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1004 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1005 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1005 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1006 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1007 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1007 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1008 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1009 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1009 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1010 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1f9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1f9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1f9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1011 
            = vlSelfRef.__PVT__gshare_pht_table[0x1f9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1011 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1012 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1faU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1faU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1faU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1013 
            = vlSelfRef.__PVT__gshare_pht_table[0x1faU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1013 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1014 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1fbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1015 
            = vlSelfRef.__PVT__gshare_pht_table[0x1fbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1015 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1016 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1fcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1017 
            = vlSelfRef.__PVT__gshare_pht_table[0x1fcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1017 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1018 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1fdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1019 
            = vlSelfRef.__PVT__gshare_pht_table[0x1fdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1019 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1020 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1feU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1feU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1feU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1021 
            = vlSelfRef.__PVT__gshare_pht_table[0x1feU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1021 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1022 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1ffU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1ffU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1ffU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1023 
            = vlSelfRef.__PVT__gshare_pht_table[0x1ffU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1023 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1024 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x200U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x200U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x200U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x200U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x200U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x200U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x200U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x200U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x200U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1025 
            = vlSelfRef.__PVT__gshare_pht_table[0x200U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1025 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1026 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x201U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x201U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x201U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x201U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x201U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x201U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x201U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x201U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x201U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1027 
            = vlSelfRef.__PVT__gshare_pht_table[0x201U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1027 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1028 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x202U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x202U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x202U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x202U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x202U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x202U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x202U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x202U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x202U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1029 
            = vlSelfRef.__PVT__gshare_pht_table[0x202U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1029 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1030 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x203U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x203U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x203U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x203U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x203U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x203U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x203U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x203U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x203U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1031 
            = vlSelfRef.__PVT__gshare_pht_table[0x203U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1031 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1032 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x204U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x204U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x204U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x204U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x204U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x204U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x204U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x204U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x204U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1033 
            = vlSelfRef.__PVT__gshare_pht_table[0x204U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1033 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1034 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x205U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x205U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x205U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x205U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x205U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x205U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x205U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x205U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x205U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1035 
            = vlSelfRef.__PVT__gshare_pht_table[0x205U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1035 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1036 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x206U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x206U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x206U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x206U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x206U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x206U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x206U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x206U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x206U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1037 
            = vlSelfRef.__PVT__gshare_pht_table[0x206U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1037 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1038 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x207U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x207U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x207U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x207U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x207U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x207U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x207U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x207U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x207U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1039 
            = vlSelfRef.__PVT__gshare_pht_table[0x207U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1039 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1040 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x208U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x208U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x208U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x208U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x208U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x208U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x208U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x208U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x208U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1041 
            = vlSelfRef.__PVT__gshare_pht_table[0x208U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1041 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1042 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x209U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x209U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x209U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x209U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x209U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x209U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x209U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x209U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x209U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1043 
            = vlSelfRef.__PVT__gshare_pht_table[0x209U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1043 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1044 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x20aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x20aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1045 
            = vlSelfRef.__PVT__gshare_pht_table[0x20aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1045 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1046 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x20bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x20bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1047 
            = vlSelfRef.__PVT__gshare_pht_table[0x20bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1047 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1048 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x20cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x20cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1049 
            = vlSelfRef.__PVT__gshare_pht_table[0x20cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1049 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1050 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x20dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x20dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1051 
            = vlSelfRef.__PVT__gshare_pht_table[0x20dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1051 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1052 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x20eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x20eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1053 
            = vlSelfRef.__PVT__gshare_pht_table[0x20eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1053 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1054 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x20fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x20fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1055 
            = vlSelfRef.__PVT__gshare_pht_table[0x20fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1055 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1056 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x210U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x210U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x210U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x210U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x210U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x210U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x210U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x210U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x210U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1057 
            = vlSelfRef.__PVT__gshare_pht_table[0x210U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1057 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1058 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x211U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x211U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x211U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x211U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x211U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x211U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x211U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x211U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x211U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1059 
            = vlSelfRef.__PVT__gshare_pht_table[0x211U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1059 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1060 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x212U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x212U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x212U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x212U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x212U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x212U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x212U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x212U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x212U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1061 
            = vlSelfRef.__PVT__gshare_pht_table[0x212U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1061 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1062 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x213U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x213U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x213U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x213U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x213U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x213U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x213U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x213U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x213U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1063 
            = vlSelfRef.__PVT__gshare_pht_table[0x213U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1063 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1064 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x214U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x214U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x214U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x214U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x214U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x214U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x214U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x214U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x214U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1065 
            = vlSelfRef.__PVT__gshare_pht_table[0x214U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1065 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1066 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x215U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x215U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x215U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x215U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x215U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x215U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x215U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x215U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x215U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1067 
            = vlSelfRef.__PVT__gshare_pht_table[0x215U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1067 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1068 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x216U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x216U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x216U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x216U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x216U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x216U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x216U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x216U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x216U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1069 
            = vlSelfRef.__PVT__gshare_pht_table[0x216U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1069 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1070 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x217U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x217U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x217U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x217U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x217U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x217U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x217U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x217U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x217U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1071 
            = vlSelfRef.__PVT__gshare_pht_table[0x217U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1071 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1072 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x218U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x218U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x218U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x218U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x218U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x218U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x218U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x218U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x218U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1073 
            = vlSelfRef.__PVT__gshare_pht_table[0x218U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1073 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1074 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x219U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x219U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x219U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x219U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x219U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x219U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x219U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x219U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x219U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1075 
            = vlSelfRef.__PVT__gshare_pht_table[0x219U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1075 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1076 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x21aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x21aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1077 
            = vlSelfRef.__PVT__gshare_pht_table[0x21aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1077 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1078 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x21bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x21bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1079 
            = vlSelfRef.__PVT__gshare_pht_table[0x21bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1079 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1080 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x21cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x21cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1081 
            = vlSelfRef.__PVT__gshare_pht_table[0x21cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1081 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1082 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x21dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x21dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1083 
            = vlSelfRef.__PVT__gshare_pht_table[0x21dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1083 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1084 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x21eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x21eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1085 
            = vlSelfRef.__PVT__gshare_pht_table[0x21eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1085 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1086 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x21fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x21fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1087 
            = vlSelfRef.__PVT__gshare_pht_table[0x21fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1087 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1088 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x220U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x220U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x220U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x220U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x220U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x220U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x220U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x220U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x220U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1089 
            = vlSelfRef.__PVT__gshare_pht_table[0x220U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1089 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1090 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x221U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x221U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x221U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x221U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x221U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x221U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x221U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x221U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x221U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1091 
            = vlSelfRef.__PVT__gshare_pht_table[0x221U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1091 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1092 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x222U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x222U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x222U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x222U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x222U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x222U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x222U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x222U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x222U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1093 
            = vlSelfRef.__PVT__gshare_pht_table[0x222U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1093 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1094 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x223U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x223U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x223U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x223U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x223U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x223U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x223U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x223U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x223U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1095 
            = vlSelfRef.__PVT__gshare_pht_table[0x223U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1095 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1096 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x224U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x224U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x224U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x224U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x224U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x224U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x224U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x224U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x224U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1097 
            = vlSelfRef.__PVT__gshare_pht_table[0x224U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1097 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1098 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x225U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x225U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x225U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x225U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x225U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x225U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x225U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x225U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x225U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1099 
            = vlSelfRef.__PVT__gshare_pht_table[0x225U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1099 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1100 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x226U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x226U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x226U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x226U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x226U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x226U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x226U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x226U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x226U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1101 
            = vlSelfRef.__PVT__gshare_pht_table[0x226U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1101 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1102 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x227U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x227U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x227U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x227U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x227U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x227U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x227U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x227U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x227U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1103 
            = vlSelfRef.__PVT__gshare_pht_table[0x227U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1103 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1104 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x228U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x228U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x228U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x228U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x228U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x228U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x228U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x228U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x228U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1105 
            = vlSelfRef.__PVT__gshare_pht_table[0x228U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1105 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1106 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x229U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x229U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x229U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x229U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x229U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x229U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x229U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x229U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x229U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1107 
            = vlSelfRef.__PVT__gshare_pht_table[0x229U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1107 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1108 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x22aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x22aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1109 
            = vlSelfRef.__PVT__gshare_pht_table[0x22aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1109 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1110 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x22bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x22bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1111 
            = vlSelfRef.__PVT__gshare_pht_table[0x22bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1111 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1112 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x22cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x22cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1113 
            = vlSelfRef.__PVT__gshare_pht_table[0x22cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1113 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1114 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x22dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x22dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1115 
            = vlSelfRef.__PVT__gshare_pht_table[0x22dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1115 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1116 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x22eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x22eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1117 
            = vlSelfRef.__PVT__gshare_pht_table[0x22eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1117 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1118 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x22fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x22fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1119 
            = vlSelfRef.__PVT__gshare_pht_table[0x22fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1119 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1120 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x230U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x230U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x230U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x230U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x230U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x230U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x230U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x230U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x230U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1121 
            = vlSelfRef.__PVT__gshare_pht_table[0x230U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1121 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1122 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x231U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x231U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x231U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x231U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x231U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x231U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x231U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x231U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x231U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1123 
            = vlSelfRef.__PVT__gshare_pht_table[0x231U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1123 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1124 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x232U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x232U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x232U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x232U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x232U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x232U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x232U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x232U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x232U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1125 
            = vlSelfRef.__PVT__gshare_pht_table[0x232U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1125 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1126 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x233U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x233U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x233U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x233U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x233U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x233U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x233U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x233U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x233U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1127 
            = vlSelfRef.__PVT__gshare_pht_table[0x233U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1127 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1128 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x234U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x234U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x234U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x234U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x234U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x234U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x234U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x234U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x234U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1129 
            = vlSelfRef.__PVT__gshare_pht_table[0x234U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1129 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1130 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x235U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x235U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x235U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x235U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x235U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x235U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x235U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x235U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x235U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1131 
            = vlSelfRef.__PVT__gshare_pht_table[0x235U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1131 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1132 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x236U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x236U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x236U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x236U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x236U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x236U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x236U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x236U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x236U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1133 
            = vlSelfRef.__PVT__gshare_pht_table[0x236U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1133 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1134 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x237U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x237U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x237U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x237U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x237U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x237U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x237U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x237U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x237U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1135 
            = vlSelfRef.__PVT__gshare_pht_table[0x237U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1135 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1136 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x238U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x238U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x238U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x238U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x238U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x238U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x238U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x238U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x238U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1137 
            = vlSelfRef.__PVT__gshare_pht_table[0x238U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1137 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1138 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x239U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x239U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x239U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x239U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x239U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x239U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x239U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x239U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x239U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1139 
            = vlSelfRef.__PVT__gshare_pht_table[0x239U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1139 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1140 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x23aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x23aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1141 
            = vlSelfRef.__PVT__gshare_pht_table[0x23aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1141 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1142 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x23bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x23bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1143 
            = vlSelfRef.__PVT__gshare_pht_table[0x23bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1143 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1144 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x23cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x23cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1145 
            = vlSelfRef.__PVT__gshare_pht_table[0x23cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1145 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1146 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x23dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x23dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1147 
            = vlSelfRef.__PVT__gshare_pht_table[0x23dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1147 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1148 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x23eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x23eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1149 
            = vlSelfRef.__PVT__gshare_pht_table[0x23eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1149 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1150 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x23fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x23fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1151 
            = vlSelfRef.__PVT__gshare_pht_table[0x23fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1151 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1152 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x240U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x240U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x240U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x240U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x240U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x240U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x240U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x240U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x240U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1153 
            = vlSelfRef.__PVT__gshare_pht_table[0x240U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1153 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1154 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x241U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x241U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x241U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x241U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x241U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x241U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x241U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x241U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x241U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1155 
            = vlSelfRef.__PVT__gshare_pht_table[0x241U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1155 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1156 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x242U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x242U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x242U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x242U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x242U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x242U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x242U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x242U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x242U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1157 
            = vlSelfRef.__PVT__gshare_pht_table[0x242U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1157 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1158 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x243U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x243U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x243U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x243U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x243U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x243U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x243U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x243U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x243U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1159 
            = vlSelfRef.__PVT__gshare_pht_table[0x243U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1159 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1160 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x244U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x244U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x244U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x244U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x244U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x244U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x244U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x244U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x244U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1161 
            = vlSelfRef.__PVT__gshare_pht_table[0x244U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1161 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1162 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x245U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x245U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x245U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x245U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x245U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x245U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x245U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x245U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x245U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1163 
            = vlSelfRef.__PVT__gshare_pht_table[0x245U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1163 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1164 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x246U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x246U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x246U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x246U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x246U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x246U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x246U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x246U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x246U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1165 
            = vlSelfRef.__PVT__gshare_pht_table[0x246U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1165 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1166 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x247U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x247U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x247U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x247U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x247U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x247U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x247U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x247U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x247U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1167 
            = vlSelfRef.__PVT__gshare_pht_table[0x247U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1167 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1168 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x248U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x248U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x248U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x248U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x248U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x248U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x248U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x248U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x248U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1169 
            = vlSelfRef.__PVT__gshare_pht_table[0x248U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1169 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1170 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x249U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x249U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x249U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x249U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x249U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x249U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x249U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x249U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x249U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1171 
            = vlSelfRef.__PVT__gshare_pht_table[0x249U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1171 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1172 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x24aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x24aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1173 
            = vlSelfRef.__PVT__gshare_pht_table[0x24aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1173 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1174 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x24bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x24bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1175 
            = vlSelfRef.__PVT__gshare_pht_table[0x24bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1175 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1176 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x24cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x24cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1177 
            = vlSelfRef.__PVT__gshare_pht_table[0x24cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1177 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1178 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x24dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x24dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1179 
            = vlSelfRef.__PVT__gshare_pht_table[0x24dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1179 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1180 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x24eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x24eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1181 
            = vlSelfRef.__PVT__gshare_pht_table[0x24eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1181 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1182 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x24fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x24fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1183 
            = vlSelfRef.__PVT__gshare_pht_table[0x24fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1183 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1184 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x250U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x250U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x250U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x250U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x250U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x250U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x250U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x250U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x250U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1185 
            = vlSelfRef.__PVT__gshare_pht_table[0x250U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1185 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1186 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x251U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x251U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x251U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x251U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x251U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x251U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x251U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x251U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x251U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1187 
            = vlSelfRef.__PVT__gshare_pht_table[0x251U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1187 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1188 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x252U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x252U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x252U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x252U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x252U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x252U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x252U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x252U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x252U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1189 
            = vlSelfRef.__PVT__gshare_pht_table[0x252U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1189 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1190 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x253U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x253U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x253U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x253U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x253U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x253U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x253U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x253U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x253U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1191 
            = vlSelfRef.__PVT__gshare_pht_table[0x253U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1191 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1192 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x254U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x254U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x254U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x254U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x254U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x254U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x254U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x254U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x254U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1193 
            = vlSelfRef.__PVT__gshare_pht_table[0x254U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1193 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1194 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x255U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x255U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x255U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x255U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x255U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x255U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x255U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x255U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x255U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1195 
            = vlSelfRef.__PVT__gshare_pht_table[0x255U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1195 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1196 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x256U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x256U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x256U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x256U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x256U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x256U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x256U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x256U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x256U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1197 
            = vlSelfRef.__PVT__gshare_pht_table[0x256U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1197 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1198 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x257U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x257U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x257U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x257U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x257U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x257U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x257U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x257U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x257U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1199 
            = vlSelfRef.__PVT__gshare_pht_table[0x257U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1199 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1200 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x258U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x258U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x258U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x258U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x258U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x258U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x258U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x258U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x258U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1201 
            = vlSelfRef.__PVT__gshare_pht_table[0x258U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1201 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1202 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x259U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x259U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x259U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x259U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x259U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x259U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x259U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x259U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x259U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1203 
            = vlSelfRef.__PVT__gshare_pht_table[0x259U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1203 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1204 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x25aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x25aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1205 
            = vlSelfRef.__PVT__gshare_pht_table[0x25aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1205 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1206 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x25bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x25bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1207 
            = vlSelfRef.__PVT__gshare_pht_table[0x25bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1207 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1208 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x25cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x25cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1209 
            = vlSelfRef.__PVT__gshare_pht_table[0x25cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1209 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1210 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x25dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x25dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1211 
            = vlSelfRef.__PVT__gshare_pht_table[0x25dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1211 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1212 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x25eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x25eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1213 
            = vlSelfRef.__PVT__gshare_pht_table[0x25eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1213 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1214 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x25fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x25fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1215 
            = vlSelfRef.__PVT__gshare_pht_table[0x25fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1215 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1216 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x260U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x260U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x260U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x260U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x260U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x260U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x260U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x260U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x260U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1217 
            = vlSelfRef.__PVT__gshare_pht_table[0x260U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1217 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1218 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x261U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x261U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x261U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x261U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x261U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x261U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x261U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x261U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x261U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1219 
            = vlSelfRef.__PVT__gshare_pht_table[0x261U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1219 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1220 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x262U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x262U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x262U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x262U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x262U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x262U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x262U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x262U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x262U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1221 
            = vlSelfRef.__PVT__gshare_pht_table[0x262U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1221 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1222 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x263U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x263U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x263U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x263U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x263U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x263U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x263U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x263U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x263U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1223 
            = vlSelfRef.__PVT__gshare_pht_table[0x263U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1223 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1224 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x264U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x264U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x264U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x264U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x264U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x264U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x264U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x264U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x264U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1225 
            = vlSelfRef.__PVT__gshare_pht_table[0x264U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1225 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1226 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x265U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x265U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x265U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x265U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x265U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x265U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x265U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x265U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x265U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1227 
            = vlSelfRef.__PVT__gshare_pht_table[0x265U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1227 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1228 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x266U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x266U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x266U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x266U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x266U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x266U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x266U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x266U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x266U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1229 
            = vlSelfRef.__PVT__gshare_pht_table[0x266U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1229 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1230 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x267U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x267U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x267U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x267U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x267U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x267U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x267U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x267U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x267U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1231 
            = vlSelfRef.__PVT__gshare_pht_table[0x267U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1231 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1232 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x268U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x268U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x268U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x268U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x268U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x268U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x268U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x268U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x268U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1233 
            = vlSelfRef.__PVT__gshare_pht_table[0x268U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1233 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1234 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x269U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x269U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x269U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x269U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x269U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x269U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x269U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x269U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x269U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1235 
            = vlSelfRef.__PVT__gshare_pht_table[0x269U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1235 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1236 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x26aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x26aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1237 
            = vlSelfRef.__PVT__gshare_pht_table[0x26aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1237 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1238 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x26bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x26bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1239 
            = vlSelfRef.__PVT__gshare_pht_table[0x26bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1239 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1240 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x26cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x26cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1241 
            = vlSelfRef.__PVT__gshare_pht_table[0x26cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1241 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1242 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x26dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x26dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1243 
            = vlSelfRef.__PVT__gshare_pht_table[0x26dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1243 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1244 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x26eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x26eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1245 
            = vlSelfRef.__PVT__gshare_pht_table[0x26eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1245 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1246 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x26fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x26fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1247 
            = vlSelfRef.__PVT__gshare_pht_table[0x26fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1247 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1248 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x270U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x270U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x270U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x270U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x270U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x270U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x270U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x270U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x270U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1249 
            = vlSelfRef.__PVT__gshare_pht_table[0x270U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1249 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1250 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x271U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x271U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x271U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x271U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x271U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x271U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x271U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x271U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x271U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1251 
            = vlSelfRef.__PVT__gshare_pht_table[0x271U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1251 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1252 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x272U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x272U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x272U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x272U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x272U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x272U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x272U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x272U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x272U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1253 
            = vlSelfRef.__PVT__gshare_pht_table[0x272U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1253 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1254 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x273U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x273U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x273U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x273U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x273U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x273U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x273U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x273U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x273U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1255 
            = vlSelfRef.__PVT__gshare_pht_table[0x273U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1255 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1256 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x274U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x274U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x274U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x274U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x274U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x274U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x274U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x274U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x274U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1257 
            = vlSelfRef.__PVT__gshare_pht_table[0x274U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1257 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1258 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x275U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x275U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x275U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x275U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x275U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x275U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x275U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x275U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x275U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1259 
            = vlSelfRef.__PVT__gshare_pht_table[0x275U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1259 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1260 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x276U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x276U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x276U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x276U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x276U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x276U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x276U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x276U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x276U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1261 
            = vlSelfRef.__PVT__gshare_pht_table[0x276U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1261 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1262 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x277U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x277U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x277U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x277U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x277U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x277U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x277U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x277U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x277U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1263 
            = vlSelfRef.__PVT__gshare_pht_table[0x277U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1263 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1264 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x278U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x278U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x278U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x278U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x278U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x278U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x278U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x278U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x278U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1265 
            = vlSelfRef.__PVT__gshare_pht_table[0x278U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1265 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1266 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x279U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x279U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x279U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x279U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x279U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x279U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x279U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x279U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x279U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1267 
            = vlSelfRef.__PVT__gshare_pht_table[0x279U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1267 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1268 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x27aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x27aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1269 
            = vlSelfRef.__PVT__gshare_pht_table[0x27aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1269 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1270 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x27bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x27bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1271 
            = vlSelfRef.__PVT__gshare_pht_table[0x27bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1271 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1272 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x27cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x27cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1273 
            = vlSelfRef.__PVT__gshare_pht_table[0x27cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1273 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1274 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x27dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x27dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1275 
            = vlSelfRef.__PVT__gshare_pht_table[0x27dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1275 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1276 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x27eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x27eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1277 
            = vlSelfRef.__PVT__gshare_pht_table[0x27eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1277 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1278 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x27fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x27fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1279 
            = vlSelfRef.__PVT__gshare_pht_table[0x27fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1279 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1280 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x280U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x280U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x280U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x280U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x280U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x280U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x280U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x280U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x280U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1281 
            = vlSelfRef.__PVT__gshare_pht_table[0x280U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1281 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1282 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x281U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x281U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x281U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x281U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x281U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x281U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x281U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x281U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x281U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1283 
            = vlSelfRef.__PVT__gshare_pht_table[0x281U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1283 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1284 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x282U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x282U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x282U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x282U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x282U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x282U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x282U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x282U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x282U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1285 
            = vlSelfRef.__PVT__gshare_pht_table[0x282U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1285 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1286 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x283U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x283U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x283U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x283U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x283U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x283U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x283U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x283U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x283U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1287 
            = vlSelfRef.__PVT__gshare_pht_table[0x283U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1287 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1288 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x284U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x284U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x284U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x284U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x284U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x284U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x284U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x284U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x284U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1289 
            = vlSelfRef.__PVT__gshare_pht_table[0x284U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1289 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1290 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x285U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x285U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x285U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x285U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x285U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x285U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x285U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x285U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x285U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1291 
            = vlSelfRef.__PVT__gshare_pht_table[0x285U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1291 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1292 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x286U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x286U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x286U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x286U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x286U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x286U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x286U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x286U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x286U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1293 
            = vlSelfRef.__PVT__gshare_pht_table[0x286U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1293 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1294 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x287U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x287U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x287U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x287U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x287U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x287U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x287U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x287U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x287U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1295 
            = vlSelfRef.__PVT__gshare_pht_table[0x287U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1295 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1296 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x288U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x288U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x288U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x288U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x288U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x288U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x288U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x288U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x288U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1297 
            = vlSelfRef.__PVT__gshare_pht_table[0x288U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1297 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1298 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x289U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x289U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x289U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x289U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x289U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x289U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x289U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x289U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x289U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1299 
            = vlSelfRef.__PVT__gshare_pht_table[0x289U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1299 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1300 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x28aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x28aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1301 
            = vlSelfRef.__PVT__gshare_pht_table[0x28aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1301 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1302 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x28bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x28bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1303 
            = vlSelfRef.__PVT__gshare_pht_table[0x28bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1303 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1304 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x28cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x28cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1305 
            = vlSelfRef.__PVT__gshare_pht_table[0x28cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1305 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1306 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x28dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x28dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1307 
            = vlSelfRef.__PVT__gshare_pht_table[0x28dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1307 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1308 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x28eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x28eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1309 
            = vlSelfRef.__PVT__gshare_pht_table[0x28eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1309 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1310 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x28fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x28fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1311 
            = vlSelfRef.__PVT__gshare_pht_table[0x28fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1311 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1312 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x290U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x290U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x290U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x290U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x290U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x290U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x290U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x290U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x290U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1313 
            = vlSelfRef.__PVT__gshare_pht_table[0x290U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1313 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1314 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x291U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x291U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x291U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x291U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x291U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x291U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x291U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x291U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x291U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1315 
            = vlSelfRef.__PVT__gshare_pht_table[0x291U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1315 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1316 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x292U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x292U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x292U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x292U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x292U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x292U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x292U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x292U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x292U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1317 
            = vlSelfRef.__PVT__gshare_pht_table[0x292U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1317 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1318 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x293U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x293U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x293U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x293U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x293U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x293U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x293U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x293U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x293U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1319 
            = vlSelfRef.__PVT__gshare_pht_table[0x293U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1319 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1320 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x294U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x294U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x294U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x294U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x294U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x294U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x294U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x294U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x294U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1321 
            = vlSelfRef.__PVT__gshare_pht_table[0x294U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1321 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1322 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x295U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x295U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x295U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x295U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x295U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x295U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x295U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x295U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x295U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1323 
            = vlSelfRef.__PVT__gshare_pht_table[0x295U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1323 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1324 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x296U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x296U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x296U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x296U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x296U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x296U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x296U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x296U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x296U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1325 
            = vlSelfRef.__PVT__gshare_pht_table[0x296U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1325 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1326 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x297U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x297U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x297U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x297U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x297U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x297U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x297U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x297U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x297U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1327 
            = vlSelfRef.__PVT__gshare_pht_table[0x297U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1327 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1328 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x298U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x298U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x298U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x298U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x298U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x298U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x298U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x298U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x298U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1329 
            = vlSelfRef.__PVT__gshare_pht_table[0x298U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1329 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1330 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x299U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x299U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x299U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x299U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x299U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x299U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x299U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x299U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x299U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1331 
            = vlSelfRef.__PVT__gshare_pht_table[0x299U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1331 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1332 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x29aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x29aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1333 
            = vlSelfRef.__PVT__gshare_pht_table[0x29aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1333 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1334 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x29bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x29bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1335 
            = vlSelfRef.__PVT__gshare_pht_table[0x29bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1335 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1336 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x29cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x29cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1337 
            = vlSelfRef.__PVT__gshare_pht_table[0x29cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1337 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1338 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x29dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x29dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1339 
            = vlSelfRef.__PVT__gshare_pht_table[0x29dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1339 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1340 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x29eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x29eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1341 
            = vlSelfRef.__PVT__gshare_pht_table[0x29eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1341 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1342 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x29fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x29fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1343 
            = vlSelfRef.__PVT__gshare_pht_table[0x29fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1343 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1344 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1345 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1345 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1346 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1347 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1347 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1348 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1349 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1349 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1350 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1351 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1351 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1352 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1353 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1353 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1354 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1355 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1355 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1356 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1357 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1357 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1358 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1359 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1359 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1360 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1361 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1361 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1362 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2a9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2a9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2a9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1363 
            = vlSelfRef.__PVT__gshare_pht_table[0x2a9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1363 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1364 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2aaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1365 
            = vlSelfRef.__PVT__gshare_pht_table[0x2aaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1365 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1366 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2abU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2abU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2abU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1367 
            = vlSelfRef.__PVT__gshare_pht_table[0x2abU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1367 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1368 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2acU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2acU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2acU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1369 
            = vlSelfRef.__PVT__gshare_pht_table[0x2acU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1369 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1370 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2adU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2adU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2adU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1371 
            = vlSelfRef.__PVT__gshare_pht_table[0x2adU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1371 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1372 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2aeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1373 
            = vlSelfRef.__PVT__gshare_pht_table[0x2aeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1373 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1374 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2afU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2afU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2afU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1375 
            = vlSelfRef.__PVT__gshare_pht_table[0x2afU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1375 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1376 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1377 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1377 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1378 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1379 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1379 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1380 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1381 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1381 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1382 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1383 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1383 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1384 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1385 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1385 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1386 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1387 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1387 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1388 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1389 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1389 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1390 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1391 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1391 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1392 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1393 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1393 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1394 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2b9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2b9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2b9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1395 
            = vlSelfRef.__PVT__gshare_pht_table[0x2b9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1395 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1396 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2baU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2baU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2baU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1397 
            = vlSelfRef.__PVT__gshare_pht_table[0x2baU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1397 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1398 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2bbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1399 
            = vlSelfRef.__PVT__gshare_pht_table[0x2bbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1399 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1400 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2bcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1401 
            = vlSelfRef.__PVT__gshare_pht_table[0x2bcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1401 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1402 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2bdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1403 
            = vlSelfRef.__PVT__gshare_pht_table[0x2bdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1403 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1404 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2beU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2beU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2beU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1405 
            = vlSelfRef.__PVT__gshare_pht_table[0x2beU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1405 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1406 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2bfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1407 
            = vlSelfRef.__PVT__gshare_pht_table[0x2bfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1407 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1408 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1409 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1409 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1410 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1411 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1411 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1412 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1413 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1413 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1414 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1415 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1415 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1416 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1417 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1417 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1418 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1419 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1419 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1420 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1421 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1421 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1422 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1423 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1423 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1424 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1425 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1425 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1426 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2c9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2c9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2c9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1427 
            = vlSelfRef.__PVT__gshare_pht_table[0x2c9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1427 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1428 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2caU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2caU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2caU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1429 
            = vlSelfRef.__PVT__gshare_pht_table[0x2caU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1429 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1430 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2cbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1431 
            = vlSelfRef.__PVT__gshare_pht_table[0x2cbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1431 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1432 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2ccU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ccU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ccU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1433 
            = vlSelfRef.__PVT__gshare_pht_table[0x2ccU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1433 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1434 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2cdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1435 
            = vlSelfRef.__PVT__gshare_pht_table[0x2cdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1435 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v1436 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2ceU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2ceU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2ceU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1437 
            = vlSelfRef.__PVT__gshare_pht_table[0x2ceU];
        vlSelfRef.__VdlySet__gshare_pht_table__v1437 = 1U;
    }
}
