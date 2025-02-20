// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_PIPELINE_CONTROL_RECOVERY_H_
#define VERILATED_VFALCO_TOP_PIPELINE_CONTROL_RECOVERY_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_pipeline_control_recovery final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__DMEM_access_stall,0,0);
    CData/*0:0*/ __PVT__spec_tag_full;
    CData/*1:0*/ recovery_state;
    CData/*1:0*/ __PVT__recovery_next_state;
    CData/*0:0*/ __PVT__rollback_finished;
    CData/*1:0*/ __PVT__replay_state;
    CData/*1:0*/ __PVT__replay_next_state;
    CData/*1:0*/ __PVT__load_replay_counter;
    CData/*0:0*/ __PVT__load_consumer_spec_replay;
    CData/*0:0*/ __PVT__load_consumer_spec_kill;
    CData/*0:0*/ __PVT__load_consumer_spec_kill_done;
    CData/*0:0*/ __PVT__SDA_full_delay;
    CData/*1:0*/ __Vdly__recovery_state;
    CData/*0:0*/ __Vdly__load_consumer_spec_kill_done;
    CData/*1:0*/ __Vdly__load_replay_counter;
    CData/*0:0*/ __Vdly__SDA_full_delay;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_pipeline_control_recovery(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_pipeline_control_recovery();
    VL_UNCOPYABLE(Vfalco_top_pipeline_control_recovery);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
