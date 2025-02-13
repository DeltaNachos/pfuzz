// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VBIRISCV_TOP__DPI_H_
#define VERILATED_VBIRISCV_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at mem_model/biriscv_mem_model.sv:19:41
    extern svBitVecVal instruction_generator();

#ifdef __cplusplus
}
#endif

#endif  // guard
