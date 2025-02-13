// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top_program_counter.h"

void Vaquila_top_program_counter___ctor_var_reset(Vaquila_top_program_counter* vlSelf);

Vaquila_top_program_counter::Vaquila_top_program_counter(Vaquila_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaquila_top_program_counter___ctor_var_reset(this);
}

void Vaquila_top_program_counter::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaquila_top_program_counter::~Vaquila_top_program_counter() {
}
