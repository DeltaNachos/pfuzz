// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_MPRF_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_MPRF_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_mprf final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__exu2mprf_rs1_addr,4,0);
    VL_IN8(__PVT__exu2mprf_rs2_addr,4,0);
    VL_IN8(__PVT__exu2mprf_w_req,0,0);
    VL_IN8(__PVT__exu2mprf_rd_addr,4,0);
    VL_OUT(__PVT__mprf2exu_rs1_data,31,0);
    VL_OUT(__PVT__mprf2exu_rs2_data,31,0);
    VL_IN(__PVT__exu2mprf_rd_data,31,0);
    VlWide<31>/*991:0*/ __PVT__mprf_int;
    IData/*31:0*/ __Vlvbound_h2e458459__0;
    VlWide<31>/*991:0*/ __Vdly__mprf_int;

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_mprf(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_mprf();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_mprf);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
