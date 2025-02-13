// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_ALU_H_
#define VERILATED_VRV32IM_TOP_RISCV_ALU_H_  // guard

#include "verilated.h"


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_alu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__alu_op_i,3,0);
    SData/*15:0*/ __PVT__shift_right_fill_r;
    VL_IN(__PVT__alu_a_i,31,0);
    VL_IN(__PVT__alu_b_i,31,0);
    VL_OUT(__PVT__alu_p_o,31,0);
    IData/*31:0*/ __PVT__result_r;
    IData/*31:0*/ __PVT__shift_right_1_r;
    IData/*31:0*/ __PVT__shift_right_2_r;
    IData/*31:0*/ __PVT__shift_right_4_r;
    IData/*31:0*/ __PVT__shift_right_8_r;
    IData/*31:0*/ __PVT__shift_left_1_r;
    IData/*31:0*/ __PVT__shift_left_2_r;
    IData/*31:0*/ __PVT__shift_left_4_r;
    IData/*31:0*/ __PVT__shift_left_8_r;
    IData/*31:0*/ __PVT__sub_res_w;

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_alu(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_alu();
    VL_UNCOPYABLE(Vrv32im_top_riscv_alu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
