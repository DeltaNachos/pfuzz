// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_AGU_io.h"
#include "Vfalco_top__Syms.h"

void Vfalco_top_AGU_io___ctor_var_reset(Vfalco_top_AGU_io* vlSelf);

Vfalco_top_AGU_io::Vfalco_top_AGU_io(Vfalco_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfalco_top_AGU_io___ctor_var_reset(this);
}

void Vfalco_top_AGU_io::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfalco_top_AGU_io::~Vfalco_top_AGU_io() {
}
