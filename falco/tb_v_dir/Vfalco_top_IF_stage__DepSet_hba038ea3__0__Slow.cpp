// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_IF_stage.h"
#include "Vfalco_top__Syms.h"

VL_ATTR_COLD void Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__0(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__PC__exe_branch_PrMiss = (1U 
                                                   & (VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x2aU) 
                                                      & VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x4cU)));
    vlSelfRef.__Vcellinp__PC__exe_branch_target_addr 
        = VL_SEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x2bU, 0x20U);
    vlSelfRef.__Vcellinp__branch_predictor__exe_cond_miss_prediction 
        = (1U & (VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x2aU) 
                 & VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x4cU)));
    vlSelfRef.__Vcellinp__branch_predictor__exe_cond_valid 
        = (1U & VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x4cU));
    vlSelfRef.__Vcellinp__branch_predictor__exe_cond_branch_taken 
        = (1U & VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x4bU));
    vlSelfRef.__Vcellinp__Branch_target_buffer__branch_target_addr 
        = VL_SEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x2bU, 0x20U);
    vlSelfRef.__Vcellinp__Branch_target_buffer__branch_taken 
        = (1U & VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x4bU));
    vlSelfRef.__Vcellinp__Branch_target_buffer__branch_valid 
        = (1U & VL_BITSEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0x4cU));
    vlSelfRef.__Vcellinp__branch_predictor__exe_cond_branch_addr 
        = VL_SEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0xaU, 0x20U);
    vlSelfRef.__Vcellinp__branch_predictor__exe_cond_bhsr 
        = (0x3ffU & VL_SEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0U, 0xaU));
    vlSelfRef.__Vcellinp__Branch_target_buffer__branch_addr 
        = VL_SEL_IWII(77, vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__branch_result, 0xaU, 0x20U);
    vlSelfRef.__PVT__instr0_pc = vlSymsp->TOP__falco_top__core__instruction_fetch__PC.pc;
    vlSelfRef.__Vcellinp__PC__store_set_pc = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_pc;
    vlSelfRef.__Vcellinp__branch_predictor__lsu_bhsr 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_bhsr;
    vlSelfRef.__Vcellinp__PC__branch_miss_first = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__branch_miss_first;
    vlSelfRef.__Vcellinp__branch_predictor__branch_miss_first 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__branch_miss_first;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__exe_branch_PrMiss 
        = vlSelfRef.__Vcellinp__PC__exe_branch_PrMiss;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__exe_branch_target_addr 
        = vlSelfRef.__Vcellinp__PC__exe_branch_target_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__exe_cond_miss_prediction 
        = vlSelfRef.__Vcellinp__branch_predictor__exe_cond_miss_prediction;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__exe_cond_valid 
        = vlSelfRef.__Vcellinp__branch_predictor__exe_cond_valid;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__exe_cond_branch_taken 
        = vlSelfRef.__Vcellinp__branch_predictor__exe_cond_branch_taken;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__branch_target_addr 
        = vlSelfRef.__Vcellinp__Branch_target_buffer__branch_target_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__branch_taken 
        = vlSelfRef.__Vcellinp__Branch_target_buffer__branch_taken;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__branch_valid 
        = vlSelfRef.__Vcellinp__Branch_target_buffer__branch_valid;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__exe_cond_branch_addr 
        = vlSelfRef.__Vcellinp__branch_predictor__exe_cond_branch_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__exe_cond_bhsr 
        = vlSelfRef.__Vcellinp__branch_predictor__exe_cond_bhsr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__branch_addr 
        = vlSelfRef.__Vcellinp__Branch_target_buffer__branch_addr;
    VL_ASSIGNSEL_WI(65,32,0x21U, vlSelfRef.__PVT__instruction_req, vlSelfRef.__PVT__instr0_pc);
    vlSelfRef.__PVT__instr1_predict_pc = vlSelfRef.__PVT__instr0_pc;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__IF_instr0_pc 
        = vlSelfRef.__PVT__instr0_pc;
    vlSelfRef.__PVT__instr1_pc = ((IData)(4U) + vlSelfRef.__PVT__instr0_pc);
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__IF_instr0_pc 
        = vlSelfRef.__PVT__instr0_pc;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__store_set_pc 
        = vlSelfRef.__Vcellinp__PC__store_set_pc;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__lsu_bhsr 
        = vlSelfRef.__Vcellinp__branch_predictor__lsu_bhsr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__branch_miss_first 
        = vlSelfRef.__Vcellinp__PC__branch_miss_first;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__branch_miss_first 
        = vlSelfRef.__Vcellinp__branch_predictor__branch_miss_first;
    VL_ASSIGNSEL_WI(65,32,1U, vlSelfRef.__PVT__instruction_req, vlSelfRef.__PVT__instr1_pc);
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__IF_instr1_pc 
        = vlSelfRef.__PVT__instr1_pc;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__IF_instr1_pc 
        = vlSelfRef.__PVT__instr1_pc;
}

