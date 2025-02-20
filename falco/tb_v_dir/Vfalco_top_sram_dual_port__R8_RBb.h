// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_SRAM_DUAL_PORT__R8_RBB_H_
#define VERILATED_VFALCO_TOP_SRAM_DUAL_PORT__R8_RBB_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_sram_dual_port__R8_RBb final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clka,0,0);
    VL_IN8(__PVT__clkb,0,0);
    VL_IN8(__PVT__we_A,0,0);
    VL_IN8(__PVT__we_B,0,0);
    VL_IN8(__PVT__en_A,0,0);
    VL_IN8(__PVT__en_B,0,0);
    VL_IN8(__PVT__data_iA,7,0);
    VL_IN8(__PVT__data_iB,7,0);
    VL_OUT8(__PVT__data_oA,7,0);
    VL_OUT8(__PVT__data_oB,7,0);
    CData/*7:0*/ __Vdly__data_oA;
    CData/*7:0*/ __Vdly__data_oB;
    CData/*7:0*/ __VdlyVal__RAM__v0;
    CData/*0:0*/ __VdlySet__RAM__v0;
    CData/*7:0*/ __VdlyVal__RAM__v1;
    CData/*0:0*/ __VdlySet__RAM__v1;
    VL_IN16(__PVT__addr_A,10,0);
    VL_IN16(__PVT__addr_B,10,0);
    SData/*10:0*/ __VdlyDim0__RAM__v0;
    SData/*10:0*/ __VdlyDim0__RAM__v1;
    VlUnpacked<CData/*7:0*/, 2048> __PVT__RAM;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_sram_dual_port__R8_RBb(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_sram_dual_port__R8_RBb();
    VL_UNCOPYABLE(Vfalco_top_sram_dual_port__R8_RBb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
