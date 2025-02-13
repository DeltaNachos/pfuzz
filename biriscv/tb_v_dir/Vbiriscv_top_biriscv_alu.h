// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_ALU_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_ALU_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_alu final : public VerilatedModule {
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
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_alu(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_alu();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_alu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
