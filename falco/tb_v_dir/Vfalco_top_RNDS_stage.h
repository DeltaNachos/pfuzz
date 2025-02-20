// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_RNDS_STAGE_H_
#define VERILATED_VFALCO_TOP_RNDS_STAGE_H_  // guard

#include "verilated.h"
class Vfalco_top_busy_list;
class Vfalco_top_last_fetch_store_table;
class Vfalco_top_prf_freelist;
class Vfalco_top_register_map_table;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_RNDS_stage final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_prf_freelist* freelist;
    Vfalco_top_register_map_table* Map_Table;
    Vfalco_top_busy_list* Busy_list;
    Vfalco_top_last_fetch_store_table* LFST;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        CData/*0:0*/ __PVT__wait_csr;
        CData/*0:0*/ __PVT__reg_rename_instr0_req;
        CData/*0:0*/ __PVT__reg_rename_instr1_req;
        CData/*0:0*/ __PVT__instr0_ready_alloc;
        CData/*0:0*/ __PVT__instr1_ready_alloc;
        CData/*0:0*/ __PVT__FL_instr0_check_top;
        CData/*0:0*/ __PVT__FL_instr1_check_top;
        CData/*0:0*/ __PVT__instr0_pre_req;
        CData/*0:0*/ __PVT__instr1_pre_req;
        CData/*0:0*/ __PVT__instr0_is_mem_op;
        CData/*0:0*/ __PVT__instr1_is_mem_op;
        CData/*5:0*/ __PVT__instr0_rd_new_prf;
        CData/*5:0*/ __PVT__instr1_rd_new_prf;
        CData/*5:0*/ __PVT__instr0_rd_prf;
        CData/*5:0*/ __PVT__instr1_rd_prf;
        CData/*5:0*/ __PVT__instr0_rd_stale_prf;
        CData/*5:0*/ __PVT__instr1_rd_stale_prf;
        CData/*5:0*/ __PVT__instr0_rs1_prf;
        CData/*5:0*/ __PVT__instr1_rs1_prf;
        CData/*5:0*/ __PVT__instr0_rs2_prf;
        CData/*5:0*/ __PVT__instr1_rs2_prf;
        CData/*0:0*/ __PVT__instr0_rs1_reg_ready;
        CData/*0:0*/ __PVT__instr0_rs2_reg_ready;
        CData/*0:0*/ __PVT__instr1_rs1_reg_ready;
        CData/*0:0*/ __PVT__instr1_rs2_reg_ready;
        CData/*0:0*/ __PVT__instr0_rs1_operand_ready;
        CData/*0:0*/ __PVT__instr0_rs2_operand_ready;
        CData/*0:0*/ __PVT__instr1_rs1_operand_ready;
        CData/*0:0*/ __PVT__instr1_rs2_operand_ready;
        CData/*0:0*/ __PVT__pre_int_pack0_valid;
        CData/*0:0*/ __PVT__pre_int_pack1_valid;
        CData/*0:0*/ __PVT__pre_mem_pack0_valid;
        CData/*0:0*/ __PVT__pre_mem_pack1_valid;
        CData/*0:0*/ __PVT__pre_int_instr0_rs1_ready;
        CData/*0:0*/ __PVT__pre_int_instr0_rs2_ready;
        CData/*0:0*/ __PVT__pre_int_instr1_rs1_ready;
        CData/*0:0*/ __PVT__pre_int_instr1_rs2_ready;
        CData/*0:0*/ __PVT__pre_mem_instr0_rs1_ready;
        CData/*0:0*/ __PVT__pre_mem_instr0_rs2_ready;
        CData/*0:0*/ __PVT__pre_mem_instr1_rs1_ready;
        CData/*0:0*/ __PVT__pre_mem_instr1_rs2_ready;
        CData/*6:0*/ store_counter;
        CData/*6:0*/ store_next_counter;
        CData/*6:0*/ __PVT__instr0_store_id;
        CData/*6:0*/ __PVT__instr1_store_id;
        CData/*0:0*/ instr0_predict_result;
        CData/*0:0*/ instr1_predict_result;
        CData/*7:0*/ instr0_store_set_id;
        CData/*7:0*/ instr1_store_set_id;
        CData/*0:0*/ __PVT__violation;
        CData/*0:0*/ __PVT__device_violation;
        CData/*5:0*/ __Vcellinp__freelist__instr1_rob_tag;
        CData/*5:0*/ __Vcellinp__freelist__instr0_rob_tag;
        CData/*5:0*/ __Vcellinp__freelist__recovery_target_rob_tag;
        CData/*0:0*/ __Vcellinp__freelist__recovery_no_copy;
        CData/*0:0*/ __Vcellinp__freelist__recovery_rollback;
        CData/*0:0*/ __Vcellinp__freelist__recovery_flush;
        CData/*5:0*/ __Vcellinp__freelist__push_stale_rd1;
        CData/*5:0*/ __Vcellinp__freelist__push_stale_rd0;
        CData/*0:0*/ __Vcellinp__freelist__push_stale_rd1_valid;
        CData/*0:0*/ __Vcellinp__freelist__push_stale_rd0_valid;
        CData/*5:0*/ __Vcellinp__Map_Table__instr1_rob_tag;
    };
    struct {
        CData/*5:0*/ __Vcellinp__Map_Table__instr0_rob_tag;
        CData/*5:0*/ __Vcellinp__Map_Table__recovery_target_rob_tag;
        CData/*0:0*/ __Vcellinp__Map_Table__recovery_no_copy;
        CData/*0:0*/ __Vcellinp__Map_Table__recovery_flush;
        CData/*4:0*/ __Vcellinp__Map_Table__instr1_rs2;
        CData/*4:0*/ __Vcellinp__Map_Table__instr1_rs1;
        CData/*4:0*/ __Vcellinp__Map_Table__instr1_rd;
        CData/*4:0*/ __Vcellinp__Map_Table__instr0_rs2;
        CData/*4:0*/ __Vcellinp__Map_Table__instr0_rs1;
        CData/*4:0*/ __Vcellinp__Map_Table__instr0_rd;
        CData/*0:0*/ __Vcellinp__Map_Table__recovery_map_1_valid;
        CData/*0:0*/ __Vcellinp__Map_Table__recovery_map_0_valid;
        CData/*5:0*/ __Vcellinp__Map_Table__recovery_map_prf_1;
        CData/*4:0*/ __Vcellinp__Map_Table__recovery_map_arf_1;
        CData/*5:0*/ __Vcellinp__Map_Table__recovery_map_prf_0;
        CData/*4:0*/ __Vcellinp__Map_Table__recovery_map_arf_0;
        CData/*0:0*/ __Vcellinp__Map_Table__recovery_mode;
        CData/*5:0*/ __Vcellinp__Busy_list__int_issue1_rd_prf;
        CData/*0:0*/ __Vcellinp__Busy_list__int_issue1_rd_valid;
        CData/*5:0*/ __Vcellinp__Busy_list__int_issue0_rd_prf;
        CData/*0:0*/ __Vcellinp__Busy_list__int_issue0_rd_valid;
        CData/*6:0*/ __Vcellinp__Busy_list__BCAST_load;
        CData/*6:0*/ __Vcellinp__Busy_list__BCAST_muldiv;
        CData/*6:0*/ __Vcellinp__Busy_list__BCAST_ALU_1;
        CData/*6:0*/ __Vcellinp__Busy_list__BCAST_alu_csr_bc;
        CData/*7:0*/ __Vcellinp__LFST__issue_store_set_id;
        CData/*6:0*/ __Vcellinp__LFST__issue_store_id;
        CData/*0:0*/ __Vcellinp__LFST__issue_store;
        CData/*7:0*/ __Vcellinp__LFST__instr1_store_set_id;
        CData/*7:0*/ __Vcellinp__LFST__instr0_store_set_id;
        CData/*0:0*/ __Vcellinp__LFST__instr1_is_store;
        CData/*0:0*/ __Vcellinp__LFST__instr0_is_store;
        CData/*0:0*/ __Vfunc_IsBrROBKill__0__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__0__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__1__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__1__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__2__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__2__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__3__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__3__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__4__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__4__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__5__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__5__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__6__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__6__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__7__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__7__rob_tag;
        CData/*0:0*/ __Vdly__wait_csr;
        CData/*6:0*/ __Vdly__store_counter;
        SData/*10:0*/ __PVT__recovery_insrt0_pc;
        SData/*10:0*/ __PVT__recovery_insrt1_pc;
        SData/*10:0*/ __PVT__device_violation_pc;
        SData/*10:0*/ __Vcellinp__LFST__instr1_pc;
        SData/*10:0*/ __Vcellinp__LFST__instr0_pc;
        SData/*14:0*/ __Vfunc_IsBrROBKill__0__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__1__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__2__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__3__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__4__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__5__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__6__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__7__branch_recovery_flush;
        VlWide<7>/*204:0*/ __PVT__pre_int_instr0_pack;
    };
    struct {
        VlWide<7>/*204:0*/ __PVT__pre_int_instr1_pack;
        VlWide<5>/*128:0*/ __PVT__pre_mem_instr0_pack;
        VlWide<5>/*128:0*/ __PVT__pre_mem_instr1_pack;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_RNDS_stage(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_RNDS_stage();
    VL_UNCOPYABLE(Vfalco_top_RNDS_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
