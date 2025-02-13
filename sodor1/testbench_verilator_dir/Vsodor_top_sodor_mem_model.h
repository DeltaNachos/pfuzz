// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsodor_top.h for the primary calling header

#ifndef VERILATED_VSODOR_TOP_SODOR_MEM_MODEL_H_
#define VERILATED_VSODOR_TOP_SODOR_MEM_MODEL_H_  // guard

#include "verilated.h"


class Vsodor_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsodor_top_sodor_mem_model final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__dmem_req_valid,0,0);
    VL_IN8(__PVT__dmem_req_write_en,0,0);
    VL_IN8(__PVT__dmem_req_bits_typ,2,0);
    VL_OUT8(__PVT__dmem_resp_valid,0,0);
    CData/*0:0*/ __Vdly__dmem_resp_valid;
    VL_IN(__PVT__imem_addr,31,0);
    VL_OUT(__PVT__imem_data,31,0);
    VL_IN(__PVT__dmem_req_addr,31,0);
    VL_IN(__PVT__dmem_req_data,31,0);
    VL_OUT(__PVT__dmem_resp_data,31,0);
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
    Vsodor_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsodor_top_sodor_mem_model(Vsodor_top__Syms* symsp, const char* v__name);
    ~Vsodor_top_sodor_mem_model();
    VL_UNCOPYABLE(Vsodor_top_sodor_mem_model);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
