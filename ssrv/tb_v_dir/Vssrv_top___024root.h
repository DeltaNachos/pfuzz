// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP___024ROOT_H_
#define VERILATED_VSSRV_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vssrv_top_ssrv_top;


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vssrv_top_ssrv_top* __PVT__ssrv_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__tdu2exu_i_x_req__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__csr2tdu_req__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__div_cmd__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mul_cmd__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__shft_cmd__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__lsu_hwbrk__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__memory_modelling_inst____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__tdu2exu_i_x_req__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__csr2tdu_req__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__div_cmd__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mul_cmd__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__shft_cmd__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__lsu_hwbrk__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__reset_n_in_mux__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__rst_n_mux__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__rst_n__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VlUnpacked<CData/*0:0*/, 39> __Vm_traceActivity;
    VlTriggerVec<8> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<20> __VactTriggered;
    VlTriggerVec<20> __VpreTriggered;
    VlTriggerVec<20> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top___024root(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top___024root();
    VL_UNCOPYABLE(Vssrv_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
