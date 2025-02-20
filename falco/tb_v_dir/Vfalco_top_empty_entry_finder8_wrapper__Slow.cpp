// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_empty_entry_finder8_wrapper.h"

void Vfalco_top_empty_entry_finder8_wrapper___ctor_var_reset(Vfalco_top_empty_entry_finder8_wrapper* vlSelf);

Vfalco_top_empty_entry_finder8_wrapper::Vfalco_top_empty_entry_finder8_wrapper(Vfalco_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfalco_top_empty_entry_finder8_wrapper___ctor_var_reset(this);
}

void Vfalco_top_empty_entry_finder8_wrapper::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfalco_top_empty_entry_finder8_wrapper::~Vfalco_top_empty_entry_finder8_wrapper() {
}
