// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_DISTRI_RAM__E40_H_
#define VERILATED_VAQUILA_TOP_DISTRI_RAM__E40_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_distri_ram__E40 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__read_addr_i,5,0);
    VL_IN8(__PVT__write_addr_i,5,0);
    CData/*5:0*/ __Vdlyvdim0__RAM__v0;
    CData/*0:0*/ __Vdlyvset__RAM__v0;
    VL_IN(__PVT__data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __Vdlyvval__RAM__v0;
    VlUnpacked<IData/*31:0*/, 64> __PVT__RAM;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_distri_ram__E40(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_distri_ram__E40();
    VL_UNCOPYABLE(Vaquila_top_distri_ram__E40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
