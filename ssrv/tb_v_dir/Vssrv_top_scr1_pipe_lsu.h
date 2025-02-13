// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_LSU_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_LSU_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_lsu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__exu2lsu_req,0,0);
    VL_IN8(__PVT__exu2lsu_cmd,3,0);
    VL_OUT8(__PVT__lsu2exu_rdy,0,0);
    VL_OUT8(__PVT__lsu2exu_exc,0,0);
    VL_OUT8(__PVT__lsu2exu_exc_code,3,0);
    VL_IN8(__PVT__tdu2lsu_i_x_req,0,0);
    VL_IN8(__PVT__tdu2lsu_d_x_req,0,0);
    VL_OUT8(__PVT__lsu2dmem_req,0,0);
    VL_OUT8(__PVT__lsu2dmem_cmd,0,0);
    VL_OUT8(__PVT__lsu2dmem_width,1,0);
    VL_IN8(__PVT__dmem2lsu_req_ack,0,0);
    VL_IN8(__PVT__dmem2lsu_resp,1,0);
    CData/*0:0*/ __PVT__fsm;
    CData/*3:0*/ __PVT__lsu_cmd_r;
    CData/*0:0*/ __PVT__dmem_resp_ok;
    CData/*0:0*/ __PVT__dmem_resp_er;
    CData/*0:0*/ __PVT__l_misalign;
    CData/*0:0*/ __PVT__s_misalign;
    CData/*0:0*/ __PVT__lsu_hwbrk;
    CData/*0:0*/ __Vdly__fsm;
    CData/*3:0*/ __Vdly__lsu_cmd_r;
    VL_IN(__PVT__exu2lsu_addr,31,0);
    VL_IN(__PVT__exu2lsu_s_data,31,0);
    VL_OUT(__PVT__lsu2exu_l_data,31,0);
    VL_OUT(__PVT__lsu2dmem_addr,31,0);
    VL_OUT(__PVT__lsu2dmem_wdata,31,0);
    VL_IN(__PVT__dmem2lsu_rdata,31,0);
    VL_OUT64(__PVT__lsu2tdu_d_mon,34,0);

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_lsu(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_lsu();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_lsu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
