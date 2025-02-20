// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_register_read.h"

VL_ATTR_COLD void Vfalco_top_register_read___stl_sequent__TOP__falco_top__core__register_read_stage__0(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___stl_sequent__TOP__falco_top__core__register_read_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__muldiv_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vcellinp__prf__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vcellinp__prf__alu_csr_bc_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vcellinp__prf__MEM_rs2_addr = (0x3fU 
                                               & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x30U, 6U));
    vlSelfRef.__Vcellinp__prf__MEM_rs1_addr = (0x3fU 
                                               & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x36U, 6U));
    vlSelfRef.__Vcellinp__prf__IQ1_rs2_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x10U, 6U));
    vlSelfRef.__Vcellinp__prf__IQ1_rs1_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x16U, 6U));
    vlSelfRef.__Vcellinp__prf__IQ0_rs2_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x10U, 6U));
    vlSelfRef.__Vcellinp__prf__IQ0_rs1_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x16U, 6U));
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__muldiv_wb 
        = vlSelfRef.__Vcellinp__prf__muldiv_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__alu1_wb 
        = vlSelfRef.__Vcellinp__prf__alu1_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__alu_csr_bc_wb 
        = vlSelfRef.__Vcellinp__prf__alu_csr_bc_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs2_addr 
        = vlSelfRef.__Vcellinp__prf__MEM_rs2_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs1_addr 
        = vlSelfRef.__Vcellinp__prf__MEM_rs1_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs2_addr 
        = vlSelfRef.__Vcellinp__prf__IQ1_rs2_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs1_addr 
        = vlSelfRef.__Vcellinp__prf__IQ1_rs1_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs2_addr 
        = vlSelfRef.__Vcellinp__prf__IQ0_rs2_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs1_addr 
        = vlSelfRef.__Vcellinp__prf__IQ0_rs1_addr;
}

VL_ATTR_COLD void Vfalco_top_register_read___stl_sequent__TOP__falco_top__core__register_read_stage__1(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___stl_sequent__TOP__falco_top__core__register_read_stage__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__PVT__MEM_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs2_data;
    vlSelfRef.__PVT__MEM_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs1_data;
    vlSelfRef.__PVT__IQ1_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs2_data;
    vlSelfRef.__PVT__IQ1_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs1_data;
    vlSelfRef.__PVT__IQ0_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs2_data;
    vlSelfRef.__PVT__IQ0_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs1_data;
}

VL_ATTR_COLD void Vfalco_top_register_read___stl_sequent__TOP__falco_top__core__register_read_stage__2(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___stl_sequent__TOP__falco_top__core__register_read_stage__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__mem_wb 
        = vlSelfRef.__Vcellinp__prf__mem_wb;
}
