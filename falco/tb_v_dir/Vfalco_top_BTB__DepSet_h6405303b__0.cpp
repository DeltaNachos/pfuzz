// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_BTB.h"

VL_INLINE_OPT void Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__0(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__VdlySet__btb_entry_valids__v0 = 0U;
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__PVT__i = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelfRef.__PVT__i)) {
            vlSelfRef.__PVT__btb_entry_valids[(0x1ffU 
                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__i, 0U, 9U))] = 0U;
            __Vtemp_1 = ((IData)(1U) + vlSelfRef.__PVT__i);
            vlSelfRef.__PVT__i = __Vtemp_1;
        }
    } else if (vlSelfRef.__PVT__update_btb_entry) {
        vlSelfRef.__VdlyDim0__btb_entry_valids__v0 
            = vlSelfRef.__PVT__update_entry_addr;
        vlSelfRef.__VdlySet__btb_entry_valids__v0 = 1U;
    } else {
        vlSelfRef.__PVT__i = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelfRef.__PVT__i)) {
            __Vtemp_2 = vlSelfRef.__PVT__btb_entry_valids
                [(0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__i, 0U, 9U))];
            vlSelfRef.__PVT__btb_entry_valids[(0x1ffU 
                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__i, 0U, 9U))] 
                = __Vtemp_2;
            __Vtemp_3 = ((IData)(1U) + vlSelfRef.__PVT__i);
            vlSelfRef.__PVT__i = __Vtemp_3;
        }
    }
    if (vlSelfRef.__VdlySet__btb_entry_valids__v0) {
        vlSelfRef.__PVT__btb_entry_valids[vlSelfRef.__VdlyDim0__btb_entry_valids__v0] = 1U;
    }
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__2(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_btb_hit = (vlSelfRef.__PVT__btb_entry_valids
                                       [vlSelfRef.__PVT__instr0_read_addr] 
                                       & (vlSelfRef.__PVT__instr0_input_pc_tag 
                                          == vlSelfRef.__PVT__instr0_read_btb_tag));
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__5(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_btb_hit = (vlSelfRef.__PVT__btb_entry_valids
                                       [vlSelfRef.__PVT__instr1_read_addr] 
                                       & (vlSelfRef.__PVT__instr1_input_pc_tag 
                                          == vlSelfRef.__PVT__instr1_read_btb_tag));
}
