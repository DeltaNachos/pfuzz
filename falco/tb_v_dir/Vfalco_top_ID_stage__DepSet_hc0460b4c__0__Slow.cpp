// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_ID_stage.h"

VL_ATTR_COLD void Vfalco_top_ID_stage___ctor_var_reset(Vfalco_top_ID_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_ID_stage___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr0_illegal_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_illegal_instr = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__PVT__decoded_instr0);
    VL_RAND_RESET_W(192, vlSelf->__PVT__decoded_instr1);
    vlSelf->__PVT__instr0_store_set_id = VL_RAND_RESET_I(8);
    vlSelf->__PVT__instr1_store_set_id = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__instr0_decoder__instruction = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__instr0_decoder__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__instr1_decoder__instruction = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__instr1_decoder__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__SSIT__device_violation_pc = VL_RAND_RESET_I(11);
    vlSelf->__Vcellinp__SSIT__device_violation = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SSIT__recovery_insrt1_id = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__SSIT__recovery_insrt0_id = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__SSIT__recovery_insrt1_pc = VL_RAND_RESET_I(11);
    vlSelf->__Vcellinp__SSIT__recovery_insrt0_pc = VL_RAND_RESET_I(11);
    vlSelf->__Vcellinp__SSIT__violation = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SSIT__instr1_pc = VL_RAND_RESET_I(11);
    vlSelf->__Vcellinp__SSIT__instr0_pc = VL_RAND_RESET_I(11);
}
