// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_BTB_H_
#define VERILATED_VFALCO_TOP_BTB_H_  // guard

#include "verilated.h"
class Vfalco_top_distri_ram2r1w__E200_A9_D15;
class Vfalco_top_distri_ram2r1w__E200_A9_D1e;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_BTB final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_distri_ram2r1w__E200_A9_D1e* __PVT__direct_mapped_cache_target;
    Vfalco_top_distri_ram2r1w__E200_A9_D15* __PVT__direct_mapped_cache_tag;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__branch_valid,0,0);
    VL_IN8(__PVT__branch_taken,0,0);
    VL_OUT8(__PVT__instr0_btb_hit,0,0);
    VL_OUT8(__PVT__instr1_btb_hit,0,0);
    CData/*0:0*/ __PVT__update_btb_entry;
    CData/*0:0*/ __VdlySet__btb_entry_valids__v0;
    SData/*8:0*/ __PVT__update_entry_addr;
    SData/*8:0*/ __PVT__instr0_read_addr;
    SData/*8:0*/ __PVT__instr1_read_addr;
    SData/*8:0*/ __VdlyDim0__btb_entry_valids__v0;
    VL_IN(__PVT__IF_instr0_pc,31,0);
    VL_IN(__PVT__IF_instr1_pc,31,0);
    VL_IN(__PVT__branch_addr,31,0);
    VL_IN(__PVT__branch_target_addr,31,0);
    VL_OUT(__PVT__instr0_btb_target_addr,31,0);
    VL_OUT(__PVT__instr1_btb_target_addr,31,0);
    IData/*29:0*/ __PVT__new_btb_cache_target_addr;
    IData/*20:0*/ __PVT__new_btb_cache_tag;
    IData/*20:0*/ __PVT__instr0_read_btb_tag;
    IData/*20:0*/ __PVT__instr1_read_btb_tag;
    IData/*20:0*/ __PVT__instr0_input_pc_tag;
    IData/*20:0*/ __PVT__instr1_input_pc_tag;
    IData/*31:0*/ __PVT__instr0_btb_trunc_target_addr;
    IData/*31:0*/ __PVT__instr1_btb_trunc_target_addr;
    IData/*29:0*/ __Vcellout__direct_mapped_cache_target__data_1_o;
    IData/*29:0*/ __Vcellout__direct_mapped_cache_target__data_0_o;
    IData/*31:0*/ __PVT__i;
    VlUnpacked<CData/*0:0*/, 512> __PVT__btb_entry_valids;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_BTB(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_BTB();
    VL_UNCOPYABLE(Vfalco_top_BTB);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
