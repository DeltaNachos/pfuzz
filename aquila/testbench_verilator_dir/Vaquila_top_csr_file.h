// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_CSR_FILE_H_
#define VERILATED_VAQUILA_TOP_CSR_FILE_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_csr_file final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__csr_we_i,0,0);
        VL_IN8(__PVT__ext_irq_i,0,0);
        VL_IN8(__PVT__tmr_irq_i,0,0);
        VL_IN8(__PVT__sft_irq_i,0,0);
        VL_OUT8(__PVT__irq_taken_o,0,0);
        VL_IN8(__PVT__sys_jump_i,0,0);
        VL_IN8(__PVT__sys_jump_csr_addr_i,1,0);
        VL_OUT8(__PVT__sys_jump_o,0,0);
        VL_OUT8(__PVT__privilege_level_o,1,0);
        VL_IN8(__PVT__xcpt_valid_i,0,0);
        VL_IN8(__PVT__xcpt_cause_i,3,0);
        CData/*1:0*/ __PVT__privilege_level_r;
        CData/*0:0*/ __PVT__is_mret;
        CData/*0:0*/ __PVT__is_sret;
        CData/*0:0*/ __PVT__is_uret;
        CData/*0:0*/ __PVT__trap_to_M;
        CData/*3:0*/ __PVT__interrupt_cause;
        CData/*0:0*/ __PVT__irq_taken;
        CData/*1:0*/ __Vdly__privilege_level_r;
        VL_IN16(__PVT__csr_raddr_i,11,0);
        VL_IN16(__PVT__csr_waddr_i,11,0);
        VL_OUT(__PVT__csr_data_o,31,0);
        VL_IN(__PVT__csr_wdata_i,31,0);
        VL_OUT(__PVT__pc_handler_o,31,0);
        VL_IN(__PVT__nxt_unwb_PC_i,31,0);
        VL_IN(__PVT__pc_i,31,0);
        VL_OUT(__PVT__sys_jump_csr_data_o,31,0);
        VL_IN(__PVT__xcpt_tval_i,31,0);
        IData/*31:0*/ __PVT__mstatus_r;
        IData/*31:0*/ __PVT__misa_r;
        IData/*31:0*/ __PVT__mie_r;
        IData/*31:0*/ __PVT__mip_r;
        IData/*31:0*/ __PVT__mtvec_r;
        IData/*31:0*/ __PVT__mscratch_r;
        IData/*31:0*/ __PVT__mepc_r;
        IData/*31:0*/ __PVT__mcause_r;
        IData/*31:0*/ __PVT__mcause_d;
        IData/*31:0*/ __PVT__mtval_r;
        IData/*31:0*/ __PVT__medeleg_r;
        IData/*31:0*/ __PVT__mideleg_r;
        IData/*31:0*/ __PVT__mvendorid;
        IData/*31:0*/ __PVT__marchid;
        IData/*31:0*/ __PVT__mimpid;
        IData/*31:0*/ __PVT__mhartid;
        IData/*31:0*/ __PVT__sstatus;
        IData/*31:0*/ __PVT__sip;
        IData/*31:0*/ __PVT__sie;
        IData/*31:0*/ __PVT__satp_r;
        IData/*31:0*/ __PVT__stvec_r;
        IData/*31:0*/ __PVT__sscratch_r;
        IData/*31:0*/ __PVT__sepc_r;
        IData/*31:0*/ __PVT__scause_r;
        IData/*31:0*/ __PVT__scause_d;
        IData/*31:0*/ __PVT__stval_r;
        IData/*31:0*/ __PVT__mtvec_base;
        IData/*31:0*/ __PVT__stvec_base;
        IData/*31:0*/ __PVT__csr_data;
        IData/*31:0*/ __PVT__pc_handler;
        IData/*31:0*/ __Vdly__mstatus_r;
        IData/*31:0*/ __Vdly__mie_r;
        IData/*31:0*/ __Vdly__mip_r;
        IData/*31:0*/ __Vdly__mtvec_r;
    };
    struct {
        IData/*31:0*/ __Vdly__mscratch_r;
        IData/*31:0*/ __Vdly__mepc_r;
        IData/*31:0*/ __Vdly__mcause_r;
        IData/*31:0*/ __Vdly__mtval_r;
        IData/*31:0*/ __Vdly__medeleg_r;
        IData/*31:0*/ __Vdly__mideleg_r;
        IData/*31:0*/ __Vdly__satp_r;
        IData/*31:0*/ __Vdly__stvec_r;
        IData/*31:0*/ __Vdly__sscratch_r;
        IData/*31:0*/ __Vdly__sepc_r;
        IData/*31:0*/ __Vdly__scause_r;
        IData/*31:0*/ __Vdly__stval_r;
        QData/*63:0*/ __PVT__mcycle_r;
        QData/*63:0*/ __PVT__minstret_r;
        QData/*63:0*/ __PVT__cycle_r;
        QData/*63:0*/ __Vdly__mcycle_r;
        QData/*63:0*/ __Vdly__cycle_r;
    };

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_csr_file(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_csr_file();
    VL_UNCOPYABLE(Vaquila_top_csr_file);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
