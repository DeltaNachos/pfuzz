// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_DECODER_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_DECODER_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_decoder final : public VerilatedModule {
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
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_decoder(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_decoder();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_decoder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
