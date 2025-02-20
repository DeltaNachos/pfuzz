// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_IF_STAGE_H_
#define VERILATED_VFALCO_TOP_IF_STAGE_H_  // guard

#include "verilated.h"
class Vfalco_top_BTB;
class Vfalco_top_gshare_branch_predictor;
class Vfalco_top_program_counter;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_IF_stage final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_program_counter* PC;
    Vfalco_top_BTB* __PVT__Branch_target_buffer;
    Vfalco_top_gshare_branch_predictor* __PVT__branch_predictor;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*0:0*/ __PVT__pc_instr1_valid;
    CData/*0:0*/ __PVT__instr0_btb_hit;
    CData/*0:0*/ __PVT__instr1_btb_hit;
    CData/*0:0*/ __PVT__predict_taken;
    CData/*0:0*/ __PVT__instr0_predict_taken;
    CData/*0:0*/ __PVT__instr1_predict_taken;
    CData/*0:0*/ __PVT__PrMiss_dly;
    CData/*0:0*/ __Vcellinp__PC__branch_miss_first;
    CData/*0:0*/ __Vcellinp__PC__store_set_violation;
    CData/*0:0*/ __Vcellinp__PC__predict_taken;
    CData/*0:0*/ __Vcellinp__PC__exe_branch_PrMiss;
    CData/*0:0*/ __Vcellinp__PC__stall;
    CData/*0:0*/ __Vcellinp__Branch_target_buffer__branch_taken;
    CData/*0:0*/ __Vcellinp__Branch_target_buffer__branch_valid;
    CData/*0:0*/ __Vcellinp__branch_predictor__branch_miss_first;
    CData/*0:0*/ __Vcellinp__branch_predictor__store_set_violation;
    CData/*0:0*/ __Vcellinp__branch_predictor__exe_cond_miss_prediction;
    CData/*0:0*/ __Vcellinp__branch_predictor__exe_cond_branch_taken;
    CData/*0:0*/ __Vcellinp__branch_predictor__exe_cond_valid;
    CData/*0:0*/ __Vcellinp__branch_predictor__cache_hit;
    CData/*0:0*/ __Vcellinp__branch_predictor__IF_instr1_btb_hit;
    CData/*0:0*/ __PVT__IF_stall_delay;
    CData/*0:0*/ __PVT__IF_flush_delay;
    CData/*0:0*/ __Vdly__PrMiss_dly;
    CData/*0:0*/ __Vdly__IF_stall_delay;
    CData/*0:0*/ __Vdly__IF_flush_delay;
    SData/*9:0*/ __PVT__current_instr0_BHSR;
    SData/*9:0*/ __PVT__current_instr1_BHSR;
    SData/*9:0*/ __Vcellinp__branch_predictor__lsu_bhsr;
    SData/*9:0*/ __Vcellinp__branch_predictor__exe_cond_bhsr;
    VL_IN(__PVT__init_pc,31,0);
    VL_OUT(__PVT__instr0_predict_pc,31,0);
    VL_OUT(__PVT__instr1_predict_pc,31,0);
    IData/*31:0*/ __PVT__instr0_pc;
    IData/*31:0*/ __PVT__instr1_pc;
    IData/*31:0*/ __PVT__instr0_btb_target_addr;
    IData/*31:0*/ __PVT__instr1_btb_target_addr;
    IData/*31:0*/ __PVT__next_predict_pc;
    IData/*31:0*/ __Vcellinp__PC__store_set_pc;
    IData/*31:0*/ __Vcellinp__PC__exe_branch_target_addr;
    IData/*31:0*/ __Vcellinp__Branch_target_buffer__branch_target_addr;
    IData/*31:0*/ __Vcellinp__Branch_target_buffer__branch_addr;
    IData/*31:0*/ __Vcellinp__branch_predictor__exe_cond_branch_addr;
    IData/*31:0*/ __PVT__instr0_delay;
    IData/*31:0*/ __PVT__instr1_delay;
    IData/*31:0*/ __Vdly__instr0_predict_pc;
    IData/*31:0*/ __Vdly__instr0_delay;
    IData/*31:0*/ __Vdly__instr1_delay;
    VL_OUTW(__PVT__instruction_req,64,0,3);
    VL_INW(__PVT__instruction_resp,66,0,3);
    VlWide<3>/*64:0*/ __Vdly__instruction_req;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_IF_stage(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_IF_stage();
    VL_UNCOPYABLE(Vfalco_top_IF_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
