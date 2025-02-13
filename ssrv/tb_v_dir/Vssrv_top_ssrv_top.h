// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SSRV_TOP_H_
#define VERILATED_VSSRV_TOP_SSRV_TOP_H_  // guard

#include "verilated.h"
class Vssrv_top_scr1_core_top;
class Vssrv_top_ssrv_mem_model;


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_ssrv_top final : public VerilatedModule {
  public:
    // CELLS
    Vssrv_top_scr1_core_top* __PVT__core;
    Vssrv_top_ssrv_mem_model* __PVT__memory_modelling_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ __PVT__core_rst_n_out;
    CData/*0:0*/ __PVT__imem_req;
    CData/*0:0*/ __PVT__imem_cmd;
    CData/*0:0*/ __PVT__dmem_req;
    CData/*0:0*/ __PVT__dmem_cmd;
    CData/*1:0*/ __PVT__dmem_width;
    CData/*0:0*/ __PVT__imem_req_ack;
    CData/*1:0*/ __PVT__imem_resp;
    CData/*0:0*/ __PVT__dmem_req_ack;
    CData/*1:0*/ __PVT__dmem_resp;
    CData/*0:0*/ __PVT__pwrup_rst_n;
    CData/*0:0*/ __PVT__rst_n;
    CData/*0:0*/ __PVT__cpu_rst_n;
    CData/*0:0*/ __PVT__test_mode;
    CData/*0:0*/ __PVT__test_rst_n;
    CData/*0:0*/ __PVT__soft_irq;
    CData/*0:0*/ __PVT__timer_irq;
    CData/*0:0*/ __PVT__trst_n;
    CData/*0:0*/ __PVT__tck;
    CData/*0:0*/ __PVT__tms;
    CData/*0:0*/ __PVT__tdi;
    CData/*0:0*/ __Vdly__pwrup_rst_n;
    CData/*0:0*/ __Vdly__rst_n;
    CData/*0:0*/ __Vdly__cpu_rst_n;
    CData/*0:0*/ __Vdly__test_mode;
    CData/*0:0*/ __Vdly__test_rst_n;
    CData/*0:0*/ __Vdly__soft_irq;
    CData/*0:0*/ __Vdly__timer_irq;
    CData/*0:0*/ __Vdly__trst_n;
    CData/*0:0*/ __Vdly__tck;
    CData/*0:0*/ __Vdly__tms;
    CData/*0:0*/ __Vdly__tdi;
    IData/*31:0*/ __PVT__imem_addr;
    IData/*31:0*/ __PVT__dmem_addr;
    IData/*31:0*/ __PVT__dmem_wdata;
    IData/*31:0*/ __PVT__imem_rdata;
    IData/*31:0*/ __PVT__dmem_rdata;
    IData/*31:0*/ __PVT__fuse_mhartid;
    IData/*31:0*/ __Vdly__fuse_mhartid;
    QData/*63:0*/ __PVT__mtime_ext;
    QData/*63:0*/ __Vdly__mtime_ext;

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_ssrv_top(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_ssrv_top();
    VL_UNCOPYABLE(Vssrv_top_ssrv_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
