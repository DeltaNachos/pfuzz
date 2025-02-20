// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_ID_STAGE_IO_H_
#define VERILATED_VFALCO_TOP_ID_STAGE_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_ID_stage_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__instr0_valid;
    CData/*0:0*/ __PVT__instr1_valid;
    CData/*0:0*/ __PVT__instr0_issue;
    CData/*0:0*/ __PVT__instr1_issue;
    CData/*7:0*/ instr0_store_set_id;
    CData/*7:0*/ instr1_store_set_id;
    CData/*0:0*/ __Vdly__instr0_valid;
    CData/*0:0*/ __Vdly__instr1_valid;
    SData/*9:0*/ __PVT__instr0_BHSR;
    SData/*9:0*/ __PVT__instr1_BHSR;
    SData/*9:0*/ __Vdly__instr0_BHSR;
    SData/*9:0*/ __Vdly__instr1_BHSR;
    VlWide<6>/*191:0*/ __PVT__decoded_instr0;
    VlWide<6>/*191:0*/ __PVT__decoded_instr1;
    VlWide<6>/*191:0*/ __Vdly__decoded_instr0;
    VlWide<6>/*191:0*/ __Vdly__decoded_instr1;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_ID_stage_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_ID_stage_io();
    VL_UNCOPYABLE(Vfalco_top_ID_stage_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_ID_stage_io* obj);

#endif  // guard
