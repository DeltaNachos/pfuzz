// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_INT_IQ_CTR_ROB_TAG_BALANCE_SELECTOR_H_
#define VERILATED_VFALCO_TOP_INT_IQ_CTR_ROB_TAG_BALANCE_SELECTOR_H_  // guard

#include "verilated.h"
class Vfalco_top_Picker8_1;
class Vfalco_top_Picker8_2;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_int_iq_ctr_rob_tag_balance_selector final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_Picker8_2* __PVT__alu_picker;
    Vfalco_top_Picker8_1* __PVT__control_picker;
    Vfalco_top_Picker8_1* __PVT__muldiv_picker;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__dispatch_slot_idx0,2,0);
    VL_IN8(__PVT__dispatch_slot_idx1,2,0);
    VL_IN8(__PVT__dispatch_instr0_valid,0,0);
    VL_IN8(__PVT__dispatch_instr1_valid,0,0);
    VL_IN8(__PVT__muldiv_busy,0,0);
    VL_IN8(__PVT__icache_miss,0,0);
    VL_IN8(__PVT__recovery_flush,0,0);
    VL_IN8(__PVT__non_posion_issue,0,0);
    VL_IN8(__PVT__replay_issue_first,0,0);
    VL_IN8(__PVT__issue_replay,0,0);
    VL_IN8(__PVT__branch_miss_flush,0,0);
    VL_IN8(__PVT__load_wake_up_kill,0,0);
    VL_IN8(__PVT__replay_issue_muldiv,0,0);
    VL_OUT8(__PVT__muldiv_issuable,0,0);
    VL_OUT8(__PVT__issue_slot_idx0,2,0);
    VL_OUT8(__PVT__issue_slot_idx1,2,0);
    VL_OUT8(__PVT__issue_slot_idx0_valid,0,0);
    VL_OUT8(__PVT__issue_slot_idx1_valid,0,0);
    CData/*0:0*/ __PVT__issue_lock;
    CData/*2:0*/ __PVT__issue_alu_op_slot_idx0;
    CData/*2:0*/ __PVT__issue_alu_op_slot_idx1;
    CData/*2:0*/ __PVT__issue_control_op_slot;
    CData/*2:0*/ __PVT__issue_muldiv_op_slot;
    CData/*0:0*/ __PVT__issue_alu_op_slot_idx0_valid;
    CData/*0:0*/ __PVT__issue_alu_op_slot_idx1_valid;
    CData/*0:0*/ __PVT__issue_control_op_slot_valid;
    CData/*0:0*/ __PVT__issue_muldiv_op_slot_valid;
    CData/*1:0*/ __PVT__issue_muldiv_counter;
    CData/*1:0*/ __Vdly__issue_muldiv_counter;
    CData/*3:0*/ __VdlyVal__age_counter__v0;
    CData/*0:0*/ __VdlySet__age_counter__v0;
    CData/*3:0*/ __VdlyVal__age_counter__v1;
    CData/*0:0*/ __VdlySet__age_counter__v1;
    CData/*3:0*/ __VdlyVal__age_counter__v2;
    CData/*0:0*/ __VdlySet__age_counter__v2;
    CData/*3:0*/ __VdlyVal__age_counter__v3;
    CData/*0:0*/ __VdlySet__age_counter__v3;
    CData/*3:0*/ __VdlyVal__age_counter__v4;
    CData/*0:0*/ __VdlySet__age_counter__v4;
    CData/*3:0*/ __VdlyVal__age_counter__v5;
    CData/*0:0*/ __VdlySet__age_counter__v5;
    CData/*3:0*/ __VdlyVal__age_counter__v6;
    CData/*0:0*/ __VdlySet__age_counter__v6;
    CData/*3:0*/ __VdlyVal__age_counter__v7;
    CData/*0:0*/ __VdlySet__age_counter__v7;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__unnamedblk2__DOT__i;
    IData/*31:0*/ __PVT__unnamedblk3__DOT__i;
    VL_IN8(__PVT__entry_valid[8],0,0);
    VL_IN8(__PVT__entry_ready[8],0,0);
    VL_IN8(__PVT__entry_is_ctrl_instr[8],0,0);
    VL_IN8(__PVT__entry_is_csr_instr[8],0,0);
    VL_IN8(__PVT__entry_is_muldiv[8],0,0);
    VL_IN8(__PVT__entry_is_critical[8],0,0);
    VlUnpacked<CData/*3:0*/, 8> age_counter;
    VlUnpacked<CData/*0:0*/, 8> __PVT__entry_alu_valid;
    VlUnpacked<CData/*0:0*/, 8> __PVT__entry_muldiv_valid;
    VlUnpacked<CData/*0:0*/, 8> __PVT__entry_ctrl_valid;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_int_iq_ctr_rob_tag_balance_selector(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_int_iq_ctr_rob_tag_balance_selector();
    VL_UNCOPYABLE(Vfalco_top_int_iq_ctr_rob_tag_balance_selector);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
