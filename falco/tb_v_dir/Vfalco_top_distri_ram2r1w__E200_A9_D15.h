// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_DISTRI_RAM2R1W__E200_A9_D15_H_
#define VERILATED_VFALCO_TOP_DISTRI_RAM2R1W__E200_A9_D15_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_distri_ram2r1w__E200_A9_D15 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,0,0);
    CData/*0:0*/ __VdlySet__history_table__v0;
    VL_IN16(__PVT__write_addr,8,0);
    VL_IN16(__PVT__read_0_addr,8,0);
    VL_IN16(__PVT__read_1_addr,8,0);
    SData/*8:0*/ __VdlyDim0__history_table__v0;
    VL_IN(__PVT__data_i,20,0);
    VL_OUT(__PVT__data_0_o,20,0);
    VL_OUT(__PVT__data_1_o,20,0);
    IData/*31:0*/ __PVT__i;
    IData/*20:0*/ __VdlyVal__history_table__v0;
    VlUnpacked<IData/*20:0*/, 512> __PVT__history_table;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_distri_ram2r1w__E200_A9_D15(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_distri_ram2r1w__E200_A9_D15();
    VL_UNCOPYABLE(Vfalco_top_distri_ram2r1w__E200_A9_D15);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
