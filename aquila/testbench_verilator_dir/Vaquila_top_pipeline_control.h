// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_PIPELINE_CONTROL_H_
#define VERILATED_VAQUILA_TOP_PIPELINE_CONTROL_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_pipeline_control final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__unsupported_instr_i,0,0);
    VL_IN8(__PVT__is_load_hazard,0,0);
    VL_IN8(__PVT__branch_hit_i,0,0);
    VL_IN8(__PVT__branch_taken_i,0,0);
    VL_IN8(__PVT__branch_misprediction_i,0,0);
    VL_IN8(__PVT__is_fencei_i,0,0);
    VL_IN8(__PVT__sys_jump_i,0,0);
    VL_OUT8(__PVT__flush2fet_o,0,0);
    VL_OUT8(__PVT__flush2dec_o,0,0);
    VL_OUT8(__PVT__flush2exe_o,0,0);
    VL_OUT8(__PVT__flush2wbk_o,0,0);
    VL_OUT8(__PVT__data_hazard_o,0,0);
    CData/*0:0*/ __PVT__branch_flush;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_pipeline_control(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_pipeline_control();
    VL_UNCOPYABLE(Vaquila_top_pipeline_control);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
