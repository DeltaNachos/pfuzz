// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_ALU.h"
#include "Vfalco_top__Syms.h"

void Vfalco_top_ALU___ctor_var_reset(Vfalco_top_ALU* vlSelf);

Vfalco_top_ALU::Vfalco_top_ALU(Vfalco_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfalco_top_ALU___ctor_var_reset(this);
}

void Vfalco_top_ALU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfalco_top_ALU::~Vfalco_top_ALU() {
}
