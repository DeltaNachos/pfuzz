// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsodor_top.h for the primary calling header

#ifndef VERILATED_VSODOR_TOP_CORE_H_
#define VERILATED_VSODOR_TOP_CORE_H_  // guard

#include "verilated.h"
class Vsodor_top_CtlPath;
class Vsodor_top_DatPath;


class Vsodor_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsodor_top_Core final : public VerilatedModule {
  public:
    // CELLS
    Vsodor_top_CtlPath* __PVT__c;
    Vsodor_top_DatPath* __PVT__d;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__io_dmem_req_valid,0,0);
    VL_OUT8(__PVT__io_dmem_req_bits_fcn,0,0);
    VL_OUT8(__PVT__io_dmem_req_bits_typ,2,0);
    VL_IN8(__PVT__io_dmem_resp_valid,0,0);
    VL_IN8(__PVT__io_ddpath_addr,4,0);
    CData/*0:0*/ __PVT__c_io_dmem_req_valid;
    CData/*0:0*/ __PVT__c_io_dmem_req_bits_fcn;
    CData/*2:0*/ __PVT__c_io_dmem_req_bits_typ;
    CData/*0:0*/ __PVT__c_io_dmem_resp_valid;
    CData/*0:0*/ __PVT__c_io_dat_br_eq;
    CData/*0:0*/ __PVT__c_io_dat_br_lt;
    CData/*0:0*/ __PVT__c_io_dat_br_ltu;
    CData/*0:0*/ __PVT__c_io_dat_csr_eret;
    CData/*0:0*/ __PVT__c_io_ctl_stall;
    CData/*2:0*/ __PVT__c_io_ctl_pc_sel;
    CData/*1:0*/ __PVT__c_io_ctl_op1_sel;
    CData/*1:0*/ __PVT__c_io_ctl_op2_sel;
    CData/*3:0*/ __PVT__c_io_ctl_alu_fun;
    CData/*1:0*/ __PVT__c_io_ctl_wb_sel;
    CData/*0:0*/ __PVT__c_io_ctl_rf_wen;
    CData/*2:0*/ __PVT__c_io_ctl_csr_cmd;
    CData/*0:0*/ __PVT__c_io_ctl_exception;
    CData/*0:0*/ __PVT__d_clock;
    CData/*0:0*/ __PVT__d_reset;
    CData/*4:0*/ __PVT__d_io_ddpath_addr;
    CData/*0:0*/ __PVT__d_io_ctl_stall;
    CData/*2:0*/ __PVT__d_io_ctl_pc_sel;
    CData/*1:0*/ __PVT__d_io_ctl_op1_sel;
    CData/*1:0*/ __PVT__d_io_ctl_op2_sel;
    CData/*3:0*/ __PVT__d_io_ctl_alu_fun;
    CData/*1:0*/ __PVT__d_io_ctl_wb_sel;
    CData/*0:0*/ __PVT__d_io_ctl_rf_wen;
    CData/*2:0*/ __PVT__d_io_ctl_csr_cmd;
    CData/*0:0*/ __PVT__d_io_ctl_exception;
    CData/*0:0*/ __PVT__d_io_dat_br_eq;
    CData/*0:0*/ __PVT__d_io_dat_br_lt;
    CData/*0:0*/ __PVT__d_io_dat_br_ltu;
    CData/*0:0*/ __PVT__d_io_dat_csr_eret;
    VL_OUT(__PVT__io_imem_req_bits_addr,31,0);
    VL_IN(__PVT__io_imem_resp_bits_data,31,0);
    VL_OUT(__PVT__io_dmem_req_bits_addr,31,0);
    VL_OUT(__PVT__io_dmem_req_bits_data,31,0);
    VL_IN(__PVT__io_dmem_resp_bits_data,31,0);
    VL_IN(__PVT__io_ddpath_wdata,31,0);
    VL_OUT(__PVT__io_ddpath_rdata,31,0);
    IData/*31:0*/ __PVT__c_io_dat_inst;
    IData/*31:0*/ __PVT__d_io_ddpath_wdata;
    IData/*31:0*/ __PVT__d_io_ddpath_rdata;
    IData/*31:0*/ __PVT__d_io_imem_req_bits_addr;
    IData/*31:0*/ __PVT__d_io_imem_resp_bits_data;
    IData/*31:0*/ __PVT__d_io_dmem_req_bits_addr;
    IData/*31:0*/ __PVT__d_io_dmem_req_bits_data;
    IData/*31:0*/ __PVT__d_io_dmem_resp_bits_data;
    IData/*31:0*/ __PVT__d_io_dat_inst;

    // INTERNAL VARIABLES
    Vsodor_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsodor_top_Core(Vsodor_top__Syms* symsp, const char* v__name);
    ~Vsodor_top_Core();
    VL_UNCOPYABLE(Vsodor_top_Core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
