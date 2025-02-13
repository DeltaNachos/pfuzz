// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP___024ROOT_H_
#define VERILATED_VBIRISCV_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_top;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_biriscv_top* biriscv_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__memory_modelling_inst____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_regfile____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__rst_i__0;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VlUnpacked<CData/*0:0*/, 57> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<20> __VactTriggered;
    VlTriggerVec<20> __VpreTriggered;
    VlTriggerVec<20> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top___024root(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top___024root();
    VL_UNCOPYABLE(Vbiriscv_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
