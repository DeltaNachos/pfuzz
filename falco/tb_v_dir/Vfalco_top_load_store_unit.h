// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_LOAD_STORE_UNIT_H_
#define VERILATED_VFALCO_TOP_LOAD_STORE_UNIT_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_load_store_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__load_hit_resp,1,0);
    CData/*0:0*/ __PVT__store_commit_valid;
    CData/*0:0*/ __PVT__load_commit_valid;
    CData/*1:0*/ __PVT__addr_alignment;
    CData/*0:0*/ __PVT__LSU_kill;
    CData/*0:0*/ __PVT__LSU_stall;
    CData/*0:0*/ violation;
    CData/*0:0*/ __Vfunc_IsBrROBKill__0__Vfuncout;
    CData/*5:0*/ __Vfunc_IsBrROBKill__0__rob_tag;
    CData/*0:0*/ __Vfunc_IsBrROBKill__1__Vfuncout;
    CData/*5:0*/ __Vfunc_IsBrROBKill__1__rob_tag;
    SData/*14:0*/ __Vfunc_IsBrROBKill__0__branch_recovery_flush;
    SData/*14:0*/ __Vfunc_IsBrROBKill__1__branch_recovery_flush;
    IData/*31:0*/ align_access_addr;
    VL_OUT64(__PVT__load_ck_hit_req,33,0);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_load_store_unit(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_load_store_unit();
    VL_UNCOPYABLE(Vfalco_top_load_store_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
