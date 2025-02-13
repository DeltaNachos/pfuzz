// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSSRV_TOP__SYMS_H_
#define VERILATED_VSSRV_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vssrv_top.h"

// INCLUDE MODULE CLASSES
#include "Vssrv_top___024root.h"
#include "Vssrv_top_ssrv_top.h"
#include "Vssrv_top___024unit.h"
#include "Vssrv_top_scr1_core_top.h"
#include "Vssrv_top_ssrv_mem_model.h"
#include "Vssrv_top_scr1_reset_buf_qlfy_cell.h"
#include "Vssrv_top_scr1_pipe_top.h"
#include "Vssrv_top_scr1_pipe_ifu.h"
#include "Vssrv_top_scr1_pipe_idu.h"
#include "Vssrv_top_scr1_pipe_exu.h"
#include "Vssrv_top_scr1_pipe_mprf.h"
#include "Vssrv_top_scr1_pipe_csr.h"
#include "Vssrv_top_scr1_pipe_tdu.h"
#include "Vssrv_top_scr1_pipe_ialu.h"
#include "Vssrv_top_scr1_pipe_lsu.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vssrv_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vssrv_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vssrv_top___024root            TOP;
    Vssrv_top_ssrv_top             TOP__ssrv_top;
    Vssrv_top_scr1_core_top        TOP__ssrv_top__core;
    Vssrv_top_scr1_reset_buf_qlfy_cell TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell;
    Vssrv_top_scr1_pipe_top        TOP__ssrv_top__core__i_pipe_top;
    Vssrv_top_scr1_pipe_csr        TOP__ssrv_top__core__i_pipe_top__i_pipe_csr;
    Vssrv_top_scr1_pipe_exu        TOP__ssrv_top__core__i_pipe_top__i_pipe_exu;
    Vssrv_top_scr1_pipe_ialu       TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu;
    Vssrv_top_scr1_pipe_lsu        TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu;
    Vssrv_top_scr1_pipe_idu        TOP__ssrv_top__core__i_pipe_top__i_pipe_idu;
    Vssrv_top_scr1_pipe_ifu        TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu;
    Vssrv_top_scr1_pipe_mprf       TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf;
    Vssrv_top_scr1_pipe_tdu        TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu;
    Vssrv_top_ssrv_mem_model       TOP__ssrv_top__memory_modelling_inst;

    // CONSTRUCTORS
    Vssrv_top__Syms(VerilatedContext* contextp, const char* namep, Vssrv_top* modelp);
    ~Vssrv_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
