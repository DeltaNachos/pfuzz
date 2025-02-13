// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP___024ROOT_H_
#define VERILATED_VAQUILA_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vaquila_top_aquila_top;


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_top_aquila_top* __PVT__aquila_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__memory_modelling_inst____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__CSR____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Branch_Prediction_Unit____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Register_File____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Program_Counter____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Fetch____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Decode____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Execute____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Writeback____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Execute__MulDiv____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history____PVT__clk_i__0;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VlUnpacked<CData/*0:0*/, 32> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<13> __VactTriggered;
    VlTriggerVec<13> __VpreTriggered;
    VlTriggerVec<13> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top___024root(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top___024root();
    VL_UNCOPYABLE(Vaquila_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
