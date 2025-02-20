// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_AGU_IO_H_
#define VERILATED_VFALCO_TOP_AGU_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_AGU_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__instr_valid;
    CData/*0:0*/ __PVT__memory_align_exception;
    CData/*0:0*/ __Vdly__instr_valid;
    CData/*0:0*/ __Vdly__memory_align_exception;
    VlWide<5>/*146:0*/ __PVT__agu_pack;
    VlWide<5>/*146:0*/ __Vdly__agu_pack;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_AGU_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_AGU_io();
    VL_UNCOPYABLE(Vfalco_top_AGU_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_AGU_io* obj);

#endif  // guard
