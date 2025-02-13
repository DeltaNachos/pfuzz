// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP___024UNIT_H_
#define VERILATED_VSSRV_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top___024unit(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top___024unit();
    VL_UNCOPYABLE(Vssrv_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
