// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_MEM_MODEL_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_MEM_MODEL_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_mem_model final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__dmem_req_valid,0,0);
    VL_IN8(__PVT__dmem_req_write_en,3,0);
    VL_OUT8(__PVT__dmem_resp_valid,0,0);
    VL_OUT8(__PVT__imem_valid,0,0);
    VL_OUT8(__PVT__imem_accept,0,0);
    VL_OUT8(__PVT__imem_error,0,0);
    VL_OUT8(__PVT__i_intr,0,0);
    CData/*0:0*/ __Vdly__imem_valid;
    CData/*0:0*/ __Vdly__imem_accept;
    CData/*0:0*/ __Vdly__imem_error;
    CData/*0:0*/ __Vdly__i_intr;
    CData/*0:0*/ __Vdly__dmem_resp_valid;
    VL_IN(__PVT__imem_addr,31,0);
    VL_IN(__PVT__dmem_req_addr,31,0);
    VL_IN(__PVT__dmem_req_data,31,0);
    VL_OUT(__PVT__dmem_resp_data,31,0);
    IData/*31:0*/ __PVT__file_handle;
    IData/*31:0*/ __PVT__imem_read__Vstatic__unnamedblk1__DOT__single_instruction;
    IData/*31:0*/ __PVT__dmem_read__Vstatic__mem_rdata;
    IData/*31:0*/ __PVT__dmem_write__Vstatic__m_addr;
    IData/*31:0*/ __Vfunc_imem_read__0__m_addr;
    IData/*31:0*/ __Vfunc_instruction_generator__1__Vfuncout;
    IData/*31:0*/ __Vtask_dmem_write__2__mem_addr;
    IData/*31:0*/ __Vtask_dmem_write__2__wdata;
    IData/*31:0*/ __Vfunc_dmem_read__3__Vfuncout;
    IData/*31:0*/ __Vfunc_dmem_read__3__m_addr;
    VL_OUT64(__PVT__imem_data,63,0);
    QData/*63:0*/ __PVT__imem_read__Vstatic__mem_rdata;
    QData/*63:0*/ __PVT__imem_read__Vstatic__unnamedblk1__DOT__instruction;
    QData/*63:0*/ __Vfunc_imem_read__0__Vfuncout;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__dmem;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> __PVT__imem;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_mem_model(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_mem_model();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_mem_model);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
