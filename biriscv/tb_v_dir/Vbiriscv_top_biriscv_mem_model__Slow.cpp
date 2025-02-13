// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_mem_model.h"

void Vbiriscv_top_biriscv_mem_model___ctor_var_reset(Vbiriscv_top_biriscv_mem_model* vlSelf);

Vbiriscv_top_biriscv_mem_model::Vbiriscv_top_biriscv_mem_model(Vbiriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_top_biriscv_mem_model___ctor_var_reset(this);
}

void Vbiriscv_top_biriscv_mem_model::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbiriscv_top_biriscv_mem_model::~Vbiriscv_top_biriscv_mem_model() {
}
