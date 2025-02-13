// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RAM16X1D_H_
#define VERILATED_VRV32IM_TOP_RAM16X1D_H_  // guard

#include "verilated.h"


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_RAM16X1D final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__WCLK,0,0);
    VL_OUT8(__PVT__DPO,0,0);
    VL_OUT8(__PVT__SPO,0,0);
    VL_IN8(__PVT__A0,0,0);
    VL_IN8(__PVT__A1,0,0);
    VL_IN8(__PVT__A2,0,0);
    VL_IN8(__PVT__A3,0,0);
    VL_IN8(__PVT__D,0,0);
    VL_IN8(__PVT__DPRA0,0,0);
    VL_IN8(__PVT__DPRA1,0,0);
    VL_IN8(__PVT__DPRA2,0,0);
    VL_IN8(__PVT__DPRA3,0,0);
    VL_IN8(__PVT__WE,0,0);
    CData/*3:0*/ __PVT__adr;
    SData/*15:0*/ __PVT__mem;
    SData/*15:0*/ __Vdly__mem;

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_RAM16X1D(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_RAM16X1D();
    VL_UNCOPYABLE(Vrv32im_top_RAM16X1D);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
