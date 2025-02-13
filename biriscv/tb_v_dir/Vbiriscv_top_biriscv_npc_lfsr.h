// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_NPC_LFSR_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_NPC_LFSR_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_npc_lfsr final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__hit_i,0,0);
    VL_IN8(__PVT__hit_entry_i,4,0);
    VL_IN8(__PVT__alloc_i,0,0);
    VL_OUT8(__PVT__alloc_entry_o,4,0);
    SData/*15:0*/ __PVT__lfsr_q;
    SData/*15:0*/ __Vdly__lfsr_q;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_npc_lfsr(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_npc_lfsr();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_npc_lfsr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
