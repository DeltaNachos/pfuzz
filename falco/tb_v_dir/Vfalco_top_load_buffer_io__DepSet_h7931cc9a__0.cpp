// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_load_buffer_io.h"

std::string VL_TO_STRING(const Vfalco_top_load_buffer_io* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_load_buffer_io::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
