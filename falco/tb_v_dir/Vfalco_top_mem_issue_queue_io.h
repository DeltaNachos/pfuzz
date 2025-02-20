// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_MEM_ISSUE_QUEUE_IO_H_
#define VERILATED_VFALCO_TOP_MEM_ISSUE_QUEUE_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_mem_issue_queue_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__instr_valid;
    CData/*6:0*/ __PVT__BCAST_ld_spec;
    CData/*0:0*/ __Vdly__instr_valid;
    CData/*6:0*/ __Vdly__BCAST_ld_spec;
    VlWide<5>/*128:0*/ __PVT__instr_pack;
    VlWide<5>/*128:0*/ __Vdly__instr_pack;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_mem_issue_queue_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_mem_issue_queue_io();
    VL_UNCOPYABLE(Vfalco_top_mem_issue_queue_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_mem_issue_queue_io* obj);

#endif  // guard
