// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VPICORV32CORE__DPI_H_
#define VERILATED_VPICORV32CORE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at memory_modelling.sv:14:42
    extern svBitVecVal instruction_generator();

#ifdef __cplusplus
}
#endif

#endif  // guard
