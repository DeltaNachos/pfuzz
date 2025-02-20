// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_MEM_IQ_BALANCE_SELECTOR_WO_STORE_H_
#define VERILATED_VFALCO_TOP_MEM_IQ_BALANCE_SELECTOR_WO_STORE_H_  // guard

#include "verilated.h"
class Vfalco_top_LS_wo_store_Picker8_1;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_mem_iq_balance_selector_wo_store final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_LS_wo_store_Picker8_1* __PVT__mem_picker;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__issue_lock,0,0);
    VL_OUT8(__PVT__issue_slot_idx,2,0);
    VL_OUT8(__PVT__issue_slot_idx_valid,0,0);
    CData/*0:0*/ __PVT__issue_slot_idx_pre_valid;
    VL_IN8(__PVT__issue_ready[8],0,0);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_mem_iq_balance_selector_wo_store(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_mem_iq_balance_selector_wo_store();
    VL_UNCOPYABLE(Vfalco_top_mem_iq_balance_selector_wo_store);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
