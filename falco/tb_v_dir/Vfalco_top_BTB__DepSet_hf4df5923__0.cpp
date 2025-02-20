// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_BTB.h"
#include "Vfalco_top__Syms.h"

VL_INLINE_OPT void Vfalco_top_BTB___ico_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__0(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___ico_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_input_pc_tag = (0x1fffffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr0_pc, 0xbU, 0x15U));
    vlSelfRef.__PVT__instr0_read_addr = (0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr0_pc, 2U, 9U));
    vlSelfRef.__PVT__instr1_input_pc_tag = (0x1fffffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr1_pc, 0xbU, 0x15U));
    vlSelfRef.__PVT__instr1_read_addr = (0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr1_pc, 2U, 9U));
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__read_0_addr 
        = vlSelfRef.__PVT__instr0_read_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__read_0_addr 
        = vlSelfRef.__PVT__instr0_read_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__read_1_addr 
        = vlSelfRef.__PVT__instr1_read_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__read_1_addr 
        = vlSelfRef.__PVT__instr1_read_addr;
}

VL_INLINE_OPT void Vfalco_top_BTB___ico_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__1(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___ico_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__Vcellout__direct_mapped_cache_target__data_0_o 
        = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__data_0_o;
    vlSelfRef.__Vcellout__direct_mapped_cache_target__data_1_o 
        = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__data_1_o;
    vlSelfRef.__PVT__instr0_read_btb_tag = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__data_0_o;
    vlSelfRef.__PVT__instr1_read_btb_tag = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__data_1_o;
    vlSelfRef.__PVT__instr0_btb_trunc_target_addr = 
        VL_EXTEND_II(32,30, vlSelfRef.__Vcellout__direct_mapped_cache_target__data_0_o);
    vlSelfRef.__PVT__instr1_btb_trunc_target_addr = 
        VL_EXTEND_II(32,30, vlSelfRef.__Vcellout__direct_mapped_cache_target__data_1_o);
    vlSelfRef.__PVT__instr0_btb_hit = (vlSelfRef.__PVT__btb_entry_valids
                                       [vlSelfRef.__PVT__instr0_read_addr] 
                                       & (vlSelfRef.__PVT__instr0_input_pc_tag 
                                          == vlSelfRef.__PVT__instr0_read_btb_tag));
    vlSelfRef.__PVT__instr1_btb_hit = (vlSelfRef.__PVT__btb_entry_valids
                                       [vlSelfRef.__PVT__instr1_read_addr] 
                                       & (vlSelfRef.__PVT__instr1_input_pc_tag 
                                          == vlSelfRef.__PVT__instr1_read_btb_tag));
    vlSelfRef.__PVT__instr0_btb_target_addr = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__instr0_btb_trunc_target_addr, 2U);
    vlSelfRef.__PVT__instr1_btb_target_addr = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__instr1_btb_trunc_target_addr, 2U);
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__1(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__new_btb_cache_target_addr = (0x3fffffffU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__branch_target_addr, 2U, 0x1eU));
    vlSelfRef.__PVT__update_btb_entry = ((IData)(vlSelfRef.__PVT__branch_valid) 
                                         & (IData)(vlSelfRef.__PVT__branch_taken));
    vlSelfRef.__PVT__new_btb_cache_tag = (0x1fffffU 
                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__branch_addr, 0xbU, 0x15U));
    vlSelfRef.__PVT__update_entry_addr = (0x1ffU & 
                                          VL_SEL_IIII(32, vlSelfRef.__PVT__branch_addr, 2U, 9U));
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__data_i 
        = vlSelfRef.__PVT__new_btb_cache_target_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__we 
        = vlSelfRef.__PVT__update_btb_entry;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__we 
        = vlSelfRef.__PVT__update_btb_entry;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__data_i 
        = vlSelfRef.__PVT__new_btb_cache_tag;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__write_addr 
        = vlSelfRef.__PVT__update_entry_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__write_addr 
        = vlSelfRef.__PVT__update_entry_addr;
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__2(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_input_pc_tag = (0x1fffffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr0_pc, 0xbU, 0x15U));
    vlSelfRef.__PVT__instr0_read_addr = (0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr0_pc, 2U, 9U));
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__read_0_addr 
        = vlSelfRef.__PVT__instr0_read_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__read_0_addr 
        = vlSelfRef.__PVT__instr0_read_addr;
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__0(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__direct_mapped_cache_target__data_0_o 
        = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__data_0_o;
    vlSelfRef.__PVT__instr0_btb_trunc_target_addr = 
        VL_EXTEND_II(32,30, vlSelfRef.__Vcellout__direct_mapped_cache_target__data_0_o);
    vlSelfRef.__PVT__instr0_btb_target_addr = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__instr0_btb_trunc_target_addr, 2U);
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__1(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_read_btb_tag = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__data_0_o;
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__3(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_input_pc_tag = (0x1fffffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr1_pc, 0xbU, 0x15U));
    vlSelfRef.__PVT__instr1_read_addr = (0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__IF_instr1_pc, 2U, 9U));
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__read_1_addr 
        = vlSelfRef.__PVT__instr1_read_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__read_1_addr 
        = vlSelfRef.__PVT__instr1_read_addr;
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__3(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__direct_mapped_cache_target__data_1_o 
        = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target.__PVT__data_1_o;
    vlSelfRef.__PVT__instr1_btb_trunc_target_addr = 
        VL_EXTEND_II(32,30, vlSelfRef.__Vcellout__direct_mapped_cache_target__data_1_o);
    vlSelfRef.__PVT__instr1_btb_target_addr = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__instr1_btb_trunc_target_addr, 2U);
}

VL_INLINE_OPT void Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__4(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___nba_comb__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_read_btb_tag = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag.__PVT__data_1_o;
}
