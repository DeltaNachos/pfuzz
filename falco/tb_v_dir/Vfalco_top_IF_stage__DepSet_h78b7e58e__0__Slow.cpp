// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_IF_stage.h"

VL_ATTR_COLD void Vfalco_top_IF_stage___ctor_var_reset(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__instruction_req);
    VL_RAND_RESET_W(67, vlSelf->__PVT__instruction_resp);
    vlSelf->__PVT__instr0_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_btb_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_btb_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_btb_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_btb_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__predict_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_predict_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_predict_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__current_instr0_BHSR = VL_RAND_RESET_I(10);
    vlSelf->__PVT__current_instr1_BHSR = VL_RAND_RESET_I(10);
    vlSelf->__PVT__PrMiss_dly = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__PC__branch_miss_first = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__PC__store_set_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__PC__store_set_violation = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__PC__predict_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__PC__exe_branch_PrMiss = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__PC__exe_branch_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__PC__stall = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Branch_target_buffer__branch_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__Branch_target_buffer__branch_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__Branch_target_buffer__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Branch_target_buffer__branch_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__branch_predictor__lsu_bhsr = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__branch_predictor__branch_miss_first = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__branch_predictor__store_set_violation = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__branch_predictor__exe_cond_miss_prediction = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__branch_predictor__exe_cond_branch_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__branch_predictor__exe_cond_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__branch_predictor__exe_cond_bhsr = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__branch_predictor__exe_cond_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__branch_predictor__cache_hit = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__branch_predictor__IF_instr1_btb_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IF_stall_delay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IF_flush_delay = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__PrMiss_dly = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vdly__instruction_req);
    vlSelf->__Vdly__instr0_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__IF_stall_delay = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__IF_flush_delay = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__instr0_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__instr1_delay = VL_RAND_RESET_I(32);
}
