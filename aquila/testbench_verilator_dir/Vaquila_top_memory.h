// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_MEMORY_H_
#define VERILATED_VAQUILA_TOP_MEMORY_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_memory final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__dsize_sel_i,1,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__re_i,0,0);
    VL_OUT8(__PVT__byte_sel_o,3,0);
    VL_OUT8(__PVT__mem_align_exception_o,0,0);
    VL_IN8(__PVT__sys_jump_i,0,0);
    VL_IN8(__PVT__sys_jump_csr_addr_i,1,0);
    VL_OUT8(__PVT__sys_jump_o,0,0);
    VL_OUT8(__PVT__sys_jump_csr_addr_o,1,0);
    VL_IN8(__PVT__fetch_valid_i,0,0);
    VL_OUT8(__PVT__fetch_valid_o,0,0);
    VL_IN8(__PVT__xcpt_valid_i,0,0);
    VL_IN8(__PVT__xcpt_cause_i,3,0);
    VL_OUT8(__PVT__xcpt_valid_o,0,0);
    VL_OUT8(__PVT__xcpt_cause_o,3,0);
    VL_IN(__PVT__mem_addr_i,31,0);
    VL_IN(__PVT__unaligned_data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    VL_IN(__PVT__pc_i,31,0);
    VL_OUT(__PVT__pc_o,31,0);
    VL_IN(__PVT__xcpt_tval_i,31,0);
    VL_OUT(__PVT__xcpt_tval_o,31,0);

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_memory(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_memory();
    VL_UNCOPYABLE(Vaquila_top_memory);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
