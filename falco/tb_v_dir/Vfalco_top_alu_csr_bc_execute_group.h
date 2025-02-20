// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_ALU_CSR_BC_EXECUTE_GROUP_H_
#define VERILATED_VFALCO_TOP_ALU_CSR_BC_EXECUTE_GROUP_H_  // guard

#include "verilated.h"
class Vfalco_top_ALU;
class Vfalco_top_branch_unit;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_alu_csr_bc_execute_group final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_ALU* __PVT__ALU0;
    Vfalco_top_branch_unit* __PVT__BCU;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*0:0*/ __PVT__instruction_valid;
    CData/*0:0*/ __PVT__csr_result_valid;
    CData/*0:0*/ __PVT__alu_result_valid;
    CData/*0:0*/ __PVT__is_control_instruction;
    CData/*2:0*/ __PVT__alu_operation;
    CData/*0:0*/ __PVT__branch_result_valid;
    CData/*0:0*/ __PVT__branch_taken;
    CData/*0:0*/ __PVT__compare_result;
    CData/*0:0*/ __PVT__branch_misprediction;
    CData/*0:0*/ __PVT__is_branch_instruction;
    CData/*0:0*/ __PVT__invalidate_current_instr;
    CData/*0:0*/ __Vcellinp__ALU0__shift_sel;
    CData/*2:0*/ __Vcellinp__BCU__operation_sel;
    CData/*0:0*/ __Vfunc_IsBrROBKill__0__Vfuncout;
    CData/*5:0*/ __Vfunc_IsBrROBKill__0__rob_tag;
    CData/*5:0*/ __Vfunc_bypass_network__1__rs_addr;
    CData/*5:0*/ __Vfunc_bypass_network__2__rs_addr;
    SData/*14:0*/ __Vfunc_IsBrROBKill__0__branch_recovery_flush;
    IData/*31:0*/ __PVT__rs1_data;
    IData/*31:0*/ __PVT__rs2_data;
    IData/*31:0*/ __PVT__operand_A;
    IData/*31:0*/ __PVT__operand_B;
    IData/*31:0*/ __PVT__alu_result;
    IData/*31:0*/ __PVT__csr_inputA;
    IData/*31:0*/ __PVT__csr_inputB;
    IData/*31:0*/ __PVT__csr_update_data;
    IData/*31:0*/ __PVT__branch_target_addr;
    IData/*31:0*/ __PVT__branch_restore_pc;
    IData/*31:0*/ __Vfunc_bypass_network__1__Vfuncout;
    IData/*31:0*/ __Vfunc_bypass_network__1__prf_register_data;
    IData/*31:0*/ __Vfunc_bypass_network__2__Vfuncout;
    IData/*31:0*/ __Vfunc_bypass_network__2__prf_register_data;
    QData/*38:0*/ __Vfunc_bypass_network__1__mem_wb;
    QData/*38:0*/ __Vfunc_bypass_network__1__alu_csr_wb;
    QData/*38:0*/ __Vfunc_bypass_network__1__alu1_wb;
    QData/*38:0*/ __Vfunc_bypass_network__1__muldiv_wb;
    QData/*38:0*/ __Vfunc_bypass_network__2__mem_wb;
    QData/*38:0*/ __Vfunc_bypass_network__2__alu_csr_wb;
    QData/*38:0*/ __Vfunc_bypass_network__2__alu1_wb;
    QData/*38:0*/ __Vfunc_bypass_network__2__muldiv_wb;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_alu_csr_bc_execute_group(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_alu_csr_bc_execute_group();
    VL_UNCOPYABLE(Vfalco_top_alu_csr_bc_execute_group);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
