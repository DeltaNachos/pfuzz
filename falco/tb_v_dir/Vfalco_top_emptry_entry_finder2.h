// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_EMPTRY_ENTRY_FINDER2_H_
#define VERILATED_VFALCO_TOP_EMPTRY_ENTRY_FINDER2_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_emptry_entry_finder2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__out_id_0,2,0);
    VL_OUT8(__PVT__out_id_1,2,0);
    VL_OUT8(__PVT__out_alloc_valid_0,0,0);
    VL_OUT8(__PVT__out_alloc_valid_1,0,0);
    VL_IN8(__PVT__in_id[2],2,0);
    VL_IN8(__PVT__in_alloc_valid[2],0,0);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_emptry_entry_finder2(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_emptry_entry_finder2();
    VL_UNCOPYABLE(Vfalco_top_emptry_entry_finder2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
