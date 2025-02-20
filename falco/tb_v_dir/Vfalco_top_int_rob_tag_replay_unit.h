// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_INT_ROB_TAG_REPLAY_UNIT_H_
#define VERILATED_VFALCO_TOP_INT_ROB_TAG_REPLAY_UNIT_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_int_rob_tag_replay_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__recovery_stall,0,0);
        VL_IN8(__PVT__load_wake_up_failed_stall,0,0);
        VL_IN8(__PVT__load_wake_up_predict_failed,0,0);
        VL_IN8(__PVT__load_depend_replay,0,0);
        VL_IN8(__PVT__replay_muldiv_stall,0,0);
        VL_IN8(__PVT__cur_commit_tag,5,0);
        VL_IN8(__PVT__cur_lsu_tag,5,0);
        VL_IN8(__PVT__issue_instr0_valid,0,0);
        VL_IN8(__PVT__issue_instr1_valid,0,0);
        VL_OUT8(__PVT__replay_issue_first,0,0);
        VL_OUT8(__PVT__wake_up_stall_issue_instr0_valid,0,0);
        VL_OUT8(__PVT__wake_up_stall_issue_instr1_valid,0,0);
        VL_OUT8(__PVT__replay_issue_instr0_valid,0,0);
        VL_OUT8(__PVT__replay_issue_instr1_valid,0,0);
        CData/*0:0*/ __PVT__buffer_idx0_p0_valid;
        CData/*0:0*/ __PVT__buffer_idx0_p1_valid;
        CData/*0:0*/ __PVT__buffer_idx1_p0_valid;
        CData/*0:0*/ __PVT__buffer_idx1_p1_valid;
        CData/*0:0*/ __PVT__buffer_idx0_p0_is_critcal;
        CData/*0:0*/ __PVT__buffer_idx0_p1_is_critcal;
        CData/*0:0*/ __PVT__buffer_idx1_p0_is_critcal;
        CData/*0:0*/ __PVT__buffer_idx1_p1_is_critcal;
        CData/*0:0*/ __PVT__replay_idx0_issue_valid;
        CData/*0:0*/ __PVT__replay_idx1_issue_valid;
        CData/*0:0*/ __PVT__wake_up_replay_select;
        CData/*1:0*/ __PVT__replay_issue_first_counter;
        CData/*0:0*/ __PVT__replay_drop_first;
        CData/*0:0*/ __Vfunc_InstrIsCritcal__0__Vfuncout;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__0__instr_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__0__commit_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__0__lsu_rob_tag;
        CData/*0:0*/ __Vfunc_InstrIsCritcal__1__Vfuncout;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__1__instr_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__1__commit_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__1__lsu_rob_tag;
        CData/*0:0*/ __Vfunc_InstrIsCritcal__2__Vfuncout;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__2__instr_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__2__commit_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__2__lsu_rob_tag;
        CData/*0:0*/ __Vfunc_InstrIsCritcal__3__Vfuncout;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__3__instr_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__3__commit_rob_tag;
        CData/*5:0*/ __Vfunc_InstrIsCritcal__3__lsu_rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__4__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__4__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__5__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__5__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__6__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__6__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__7__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__7__rob_tag;
        CData/*1:0*/ __Vdly__replay_issue_first_counter;
        CData/*0:0*/ __Vdly__wake_up_replay_select;
        CData/*0:0*/ __Vdly__replay_drop_first;
        CData/*0:0*/ __Vdly__buffer_idx0_p0_valid;
        CData/*0:0*/ __Vdly__buffer_idx1_p0_valid;
        CData/*0:0*/ __Vdly__buffer_idx0_p1_valid;
        CData/*0:0*/ __Vdly__buffer_idx1_p1_valid;
        VL_IN16(__PVT__recovery_flush_BCAST,14,0);
        SData/*14:0*/ __Vfunc_IsBrROBKill__4__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__5__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__6__branch_recovery_flush;
    };
    struct {
        SData/*14:0*/ __Vfunc_IsBrROBKill__7__branch_recovery_flush;
        VL_INW(__PVT__issue_instr0_pack,204,0,7);
        VL_INW(__PVT__issue_instr1_pack,204,0,7);
        VL_OUTW(__PVT__wake_up_stall_issue_instr0_pack,204,0,7);
        VL_OUTW(__PVT__wake_up_stall_issue_instr1_pack,204,0,7);
        VL_OUTW(__PVT__replay_issue_instr0_pack,204,0,7);
        VL_OUTW(__PVT__replay_issue_instr1_pack,204,0,7);
        VlWide<7>/*204:0*/ __PVT__replay_buffer_idx0_p0;
        VlWide<7>/*204:0*/ __PVT__replay_buffer_idx0_p1;
        VlWide<7>/*204:0*/ __PVT__replay_buffer_idx1_p0;
        VlWide<7>/*204:0*/ __PVT__replay_buffer_idx1_p1;
        VlWide<7>/*204:0*/ __PVT__replay_issue_buffer_idx0;
        VlWide<7>/*204:0*/ __PVT__replay_issue_buffer_idx1;
        VlWide<7>/*204:0*/ __Vdly__replay_buffer_idx0_p0;
        VlWide<7>/*204:0*/ __Vdly__replay_buffer_idx1_p0;
        VlWide<7>/*204:0*/ __Vdly__replay_buffer_idx0_p1;
        VlWide<7>/*204:0*/ __Vdly__replay_buffer_idx1_p1;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_int_rob_tag_replay_unit(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_int_rob_tag_replay_unit();
    VL_UNCOPYABLE(Vfalco_top_int_rob_tag_replay_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
