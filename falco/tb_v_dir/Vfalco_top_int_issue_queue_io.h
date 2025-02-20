// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_INT_ISSUE_QUEUE_IO_H_
#define VERILATED_VFALCO_TOP_INT_ISSUE_QUEUE_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_int_issue_queue_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__instr0_valid;
    CData/*0:0*/ __PVT__instr1_valid;
    CData/*0:0*/ __PVT__issue_alu0_rd_valid;
    CData/*0:0*/ __PVT__issue_alu1_rd_valid;
    CData/*5:0*/ __PVT__issue_alu0_rd;
    CData/*5:0*/ __PVT__issue_alu1_rd;
    CData/*0:0*/ __Vdly__instr0_valid;
    CData/*0:0*/ __Vdly__instr1_valid;
    VlWide<7>/*204:0*/ __PVT__instr0_pack;
    VlWide<7>/*204:0*/ __PVT__instr1_pack;
    VlWide<7>/*204:0*/ __Vdly__instr0_pack;
    VlWide<7>/*204:0*/ __Vdly__instr1_pack;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_int_issue_queue_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_int_issue_queue_io();
    VL_UNCOPYABLE(Vfalco_top_int_issue_queue_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_int_issue_queue_io* obj);

#endif  // guard
