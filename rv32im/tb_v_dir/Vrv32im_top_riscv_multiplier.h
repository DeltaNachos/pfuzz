// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_MULTIPLIER_H_
#define VERILATED_VRV32IM_TOP_RISCV_MULTIPLIER_H_  // guard

#include "verilated.h"


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_multiplier final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__opcode_valid_i,0,0);
    VL_IN8(__PVT__opcode_invalid_i,0,0);
    VL_IN8(__PVT__opcode_rd_idx_i,4,0);
    VL_IN8(__PVT__opcode_ra_idx_i,4,0);
    VL_IN8(__PVT__opcode_rb_idx_i,4,0);
    VL_IN8(__PVT__hold_i,0,0);
    CData/*0:0*/ __PVT__mulhi_sel_e1_q;
    CData/*0:0*/ __PVT__mult_inst_w;
    CData/*0:0*/ __Vdly__mulhi_sel_e1_q;
    VL_IN(__PVT__opcode_opcode_i,31,0);
    VL_IN(__PVT__opcode_pc_i,31,0);
    VL_IN(__PVT__opcode_ra_operand_i,31,0);
    VL_IN(__PVT__opcode_rb_operand_i,31,0);
    VL_OUT(__PVT__writeback_value_o,31,0);
    IData/*31:0*/ __PVT__result_e2_q;
    IData/*31:0*/ __PVT__result_e3_q;
    VlWide<3>/*64:0*/ __PVT__mult_result_w;
    IData/*31:0*/ __PVT__result_r;
    IData/*31:0*/ __Vdly__result_e2_q;
    IData/*31:0*/ __Vdly__result_e3_q;
    QData/*32:0*/ __PVT__operand_a_e1_q;
    QData/*32:0*/ __PVT__operand_b_e1_q;
    QData/*32:0*/ __PVT__operand_b_r;
    QData/*32:0*/ __PVT__operand_a_r;
    QData/*32:0*/ __Vdly__operand_a_e1_q;
    QData/*32:0*/ __Vdly__operand_b_e1_q;

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_multiplier(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_multiplier();
    VL_UNCOPYABLE(Vrv32im_top_riscv_multiplier);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
