// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_FALCO_MEM_MODEL_H_
#define VERILATED_VFALCO_TOP_FALCO_MEM_MODEL_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_falco_mem_model final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_OUT8(__PVT__store_resp,1,0);
    VL_OUT8(__PVT__load_hit_resp,1,0);
    IData/*31:0*/ __PVT__imem_read__Vstatic__unnamedblk2__DOT__single_instruction;
    IData/*31:0*/ __PVT__dmem_read__Vstatic__mem_rdata;
    IData/*31:0*/ __PVT__dmem_write__Vstatic__m_addr;
    IData/*31:0*/ __Vfunc_imem_read__0__m_addr;
    IData/*31:0*/ __Vfunc_imem_read__0__unnamedblk2__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __Vfunc_instruction_generator__1__Vfuncout;
    IData/*31:0*/ __Vfunc_dmem_read__2__Vfuncout;
    IData/*31:0*/ __Vfunc_dmem_read__2__m_addr;
    IData/*31:0*/ __Vtask_dmem_write__3__mem_addr;
    IData/*31:0*/ __Vtask_dmem_write__3__wdata;
    VL_INW(__PVT__instruction_req,64,0,3);
    VL_OUTW(__PVT__instruction_resp,66,0,3);
    VL_INW(__PVT__store_req,68,0,3);
    VL_IN64(__PVT__load_data_req,32,0);
    VL_IN64(__PVT__load_ck_hit_req,33,0);
    VL_OUT64(__PVT__load_data_resp,33,0);
    QData/*63:0*/ __PVT__imem_read__Vstatic__mem_rdata;
    QData/*63:0*/ __PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction;
    QData/*63:0*/ __PVT__unnamedblk1__DOT__fetched_instructions;
    QData/*63:0*/ __Vfunc_imem_read__0__Vfuncout;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__dmem;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> __PVT__imem;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_falco_mem_model(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_falco_mem_model();
    VL_UNCOPYABLE(Vfalco_top_falco_mem_model);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
