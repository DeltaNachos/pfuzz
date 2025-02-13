// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_TOP_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_TOP_H_  // guard

#include "verilated.h"
class Vssrv_top_scr1_pipe_csr;
class Vssrv_top_scr1_pipe_exu;
class Vssrv_top_scr1_pipe_idu;
class Vssrv_top_scr1_pipe_ifu;
class Vssrv_top_scr1_pipe_mprf;
class Vssrv_top_scr1_pipe_tdu;


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_top final : public VerilatedModule {
  public:
    // CELLS
    Vssrv_top_scr1_pipe_ifu* __PVT__i_pipe_ifu;
    Vssrv_top_scr1_pipe_idu* __PVT__i_pipe_idu;
    Vssrv_top_scr1_pipe_exu* __PVT__i_pipe_exu;
    Vssrv_top_scr1_pipe_mprf* __PVT__i_pipe_mprf;
    Vssrv_top_scr1_pipe_csr* __PVT__i_pipe_csr;
    Vssrv_top_scr1_pipe_tdu* __PVT__i_pipe_tdu;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__pipe_rst_n,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_OUT8(__PVT__imem_req,0,0);
        VL_OUT8(__PVT__imem_cmd,0,0);
        VL_IN8(__PVT__imem_req_ack,0,0);
        VL_IN8(__PVT__imem_resp,1,0);
        VL_OUT8(__PVT__dmem_req,0,0);
        VL_OUT8(__PVT__dmem_cmd,0,0);
        VL_OUT8(__PVT__dmem_width,1,0);
        VL_IN8(__PVT__dmem_req_ack,0,0);
        VL_IN8(__PVT__dmem_resp,1,0);
        VL_IN8(__PVT__ext_irq,0,0);
        VL_IN8(__PVT__soft_irq,0,0);
        VL_IN8(__PVT__timer_irq,0,0);
        CData/*0:0*/ __PVT__new_pc_req;
        CData/*0:0*/ __PVT__stop_fetch;
        CData/*0:0*/ __PVT__exu_exc_req;
        CData/*0:0*/ __PVT__brkpt;
        CData/*0:0*/ __PVT__exu_init_pc;
        CData/*0:0*/ __PVT__wfi_run2halt;
        CData/*0:0*/ __PVT__instret;
        CData/*0:0*/ __PVT__instret_nexc;
        CData/*0:0*/ __PVT__brkpt_hw;
        CData/*0:0*/ __PVT__ifu2idu_vd;
        CData/*0:0*/ __PVT__ifu2idu_imem_err;
        CData/*0:0*/ __PVT__ifu2idu_err_rvi_hi;
        CData/*0:0*/ __PVT__idu2ifu_rdy;
        CData/*0:0*/ __PVT__idu2exu_req;
        CData/*0:0*/ __PVT__idu2exu_use_rs1;
        CData/*0:0*/ __PVT__idu2exu_use_rs2;
        CData/*0:0*/ __PVT__idu2exu_use_rd;
        CData/*0:0*/ __PVT__idu2exu_use_imm;
        CData/*0:0*/ __PVT__exu2idu_rdy;
        CData/*4:0*/ __PVT__exu2mprf_rs1_addr;
        CData/*4:0*/ __PVT__exu2mprf_rs2_addr;
        CData/*0:0*/ __PVT__exu2mprf_w_req;
        CData/*4:0*/ __PVT__exu2mprf_rd_addr;
        CData/*0:0*/ __PVT__exu2csr_r_req;
        CData/*0:0*/ __PVT__exu2csr_w_req;
        CData/*1:0*/ __PVT__exu2csr_w_cmd;
        CData/*0:0*/ __PVT__csr2exu_rw_exc;
        CData/*0:0*/ __PVT__exu2csr_take_irq;
        CData/*0:0*/ __PVT__exu2csr_take_exc;
        CData/*0:0*/ __PVT__exu2csr_mret_update;
        CData/*0:0*/ __PVT__exu2csr_mret_instr;
        CData/*3:0*/ __PVT__exu2csr_exc_code;
        CData/*0:0*/ __PVT__csr2exu_irq;
        CData/*0:0*/ __PVT__csr2exu_ip_ie;
        CData/*0:0*/ __PVT__csr2exu_mstatus_mie_up;
        CData/*0:0*/ __PVT__csr2tdu_req;
        CData/*1:0*/ __PVT__csr2tdu_cmd;
        CData/*2:0*/ __PVT__csr2tdu_addr;
        CData/*0:0*/ __PVT__tdu2csr_resp;
        CData/*2:0*/ __PVT__tdu2exu_i_match;
        CData/*1:0*/ __PVT__tdu2lsu_d_match;
        CData/*0:0*/ __PVT__tdu2exu_i_x_req;
        CData/*0:0*/ __PVT__tdu2lsu_i_x_req;
        CData/*0:0*/ __PVT__tdu2lsu_d_x_req;
        CData/*2:0*/ __PVT__exu2tdu_bp_retire;
        CData/*0:0*/ __PVT__exu_busy;
        SData/*11:0*/ __PVT__exu2csr_rw_addr;
        VL_OUT(__PVT__imem_addr,31,0);
        VL_IN(__PVT__imem_rdata,31,0);
        VL_OUT(__PVT__dmem_addr,31,0);
    };
    struct {
        VL_OUT(__PVT__dmem_wdata,31,0);
        VL_IN(__PVT__dmem_rdata,31,0);
        VL_IN(__PVT__fuse_mhartid,31,0);
        IData/*31:0*/ __PVT__curr_pc;
        IData/*31:0*/ __PVT__next_pc;
        IData/*31:0*/ __PVT__new_pc;
        IData/*31:0*/ __PVT__ifu2idu_instr;
        IData/*31:0*/ __PVT__mprf2exu_rs1_data;
        IData/*31:0*/ __PVT__mprf2exu_rs2_data;
        IData/*31:0*/ __PVT__exu2mprf_rd_data;
        IData/*31:0*/ __PVT__csr2exu_r_data;
        IData/*31:0*/ __PVT__exu2csr_w_data;
        IData/*31:0*/ __PVT__exu2csr_trap_val;
        IData/*31:0*/ __PVT__csr2exu_new_pc;
        IData/*31:0*/ __PVT__csr2tdu_wdata;
        IData/*31:0*/ __PVT__tdu2csr_rdata;
        VL_IN64(__PVT__mtime_ext,63,0);
        VlWide<3>/*74:0*/ __PVT__idu2exu_cmd;
        QData/*33:0*/ __PVT__exu2tdu_i_mon;
        QData/*34:0*/ __PVT__lsu2tdu_d_mon;
    };

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_top(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_top();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
