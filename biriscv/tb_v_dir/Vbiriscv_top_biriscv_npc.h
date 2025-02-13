// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_NPC_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_NPC_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_npc_lfsr;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_npc final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_biriscv_npc_lfsr* __PVT__BRANCH_PREDICTION__DOT__u_lru;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__invalidate_i,0,0);
        VL_IN8(__PVT__branch_request_i,0,0);
        VL_IN8(__PVT__branch_is_taken_i,0,0);
        VL_IN8(__PVT__branch_is_not_taken_i,0,0);
        VL_IN8(__PVT__branch_is_call_i,0,0);
        VL_IN8(__PVT__branch_is_ret_i,0,0);
        VL_IN8(__PVT__branch_is_jmp_i,0,0);
        VL_IN8(__PVT__pc_accept_i,0,0);
        VL_OUT8(__PVT__next_taken_f_o,1,0);
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__pred_taken_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__pred_ntaken_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_valid_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_upper_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_is_call_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_is_ret_w;
        CData/*2:0*/ __PVT__BRANCH_PREDICTION__DOT__ras_index_real_q;
        CData/*2:0*/ __PVT__BRANCH_PREDICTION__DOT__ras_index_real_r;
        CData/*2:0*/ __PVT__BRANCH_PREDICTION__DOT__ras_index_q;
        CData/*2:0*/ __PVT__BRANCH_PREDICTION__DOT__ras_index_r;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__ras_call_pred_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__bht_predict_taken_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_valid_r;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_upper_r;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_is_call_r;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r;
        CData/*4:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_entry_r;
        CData/*4:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
        CData/*4:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_hit_r;
        CData/*0:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_miss_r;
        CData/*2:0*/ __Vdly__BRANCH_PREDICTION__DOT__ras_index_real_q;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v0;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v1;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v2;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v3;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v4;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v5;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v6;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v7;
        CData/*2:0*/ __Vdly__BRANCH_PREDICTION__DOT__ras_index_q;
        CData/*2:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
        CData/*2:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
        CData/*1:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
        CData/*1:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v32;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_target_q__v32;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
        CData/*0:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
        CData/*0:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
        CData/*0:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
        CData/*0:0*/ __Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v33;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
        CData/*0:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
        CData/*0:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
        CData/*4:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
        CData/*0:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
        SData/*8:0*/ __PVT__BRANCH_PREDICTION__DOT__global_history_real_q;
        SData/*8:0*/ __PVT__BRANCH_PREDICTION__DOT__global_history_q;
        SData/*8:0*/ __PVT__BRANCH_PREDICTION__DOT__gshare_wr_entry_w;
        SData/*8:0*/ __PVT__BRANCH_PREDICTION__DOT__gshare_rd_entry_w;
        SData/*8:0*/ __PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w;
        SData/*8:0*/ __PVT__BRANCH_PREDICTION__DOT__bht_rd_entry_w;
        SData/*8:0*/ __Vdly__BRANCH_PREDICTION__DOT__global_history_real_q;
        SData/*8:0*/ __Vdly__BRANCH_PREDICTION__DOT__global_history_q;
        SData/*8:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
        SData/*8:0*/ __Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
        VL_IN(__PVT__branch_source_i,31,0);
        VL_IN(__PVT__branch_pc_i,31,0);
        VL_IN(__PVT__pc_f_i,31,0);
        VL_OUT(__PVT__next_pc_f_o,31,0);
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_next_pc_w;
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__ras_pc_pred_w;
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__i3;
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__i4;
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r;
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__i0;
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__i1;
        IData/*31:0*/ __PVT__BRANCH_PREDICTION__DOT__i2;
        IData/*31:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
        IData/*31:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    };
    struct {
        IData/*31:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
        IData/*31:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v32;
        IData/*31:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
        IData/*31:0*/ __Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v33;
        VlUnpacked<IData/*31:0*/, 8> __PVT__BRANCH_PREDICTION__DOT__ras_stack_q;
        VlUnpacked<CData/*1:0*/, 512> __PVT__BRANCH_PREDICTION__DOT__bht_sat_q;
        VlUnpacked<IData/*31:0*/, 32> __PVT__BRANCH_PREDICTION__DOT__btb_pc_q;
        VlUnpacked<IData/*31:0*/, 32> __PVT__BRANCH_PREDICTION__DOT__btb_target_q;
        VlUnpacked<CData/*0:0*/, 32> __PVT__BRANCH_PREDICTION__DOT__btb_is_call_q;
        VlUnpacked<CData/*0:0*/, 32> __PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q;
        VlUnpacked<CData/*0:0*/, 32> __PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q;
    };

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_npc(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_npc();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_npc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
