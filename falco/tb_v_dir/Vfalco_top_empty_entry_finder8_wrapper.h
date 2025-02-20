// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_EMPTY_ENTRY_FINDER8_WRAPPER_H_
#define VERILATED_VFALCO_TOP_EMPTY_ENTRY_FINDER8_WRAPPER_H_  // guard

#include "verilated.h"
class Vfalco_top_empty_entry_finder8;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_empty_entry_finder8_wrapper final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_empty_entry_finder8* __PVT__empty_entry_finder8_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__dispatch_slot_idx0,2,0);
    VL_IN8(__PVT__dispatch_slot_idx1,2,0);
    VL_IN8(__PVT__dispatch_slot_idx0_valid,0,0);
    VL_IN8(__PVT__dispatch_slot_idx1_valid,0,0);
    VL_OUT8(__PVT__allocatable_slot_idx0,2,0);
    VL_OUT8(__PVT__allocatable_slot_idx1,2,0);
    VL_OUT8(__PVT__allocatable_slot_idx0_valid,0,0);
    VL_OUT8(__PVT__allocatable_slot_idx1_valid,0,0);
    VL_IN8(__PVT__slot_valid[8],0,0);
    VlUnpacked<CData/*0:0*/, 8> __PVT__allocate_valid;
    VlUnpacked<CData/*2:0*/, 8> __PVT__entry_id;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_empty_entry_finder8_wrapper(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_empty_entry_finder8_wrapper();
    VL_UNCOPYABLE(Vfalco_top_empty_entry_finder8_wrapper);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
