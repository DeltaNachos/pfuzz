// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_core_top.h"

VL_ATTR_COLD void Vfalco_top_core_top___stl_sequent__TOP__falco_top__core__0(Vfalco_top_core_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_core_top___stl_sequent__TOP__falco_top__core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__core_commit_count = vlSymsp->TOP__falco_top__core__ROB.__PVT__core_commit_count;
    vlSelfRef.__PVT__IF_instr0_predict_pc = vlSymsp->TOP__falco_top__core__instruction_fetch.__PVT__instr0_predict_pc;
    vlSelfRef.__PVT__exe_stage_muldiv_busy = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst.muldiv_busy;
    vlSymsp->TOP__falco_top__core__instruction_decode.__PVT__instr0_predict_pc 
        = vlSelfRef.__PVT__IF_instr0_predict_pc;
    vlSymsp->TOP__falco_top__core__INT_IQ.__PVT__muldiv_busy 
        = vlSelfRef.__PVT__exe_stage_muldiv_busy;
}

VL_ATTR_COLD void Vfalco_top_core_top___stl_sequent__TOP__falco_top__core__1(Vfalco_top_core_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_core_top___stl_sequent__TOP__falco_top__core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__PVT__store_req, vlSymsp->TOP__falco_top__core__SDB.__PVT__store_req);
    vlSymsp->TOP__falco_top__core__instruction_fetch.__PVT__init_pc 
        = vlSelfRef.__PVT__init_pc;
    vlSymsp->TOP__falco_top__core__pipeline_ctrl.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__address_generate_unit.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__LSU.__PVT__rst = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__SDB.__PVT__rst = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__LDB.__PVT__rst = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__ROB.__PVT__rst = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__committed_map_table_inst.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__csr.__PVT__rst_i 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__instruction_decode.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__register_read_stage.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__INT_IQ.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__MEM_IQ.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__MemAccess.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__instruction_fetch.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__pipeline_ctrl.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__address_generate_unit.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__LSU.__PVT__clk = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__SDB.__PVT__clk = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__LDB.__PVT__clk = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__MemAccess.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__ROB.__PVT__clk = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__committed_map_table_inst.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__csr.__PVT__clk_i 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__register_read_stage.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__INT_IQ.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__MEM_IQ.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__instruction_decode.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__instruction_fetch.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__SDB.__PVT__store_resp 
        = vlSelfRef.__PVT__store_resp;
    vlSymsp->TOP__falco_top__core__MemAccess.__PVT__load_data_resp 
        = vlSelfRef.__PVT__load_data_resp;
    VL_ASSIGN_W(67,vlSymsp->TOP__falco_top__core__instruction_fetch.__PVT__instruction_resp, vlSelfRef.__PVT__instruction_resp);
    vlSymsp->TOP__falco_top__core__LSU.__PVT__load_hit_resp 
        = vlSelfRef.__PVT__load_hit_resp;
    vlSelfRef.__PVT__IF_instr1_predict_pc = vlSymsp->TOP__falco_top__core__instruction_fetch.__PVT__instr1_predict_pc;
    VL_ASSIGN_W(65,vlSelfRef.__PVT__instruction_req, vlSymsp->TOP__falco_top__core__instruction_fetch.__PVT__instruction_req);
    vlSymsp->TOP__falco_top__core__instruction_decode.__PVT__instr1_predict_pc 
        = vlSelfRef.__PVT__IF_instr1_predict_pc;
}

VL_ATTR_COLD void Vfalco_top_core_top___stl_sequent__TOP__falco_top__core__2(Vfalco_top_core_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_core_top___stl_sequent__TOP__falco_top__core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_ck_hit_req = vlSymsp->TOP__falco_top__core__LSU.__PVT__load_ck_hit_req;
}

VL_ATTR_COLD void Vfalco_top_core_top___stl_comb__TOP__falco_top__core__0(Vfalco_top_core_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_core_top___stl_comb__TOP__falco_top__core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_dmem_stall = vlSymsp->TOP__falco_top__core__pipeline_ctrl.__PVT__DMEM_access_stall;
}
