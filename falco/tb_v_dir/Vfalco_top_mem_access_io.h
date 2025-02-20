// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_MEM_ACCESS_IO_H_
#define VERILATED_VFALCO_TOP_MEM_ACCESS_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_mem_access_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ __PVT__load_commit;
    CData/*6:0*/ __Vdly__load_commit;
    QData/*38:0*/ __PVT__load_wb;
    QData/*38:0*/ __Vdly__load_wb;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_mem_access_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_mem_access_io();
    VL_UNCOPYABLE(Vfalco_top_mem_access_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_mem_access_io* obj);

#endif  // guard
