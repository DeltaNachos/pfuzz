// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SSRV_MEM_MODEL_H_
#define VERILATED_VSSRV_TOP_SSRV_MEM_MODEL_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_ssrv_mem_model final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__imem_req,0,0);
    VL_IN8(__PVT__imem_cmd,0,0);
    VL_IN8(__PVT__dmem_req,0,0);
    VL_IN8(__PVT__dmem_cmd,0,0);
    VL_IN8(__PVT__dmem_width,1,0);
    VL_OUT8(__PVT__imem_req_ack,0,0);
    VL_OUT8(__PVT__imem_resp,1,0);
    VL_OUT8(__PVT__dmem_req_ack,0,0);
    VL_OUT8(__PVT__dmem_resp,1,0);
    CData/*0:0*/ __Vdly__imem_req_ack;
    CData/*1:0*/ __Vdly__imem_resp;
    CData/*1:0*/ __Vdly__dmem_resp;
    CData/*0:0*/ __Vdly__dmem_req_ack;
    VL_IN(__PVT__imem_addr,31,0);
    VL_IN(__PVT__dmem_addr,31,0);
    VL_IN(__PVT__dmem_wdata,31,0);
    VL_OUT(__PVT__imem_rdata,31,0);
    VL_OUT(__PVT__dmem_rdata,31,0);
    IData/*31:0*/ __PVT__imem_read__Vstatic__mem_rdata;
    IData/*31:0*/ __PVT__dmem_read__Vstatic__mem_rdata;
    IData/*31:0*/ __PVT__dmem_write__Vstatic__m_addr;
    IData/*31:0*/ __Vfunc_imem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_imem_read__0__m_addr;
    IData/*31:0*/ __Vfunc_instruction_generator__1__Vfuncout;
    IData/*31:0*/ __Vtask_dmem_write__2__mem_addr;
    IData/*31:0*/ __Vtask_dmem_write__2__wdata;
    IData/*31:0*/ __Vfunc_dmem_read__3__Vfuncout;
    IData/*31:0*/ __Vfunc_dmem_read__3__m_addr;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__dmem;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__imem;

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_ssrv_mem_model(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_ssrv_mem_model();
    VL_UNCOPYABLE(Vssrv_top_ssrv_mem_model);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
