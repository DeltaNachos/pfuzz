// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top___024root.h"

void Vbiriscv_top___024root___ctor_var_reset(Vbiriscv_top___024root* vlSelf);

Vbiriscv_top___024root::Vbiriscv_top___024root(Vbiriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_top___024root___ctor_var_reset(this);
}

void Vbiriscv_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbiriscv_top___024root::~Vbiriscv_top___024root() {
}
