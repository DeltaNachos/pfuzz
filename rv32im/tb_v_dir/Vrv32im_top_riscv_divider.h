// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_DIVIDER_H_
#define VERILATED_VRV32IM_TOP_RISCV_DIVIDER_H_  // guard

#include "verilated.h"


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_divider final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__opcode_valid_i,0,0);
    VL_IN8(__PVT__opcode_invalid_i,0,0);
    VL_IN8(__PVT__opcode_rd_idx_i,4,0);
    VL_IN8(__PVT__opcode_ra_idx_i,4,0);
    VL_IN8(__PVT__opcode_rb_idx_i,4,0);
    VL_OUT8(__PVT__writeback_valid_o,0,0);
    CData/*0:0*/ __PVT__valid_q;
    CData/*0:0*/ __PVT__inst_div_w;
    CData/*0:0*/ __PVT__inst_divu_w;
    CData/*0:0*/ __PVT__inst_rem_w;
    CData/*0:0*/ __PVT__inst_remu_w;
    CData/*0:0*/ __PVT__div_rem_inst_w;
    CData/*0:0*/ __PVT__signed_operation_w;
    CData/*0:0*/ __PVT__div_operation_w;
    CData/*0:0*/ __PVT__div_inst_q;
    CData/*0:0*/ __PVT__div_busy_q;
    CData/*0:0*/ __PVT__invert_res_q;
    CData/*0:0*/ __PVT__div_start_w;
    CData/*0:0*/ __PVT__div_complete_w;
    CData/*0:0*/ __Vdly__div_busy_q;
    CData/*0:0*/ __Vdly__invert_res_q;
    CData/*0:0*/ __Vdly__div_inst_q;
    CData/*0:0*/ __Vdly__valid_q;
    VL_IN(__PVT__opcode_opcode_i,31,0);
    VL_IN(__PVT__opcode_pc_i,31,0);
    VL_IN(__PVT__opcode_ra_operand_i,31,0);
    VL_IN(__PVT__opcode_rb_operand_i,31,0);
    VL_OUT(__PVT__writeback_value_o,31,0);
    IData/*31:0*/ __PVT__wb_result_q;
    IData/*31:0*/ __PVT__dividend_q;
    IData/*31:0*/ __PVT__quotient_q;
    IData/*31:0*/ __PVT__q_mask_q;
    IData/*31:0*/ __PVT__div_result_r;
    IData/*31:0*/ __Vdly__dividend_q;
    IData/*31:0*/ __Vdly__quotient_q;
    IData/*31:0*/ __Vdly__q_mask_q;
    IData/*31:0*/ __Vdly__wb_result_q;
    QData/*62:0*/ __PVT__divisor_q;
    QData/*62:0*/ __Vdly__divisor_q;

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_divider(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_divider();
    VL_UNCOPYABLE(Vrv32im_top_riscv_divider);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
