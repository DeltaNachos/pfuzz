// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_CSR_FILE_H_
#define VERILATED_VFALCO_TOP_CSR_FILE_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_csr_file final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__ext_irq_i,0,0);
        VL_IN8(__PVT__tmr_irq_i,0,0);
        VL_IN8(__PVT__sft_irq_i,0,0);
        VL_OUT8(__PVT__irq_taken_o,0,0);
        CData/*1:0*/ __PVT__privilege_level_r;
        CData/*0:0*/ __PVT__is_mret;
        CData/*0:0*/ __PVT__is_sret;
        CData/*0:0*/ __PVT__is_uret;
        CData/*0:0*/ __PVT__trap_to_M;
        CData/*3:0*/ __PVT__interrupt_cause;
        CData/*0:0*/ __PVT__irq_taken;
        CData/*1:0*/ __Vdly__privilege_level_r;
        VL_OUT(__PVT__pc_handler_o,31,0);
        VL_IN(__PVT__nxt_unwb_PC_i,31,0);
        IData/*31:0*/ __PVT__mstatus_r;
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
        IData/*31:0*/ branch_counter;
        IData/*31:0*/ branch_miss_counter;
        IData/*31:0*/ recovery_counter;
        IData/*31:0*/ recovery_big_counter;
        IData/*31:0*/ recovery_small_counter;
        IData/*31:0*/ recovery_total_amount;
        IData/*31:0*/ recovery_rollback_amount;
        IData/*31:0*/ recovery_cycle_count;
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
        IData/*31:0*/ __Vdly__mscratch_r;
        IData/*31:0*/ __Vdly__mepc_r;
        IData/*31:0*/ __Vdly__mcause_r;
        IData/*31:0*/ __Vdly__mtval_r;
        IData/*31:0*/ __Vdly__medeleg_r;
        IData/*31:0*/ __Vdly__mideleg_r;
        IData/*31:0*/ __Vdly__branch_counter;
    };
    struct {
        IData/*31:0*/ __Vdly__branch_miss_counter;
        IData/*31:0*/ __Vdly__recovery_counter;
        IData/*31:0*/ __Vdly__recovery_big_counter;
        IData/*31:0*/ __Vdly__recovery_small_counter;
        IData/*31:0*/ __Vdly__recovery_total_amount;
        IData/*31:0*/ __Vdly__recovery_rollback_amount;
        IData/*31:0*/ __Vdly__recovery_cycle_count;
        IData/*31:0*/ __Vdly__satp_r;
        IData/*31:0*/ __Vdly__stvec_r;
        IData/*31:0*/ __Vdly__sscratch_r;
        IData/*31:0*/ __Vdly__sepc_r;
        IData/*31:0*/ __Vdly__scause_r;
        IData/*31:0*/ __Vdly__stval_r;
        QData/*63:0*/ __PVT__mcycle_r;
        QData/*63:0*/ __PVT__cycle_r;
        QData/*63:0*/ __Vdly__mcycle_r;
        QData/*63:0*/ __Vdly__cycle_r;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_csr_file(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_csr_file();
    VL_UNCOPYABLE(Vfalco_top_csr_file);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
