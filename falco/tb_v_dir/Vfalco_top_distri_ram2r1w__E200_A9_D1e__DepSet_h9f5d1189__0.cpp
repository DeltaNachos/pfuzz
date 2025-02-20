// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_distri_ram2r1w__E200_A9_D1e.h"

VL_INLINE_OPT void Vfalco_top_distri_ram2r1w__E200_A9_D1e___ico_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__0(Vfalco_top_distri_ram2r1w__E200_A9_D1e* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_distri_ram2r1w__E200_A9_D1e___ico_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_0_o = vlSelfRef.__PVT__history_table
        [vlSelfRef.__PVT__read_0_addr];
    vlSelfRef.__PVT__data_1_o = vlSelfRef.__PVT__history_table
        [vlSelfRef.__PVT__read_1_addr];
}

VL_INLINE_OPT void Vfalco_top_distri_ram2r1w__E200_A9_D1e___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__0(Vfalco_top_distri_ram2r1w__E200_A9_D1e* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_distri_ram2r1w__E200_A9_D1e___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__history_table__v0 = 0U;
    if (vlSelfRef.__PVT__we) {
        vlSelfRef.__VdlyVal__history_table__v0 = vlSelfRef.__PVT__data_i;
        vlSelfRef.__VdlyDim0__history_table__v0 = vlSelfRef.__PVT__write_addr;
        vlSelfRef.__VdlySet__history_table__v0 = 1U;
    }
    if (vlSelfRef.__VdlySet__history_table__v0) {
        vlSelfRef.__PVT__history_table[vlSelfRef.__VdlyDim0__history_table__v0] 
            = vlSelfRef.__VdlyVal__history_table__v0;
    }
}

VL_INLINE_OPT void Vfalco_top_distri_ram2r1w__E200_A9_D1e___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__0(Vfalco_top_distri_ram2r1w__E200_A9_D1e* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_distri_ram2r1w__E200_A9_D1e___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_0_o = vlSelfRef.__PVT__history_table
        [vlSelfRef.__PVT__read_0_addr];
}

VL_INLINE_OPT void Vfalco_top_distri_ram2r1w__E200_A9_D1e___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__1(Vfalco_top_distri_ram2r1w__E200_A9_D1e* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_distri_ram2r1w__E200_A9_D1e___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_1_o = vlSelfRef.__PVT__history_table
        [vlSelfRef.__PVT__read_1_addr];
}
