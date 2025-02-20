// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_IF_STAGE_IO_H_
#define VERILATED_VFALCO_TOP_IF_STAGE_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_IF_stage_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__instr0_valid;
    CData/*0:0*/ __PVT__instr1_valid;
    CData/*0:0*/ __Vdly__instr0_valid;
    CData/*0:0*/ __Vdly__instr1_valid;
    SData/*9:0*/ __PVT__current_instr0_BHSR;
    SData/*9:0*/ __PVT__current_instr1_BHSR;
    SData/*9:0*/ __Vdly__current_instr0_BHSR;
    SData/*9:0*/ __Vdly__current_instr1_BHSR;
    IData/*31:0*/ __PVT__raw_instr0;
    IData/*31:0*/ __PVT__raw_instr1;
    IData/*31:0*/ __PVT__instr0_pc;
    IData/*31:0*/ __PVT__instr1_pc;
    IData/*31:0*/ __Vdly__instr0_pc;
    IData/*31:0*/ __Vdly__instr1_pc;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_IF_stage_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_IF_stage_io();
    VL_UNCOPYABLE(Vfalco_top_IF_stage_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_IF_stage_io* obj);

#endif  // guard
