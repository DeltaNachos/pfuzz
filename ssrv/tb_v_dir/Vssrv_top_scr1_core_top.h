// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_CORE_TOP_H_
#define VERILATED_VSSRV_TOP_SCR1_CORE_TOP_H_  // guard

#include "verilated.h"
class Vssrv_top_scr1_pipe_top;
class Vssrv_top_scr1_reset_buf_qlfy_cell;


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_core_top final : public VerilatedModule {
  public:
    // CELLS
    Vssrv_top_scr1_reset_buf_qlfy_cell* __PVT__i_core_rstn_buf_qlfy_cell;
    Vssrv_top_scr1_pipe_top* __PVT__i_pipe_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__pwrup_rst_n,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__cpu_rst_n,0,0);
    VL_IN8(__PVT__test_mode,0,0);
    VL_IN8(__PVT__test_rst_n,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_OUT8(__PVT__core_rst_n_out,0,0);
    VL_IN8(__PVT__ext_irq,0,0);
    VL_IN8(__PVT__soft_irq,0,0);
    VL_IN8(__PVT__timer_irq,0,0);
    VL_IN8(__PVT__imem_req_ack,0,0);
    VL_OUT8(__PVT__imem_req,0,0);
    VL_OUT8(__PVT__imem_cmd,0,0);
    VL_IN8(__PVT__imem_resp,1,0);
    VL_IN8(__PVT__dmem_req_ack,0,0);
    VL_OUT8(__PVT__dmem_req,0,0);
    VL_OUT8(__PVT__dmem_cmd,0,0);
    VL_OUT8(__PVT__dmem_width,1,0);
    VL_IN8(__PVT__dmem_resp,1,0);
    CData/*0:0*/ __PVT__core_rst_n_sync;
    CData/*0:0*/ __PVT__core_rst_n;
    CData/*0:0*/ __PVT__core_rst_n_qlfy;
    CData/*0:0*/ __PVT__pwrup_rst_n_sync;
    CData/*0:0*/ __PVT__rst_n_sync;
    CData/*0:0*/ __PVT__cpu_rst_n_sync;
    VL_IN(__PVT__fuse_mhartid,31,0);
    VL_OUT(__PVT__imem_addr,31,0);
    VL_IN(__PVT__imem_rdata,31,0);
    VL_OUT(__PVT__dmem_addr,31,0);
    VL_OUT(__PVT__dmem_wdata,31,0);
    VL_IN(__PVT__dmem_rdata,31,0);
    VL_IN64(__PVT__mtime_ext,63,0);

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_core_top(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_core_top();
    VL_UNCOPYABLE(Vssrv_top_scr1_core_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
