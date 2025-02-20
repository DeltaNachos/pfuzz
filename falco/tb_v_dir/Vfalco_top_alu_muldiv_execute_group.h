// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_ALU_MULDIV_EXECUTE_GROUP_H_
#define VERILATED_VFALCO_TOP_ALU_MULDIV_EXECUTE_GROUP_H_  // guard

#include "verilated.h"
class Vfalco_top_ALU;
class Vfalco_top_divider;
class Vfalco_top_fast_mul;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_alu_muldiv_execute_group final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_ALU* __PVT__ALU1;
    Vfalco_top_divider* __PVT__idiv;
    Vfalco_top_fast_mul* imul;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_OUT8(muldiv_busy,0,0);
        CData/*0:0*/ __PVT__instruction_valid;
        CData/*0:0*/ muldiv_ready;
        CData/*0:0*/ muldiv_req;
        CData/*0:0*/ mul_ready;
        CData/*0:0*/ __PVT__mul_result_valid;
        CData/*0:0*/ __PVT__is_mul_instr;
        CData/*1:0*/ __PVT__mul_operation_sel;
        CData/*0:0*/ __PVT__mul_early_wake_up;
        CData/*0:0*/ __PVT__div_req;
        CData/*0:0*/ div_ready;
        CData/*0:0*/ __PVT__div_result_valid;
        CData/*0:0*/ __PVT__is_div_instr;
        CData/*2:0*/ __PVT__div_operation_sel;
        CData/*0:0*/ __PVT__div_req_reg;
        CData/*0:0*/ __PVT__muldiv_running;
        CData/*0:0*/ __PVT__muldiv_result_valid;
        CData/*0:0*/ __PVT__muldiv_BCAST_valid;
        CData/*0:0*/ __PVT__alu_result_valid;
        CData/*0:0*/ __PVT__invalidate_cur_instr;
        CData/*0:0*/ __Vcellinp__ALU1__shift_sel;
        CData/*2:0*/ __Vcellinp__ALU1__operation_sel;
        CData/*1:0*/ __Vcellinp__idiv__operation_sel_i;
        CData/*0:0*/ __Vcellinp__idiv__kill_i;
        CData/*0:0*/ __Vcellinp__idiv__stall_i;
        CData/*1:0*/ __Vcellinp__imul__operation_sel_i;
        CData/*0:0*/ __Vcellinp__imul__kill_i;
        CData/*0:0*/ __Vcellinp__imul__req_i;
        CData/*0:0*/ __Vcellinp__imul__stall_i;
        CData/*0:0*/ __Vfunc_IsBrROBKill__0__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__0__rob_tag;
        CData/*5:0*/ __Vfunc_bypass_network__1__rs_addr;
        CData/*5:0*/ __Vfunc_bypass_network__2__rs_addr;
        CData/*0:0*/ __Vfunc_IsBrROBKill__3__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__3__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__4__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__4__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__5__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__5__rob_tag;
        CData/*2:0*/ __Vdly__div_operation_sel;
        CData/*0:0*/ __Vdly__div_req_reg;
        CData/*0:0*/ __Vdly__muldiv_running;
        CData/*0:0*/ __Vdly__muldiv_busy;
        SData/*14:0*/ __Vfunc_IsBrROBKill__0__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__3__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__4__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__5__branch_recovery_flush;
        IData/*31:0*/ __PVT__rs1_data;
        IData/*31:0*/ __PVT__rs2_data;
        IData/*31:0*/ __PVT__operand_A;
        IData/*31:0*/ __PVT__operand_B;
        IData/*31:0*/ __PVT__alu_result;
        IData/*31:0*/ __PVT__mul_result;
        IData/*31:0*/ __PVT__div_result;
        IData/*31:0*/ __PVT__div_op_A;
        IData/*31:0*/ __PVT__div_op_B;
        IData/*31:0*/ __PVT__muldiv_result;
        IData/*31:0*/ __Vfunc_bypass_network__1__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__1__prf_register_data;
        IData/*31:0*/ __Vfunc_bypass_network__2__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__2__prf_register_data;
        IData/*31:0*/ __Vdly__div_op_A;
    };
    struct {
        IData/*31:0*/ __Vdly__div_op_B;
        QData/*38:0*/ __Vfunc_bypass_network__1__mem_wb;
        QData/*38:0*/ __Vfunc_bypass_network__1__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__1__alu1_wb;
        QData/*38:0*/ __Vfunc_bypass_network__1__muldiv_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__mem_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__alu1_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__muldiv_wb;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_alu_muldiv_execute_group(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_alu_muldiv_execute_group();
    VL_UNCOPYABLE(Vfalco_top_alu_muldiv_execute_group);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
