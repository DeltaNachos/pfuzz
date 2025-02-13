// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_WRITEBACK_H_
#define VERILATED_VAQUILA_TOP_WRITEBACK_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_writeback final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__stall_i,0,0);
        VL_IN8(__PVT__flush_i,0,0);
        VL_IN8(__PVT__regfile_we_i,0,0);
        VL_IN8(__PVT__rd_addr_i,4,0);
        VL_IN8(__PVT__regfile_input_sel_i,2,0);
        VL_IN8(__PVT__signex_sel_i,0,0);
        VL_IN8(__PVT__addr_alignment_i,1,0);
        VL_IN8(__PVT__csr_we_i,0,0);
        VL_OUT8(__PVT__rd_we_o,0,0);
        VL_OUT8(__PVT__rd_addr_o,4,0);
        VL_IN8(__PVT__sys_jump_i,0,0);
        VL_IN8(__PVT__sys_jump_csr_addr_i,1,0);
        VL_OUT8(__PVT__sys_jump_o,0,0);
        VL_OUT8(__PVT__sys_jump_csr_addr_o,1,0);
        VL_IN8(__PVT__fetch_valid_i,0,0);
        VL_OUT8(__PVT__fetch_valid_o,0,0);
        VL_OUT8(__PVT__csr_we_o,0,0);
        VL_IN8(__PVT__xcpt_valid_i,0,0);
        VL_IN8(__PVT__xcpt_cause_i,3,0);
        VL_OUT8(__PVT__xcpt_valid_o,0,0);
        VL_OUT8(__PVT__xcpt_cause_o,3,0);
        CData/*2:0*/ __PVT__regfile_input_sel_r;
        CData/*0:0*/ __PVT__regfile_we_r;
        CData/*4:0*/ __PVT__rd_addr_r;
        CData/*0:0*/ __PVT__signex_sel_r;
        CData/*1:0*/ __PVT__addr_alignment_r;
        CData/*0:0*/ __PVT__xcpt_valid_r;
        CData/*3:0*/ __PVT__xcpt_cause_r;
        CData/*0:0*/ __PVT__sys_jump_r;
        CData/*1:0*/ __PVT__sys_jump_csr_addr_r;
        CData/*0:0*/ __PVT__fetch_valid_r;
        CData/*0:0*/ __PVT__csr_we_r;
        CData/*0:0*/ __Vdly__regfile_we_r;
        CData/*4:0*/ __Vdly__rd_addr_r;
        CData/*2:0*/ __Vdly__regfile_input_sel_r;
        CData/*0:0*/ __Vdly__signex_sel_r;
        CData/*1:0*/ __Vdly__addr_alignment_r;
        CData/*0:0*/ __Vdly__csr_we_r;
        CData/*0:0*/ __Vdly__sys_jump_r;
        CData/*1:0*/ __Vdly__sys_jump_csr_addr_r;
        CData/*0:0*/ __Vdly__xcpt_valid_r;
        CData/*3:0*/ __Vdly__xcpt_cause_r;
        CData/*0:0*/ __Vdly__fetch_valid_r;
        VL_IN16(__PVT__csr_we_addr_i,11,0);
        VL_OUT16(__PVT__csr_we_addr_o,11,0);
        VL_IN(__PVT__p_data_i,31,0);
        VL_IN(__PVT__csr_we_data_i,31,0);
        VL_IN(__PVT__m_data_i,31,0);
        VL_OUT(__PVT__rd_data_o,31,0);
        VL_IN(__PVT__pc_i,31,0);
        VL_OUT(__PVT__pc_o,31,0);
        VL_OUT(__PVT__csr_we_data_o,31,0);
        VL_IN(__PVT__xcpt_tval_i,31,0);
        VL_OUT(__PVT__xcpt_tval_o,31,0);
        IData/*31:0*/ __PVT__p_data_r;
        IData/*31:0*/ __PVT__m_data_r;
        IData/*31:0*/ __PVT__aligned_data;
        IData/*31:0*/ __PVT__rd_data;
        IData/*31:0*/ __PVT__xcpt_tval_r;
        IData/*31:0*/ __PVT__pc_r;
        IData/*31:0*/ __PVT__csr_we_addr_r;
        IData/*31:0*/ __PVT__csr_we_data_r;
    };
    struct {
        IData/*31:0*/ __Vdly__p_data_r;
        IData/*31:0*/ __Vdly__csr_we_addr_r;
        IData/*31:0*/ __Vdly__csr_we_data_r;
        IData/*31:0*/ __Vdly__xcpt_tval_r;
        IData/*31:0*/ __Vdly__pc_r;
        IData/*31:0*/ __Vdly__m_data_r;
    };

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_writeback(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_writeback();
    VL_UNCOPYABLE(Vaquila_top_writeback);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
