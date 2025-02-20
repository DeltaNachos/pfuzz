// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_Picker8_1.h"
#include "Vfalco_top__Syms.h"

void Vfalco_top_Picker8_1___ctor_var_reset(Vfalco_top_Picker8_1* vlSelf);

Vfalco_top_Picker8_1::Vfalco_top_Picker8_1(Vfalco_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfalco_top_Picker8_1___ctor_var_reset(this);
}

void Vfalco_top_Picker8_1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfalco_top_Picker8_1::~Vfalco_top_Picker8_1() {
}
