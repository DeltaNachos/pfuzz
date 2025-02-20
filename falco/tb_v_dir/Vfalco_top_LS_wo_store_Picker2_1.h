// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_LS_WO_STORE_PICKER2_1_H_
#define VERILATED_VFALCO_TOP_LS_WO_STORE_PICKER2_1_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_LS_wo_store_Picker2_1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__out_id,2,0);
    VL_OUT8(__PVT__out_valid,0,0);
    VL_IN8(__PVT__in_id[2],2,0);
    VL_IN8(__PVT__in_valid[2],0,0);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_LS_wo_store_Picker2_1(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_LS_wo_store_Picker2_1();
    VL_UNCOPYABLE(Vfalco_top_LS_wo_store_Picker2_1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
