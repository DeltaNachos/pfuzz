// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_EXECUTE_H_
#define VERILATED_VAQUILA_TOP_EXECUTE_H_  // guard

#include "verilated.h"
class Vaquila_top_alu;
class Vaquila_top_bcu;
class Vaquila_top_muldiv;


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_execute final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_top_alu* __PVT__ALU;
    Vaquila_top_muldiv* __PVT__MulDiv;
    Vaquila_top_bcu* __PVT__BCU;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__stall_i,0,0);
        VL_IN8(__PVT__flush_i,0,0);
        VL_IN8(__PVT__inputA_sel_i,1,0);
        VL_IN8(__PVT__inputB_sel_i,1,0);
        VL_IN8(__PVT__operation_sel_i,2,0);
        VL_IN8(__PVT__alu_muldiv_sel_i,0,0);
        VL_IN8(__PVT__shift_sel_i,0,0);
        VL_IN8(__PVT__is_branch_i,0,0);
        VL_IN8(__PVT__is_jal_i,0,0);
        VL_IN8(__PVT__is_jalr_i,0,0);
        VL_IN8(__PVT__branch_hit_i,0,0);
        VL_IN8(__PVT__branch_decision_i,0,0);
        VL_IN8(__PVT__regfile_we_i,0,0);
        VL_IN8(__PVT__regfile_input_sel_i,2,0);
        VL_IN8(__PVT__we_i,0,0);
        VL_IN8(__PVT__re_i,0,0);
        VL_IN8(__PVT__dsize_sel_i,1,0);
        VL_IN8(__PVT__signex_sel_i,0,0);
        VL_IN8(__PVT__rd_addr_i,4,0);
        VL_IN8(__PVT__is_fencei_i,0,0);
        VL_IN8(__PVT__is_amo_i,0,0);
        VL_IN8(__PVT__amo_type_i,4,0);
        VL_IN8(__PVT__csr_imm_i,4,0);
        VL_IN8(__PVT__csr_we_i,0,0);
        VL_OUT8(__PVT__is_branch_o,0,0);
        VL_OUT8(__PVT__branch_taken_o,0,0);
        VL_OUT8(__PVT__branch_misprediction_o,0,0);
        VL_OUT8(__PVT__stall_from_exe_o,0,0);
        VL_OUT8(__PVT__we_o,0,0);
        VL_OUT8(__PVT__re_o,0,0);
        VL_OUT8(__PVT__is_fencei_o,0,0);
        VL_OUT8(__PVT__is_amo_o,0,0);
        VL_OUT8(__PVT__amo_type_o,4,0);
        VL_OUT8(__PVT__dsize_sel_o,1,0);
        VL_OUT8(__PVT__regfile_input_sel_o,2,0);
        VL_OUT8(__PVT__regfile_we_o,0,0);
        VL_OUT8(__PVT__rd_addr_o,4,0);
        VL_OUT8(__PVT__csr_we_o,0,0);
        VL_OUT8(__PVT__signex_sel_o,0,0);
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
        CData/*0:0*/ __PVT__compare_result;
        CData/*0:0*/ __PVT__stall_from_muldiv;
        CData/*0:0*/ __PVT__muldiv_ready;
        CData/*2:0*/ __PVT__alu_operation;
        CData/*2:0*/ __PVT__muldiv_operation;
        CData/*0:0*/ __PVT__muldiv_req;
        CData/*2:0*/ __PVT__branch_operation;
        CData/*0:0*/ __Vdly__we_o;
        CData/*0:0*/ __Vdly__re_o;
        CData/*1:0*/ __Vdly__dsize_sel_o;
        CData/*0:0*/ __Vdly__signex_sel_o;
        CData/*2:0*/ __Vdly__regfile_input_sel_o;
        CData/*0:0*/ __Vdly__regfile_we_o;
    };
    struct {
        CData/*4:0*/ __Vdly__rd_addr_o;
        CData/*0:0*/ __Vdly__is_fencei_o;
        CData/*0:0*/ __Vdly__is_amo_o;
        CData/*4:0*/ __Vdly__amo_type_o;
        CData/*0:0*/ __Vdly__sys_jump_o;
        CData/*1:0*/ __Vdly__sys_jump_csr_addr_o;
        CData/*0:0*/ __Vdly__xcpt_valid_o;
        CData/*3:0*/ __Vdly__xcpt_cause_o;
        CData/*0:0*/ __Vdly__fetch_valid_o;
        CData/*0:0*/ __Vdly__csr_we_o;
        VL_IN16(__PVT__csr_we_addr_i,11,0);
        VL_OUT16(__PVT__csr_we_addr_o,11,0);
        SData/*11:0*/ __Vdly__csr_we_addr_o;
        VL_IN(__PVT__imm_i,31,0);
        VL_IN(__PVT__rs1_data_i,31,0);
        VL_IN(__PVT__rs2_data_i,31,0);
        VL_IN(__PVT__csr_data_i,31,0);
        VL_OUT(__PVT__branch_restore_pc_o,31,0);
        VL_OUT(__PVT__branch_target_addr_o,31,0);
        VL_OUT(__PVT__rs2_data_o,31,0);
        VL_OUT(__PVT__addr_o,31,0);
        VL_OUT(__PVT__p_data_o,31,0);
        VL_OUT(__PVT__csr_we_data_o,31,0);
        VL_IN(__PVT__pc_i,31,0);
        VL_OUT(__PVT__pc_o,31,0);
        VL_IN(__PVT__xcpt_tval_i,31,0);
        VL_OUT(__PVT__xcpt_tval_o,31,0);
        IData/*31:0*/ __PVT__inputA;
        IData/*31:0*/ __PVT__inputB;
        IData/*31:0*/ __PVT__alu_result;
        IData/*31:0*/ __PVT__muldiv_result;
        IData/*31:0*/ __PVT__result;
        IData/*31:0*/ __PVT__mem_addr;
        IData/*31:0*/ __PVT__csr_inputA;
        IData/*31:0*/ __PVT__csr_inputB;
        IData/*31:0*/ __PVT__csr_update_data;
        IData/*31:0*/ __Vdly__rs2_data_o;
        IData/*31:0*/ __Vdly__addr_o;
        IData/*31:0*/ __Vdly__xcpt_tval_o;
        IData/*31:0*/ __Vdly__pc_o;
        IData/*31:0*/ __Vdly__csr_we_data_o;
        IData/*31:0*/ __Vdly__p_data_o;
    };

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_execute(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_execute();
    VL_UNCOPYABLE(Vaquila_top_execute);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
