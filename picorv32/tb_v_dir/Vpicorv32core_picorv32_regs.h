// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpicorv32core.h for the primary calling header

#ifndef VERILATED_VPICORV32CORE_PICORV32_REGS_H_
#define VERILATED_VPICORV32CORE_PICORV32_REGS_H_  // guard

#include "verilated.h"


class Vpicorv32core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpicorv32core_picorv32_regs final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__wen,0,0);
    VL_IN8(__PVT__waddr,5,0);
    VL_IN8(__PVT__raddr1,5,0);
    VL_IN8(__PVT__raddr2,5,0);
    CData/*4:0*/ __VdlyDim0__regs__v0;
    CData/*0:0*/ __VdlySet__regs__v0;
    VL_IN(__PVT__wdata,31,0);
    VL_OUT(__PVT__rdata1,31,0);
    VL_OUT(__PVT__rdata2,31,0);
    IData/*31:0*/ __Vlvbound_h42af6e1e__0;
    IData/*31:0*/ __VdlyVal__regs__v0;
    VlUnpacked<IData/*31:0*/, 31> __PVT__regs;

    // INTERNAL VARIABLES
    Vpicorv32core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpicorv32core_picorv32_regs(Vpicorv32core__Syms* symsp, const char* v__name);
    ~Vpicorv32core_picorv32_regs();
    VL_UNCOPYABLE(Vpicorv32core_picorv32_regs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
