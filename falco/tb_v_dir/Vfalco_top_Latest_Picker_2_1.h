// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_LATEST_PICKER_2_1_H_
#define VERILATED_VFALCO_TOP_LATEST_PICKER_2_1_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_Latest_Picker_2_1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__push_head,3,0);
    VL_OUT8(__PVT__hit,0,0);
    VL_OUT8(__PVT__hit_index,3,0);
    VL_IN8(__PVT__match[2],0,0);
    VL_IN8(__PVT__index[2],3,0);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_Latest_Picker_2_1(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_Latest_Picker_2_1();
    VL_UNCOPYABLE(Vfalco_top_Latest_Picker_2_1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
