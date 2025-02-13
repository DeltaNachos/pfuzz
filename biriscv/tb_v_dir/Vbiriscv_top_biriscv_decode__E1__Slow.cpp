// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_decode__E1.h"

void Vbiriscv_top_biriscv_decode__E1___ctor_var_reset(Vbiriscv_top_biriscv_decode__E1* vlSelf);

Vbiriscv_top_biriscv_decode__E1::Vbiriscv_top_biriscv_decode__E1(Vbiriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_top_biriscv_decode__E1___ctor_var_reset(this);
}

void Vbiriscv_top_biriscv_decode__E1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbiriscv_top_biriscv_decode__E1::~Vbiriscv_top_biriscv_decode__E1() {
}
