// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top_distri_ram__E40.h"

void Vaquila_top_distri_ram__E40___ctor_var_reset(Vaquila_top_distri_ram__E40* vlSelf);

Vaquila_top_distri_ram__E40::Vaquila_top_distri_ram__E40(Vaquila_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaquila_top_distri_ram__E40___ctor_var_reset(this);
}

void Vaquila_top_distri_ram__E40::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaquila_top_distri_ram__E40::~Vaquila_top_distri_ram__E40() {
}
