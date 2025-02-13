// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_Core.h"
#include "Vsodor_top__Syms.h"

VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__0(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__0\n"); );
    // Body
    vlSelf->__PVT__d_io_ddpath_wdata = vlSelf->__PVT__io_ddpath_wdata;
    vlSelf->__PVT__d_io_ddpath_addr = vlSelf->__PVT__io_ddpath_addr;
    vlSelf->__PVT__d_io_imem_req_bits_addr = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_imem_req_bits_addr;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ddpath_wdata 
        = vlSelf->__PVT__d_io_ddpath_wdata;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ddpath_addr 
        = vlSelf->__PVT__d_io_ddpath_addr;
    vlSelf->__PVT__io_imem_req_bits_addr = vlSelf->__PVT__d_io_imem_req_bits_addr;
}

VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__1(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__1\n"); );
    // Body
    vlSelf->__PVT__d_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__d_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__d_io_dmem_resp_bits_data = vlSelf->__PVT__io_dmem_resp_bits_data;
    vlSelf->__PVT__c_io_dmem_resp_valid = vlSelf->__PVT__io_dmem_resp_valid;
    vlSelf->__PVT__d_io_imem_resp_bits_data = vlSelf->__PVT__io_imem_resp_bits_data;
    vlSelf->__PVT__d_io_ddpath_rdata = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ddpath_rdata;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__reset 
        = vlSelf->__PVT__d_reset;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__clock 
        = vlSelf->__PVT__d_clock;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dmem_resp_bits_data 
        = vlSelf->__PVT__d_io_dmem_resp_bits_data;
    vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_resp_valid 
        = vlSelf->__PVT__c_io_dmem_resp_valid;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_imem_resp_bits_data 
        = vlSelf->__PVT__d_io_imem_resp_bits_data;
    vlSelf->__PVT__io_ddpath_rdata = vlSelf->__PVT__d_io_ddpath_rdata;
}

VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__2(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__2\n"); );
    // Body
    vlSelf->__PVT__d_io_dat_inst = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_inst;
    vlSelf->__PVT__d_io_dmem_req_bits_data = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dmem_req_bits_data;
    vlSelf->__PVT__d_io_dat_br_lt = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_br_lt;
    vlSelf->__PVT__d_io_dat_br_eq = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_br_eq;
    vlSelf->__PVT__d_io_dat_br_ltu = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_br_ltu;
    vlSelf->__PVT__c_io_dat_inst = vlSelf->__PVT__d_io_dat_inst;
    vlSelf->__PVT__io_dmem_req_bits_data = vlSelf->__PVT__d_io_dmem_req_bits_data;
    vlSelf->__PVT__c_io_dat_br_lt = vlSelf->__PVT__d_io_dat_br_lt;
    vlSelf->__PVT__c_io_dat_br_eq = vlSelf->__PVT__d_io_dat_br_eq;
    vlSelf->__PVT__c_io_dat_br_ltu = vlSelf->__PVT__d_io_dat_br_ltu;
    vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_inst 
        = vlSelf->__PVT__c_io_dat_inst;
    vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_br_lt 
        = vlSelf->__PVT__c_io_dat_br_lt;
    vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_br_eq 
        = vlSelf->__PVT__c_io_dat_br_eq;
    vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_br_ltu 
        = vlSelf->__PVT__c_io_dat_br_ltu;
}

VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__3(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__3\n"); );
    // Body
    vlSelf->__PVT__c_io_ctl_exception = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_exception;
    vlSelf->__PVT__c_io_dmem_req_bits_fcn = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_req_bits_fcn;
    vlSelf->__PVT__c_io_dmem_req_bits_typ = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_req_bits_typ;
    vlSelf->__PVT__c_io_ctl_op2_sel = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_op2_sel;
    vlSelf->__PVT__c_io_ctl_op1_sel = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_op1_sel;
    vlSelf->__PVT__c_io_dmem_req_valid = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_req_valid;
    vlSelf->__PVT__c_io_ctl_stall = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_stall;
    vlSelf->__PVT__c_io_ctl_wb_sel = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_wb_sel;
    vlSelf->__PVT__c_io_ctl_alu_fun = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_alu_fun;
    vlSelf->__PVT__c_io_ctl_rf_wen = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_rf_wen;
    vlSelf->__PVT__c_io_ctl_csr_cmd = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_csr_cmd;
    vlSelf->__PVT__d_io_ctl_exception = vlSelf->__PVT__c_io_ctl_exception;
    vlSelf->__PVT__io_dmem_req_bits_fcn = vlSelf->__PVT__c_io_dmem_req_bits_fcn;
    vlSelf->__PVT__io_dmem_req_bits_typ = vlSelf->__PVT__c_io_dmem_req_bits_typ;
    vlSelf->__PVT__d_io_ctl_op2_sel = vlSelf->__PVT__c_io_ctl_op2_sel;
    vlSelf->__PVT__d_io_ctl_op1_sel = vlSelf->__PVT__c_io_ctl_op1_sel;
    vlSelf->__PVT__io_dmem_req_valid = vlSelf->__PVT__c_io_dmem_req_valid;
    vlSelf->__PVT__d_io_ctl_stall = vlSelf->__PVT__c_io_ctl_stall;
    vlSelf->__PVT__d_io_ctl_wb_sel = vlSelf->__PVT__c_io_ctl_wb_sel;
    vlSelf->__PVT__d_io_ctl_alu_fun = vlSelf->__PVT__c_io_ctl_alu_fun;
    vlSelf->__PVT__d_io_ctl_rf_wen = vlSelf->__PVT__c_io_ctl_rf_wen;
    vlSelf->__PVT__d_io_ctl_csr_cmd = vlSelf->__PVT__c_io_ctl_csr_cmd;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_exception 
        = vlSelf->__PVT__d_io_ctl_exception;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_op2_sel 
        = vlSelf->__PVT__d_io_ctl_op2_sel;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_op1_sel 
        = vlSelf->__PVT__d_io_ctl_op1_sel;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_stall 
        = vlSelf->__PVT__d_io_ctl_stall;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_wb_sel 
        = vlSelf->__PVT__d_io_ctl_wb_sel;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_alu_fun 
        = vlSelf->__PVT__d_io_ctl_alu_fun;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_rf_wen 
        = vlSelf->__PVT__d_io_ctl_rf_wen;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_csr_cmd 
        = vlSelf->__PVT__d_io_ctl_csr_cmd;
}

VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__4(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__4\n"); );
    // Body
    vlSelf->__PVT__d_io_dmem_req_bits_addr = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dmem_req_bits_addr;
    vlSelf->__PVT__io_dmem_req_bits_addr = vlSelf->__PVT__d_io_dmem_req_bits_addr;
}

VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__5(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__5\n"); );
    // Body
    vlSelf->__PVT__d_io_dat_csr_eret = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_csr_eret;
    vlSelf->__PVT__c_io_dat_csr_eret = vlSelf->__PVT__d_io_dat_csr_eret;
    vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_csr_eret 
        = vlSelf->__PVT__c_io_dat_csr_eret;
}

VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__6(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__6\n"); );
    // Body
    vlSelf->__PVT__c_io_ctl_pc_sel = vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_pc_sel;
    vlSelf->__PVT__d_io_ctl_pc_sel = vlSelf->__PVT__c_io_ctl_pc_sel;
    vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_pc_sel 
        = vlSelf->__PVT__d_io_ctl_pc_sel;
}
