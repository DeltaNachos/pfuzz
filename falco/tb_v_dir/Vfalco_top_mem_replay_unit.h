// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_MEM_REPLAY_UNIT_H_
#define VERILATED_VFALCO_TOP_MEM_REPLAY_UNIT_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_mem_replay_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__recovery_stall,0,0);
    VL_IN8(__PVT__load_wake_up_failed_stall,0,0);
    VL_IN8(__PVT__load_wake_up_predict_failed,0,0);
    VL_IN8(__PVT__load_depend_replay,0,0);
    VL_IN8(__PVT__replay_muldiv_stall,0,0);
    VL_IN8(__PVT__issue_instr_valid,0,0);
    VL_OUT8(__PVT__replay_issue_instr_valid,0,0);
    CData/*0:0*/ __PVT__buffer_p0_valid;
    CData/*0:0*/ __PVT__buffer_p1_valid;
    CData/*0:0*/ __Vfunc_IsBrROBKill__0__Vfuncout;
    CData/*5:0*/ __Vfunc_IsBrROBKill__0__rob_tag;
    CData/*0:0*/ __Vfunc_IsBrROBKill__1__Vfuncout;
    CData/*5:0*/ __Vfunc_IsBrROBKill__1__rob_tag;
    CData/*0:0*/ __Vdly__buffer_p0_valid;
    CData/*0:0*/ __Vdly__buffer_p1_valid;
    VL_IN16(__PVT__recovery_flush_BCAST,14,0);
    SData/*14:0*/ __Vfunc_IsBrROBKill__0__branch_recovery_flush;
    SData/*14:0*/ __Vfunc_IsBrROBKill__1__branch_recovery_flush;
    VL_INW(__PVT__issue_instr_pack,128,0,5);
    VL_OUTW(__PVT__replay_issue_instr_pack,128,0,5);
    VlWide<5>/*128:0*/ __PVT__replay_buffer_p0;
    VlWide<5>/*128:0*/ __PVT__replay_buffer_p1;
    VlWide<5>/*128:0*/ __Vdly__replay_buffer_p0;
    VlWide<5>/*128:0*/ __Vdly__replay_buffer_p1;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_mem_replay_unit(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_mem_replay_unit();
    VL_UNCOPYABLE(Vfalco_top_mem_replay_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
