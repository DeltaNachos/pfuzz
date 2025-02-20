// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_divider.h"

void Vfalco_top_divider___ctor_var_reset(Vfalco_top_divider* vlSelf);

Vfalco_top_divider::Vfalco_top_divider(Vfalco_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfalco_top_divider___ctor_var_reset(this);
}

void Vfalco_top_divider::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfalco_top_divider::~Vfalco_top_divider() {
}
