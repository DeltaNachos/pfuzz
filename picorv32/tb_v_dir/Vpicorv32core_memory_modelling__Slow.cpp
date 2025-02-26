// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core__Syms.h"
#include "Vpicorv32core_memory_modelling.h"

void Vpicorv32core_memory_modelling___ctor_var_reset(Vpicorv32core_memory_modelling* vlSelf);

Vpicorv32core_memory_modelling::Vpicorv32core_memory_modelling(Vpicorv32core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpicorv32core_memory_modelling___ctor_var_reset(this);
}

void Vpicorv32core_memory_modelling::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpicorv32core_memory_modelling::~Vpicorv32core_memory_modelling() {
}
