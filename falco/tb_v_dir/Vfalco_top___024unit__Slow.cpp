// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top___024unit.h"

void Vfalco_top___024unit___ctor_var_reset(Vfalco_top___024unit* vlSelf);

Vfalco_top___024unit::Vfalco_top___024unit(Vfalco_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfalco_top___024unit___ctor_var_reset(this);
}

void Vfalco_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfalco_top___024unit::~Vfalco_top___024unit() {
}
