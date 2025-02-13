// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsodor_top.h for the primary calling header

#ifndef VERILATED_VSODOR_TOP___024ROOT_H_
#define VERILATED_VSODOR_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vsodor_top_sodor_top;


class Vsodor_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsodor_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vsodor_top_sodor_top* __PVT__sodor_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sodor_top__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sodor_top__memory_modelling_inst____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sodor_top__sodor_core__d____PVT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sodor_top__sodor_core__d__csr____PVT__clock__0;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VpreTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsodor_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsodor_top___024root(Vsodor_top__Syms* symsp, const char* v__name);
    ~Vsodor_top___024root();
    VL_UNCOPYABLE(Vsodor_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
