// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_PROGRAM_COUNTER_H_
#define VERILATED_VAQUILA_TOP_PROGRAM_COUNTER_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_program_counter final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__irq_taken_i,0,0);
    VL_IN8(__PVT__stall_i,0,0);
    VL_IN8(__PVT__bpu_branch_hit_i,0,0);
    VL_IN8(__PVT__bpu_branch_decision_i,0,0);
    VL_IN8(__PVT__sys_jump_i,0,0);
    VL_IN8(__PVT__dec_branch_hit_i,0,0);
    VL_IN8(__PVT__dec_branch_decision_i,0,0);
    VL_IN8(__PVT__exe_branch_misprediction_i,0,0);
    VL_IN8(__PVT__exe_branch_taken_i,0,0);
    VL_IN8(__PVT__is_fencei_i,0,0);
    CData/*0:0*/ __PVT__rv32;
    CData/*2:0*/ __PVT__pc_offset;
    VL_IN(__PVT__init_pc_addr_i,31,0);
    VL_IN(__PVT__PC_handler_i,31,0);
    VL_IN(__PVT__bpu_branch_target_addr_i,31,0);
    VL_IN(__PVT__sys_jump_data_i,31,0);
    VL_IN(__PVT__dec_pc_i,31,0);
    VL_IN(__PVT__exe_branch_target_addr_i,31,0);
    VL_IN(__PVT__exe_branch_restore_addr_i,31,0);
    VL_OUT(__PVT__pc_o,31,0);
    IData/*31:0*/ __PVT__pc_r;
    IData/*31:0*/ __PVT__pc_increment;
    IData/*31:0*/ __Vdly__pc_r;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_program_counter(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_program_counter();
    VL_UNCOPYABLE(Vaquila_top_program_counter);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
