// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top___024root.h"

void Vaquila_top___024root___ctor_var_reset(Vaquila_top___024root* vlSelf);

Vaquila_top___024root::Vaquila_top___024root(Vaquila_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaquila_top___024root___ctor_var_reset(this);
}

void Vaquila_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaquila_top___024root::~Vaquila_top___024root() {
}