VL_ATTR_COLD void Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__1(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__current_instr0_BHSR = vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__current_instr0_BHSR;
    vlSelfRef.__PVT__instr0_predict_taken = vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__instr0_branch_predict_taken;
    vlSelfRef.__PVT__pc_instr1_valid = vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__instr1_valid;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__init_pc 
        = vlSelfRef.__PVT__init_pc;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__Vcellinp__branch_predictor__cache_hit 
        = (1U & VL_BITSEL_IWII(67, vlSelfRef.__PVT__instruction_resp, 0x22U));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss 
        = (1U & (~ VL_BITSEL_IWII(67, vlSelfRef.__PVT__instruction_resp, 0U)));
    if (vlSelfRef.__PVT__rst) {
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr0 = 0x13U;
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr1 = 0x13U;
    } else if (vlSelfRef.__PVT__IF_flush_delay) {
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr0 = 0x13U;
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr1 = 0x13U;
    } else if (vlSelfRef.__PVT__IF_stall_delay) {
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr0 
            = vlSelfRef.__PVT__instr0_delay;
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr1 
            = vlSelfRef.__PVT__instr1_delay;
    } else {
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr0 
            = VL_SEL_IWII(67, vlSelfRef.__PVT__instruction_resp, 0x23U, 0x20U);
        vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr1 
            = VL_SEL_IWII(67, vlSelfRef.__PVT__instruction_resp, 2U, 0x20U);
    }
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__cache_hit 
        = vlSelfRef.__Vcellinp__branch_predictor__cache_hit;
}

VL_ATTR_COLD void Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__2(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_btb_hit = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__instr0_btb_hit;
    vlSelfRef.__PVT__instr1_btb_hit = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__instr1_btb_hit;
    vlSelfRef.__PVT__instr0_btb_target_addr = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__instr0_btb_target_addr;
    vlSelfRef.__PVT__instr1_btb_target_addr = vlSymsp->TOP__falco_top__core__instruction_fetch__Branch_target_buffer.__PVT__instr1_btb_target_addr;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__IF_instr0_btb_hit 
        = vlSelfRef.__PVT__instr0_btb_hit;
    vlSelfRef.__Vcellinp__branch_predictor__IF_instr1_btb_hit 
        = ((IData)(vlSelfRef.__PVT__instr1_btb_hit) 
           & (IData)(vlSelfRef.__PVT__pc_instr1_valid));
    vlSelfRef.__PVT__next_predict_pc = (((IData)(vlSelfRef.__PVT__instr0_btb_hit) 
                                         & (IData)(vlSelfRef.__PVT__instr0_predict_taken))
                                         ? vlSelfRef.__PVT__instr0_btb_target_addr
                                         : vlSelfRef.__PVT__instr1_btb_target_addr);
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__IF_instr1_btb_hit 
        = vlSelfRef.__Vcellinp__branch_predictor__IF_instr1_btb_hit;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__predict_pc 
        = vlSelfRef.__PVT__next_predict_pc;
}

VL_ATTR_COLD void Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__3(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___stl_sequent__TOP__falco_top__core__instruction_fetch__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__current_instr1_BHSR = vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__current_instr1_BHSR;
    vlSelfRef.__PVT__instr1_predict_taken = vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__instr1_branch_predict_taken;
    vlSelfRef.__PVT__predict_taken = (((IData)(vlSelfRef.__PVT__instr0_btb_hit) 
                                       & (IData)(vlSelfRef.__PVT__instr0_predict_taken)) 
                                      | (((IData)(vlSelfRef.__PVT__instr1_btb_hit) 
                                          & (IData)(vlSelfRef.__PVT__instr1_predict_taken)) 
                                         & (IData)(vlSelfRef.__PVT__pc_instr1_valid)));
    vlSelfRef.__Vcellinp__PC__predict_taken = ((IData)(vlSelfRef.__PVT__predict_taken) 
                                               & (~ (IData)(vlSelfRef.__PVT__PrMiss_dly)));
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__predict_taken 
        = vlSelfRef.__Vcellinp__PC__predict_taken;
}

VL_ATTR_COLD void Vfalco_top_IF_stage___stl_comb__TOP__falco_top__core__instruction_fetch__0(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___stl_comb__TOP__falco_top__core__instruction_fetch__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__PC__store_set_violation = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_violation;
    vlSelfRef.__Vcellinp__branch_predictor__store_set_violation 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_violation;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__store_set_violation 
        = vlSelfRef.__Vcellinp__PC__store_set_violation;
    vlSymsp->TOP__falco_top__core__instruction_fetch__branch_predictor.__PVT__store_set_violation 
        = vlSelfRef.__Vcellinp__branch_predictor__store_set_violation;
}

VL_ATTR_COLD void Vfalco_top_IF_stage___stl_comb__TOP__falco_top__core__instruction_fetch__1(Vfalco_top_IF_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_IF_stage___stl_comb__TOP__falco_top__core__instruction_fetch__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__PC__stall = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__pc_stall;
    vlSymsp->TOP__falco_top__core__instruction_fetch__PC.__PVT__stall 
        = vlSelfRef.__Vcellinp__PC__stall;
}
