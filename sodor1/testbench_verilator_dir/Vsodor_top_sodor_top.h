// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsodor_top.h for the primary calling header

#ifndef VERILATED_VSODOR_TOP_SODOR_TOP_H_
#define VERILATED_VSODOR_TOP_SODOR_TOP_H_  // guard

#include "verilated.h"
class Vsodor_top_Core;
class Vsodor_top_sodor_mem_model;


class Vsodor_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsodor_top_sodor_top final : public VerilatedModule {
  public:
    // CELLS
    Vsodor_top_Core* __PVT__sodor_core;
    Vsodor_top_sodor_mem_model* __PVT__memory_modelling_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __PVT__dmem_resp_valid;
    CData/*0:0*/ __PVT__dmem_req_valid;
    CData/*0:0*/ __PVT__dmem_fcn_write_en;
    CData/*2:0*/ __PVT__dmem_bit_typ;
    CData/*4:0*/ __PVT__ddpath_addr;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __Vdly__reset;
    IData/*31:0*/ __PVT__imem_req_addr;
    IData/*31:0*/ __PVT__imem_resp_data;
    IData/*31:0*/ __PVT__dmem_req_addr;
    IData/*31:0*/ __PVT__dmem_req_data;
    IData/*31:0*/ __PVT__dmem_resp_data;

    // INTERNAL VARIABLES
    Vsodor_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsodor_top_sodor_top(Vsodor_top__Syms* symsp, const char* v__name);
    ~Vsodor_top_sodor_top();
    VL_UNCOPYABLE(Vsodor_top_sodor_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
