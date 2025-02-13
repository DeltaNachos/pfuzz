// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBIRISCV_TOP__SYMS_H_
#define VERILATED_VBIRISCV_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbiriscv_top.h"

// INCLUDE MODULE CLASSES
#include "Vbiriscv_top___024root.h"
#include "Vbiriscv_top_biriscv_top.h"
#include "Vbiriscv_top_biriscv_mem_model.h"
#include "Vbiriscv_top_riscv_core__SC1_SD1_E1.h"
#include "Vbiriscv_top_biriscv_csr.h"
#include "Vbiriscv_top_biriscv_multiplier.h"
#include "Vbiriscv_top_biriscv_divider.h"
#include "Vbiriscv_top_biriscv_issue.h"
#include "Vbiriscv_top_biriscv_exec.h"
#include "Vbiriscv_top_biriscv_frontend__E1.h"
#include "Vbiriscv_top_biriscv_mmu__pi1.h"
#include "Vbiriscv_top_biriscv_lsu__pi2.h"
#include "Vbiriscv_top_biriscv_npc.h"
#include "Vbiriscv_top_biriscv_fetch.h"
#include "Vbiriscv_top_biriscv_pipe_ctrl.h"
#include "Vbiriscv_top_biriscv_regfile.h"
#include "Vbiriscv_top_biriscv_alu.h"
#include "Vbiriscv_top_biriscv_decode__E1.h"
#include "Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1.h"
#include "Vbiriscv_top_biriscv_csr_regfile__SB1.h"
#include "Vbiriscv_top_biriscv_npc_lfsr.h"
#include "Vbiriscv_top_fetch_fifo.h"
#include "Vbiriscv_top_biriscv_trace_sim.h"
#include "Vbiriscv_top_biriscv_decoder.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbiriscv_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbiriscv_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbiriscv_top___024root         TOP;
    Vbiriscv_top_biriscv_top       TOP__biriscv_top;
    Vbiriscv_top_biriscv_mem_model TOP__biriscv_top__memory_modelling_inst;
    Vbiriscv_top_riscv_core__SC1_SD1_E1 TOP__biriscv_top__u_core;
    Vbiriscv_top_biriscv_divider   TOP__biriscv_top__u_core__u_div;
    Vbiriscv_top_biriscv_exec      TOP__biriscv_top__u_core__u_exec0;
    Vbiriscv_top_biriscv_alu       TOP__biriscv_top__u_core__u_exec0__u_alu;
    Vbiriscv_top_biriscv_exec      TOP__biriscv_top__u_core__u_exec1;
    Vbiriscv_top_biriscv_alu       TOP__biriscv_top__u_core__u_exec1__u_alu;
    Vbiriscv_top_biriscv_frontend__E1 TOP__biriscv_top__u_core__u_frontend;
    Vbiriscv_top_biriscv_decode__E1 TOP__biriscv_top__u_core__u_frontend__u_decode;
    Vbiriscv_top_biriscv_decoder   TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0;
    Vbiriscv_top_biriscv_decoder   TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1;
    Vbiriscv_top_fetch_fifo        TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo;
    Vbiriscv_top_biriscv_fetch     TOP__biriscv_top__u_core__u_frontend__u_fetch;
    Vbiriscv_top_biriscv_npc       TOP__biriscv_top__u_core__u_frontend__u_npc;
    Vbiriscv_top_biriscv_npc_lfsr  TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru;
    Vbiriscv_top_biriscv_lsu__pi2  TOP__biriscv_top__u_core__u_lsu;
    Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1 TOP__biriscv_top__u_core__u_lsu__u_lsu_request;
    Vbiriscv_top_biriscv_mmu__pi1  TOP__biriscv_top__u_core__u_mmu;
    Vbiriscv_top_biriscv_multiplier TOP__biriscv_top__u_core__u_mul;
    Vbiriscv_top_biriscv_csr       TOP__biriscv_top__u_core__u_csr;
    Vbiriscv_top_biriscv_csr_regfile__SB1 TOP__biriscv_top__u_core__u_csr__u_csrfile;
    Vbiriscv_top_biriscv_issue     TOP__biriscv_top__u_core__u_issue;
    Vbiriscv_top_biriscv_pipe_ctrl TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl;
    Vbiriscv_top_biriscv_trace_sim TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d;
    Vbiriscv_top_biriscv_trace_sim TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb;
    Vbiriscv_top_biriscv_trace_sim TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif;
    Vbiriscv_top_biriscv_trace_sim TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif;
    Vbiriscv_top_biriscv_pipe_ctrl TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl;
    Vbiriscv_top_biriscv_trace_sim TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d;
    Vbiriscv_top_biriscv_trace_sim TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb;
    Vbiriscv_top_biriscv_regfile   TOP__biriscv_top__u_core__u_issue__u_regfile;

    // CONSTRUCTORS
    Vbiriscv_top__Syms(VerilatedContext* contextp, const char* namep, Vbiriscv_top* modelp);
    ~Vbiriscv_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
