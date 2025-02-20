// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP___024UNIT_H_
#define VERILATED_VFALCO_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top___024unit(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top___024unit();
    VL_UNCOPYABLE(Vfalco_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
