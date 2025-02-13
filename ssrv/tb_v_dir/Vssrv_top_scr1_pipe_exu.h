// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_EXU_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_EXU_H_  // guard

#include "verilated.h"
class Vssrv_top_scr1_pipe_ialu;
class Vssrv_top_scr1_pipe_lsu;


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_exu final : public VerilatedModule {
  public:
    // CELLS
    Vssrv_top_scr1_pipe_ialu* __PVT__i_ialu;
    Vssrv_top_scr1_pipe_lsu* __PVT__i_lsu;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__idu2exu_req,0,0);
        VL_OUT8(__PVT__exu2idu_rdy,0,0);
        VL_IN8(__PVT__idu2exu_use_rs1,0,0);
        VL_IN8(__PVT__idu2exu_use_rs2,0,0);
        VL_OUT8(__PVT__exu2mprf_rs1_addr,4,0);
        VL_OUT8(__PVT__exu2mprf_rs2_addr,4,0);
        VL_OUT8(__PVT__exu2mprf_w_req,0,0);
        VL_OUT8(__PVT__exu2mprf_rd_addr,4,0);
        VL_OUT8(__PVT__exu2csr_r_req,0,0);
        VL_OUT8(__PVT__exu2csr_w_req,0,0);
        VL_OUT8(__PVT__exu2csr_w_cmd,1,0);
        VL_IN8(__PVT__csr2exu_rw_exc,0,0);
        VL_OUT8(__PVT__exu2csr_take_irq,0,0);
        VL_OUT8(__PVT__exu2csr_take_exc,0,0);
        VL_OUT8(__PVT__exu2csr_mret_update,0,0);
        VL_OUT8(__PVT__exu2csr_mret_instr,0,0);
        VL_OUT8(__PVT__exu2csr_exc_code,3,0);
        VL_IN8(__PVT__csr2exu_irq,0,0);
        VL_IN8(__PVT__csr2exu_ip_ie,0,0);
        VL_IN8(__PVT__csr2exu_mstatus_mie_up,0,0);
        VL_OUT8(__PVT__exu2dmem_req,0,0);
        VL_OUT8(__PVT__exu2dmem_cmd,0,0);
        VL_OUT8(__PVT__exu2dmem_width,1,0);
        VL_IN8(__PVT__dmem2exu_req_ack,0,0);
        VL_IN8(__PVT__dmem2exu_resp,1,0);
        VL_OUT8(__PVT__exu_exc_req,0,0);
        VL_OUT8(__PVT__brkpt,0,0);
        VL_OUT8(__PVT__exu_init_pc,0,0);
        VL_OUT8(__PVT__wfi_run2halt,0,0);
        VL_OUT8(__PVT__instret,0,0);
        VL_OUT8(__PVT__instret_nexc,0,0);
        VL_OUT8(__PVT__exu_busy,0,0);
        VL_IN8(__PVT__tdu2exu_i_match,2,0);
        VL_IN8(__PVT__tdu2exu_i_x_req,0,0);
        VL_IN8(__PVT__tdu2lsu_i_x_req,0,0);
        VL_IN8(__PVT__tdu2lsu_d_match,1,0);
        VL_IN8(__PVT__tdu2lsu_d_x_req,0,0);
        VL_OUT8(__PVT__exu2tdu_bp_retire,2,0);
        VL_OUT8(__PVT__brkpt_hw,0,0);
        VL_OUT8(__PVT__new_pc_req,0,0);
        CData/*0:0*/ __PVT__exu_queue_vd;
        CData/*0:0*/ __PVT__queue_barrier;
        CData/*0:0*/ __PVT__exu_rdy;
        CData/*0:0*/ __PVT__ialu_rdy;
        CData/*0:0*/ __PVT__ialu_vd;
        CData/*0:0*/ __PVT__ialu_cmp;
        CData/*0:0*/ __PVT__lsu_req;
        CData/*0:0*/ __PVT__lsu_rdy;
        CData/*0:0*/ __PVT__lsu_exc;
        CData/*3:0*/ __PVT__lsu_exc_code;
        CData/*0:0*/ __PVT__csr_access;
        CData/*0:0*/ __PVT__exc_req;
        CData/*3:0*/ __PVT__exc_code;
        CData/*0:0*/ __PVT__ifu_fault_rvi_hi;
        CData/*0:0*/ __PVT__wfi_halted;
        CData/*0:0*/ __PVT__wfi_halt_cond;
        CData/*0:0*/ __PVT__wfi_run_cond;
        CData/*0:0*/ __PVT__wfi_run_start;
        CData/*3:0*/ __PVT__init_pc_v;
        CData/*0:0*/ __PVT__init_pc;
        CData/*4:0*/ __Vcellinp__i_ialu__ialu_cmd;
        CData/*3:0*/ __Vcellinp__i_lsu__exu2lsu_cmd;
    };
    struct {
        CData/*0:0*/ __Vdly__csr_access;
        CData/*3:0*/ __Vdly__init_pc_v;
        CData/*0:0*/ __Vdly__wfi_run_start;
        CData/*0:0*/ __Vdly__wfi_halted;
        VL_OUT16(__PVT__exu2csr_rw_addr,11,0);
        VL_IN(__PVT__mprf2exu_rs1_data,31,0);
        VL_IN(__PVT__mprf2exu_rs2_data,31,0);
        VL_OUT(__PVT__exu2mprf_rd_data,31,0);
        VL_IN(__PVT__csr2exu_r_data,31,0);
        VL_OUT(__PVT__exu2csr_w_data,31,0);
        VL_OUT(__PVT__exu2csr_trap_val,31,0);
        VL_IN(__PVT__csr2exu_new_pc,31,0);
        VL_OUT(__PVT__exu2dmem_addr,31,0);
        VL_OUT(__PVT__exu2dmem_wdata,31,0);
        VL_IN(__PVT__dmem2exu_rdata,31,0);
        VL_OUT(__PVT__curr_pc,31,0);
        VL_OUT(__PVT__next_pc,31,0);
        VL_OUT(__PVT__new_pc,31,0);
        IData/*31:0*/ __PVT__ialu_op1;
        IData/*31:0*/ __PVT__ialu_op2;
        IData/*31:0*/ __PVT__ialu_sum2_op1;
        IData/*31:0*/ __PVT__ialu_sum2_op2;
        IData/*31:0*/ __PVT__ialu_res;
        IData/*31:0*/ __PVT__ialu_sum2_res;
        IData/*31:0*/ __PVT__lsu_l_data;
        IData/*31:0*/ __PVT__inc_pc;
        IData/*31:0*/ __Vdly__curr_pc;
        VL_INW(__PVT__idu2exu_cmd,74,0,3);
        VL_OUT64(__PVT__exu2tdu_i_mon,33,0);
        VL_OUT64(__PVT__lsu2tdu_d_mon,34,0);
        VlWide<3>/*74:0*/ __PVT__exu_queue;
    };

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_exu(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_exu();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_exu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
