// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_DECODER_H_
#define VERILATED_VRV32IM_TOP_RISCV_DECODER_H_  // guard

#include "verilated.h"


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_decoder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__valid_i,0,0);
    VL_IN8(__PVT__fetch_fault_i,0,0);
    VL_IN8(__PVT__enable_muldiv_i,0,0);
    VL_OUT8(__PVT__invalid_o,0,0);
    VL_OUT8(__PVT__exec_o,0,0);
    VL_OUT8(__PVT__lsu_o,0,0);
    VL_OUT8(__PVT__branch_o,0,0);
    VL_OUT8(__PVT__mul_o,0,0);
    VL_OUT8(__PVT__div_o,0,0);
    VL_OUT8(__PVT__csr_o,0,0);
    VL_OUT8(__PVT__rd_valid_o,0,0);
    CData/*0:0*/ __PVT__invalid_w;
    VL_IN(__PVT__opcode_i,31,0);

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_decoder(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_decoder();
    VL_UNCOPYABLE(Vrv32im_top_riscv_decoder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
