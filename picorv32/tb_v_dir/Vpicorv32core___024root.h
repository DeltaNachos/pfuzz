// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpicorv32core.h for the primary calling header

#ifndef VERILATED_VPICORV32CORE___024ROOT_H_
#define VERILATED_VPICORV32CORE___024ROOT_H_  // guard

#include "verilated.h"
class Vpicorv32core_picorv32core;


class Vpicorv32core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpicorv32core___024root final : public VerilatedModule {
  public:
    // CELLS
    Vpicorv32core_picorv32core* __PVT__picorv32core;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __VstlExecute;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoExecute;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__picorv32core__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__picorv32core__memory_modelling_inst____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__picorv32core__picorv32_core____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__picorv32core__picorv32_core__cpuregs____PVT__clk__0;
    CData/*0:0*/ __VactExecute;
    CData/*0:0*/ __VactFirstIteration;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaExecute;
    CData/*0:0*/ __VnbaFirstIteration;
    CData/*0:0*/ __VnbaContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VpreTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpicorv32core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpicorv32core___024root(Vpicorv32core__Syms* symsp, const char* v__name);
    ~Vpicorv32core___024root();
    VL_UNCOPYABLE(Vpicorv32core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
