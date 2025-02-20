// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_IF_stage.h"

VL_INLINE_OPT void Vfalco_top_IF_stage___nba_comb__TOP__falco_top__core__instruction_fetch__10(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___nba_comb__TOP__falco_top__core__instruction_fetch__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__predict_taken = (((IData)(vlSelfRef.__PVT__instr0_btb_hit) 
                                       & (IData)(vlSelfRef.__PVT__instr0_predict_taken)) 
                                      | (((IData)(vlSelfRef.__PVT__instr1_btb_hit) 
                                          & (IData)(vlSelfRef.__PVT__instr1_predict_taken)) 
                                         & (IData)(vlSelfRef.__PVT__pc_instr1_valid)));
}
