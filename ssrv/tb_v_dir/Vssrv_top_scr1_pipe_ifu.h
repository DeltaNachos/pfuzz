// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_IFU_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_IFU_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_ifu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__imem_req_ack,0,0);
        VL_OUT8(__PVT__imem_req,0,0);
        VL_OUT8(__PVT__imem_cmd,0,0);
        VL_IN8(__PVT__imem_resp,1,0);
        VL_IN8(__PVT__new_pc_req,0,0);
        VL_IN8(__PVT__stop_fetch,0,0);
        VL_IN8(__PVT__idu2ifu_rdy,0,0);
        VL_OUT8(__PVT__ifu2idu_imem_err,0,0);
        VL_OUT8(__PVT__ifu2idu_err_rvi_hi,0,0);
        VL_OUT8(__PVT__ifu2idu_vd,0,0);
        CData/*0:0*/ __PVT__fsm;
        CData/*2:0*/ __PVT__num_txns_pending;
        CData/*2:0*/ __PVT__num_txns_pending_new;
        CData/*2:0*/ __PVT__discard_resp_cnt;
        CData/*2:0*/ __PVT__discard_resp_cnt_new;
        CData/*0:0*/ __PVT__discard_resp;
        CData/*2:0*/ __PVT__num_vd_txns_pending;
        CData/*0:0*/ __PVT__num_txns_pending_full;
        CData/*0:0*/ __PVT__imem_resp_ok;
        CData/*0:0*/ __PVT__imem_resp_er;
        CData/*0:0*/ __PVT__imem_resp_vd;
        CData/*0:0*/ __PVT__new_pc_unaligned;
        CData/*0:0*/ __PVT__q_empty;
        CData/*0:0*/ __PVT__q_flush;
        CData/*2:0*/ __PVT__q_rptr;
        CData/*2:0*/ __PVT__q_rptr_next;
        CData/*2:0*/ __PVT__q_wptr;
        CData/*2:0*/ __PVT__q_wptr_next;
        CData/*2:0*/ __PVT__q_ocpd_h;
        CData/*2:0*/ __PVT__q_free_h_next;
        CData/*1:0*/ __PVT__q_free_w_next;
        CData/*1:0*/ __PVT__q_re;
        CData/*1:0*/ __PVT__q_we;
        CData/*0:0*/ __PVT__q_head_rvc;
        CData/*0:0*/ __PVT__q_head_rvi;
        CData/*0:0*/ __PVT__q_err_head;
        CData/*0:0*/ __PVT__q_err_next;
        CData/*0:0*/ __PVT__rdata_curr;
        CData/*0:0*/ __PVT__rdata_next;
        CData/*2:0*/ __PVT__rdata_ident;
        CData/*1:0*/ __PVT__instr_bypass;
        CData/*0:0*/ __PVT__instr_bypass_vd;
        CData/*2:0*/ __Vdly__q_rptr;
        CData/*2:0*/ __Vdly__q_wptr;
        CData/*1:0*/ __Vdlyvdim0__q_data__v0;
        CData/*0:0*/ __Vdlyvset__q_data__v0;
        CData/*1:0*/ __Vdlyvdim0__q_err__v0;
        CData/*0:0*/ __Vdlyvval__q_err__v0;
        CData/*1:0*/ __Vdlyvdim0__q_data__v1;
        CData/*0:0*/ __Vdlyvset__q_data__v1;
        CData/*1:0*/ __Vdlyvdim0__q_err__v1;
        CData/*0:0*/ __Vdlyvval__q_err__v1;
        CData/*1:0*/ __Vdlyvdim0__q_data__v2;
        CData/*1:0*/ __Vdlyvdim0__q_err__v2;
        CData/*0:0*/ __Vdlyvval__q_err__v2;
        CData/*0:0*/ __Vdlyvset__q_data__v3;
        CData/*0:0*/ __Vdly__rdata_curr;
        CData/*2:0*/ __Vdly__num_txns_pending;
        CData/*2:0*/ __Vdly__discard_resp_cnt;
        CData/*0:0*/ __Vdly__fsm;
        CData/*0:0*/ __Vdly__new_pc_unaligned;
        SData/*15:0*/ __PVT__q_data_head;
    };
    struct {
        SData/*15:0*/ __PVT__q_data_next;
        SData/*15:0*/ __Vdlyvval__q_data__v0;
        SData/*15:0*/ __Vdlyvval__q_data__v1;
        SData/*15:0*/ __Vdlyvval__q_data__v2;
        VL_OUT(__PVT__imem_addr,31,0);
        VL_IN(__PVT__imem_rdata,31,0);
        VL_IN(__PVT__new_pc,31,0);
        VL_OUT(__PVT__ifu2idu_instr,31,0);
        IData/*29:0*/ __PVT__imem_addr_r;
        IData/*29:0*/ __PVT__imem_addr_r_new;
        IData/*29:0*/ __Vdly__imem_addr_r;
        VlUnpacked<SData/*15:0*/, 4> __PVT__q_data;
        VlUnpacked<CData/*0:0*/, 4> __PVT__q_err;
    };

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_ifu(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_ifu();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_ifu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
