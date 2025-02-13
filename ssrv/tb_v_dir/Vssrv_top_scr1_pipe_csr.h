// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_CSR_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_CSR_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_csr final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__exu2csr_r_req,0,0);
        VL_IN8(__PVT__exu2csr_w_req,0,0);
        VL_IN8(__PVT__exu2csr_w_cmd,1,0);
        VL_OUT8(__PVT__csr2exu_rw_exc,0,0);
        VL_IN8(__PVT__exu2csr_take_irq,0,0);
        VL_IN8(__PVT__exu2csr_take_exc,0,0);
        VL_IN8(__PVT__exu2csr_mret_update,0,0);
        VL_IN8(__PVT__exu2csr_mret_instr,0,0);
        VL_IN8(__PVT__exu2csr_exc_code,3,0);
        VL_OUT8(__PVT__csr2exu_irq,0,0);
        VL_OUT8(__PVT__csr2exu_ip_ie,0,0);
        VL_OUT8(__PVT__csr2exu_mstatus_mie_up,0,0);
        VL_IN8(__PVT__instret_nexc,0,0);
        VL_IN8(__PVT__ext_irq,0,0);
        VL_IN8(__PVT__soft_irq,0,0);
        VL_IN8(__PVT__timer_irq,0,0);
        VL_OUT8(__PVT__csr2tdu_req,0,0);
        VL_OUT8(__PVT__csr2tdu_cmd,1,0);
        VL_OUT8(__PVT__csr2tdu_addr,2,0);
        VL_IN8(__PVT__tdu2csr_resp,0,0);
        CData/*0:0*/ __PVT__csr_mstatus_mie;
        CData/*0:0*/ __PVT__csr_mstatus_mpie;
        CData/*0:0*/ __PVT__csr_mie_mtie;
        CData/*0:0*/ __PVT__csr_mie_meie;
        CData/*0:0*/ __PVT__csr_mie_msie;
        CData/*0:0*/ __PVT__csr_mcause_i;
        CData/*3:0*/ __PVT__csr_mcause_ec;
        CData/*3:0*/ __PVT__csr_mcause_ec_new;
        CData/*0:0*/ __PVT__csr_mtvec_mode;
        CData/*0:0*/ __PVT__csr_mip_mtip;
        CData/*0:0*/ __PVT__csr_mip_meip;
        CData/*0:0*/ __PVT__csr_mip_msip;
        CData/*7:0*/ __PVT__csr_instret_lo;
        CData/*7:0*/ __PVT__csr_instret_lo_new;
        CData/*7:0*/ __PVT__csr_cycle_lo;
        CData/*7:0*/ __PVT__csr_cycle_lo_new;
        CData/*0:0*/ __PVT__csr_mcounten_cy;
        CData/*0:0*/ __PVT__csr_mcounten_ir;
        CData/*0:0*/ __PVT__csr_r_exc;
        CData/*0:0*/ __PVT__csr_mstatus_up;
        CData/*0:0*/ __PVT__csr_mie_up;
        CData/*0:0*/ __PVT__csr_mscratch_up;
        CData/*0:0*/ __PVT__csr_mepc_up;
        CData/*0:0*/ __PVT__csr_mcause_up;
        CData/*0:0*/ __PVT__csr_mtval_up;
        CData/*0:0*/ __PVT__csr_mtvec_up;
        CData/*1:0*/ __PVT__csr_cycle_up;
        CData/*1:0*/ __PVT__csr_instret_up;
        CData/*0:0*/ __PVT__csr_cycle_inc_lo;
        CData/*0:0*/ __PVT__csr_cycle_inc_hi;
        CData/*0:0*/ __PVT__csr_instret_inc_lo;
        CData/*0:0*/ __PVT__csr_instret_inc_hi;
        CData/*0:0*/ __PVT__csr_mcounten_up;
        CData/*0:0*/ __PVT__csr_w_exc;
        CData/*0:0*/ __PVT__e_exc;
        CData/*0:0*/ __PVT__e_irq;
        CData/*0:0*/ __PVT__e_mret;
        CData/*0:0*/ __PVT__csr_brkm_req;
        CData/*0:0*/ __Vdly__csr_mstatus_mie;
        CData/*0:0*/ __Vdly__csr_mstatus_mpie;
        CData/*0:0*/ __Vdly__csr_mcause_i;
        CData/*3:0*/ __Vdly__csr_mcause_ec;
    };
    struct {
        CData/*0:0*/ __Vdly__csr_mie_mtie;
        CData/*0:0*/ __Vdly__csr_mie_meie;
        CData/*0:0*/ __Vdly__csr_mie_msie;
        CData/*0:0*/ __Vdly__csr_mcounten_cy;
        CData/*0:0*/ __Vdly__csr_mcounten_ir;
        CData/*0:0*/ __Vdly__csr_mtvec_mode;
        CData/*7:0*/ __Vdly__csr_cycle_lo;
        CData/*7:0*/ __Vdly__csr_instret_lo;
        VL_IN16(__PVT__exu2csr_rw_addr,11,0);
        VL_OUT(__PVT__csr2exu_r_data,31,0);
        VL_IN(__PVT__exu2csr_w_data,31,0);
        VL_IN(__PVT__exu2csr_trap_val,31,0);
        VL_OUT(__PVT__csr2exu_new_pc,31,0);
        VL_IN(__PVT__curr_pc,31,0);
        VL_IN(__PVT__next_pc,31,0);
        VL_OUT(__PVT__csr2tdu_wdata,31,0);
        VL_IN(__PVT__tdu2csr_rdata,31,0);
        VL_IN(__PVT__fuse_mhartid,31,0);
        IData/*31:0*/ __PVT__csr_mstatus;
        IData/*31:0*/ __PVT__csr_mie;
        IData/*31:0*/ __PVT__csr_mip;
        IData/*31:0*/ __PVT__csr_mscratch;
        IData/*30:0*/ __PVT__csr_mepc;
        IData/*31:0*/ __PVT__csr_mtval;
        IData/*25:0*/ __PVT__csr_mtvec_base;
        IData/*31:0*/ __PVT__csr_mcounten;
        IData/*31:0*/ __PVT__csr_r_data;
        IData/*31:0*/ __PVT__csr_w_data;
        IData/*30:0*/ __Vdly__csr_mepc;
        IData/*31:0*/ __Vdly__csr_mtval;
        IData/*31:0*/ __Vdly__csr_mscratch;
        IData/*25:0*/ __Vdly__csr_mtvec_base;
        VL_IN64(__PVT__mtime_ext,63,0);
        QData/*63:0*/ __PVT__csr_instret;
        QData/*55:0*/ __PVT__csr_instret_hi;
        QData/*55:0*/ __PVT__csr_instret_hi_new;
        QData/*63:0*/ __PVT__csr_cycle;
        QData/*55:0*/ __PVT__csr_cycle_hi;
        QData/*55:0*/ __PVT__csr_cycle_hi_new;
        QData/*55:0*/ __Vdly__csr_cycle_hi;
        QData/*55:0*/ __Vdly__csr_instret_hi;
    };

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_csr(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_csr();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_csr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
