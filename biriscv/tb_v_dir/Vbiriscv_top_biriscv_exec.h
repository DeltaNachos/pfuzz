// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_EXEC_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_EXEC_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_alu;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_exec final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_biriscv_alu* __PVT__u_alu;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__opcode_valid_i,0,0);
        VL_IN8(__PVT__opcode_invalid_i,0,0);
        VL_IN8(__PVT__opcode_rd_idx_i,4,0);
        VL_IN8(__PVT__opcode_ra_idx_i,4,0);
        VL_IN8(__PVT__opcode_rb_idx_i,4,0);
        VL_IN8(__PVT__hold_i,0,0);
        VL_OUT8(__PVT__branch_request_o,0,0);
        VL_OUT8(__PVT__branch_is_taken_o,0,0);
        VL_OUT8(__PVT__branch_is_not_taken_o,0,0);
        VL_OUT8(__PVT__branch_is_call_o,0,0);
        VL_OUT8(__PVT__branch_is_ret_o,0,0);
        VL_OUT8(__PVT__branch_is_jmp_o,0,0);
        VL_OUT8(__PVT__branch_d_request_o,0,0);
        VL_OUT8(__PVT__branch_d_priv_o,1,0);
        CData/*4:0*/ __PVT__shamt_r;
        CData/*3:0*/ __PVT__alu_func_r;
        CData/*0:0*/ __PVT__branch_r;
        CData/*0:0*/ __PVT__branch_taken_r;
        CData/*0:0*/ __PVT__branch_call_r;
        CData/*0:0*/ __PVT__branch_ret_r;
        CData/*0:0*/ __PVT__branch_jmp_r;
        CData/*0:0*/ __PVT__branch_taken_q;
        CData/*0:0*/ __PVT__branch_ntaken_q;
        CData/*0:0*/ __PVT__branch_call_q;
        CData/*0:0*/ __PVT__branch_ret_q;
        CData/*0:0*/ __PVT__branch_jmp_q;
        CData/*0:0*/ __Vfunc_less_than_signed__0__Vfuncout;
        CData/*0:0*/ __Vfunc_greater_than_signed__1__Vfuncout;
        CData/*0:0*/ __Vfunc_less_than_signed__2__Vfuncout;
        CData/*0:0*/ __Vfunc_greater_than_signed__3__Vfuncout;
        CData/*0:0*/ __Vdly__branch_taken_q;
        CData/*0:0*/ __Vdly__branch_ntaken_q;
        CData/*0:0*/ __Vdly__branch_call_q;
        CData/*0:0*/ __Vdly__branch_ret_q;
        CData/*0:0*/ __Vdly__branch_jmp_q;
        VL_IN(__PVT__opcode_opcode_i,31,0);
        VL_IN(__PVT__opcode_pc_i,31,0);
        VL_IN(__PVT__opcode_ra_operand_i,31,0);
        VL_IN(__PVT__opcode_rb_operand_i,31,0);
        VL_OUT(__PVT__branch_source_o,31,0);
        VL_OUT(__PVT__branch_pc_o,31,0);
        VL_OUT(__PVT__branch_d_pc_o,31,0);
        VL_OUT(__PVT__writeback_value_o,31,0);
        IData/*31:0*/ __PVT__imm20_r;
        IData/*31:0*/ __PVT__imm12_r;
        IData/*31:0*/ __PVT__bimm_r;
        IData/*31:0*/ __PVT__jimm20_r;
        IData/*31:0*/ __PVT__alu_input_a_r;
        IData/*31:0*/ __PVT__alu_input_b_r;
        IData/*31:0*/ __PVT__alu_p_w;
        IData/*31:0*/ __PVT__result_q;
        IData/*31:0*/ __PVT__less_than_signed__Vstatic__v;
        IData/*31:0*/ __PVT__greater_than_signed__Vstatic__v;
        IData/*31:0*/ __PVT__branch_target_r;
        IData/*31:0*/ __PVT__pc_x_q;
        IData/*31:0*/ __PVT__pc_m_q;
        IData/*31:0*/ __Vfunc_less_than_signed__0__x;
        IData/*31:0*/ __Vfunc_less_than_signed__0__y;
        IData/*31:0*/ __Vfunc_greater_than_signed__1__x;
        IData/*31:0*/ __Vfunc_greater_than_signed__1__y;
        IData/*31:0*/ __Vfunc_less_than_signed__2__x;
        IData/*31:0*/ __Vfunc_less_than_signed__2__y;
    };
    struct {
        IData/*31:0*/ __Vfunc_greater_than_signed__3__x;
        IData/*31:0*/ __Vfunc_greater_than_signed__3__y;
        IData/*31:0*/ __Vdly__result_q;
        IData/*31:0*/ __Vdly__pc_x_q;
        IData/*31:0*/ __Vdly__pc_m_q;
    };

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_exec(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_exec();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_exec);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
