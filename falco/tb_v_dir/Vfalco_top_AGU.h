// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_AGU_H_
#define VERILATED_VFALCO_TOP_AGU_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_AGU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*3:0*/ __PVT__byte_sel;
    CData/*0:0*/ __PVT__memory_align_exception;
    CData/*0:0*/ __PVT__non_idempotent_region;
    CData/*5:0*/ __Vfunc_bypass_network__0__rs_addr;
    CData/*5:0*/ __Vfunc_bypass_network__1__rs_addr;
    CData/*0:0*/ __Vfunc_IsBrROBKill__2__Vfuncout;
    CData/*5:0*/ __Vfunc_IsBrROBKill__2__rob_tag;
    SData/*14:0*/ __Vfunc_IsBrROBKill__2__branch_recovery_flush;
    IData/*31:0*/ __PVT__rs1_data;
    IData/*31:0*/ __PVT__rs2_data;
    IData/*31:0*/ __PVT__unalign_store_data;
    IData/*31:0*/ __PVT__store_data;
    IData/*31:0*/ __PVT__access_addr;
    IData/*31:0*/ __Vfunc_bypass_network__0__Vfuncout;
    IData/*31:0*/ __Vfunc_bypass_network__0__prf_register_data;
    IData/*31:0*/ __Vfunc_bypass_network__1__Vfuncout;
    IData/*31:0*/ __Vfunc_bypass_network__1__prf_register_data;
    QData/*38:0*/ __Vfunc_bypass_network__0__mem_wb;
    QData/*38:0*/ __Vfunc_bypass_network__0__alu_csr_wb;
    QData/*38:0*/ __Vfunc_bypass_network__0__alu1_wb;
    QData/*38:0*/ __Vfunc_bypass_network__0__muldiv_wb;
    QData/*38:0*/ __Vfunc_bypass_network__1__mem_wb;
    QData/*38:0*/ __Vfunc_bypass_network__1__alu_csr_wb;
    QData/*38:0*/ __Vfunc_bypass_network__1__alu1_wb;
    QData/*38:0*/ __Vfunc_bypass_network__1__muldiv_wb;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_AGU(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_AGU();
    VL_UNCOPYABLE(Vfalco_top_AGU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
