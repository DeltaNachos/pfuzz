// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_Core.h"

VL_ATTR_COLD void Vsodor_top_Core___ctor_var_reset(Vsodor_top_Core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_Core___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_imem_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_imem_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_dmem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_dmem_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_dmem_req_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_dmem_req_bits_fcn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_dmem_req_bits_typ = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_dmem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_dmem_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_ddpath_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_ddpath_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_ddpath_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__c_io_dmem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_dmem_req_bits_fcn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_dmem_req_bits_typ = VL_RAND_RESET_I(3);
    vlSelf->__PVT__c_io_dmem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_dat_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__c_io_dat_br_eq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_dat_br_lt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_dat_br_ltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_dat_csr_eret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_ctl_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_ctl_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__c_io_ctl_op1_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__c_io_ctl_op2_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__c_io_ctl_alu_fun = VL_RAND_RESET_I(4);
    vlSelf->__PVT__c_io_ctl_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__c_io_ctl_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c_io_ctl_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->__PVT__c_io_ctl_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_io_ddpath_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__d_io_ddpath_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_ddpath_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_imem_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_imem_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_dmem_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_dmem_req_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_dmem_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_ctl_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_io_ctl_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__d_io_ctl_op1_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__d_io_ctl_op2_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__d_io_ctl_alu_fun = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_io_ctl_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__d_io_ctl_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_io_ctl_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->__PVT__d_io_ctl_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_io_dat_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_io_dat_br_eq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_io_dat_br_lt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_io_dat_br_ltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_io_dat_csr_eret = VL_RAND_RESET_I(1);
}
