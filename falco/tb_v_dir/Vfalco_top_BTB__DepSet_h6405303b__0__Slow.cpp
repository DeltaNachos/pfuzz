// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_BTB.h"

VL_ATTR_COLD void Vfalco_top_BTB___ctor_var_reset(Vfalco_top_BTB* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_BTB___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IF_instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IF_instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr0_btb_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_btb_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_btb_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_btb_target_addr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__btb_entry_valids[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__update_entry_addr = VL_RAND_RESET_I(9);
    vlSelf->__PVT__update_btb_entry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_btb_cache_target_addr = VL_RAND_RESET_I(30);
    vlSelf->__PVT__new_btb_cache_tag = VL_RAND_RESET_I(21);
    vlSelf->__PVT__instr0_read_addr = VL_RAND_RESET_I(9);
    vlSelf->__PVT__instr1_read_addr = VL_RAND_RESET_I(9);
    vlSelf->__PVT__instr0_read_btb_tag = VL_RAND_RESET_I(21);
    vlSelf->__PVT__instr1_read_btb_tag = VL_RAND_RESET_I(21);
    vlSelf->__PVT__instr0_input_pc_tag = VL_RAND_RESET_I(21);
    vlSelf->__PVT__instr1_input_pc_tag = VL_RAND_RESET_I(21);
    vlSelf->__PVT__instr0_btb_trunc_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_btb_trunc_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__direct_mapped_cache_target__data_1_o = VL_RAND_RESET_I(30);
    vlSelf->__Vcellout__direct_mapped_cache_target__data_0_o = VL_RAND_RESET_I(30);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__btb_entry_valids__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__btb_entry_valids__v0 = 0;
}
