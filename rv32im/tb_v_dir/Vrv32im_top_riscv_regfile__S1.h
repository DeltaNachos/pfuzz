// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_REGFILE__S1_H_
#define VERILATED_VRV32IM_TOP_RISCV_REGFILE__S1_H_  // guard

#include "verilated.h"
class Vrv32im_top_riscv_xilinx_2r1w;


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_regfile__S1 final : public VerilatedModule {
  public:
    // CELLS
    Vrv32im_top_riscv_xilinx_2r1w* __PVT__REGFILE_XILINX_SINGLE__DOT__u_reg;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__rd0_i,4,0);
    VL_IN8(__PVT__ra0_i,4,0);
    VL_IN8(__PVT__rb0_i,4,0);
    VL_IN(__PVT__rd0_value_i,31,0);
    VL_OUT(__PVT__ra0_value_o,31,0);
    VL_OUT(__PVT__rb0_value_o,31,0);

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_regfile__S1(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_regfile__S1();
    VL_UNCOPYABLE(Vrv32im_top_riscv_regfile__S1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
