// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_ID_stage.h"
#include "Vfalco_top__Syms.h"

VL_ATTR_COLD void Vfalco_top_ID_stage___stl_sequent__TOP__falco_top__core__instruction_decode__0(Vfalco_top_ID_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_ID_stage___stl_sequent__TOP__falco_top__core__instruction_decode__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__SSIT__instr1_pc = (0x7ffU 
                                             & VL_SEL_IIII(32, vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__instr1_pc, 2U, 0xbU));
    vlSelfRef.__Vcellinp__SSIT__instr0_pc = (0x7ffU 
                                             & VL_SEL_IIII(32, vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__instr0_pc, 2U, 0xbU));
    vlSelfRef.__Vcellinp__instr0_decoder__pc = vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__instr0_pc;
    vlSelfRef.__Vcellinp__instr1_decoder__pc = vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__instr1_pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__instr0_decoder.__PVT__predict_pc 
        = vlSelfRef.__PVT__instr0_predict_pc;
    vlSelfRef.__Vcellinp__SSIT__device_violation_pc 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.violation_store_pc;
    vlSelfRef.__Vcellinp__SSIT__recovery_insrt1_pc 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.violation_store_pc;
    vlSelfRef.__Vcellinp__SSIT__recovery_insrt1_id 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_store_id;
    vlSelfRef.__PVT__instr0_store_set_id = vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.instr0_store_set_id;
    vlSelfRef.__PVT__instr1_store_set_id = vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.instr1_store_set_id;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.instr1_pc 
        = vlSelfRef.__Vcellinp__SSIT__instr1_pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.instr0_pc 
        = vlSelfRef.__Vcellinp__SSIT__instr0_pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__instr0_decoder.__PVT__pc 
        = vlSelfRef.__Vcellinp__instr0_decoder__pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__instr1_decoder.__PVT__pc 
        = vlSelfRef.__Vcellinp__instr1_decoder__pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.device_violation_pc 
        = vlSelfRef.__Vcellinp__SSIT__device_violation_pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.recovery_insrt1_pc 
        = vlSelfRef.__Vcellinp__SSIT__recovery_insrt1_pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.recovery_insrt1_id 
        = vlSelfRef.__Vcellinp__SSIT__recovery_insrt1_id;
    vlSymsp->TOP__falco_top__core__id_stage_io_inst.instr0_store_set_id 
        = vlSelfRef.__PVT__instr0_store_set_id;
    vlSymsp->TOP__falco_top__core__id_stage_io_inst.instr1_store_set_id 
        = vlSelfRef.__PVT__instr1_store_set_id;
}

VL_ATTR_COLD void Vfalco_top_ID_stage___stl_sequent__TOP__falco_top__core__instruction_decode__1(Vfalco_top_ID_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_ID_stage___stl_sequent__TOP__falco_top__core__instruction_decode__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__instruction_decode__instr1_decoder.__PVT__predict_pc 
        = vlSelfRef.__PVT__instr1_predict_pc;
    vlSelfRef.__Vcellinp__instr0_decoder__instruction 
        = vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr0;
    vlSelfRef.__Vcellinp__instr1_decoder__instruction 
        = vlSymsp->TOP__falco_top__core__if_stage_io_inst.__PVT__raw_instr1;
    vlSelfRef.__Vcellinp__SSIT__device_violation = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation;
    vlSymsp->TOP__falco_top__core__instruction_decode__instr0_decoder.__PVT__instruction 
        = vlSelfRef.__Vcellinp__instr0_decoder__instruction;
    vlSymsp->TOP__falco_top__core__instruction_decode__instr1_decoder.__PVT__instruction 
        = vlSelfRef.__Vcellinp__instr1_decoder__instruction;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.device_violation 
        = vlSelfRef.__Vcellinp__SSIT__device_violation;
}

VL_ATTR_COLD void Vfalco_top_ID_stage___stl_sequent__TOP__falco_top__core__instruction_decode__2(Vfalco_top_ID_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_ID_stage___stl_sequent__TOP__falco_top__core__instruction_decode__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_illegal_instr = vlSymsp->TOP__falco_top__core__instruction_decode__instr1_decoder.__PVT__illegal_instr_o;
    VL_ASSIGN_W(192,vlSelfRef.__PVT__decoded_instr1, vlSymsp->TOP__falco_top__core__instruction_decode__instr1_decoder.__PVT__decoded_instr);
    vlSelfRef.__PVT__instr0_illegal_instr = vlSymsp->TOP__falco_top__core__instruction_decode__instr0_decoder.__PVT__illegal_instr_o;
    VL_ASSIGN_W(192,vlSelfRef.__PVT__decoded_instr0, vlSymsp->TOP__falco_top__core__instruction_decode__instr0_decoder.__PVT__decoded_instr);
}

VL_ATTR_COLD void Vfalco_top_ID_stage___stl_comb__TOP__falco_top__core__instruction_decode__0(Vfalco_top_ID_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_ID_stage___stl_comb__TOP__falco_top__core__instruction_decode__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__SSIT__recovery_insrt0_pc 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.violation_load_pc;
    vlSelfRef.__Vcellinp__SSIT__recovery_insrt0_id 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_load_id;
    vlSelfRef.__Vcellinp__SSIT__violation = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_violation;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.recovery_insrt0_pc 
        = vlSelfRef.__Vcellinp__SSIT__recovery_insrt0_pc;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.recovery_insrt0_id 
        = vlSelfRef.__Vcellinp__SSIT__recovery_insrt0_id;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT.violation 
        = vlSelfRef.__Vcellinp__SSIT__violation;
}
