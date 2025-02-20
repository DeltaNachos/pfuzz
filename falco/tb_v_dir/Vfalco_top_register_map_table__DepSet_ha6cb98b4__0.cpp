// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_register_map_table.h"

VL_INLINE_OPT void Vfalco_top_register_map_table___ico_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___ico_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_rd_stale_prf = vlSelfRef.reg_map_table
        [vlSelfRef.instr0_rd];
    vlSelfRef.__PVT__instr0_rs1_prf = vlSelfRef.reg_map_table
        [vlSelfRef.__PVT__instr0_rs1];
    vlSelfRef.__PVT__instr0_rs2_prf = vlSelfRef.reg_map_table
        [vlSelfRef.__PVT__instr0_rs2];
}

VL_INLINE_OPT void Vfalco_top_register_map_table___ico_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___ico_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.recovery_target = (7U & VL_SEL_IIII(32, 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__recovery_target_rob_tag), 0U, 3U)))
                                                    ? 
                                                   VL_EXTEND_II(32,3, 
                                                                (7U 
                                                                 & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__recovery_target_rob_tag), 3U, 3U)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    VL_EXTEND_II(32,3, 
                                                                 (7U 
                                                                  & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__recovery_target_rob_tag), 3U, 3U))))), 0U, 3U));
    vlSelfRef.__PVT__instr0_copy = (0U == (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr0_rob_tag), 0U, 3U)));
}

VL_INLINE_OPT void Vfalco_top_register_map_table___ico_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___ico_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_rd_stale_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                              == (IData)(vlSelfRef.instr1_rd)) 
                                             & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                             ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                             : vlSelfRef.reg_map_table
                                            [vlSelfRef.instr1_rd]);
    vlSelfRef.__PVT__instr1_rs1_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                         == (IData)(vlSelfRef.__PVT__instr1_rs1)) 
                                        & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                        ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                        : vlSelfRef.reg_map_table
                                       [vlSelfRef.__PVT__instr1_rs1]);
    vlSelfRef.__PVT__instr1_rs2_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                         == (IData)(vlSelfRef.__PVT__instr1_rs2)) 
                                        & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                        ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                        : vlSelfRef.reg_map_table
                                       [vlSelfRef.__PVT__instr1_rs2]);
}

VL_INLINE_OPT void Vfalco_top_register_map_table___ico_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___ico_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_copy = (0U == (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr1_rob_tag), 0U, 3U)));
    vlSelfRef.__PVT__copy_target = (7U & ((IData)(vlSelfRef.__PVT__instr0_copy)
                                           ? VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr0_rob_tag), 3U, 3U)
                                           : VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr1_rob_tag), 3U, 3U)));
}

VL_INLINE_OPT void Vfalco_top_register_map_table___act_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___act_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_rd_stale_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                              == (IData)(vlSelfRef.instr1_rd)) 
                                             & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                             ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                             : vlSelfRef.reg_map_table
                                            [vlSelfRef.instr1_rd]);
    vlSelfRef.__PVT__instr1_rs1_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                         == (IData)(vlSelfRef.__PVT__instr1_rs1)) 
                                        & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                        ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                        : vlSelfRef.reg_map_table
                                       [vlSelfRef.__PVT__instr1_rs1]);
    vlSelfRef.__PVT__instr1_rs2_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                         == (IData)(vlSelfRef.__PVT__instr1_rs2)) 
                                        & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                        ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                        : vlSelfRef.reg_map_table
                                       [vlSelfRef.__PVT__instr1_rs2]);
}

VL_INLINE_OPT void Vfalco_top_register_map_table___act_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___act_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_copy = (0U == (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr1_rob_tag), 0U, 3U)));
    vlSelfRef.__PVT__copy_target = (7U & ((IData)(vlSelfRef.__PVT__instr0_copy)
                                           ? VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr0_rob_tag), 3U, 3U)
                                           : VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr1_rob_tag), 3U, 3U)));
}

VL_INLINE_OPT void Vfalco_top_register_map_table___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__copy_table__v0 = 0U;
    vlSelfRef.__VdlySet__copy_table__v1 = 0U;
    vlSelfRef.__VdlySet__copy_table__v2 = 0U;
    vlSelfRef.__VdlySet__copy_table__v3 = 0U;
    vlSelfRef.__VdlySet__copy_table__v4 = 0U;
    vlSelfRef.__VdlySet__copy_table__v5 = 0U;
    vlSelfRef.__VdlySet__copy_table__v6 = 0U;
    vlSelfRef.__VdlySet__copy_table__v7 = 0U;
    vlSelfRef.__VdlySet__copy_table__v8 = 0U;
    vlSelfRef.__VdlySet__copy_table__v9 = 0U;
    vlSelfRef.__VdlySet__copy_table__v10 = 0U;
    vlSelfRef.__VdlySet__copy_table__v11 = 0U;
    vlSelfRef.__VdlySet__copy_table__v12 = 0U;
    vlSelfRef.__VdlySet__copy_table__v13 = 0U;
    vlSelfRef.__VdlySet__copy_table__v14 = 0U;
    vlSelfRef.__VdlySet__copy_table__v15 = 0U;
    vlSelfRef.__VdlySet__copy_table__v16 = 0U;
    vlSelfRef.__VdlySet__copy_table__v17 = 0U;
    vlSelfRef.__VdlySet__copy_table__v18 = 0U;
    vlSelfRef.__VdlySet__copy_table__v19 = 0U;
    vlSelfRef.__VdlySet__copy_table__v20 = 0U;
    vlSelfRef.__VdlySet__copy_table__v21 = 0U;
    vlSelfRef.__VdlySet__copy_table__v22 = 0U;
    vlSelfRef.__VdlySet__copy_table__v23 = 0U;
    vlSelfRef.__VdlySet__copy_table__v24 = 0U;
    vlSelfRef.__VdlySet__copy_table__v25 = 0U;
    vlSelfRef.__VdlySet__copy_table__v26 = 0U;
    vlSelfRef.__VdlySet__copy_table__v27 = 0U;
    vlSelfRef.__VdlySet__copy_table__v28 = 0U;
    vlSelfRef.__VdlySet__copy_table__v29 = 0U;
    vlSelfRef.__VdlySet__copy_table__v30 = 0U;
    vlSelfRef.__VdlySet__copy_table__v31 = 0U;
    vlSelfRef.__VdlySet__copy_table__v32 = 0U;
    vlSelfRef.__VdlySet__copy_table__v33 = 0U;
    vlSelfRef.__VdlySet__copy_table__v34 = 0U;
    vlSelfRef.__VdlySet__copy_table__v35 = 0U;
    vlSelfRef.__VdlySet__copy_table__v36 = 0U;
    vlSelfRef.__VdlySet__copy_table__v37 = 0U;
    vlSelfRef.__VdlySet__copy_table__v38 = 0U;
    vlSelfRef.__VdlySet__copy_table__v39 = 0U;
    vlSelfRef.__VdlySet__copy_table__v40 = 0U;
    vlSelfRef.__VdlySet__copy_table__v41 = 0U;
    vlSelfRef.__VdlySet__copy_table__v42 = 0U;
    vlSelfRef.__VdlySet__copy_table__v43 = 0U;
    vlSelfRef.__VdlySet__copy_table__v44 = 0U;
    vlSelfRef.__VdlySet__copy_table__v45 = 0U;
    vlSelfRef.__VdlySet__copy_table__v46 = 0U;
    vlSelfRef.__VdlySet__copy_table__v47 = 0U;
    vlSelfRef.__VdlySet__copy_table__v48 = 0U;
    vlSelfRef.__VdlySet__copy_table__v49 = 0U;
    vlSelfRef.__VdlySet__copy_table__v50 = 0U;
    vlSelfRef.__VdlySet__copy_table__v51 = 0U;
    vlSelfRef.__VdlySet__copy_table__v52 = 0U;
    vlSelfRef.__VdlySet__copy_table__v53 = 0U;
    vlSelfRef.__VdlySet__copy_table__v54 = 0U;
    vlSelfRef.__VdlySet__copy_table__v55 = 0U;
    vlSelfRef.__VdlySet__copy_table__v56 = 0U;
    vlSelfRef.__VdlySet__copy_table__v57 = 0U;
    vlSelfRef.__VdlySet__copy_table__v58 = 0U;
    vlSelfRef.__VdlySet__copy_table__v59 = 0U;
    vlSelfRef.__VdlySet__copy_table__v60 = 0U;
    vlSelfRef.__VdlySet__copy_table__v61 = 0U;
    vlSelfRef.__VdlySet__copy_table__v62 = 0U;
    vlSelfRef.__VdlySet__copy_table__v63 = 0U;
    vlSelfRef.__VdlySet__copy_table__v64 = 0U;
    vlSelfRef.__VdlySet__copy_table__v65 = 0U;
    vlSelfRef.__VdlySet__copy_table__v66 = 0U;
    vlSelfRef.__VdlySet__copy_table__v67 = 0U;
    vlSelfRef.__VdlySet__copy_table__v68 = 0U;
    vlSelfRef.__VdlySet__copy_table__v69 = 0U;
    vlSelfRef.__VdlySet__copy_table__v70 = 0U;
    vlSelfRef.__VdlySet__copy_table__v71 = 0U;
    vlSelfRef.__VdlySet__copy_table__v72 = 0U;
    vlSelfRef.__VdlySet__copy_table__v73 = 0U;
    vlSelfRef.__VdlySet__copy_table__v74 = 0U;
    vlSelfRef.__VdlySet__copy_table__v75 = 0U;
    vlSelfRef.__VdlySet__copy_table__v76 = 0U;
    vlSelfRef.__VdlySet__copy_table__v77 = 0U;
    vlSelfRef.__VdlySet__copy_table__v78 = 0U;
    vlSelfRef.__VdlySet__copy_table__v79 = 0U;
    vlSelfRef.__VdlySet__copy_table__v80 = 0U;
    vlSelfRef.__VdlySet__copy_table__v81 = 0U;
    vlSelfRef.__VdlySet__copy_table__v82 = 0U;
    vlSelfRef.__VdlySet__copy_table__v83 = 0U;
    vlSelfRef.__VdlySet__copy_table__v84 = 0U;
    vlSelfRef.__VdlySet__copy_table__v85 = 0U;
    vlSelfRef.__VdlySet__copy_table__v86 = 0U;
    vlSelfRef.__VdlySet__copy_table__v87 = 0U;
    vlSelfRef.__VdlySet__copy_table__v88 = 0U;
    vlSelfRef.__VdlySet__copy_table__v89 = 0U;
    vlSelfRef.__VdlySet__copy_table__v90 = 0U;
    vlSelfRef.__VdlySet__copy_table__v91 = 0U;
    vlSelfRef.__VdlySet__copy_table__v92 = 0U;
    vlSelfRef.__VdlySet__copy_table__v93 = 0U;
    vlSelfRef.__VdlySet__copy_table__v94 = 0U;
    vlSelfRef.__VdlySet__copy_table__v95 = 0U;
    vlSelfRef.__VdlySet__copy_table__v96 = 0U;
    vlSelfRef.__VdlySet__copy_table__v97 = 0U;
    vlSelfRef.__VdlySet__copy_table__v98 = 0U;
    vlSelfRef.__VdlySet__copy_table__v99 = 0U;
    vlSelfRef.__VdlySet__copy_table__v100 = 0U;
    vlSelfRef.__VdlySet__copy_table__v101 = 0U;
    vlSelfRef.__VdlySet__copy_table__v102 = 0U;
    vlSelfRef.__VdlySet__copy_table__v103 = 0U;
    vlSelfRef.__VdlySet__copy_table__v104 = 0U;
    vlSelfRef.__VdlySet__copy_table__v105 = 0U;
    vlSelfRef.__VdlySet__copy_table__v106 = 0U;
    vlSelfRef.__VdlySet__copy_table__v107 = 0U;
    vlSelfRef.__VdlySet__copy_table__v108 = 0U;
    vlSelfRef.__VdlySet__copy_table__v109 = 0U;
    vlSelfRef.__VdlySet__copy_table__v110 = 0U;
    vlSelfRef.__VdlySet__copy_table__v111 = 0U;
    vlSelfRef.__VdlySet__copy_table__v112 = 0U;
    vlSelfRef.__VdlySet__copy_table__v113 = 0U;
    vlSelfRef.__VdlySet__copy_table__v114 = 0U;
    vlSelfRef.__VdlySet__copy_table__v115 = 0U;
    vlSelfRef.__VdlySet__copy_table__v116 = 0U;
    vlSelfRef.__VdlySet__copy_table__v117 = 0U;
    vlSelfRef.__VdlySet__copy_table__v118 = 0U;
    vlSelfRef.__VdlySet__copy_table__v119 = 0U;
    vlSelfRef.__VdlySet__copy_table__v120 = 0U;
    vlSelfRef.__VdlySet__copy_table__v121 = 0U;
    vlSelfRef.__VdlySet__copy_table__v122 = 0U;
    vlSelfRef.__VdlySet__copy_table__v123 = 0U;
    vlSelfRef.__VdlySet__copy_table__v124 = 0U;
    vlSelfRef.__VdlySet__copy_table__v125 = 0U;
    vlSelfRef.__VdlySet__copy_table__v126 = 0U;
    vlSelfRef.__VdlySet__copy_table__v127 = 0U;
    vlSelfRef.__VdlySet__copy_table__v128 = 0U;
    vlSelfRef.__VdlySet__copy_table__v129 = 0U;
    vlSelfRef.__VdlySet__copy_table__v130 = 0U;
    vlSelfRef.__VdlySet__copy_table__v131 = 0U;
    vlSelfRef.__VdlySet__copy_table__v132 = 0U;
    vlSelfRef.__VdlySet__copy_table__v133 = 0U;
    vlSelfRef.__VdlySet__copy_table__v134 = 0U;
    vlSelfRef.__VdlySet__copy_table__v135 = 0U;
    vlSelfRef.__VdlySet__copy_table__v136 = 0U;
    vlSelfRef.__VdlySet__copy_table__v137 = 0U;
    vlSelfRef.__VdlySet__copy_table__v138 = 0U;
    vlSelfRef.__VdlySet__copy_table__v139 = 0U;
    vlSelfRef.__VdlySet__copy_table__v140 = 0U;
    vlSelfRef.__VdlySet__copy_table__v141 = 0U;
    vlSelfRef.__VdlySet__copy_table__v142 = 0U;
    vlSelfRef.__VdlySet__copy_table__v143 = 0U;
    vlSelfRef.__VdlySet__copy_table__v144 = 0U;
    vlSelfRef.__VdlySet__copy_table__v145 = 0U;
    vlSelfRef.__VdlySet__copy_table__v146 = 0U;
    vlSelfRef.__VdlySet__copy_table__v147 = 0U;
    vlSelfRef.__VdlySet__copy_table__v148 = 0U;
    vlSelfRef.__VdlySet__copy_table__v149 = 0U;
    vlSelfRef.__VdlySet__copy_table__v150 = 0U;
    vlSelfRef.__VdlySet__copy_table__v151 = 0U;
    vlSelfRef.__VdlySet__copy_table__v152 = 0U;
    vlSelfRef.__VdlySet__copy_table__v153 = 0U;
    vlSelfRef.__VdlySet__copy_table__v154 = 0U;
    vlSelfRef.__VdlySet__copy_table__v155 = 0U;
    vlSelfRef.__VdlySet__copy_table__v156 = 0U;
    vlSelfRef.__VdlySet__copy_table__v157 = 0U;
    vlSelfRef.__VdlySet__copy_table__v158 = 0U;
    vlSelfRef.__VdlySet__copy_table__v159 = 0U;
    vlSelfRef.__VdlySet__copy_table__v160 = 0U;
    vlSelfRef.__VdlySet__copy_table__v161 = 0U;
    vlSelfRef.__VdlySet__copy_table__v162 = 0U;
    vlSelfRef.__VdlySet__copy_table__v163 = 0U;
    vlSelfRef.__VdlySet__copy_table__v164 = 0U;
    vlSelfRef.__VdlySet__copy_table__v165 = 0U;
    vlSelfRef.__VdlySet__copy_table__v166 = 0U;
    vlSelfRef.__VdlySet__copy_table__v167 = 0U;
    vlSelfRef.__VdlySet__copy_table__v168 = 0U;
    vlSelfRef.__VdlySet__copy_table__v169 = 0U;
    vlSelfRef.__VdlySet__copy_table__v170 = 0U;
    vlSelfRef.__VdlySet__copy_table__v171 = 0U;
    vlSelfRef.__VdlySet__copy_table__v172 = 0U;
    vlSelfRef.__VdlySet__copy_table__v173 = 0U;
    vlSelfRef.__VdlySet__copy_table__v174 = 0U;
    vlSelfRef.__VdlySet__copy_table__v175 = 0U;
    vlSelfRef.__VdlySet__copy_table__v176 = 0U;
    vlSelfRef.__VdlySet__copy_table__v177 = 0U;
    vlSelfRef.__VdlySet__copy_table__v178 = 0U;
    vlSelfRef.__VdlySet__copy_table__v179 = 0U;
    vlSelfRef.__VdlySet__copy_table__v180 = 0U;
    vlSelfRef.__VdlySet__copy_table__v181 = 0U;
    vlSelfRef.__VdlySet__copy_table__v182 = 0U;
    vlSelfRef.__VdlySet__copy_table__v183 = 0U;
    vlSelfRef.__VdlySet__copy_table__v184 = 0U;
    vlSelfRef.__VdlySet__copy_table__v185 = 0U;
    vlSelfRef.__VdlySet__copy_table__v186 = 0U;
    vlSelfRef.__VdlySet__copy_table__v187 = 0U;
    vlSelfRef.__VdlySet__copy_table__v188 = 0U;
    vlSelfRef.__VdlySet__copy_table__v189 = 0U;
    vlSelfRef.__VdlySet__copy_table__v190 = 0U;
    vlSelfRef.__VdlySet__copy_table__v191 = 0U;
    vlSelfRef.__VdlySet__copy_table__v192 = 0U;
    vlSelfRef.__VdlySet__copy_table__v193 = 0U;
    vlSelfRef.__VdlySet__copy_table__v194 = 0U;
    vlSelfRef.__VdlySet__copy_table__v195 = 0U;
    vlSelfRef.__VdlySet__copy_table__v196 = 0U;
    vlSelfRef.__VdlySet__copy_table__v197 = 0U;
    vlSelfRef.__VdlySet__copy_table__v198 = 0U;
    vlSelfRef.__VdlySet__copy_table__v199 = 0U;
    vlSelfRef.__VdlySet__copy_table__v200 = 0U;
    vlSelfRef.__VdlySet__copy_table__v201 = 0U;
    vlSelfRef.__VdlySet__copy_table__v202 = 0U;
    vlSelfRef.__VdlySet__copy_table__v203 = 0U;
    vlSelfRef.__VdlySet__copy_table__v204 = 0U;
    vlSelfRef.__VdlySet__copy_table__v205 = 0U;
    vlSelfRef.__VdlySet__copy_table__v206 = 0U;
    vlSelfRef.__VdlySet__copy_table__v207 = 0U;
    vlSelfRef.__VdlySet__copy_table__v208 = 0U;
    vlSelfRef.__VdlySet__copy_table__v209 = 0U;
    vlSelfRef.__VdlySet__copy_table__v210 = 0U;
    vlSelfRef.__VdlySet__copy_table__v211 = 0U;
    vlSelfRef.__VdlySet__copy_table__v212 = 0U;
    vlSelfRef.__VdlySet__copy_table__v213 = 0U;
    vlSelfRef.__VdlySet__copy_table__v214 = 0U;
    vlSelfRef.__VdlySet__copy_table__v215 = 0U;
    vlSelfRef.__VdlySet__copy_table__v216 = 0U;
    vlSelfRef.__VdlySet__copy_table__v217 = 0U;
    vlSelfRef.__VdlySet__copy_table__v218 = 0U;
    vlSelfRef.__VdlySet__copy_table__v219 = 0U;
    vlSelfRef.__VdlySet__copy_table__v220 = 0U;
    vlSelfRef.__VdlySet__copy_table__v221 = 0U;
    vlSelfRef.__VdlySet__copy_table__v222 = 0U;
    vlSelfRef.__VdlySet__copy_table__v223 = 0U;
    vlSelfRef.__VdlySet__copy_table__v224 = 0U;
    vlSelfRef.__VdlySet__copy_table__v225 = 0U;
    vlSelfRef.__VdlySet__copy_table__v226 = 0U;
    vlSelfRef.__VdlySet__copy_table__v227 = 0U;
    vlSelfRef.__VdlySet__copy_table__v228 = 0U;
    vlSelfRef.__VdlySet__copy_table__v229 = 0U;
    vlSelfRef.__VdlySet__copy_table__v230 = 0U;
    vlSelfRef.__VdlySet__copy_table__v231 = 0U;
    vlSelfRef.__VdlySet__copy_table__v232 = 0U;
    vlSelfRef.__VdlySet__copy_table__v233 = 0U;
    vlSelfRef.__VdlySet__copy_table__v234 = 0U;
    vlSelfRef.__VdlySet__copy_table__v235 = 0U;
    vlSelfRef.__VdlySet__copy_table__v236 = 0U;
    vlSelfRef.__VdlySet__copy_table__v237 = 0U;
    vlSelfRef.__VdlySet__copy_table__v238 = 0U;
    vlSelfRef.__VdlySet__copy_table__v239 = 0U;
    vlSelfRef.__VdlySet__copy_table__v240 = 0U;
    vlSelfRef.__VdlySet__copy_table__v241 = 0U;
    vlSelfRef.__VdlySet__copy_table__v242 = 0U;
    vlSelfRef.__VdlySet__copy_table__v243 = 0U;
    vlSelfRef.__VdlySet__copy_table__v244 = 0U;
    vlSelfRef.__VdlySet__copy_table__v245 = 0U;
    vlSelfRef.__VdlySet__copy_table__v246 = 0U;
    vlSelfRef.__VdlySet__copy_table__v247 = 0U;
    vlSelfRef.__VdlySet__copy_table__v248 = 0U;
    vlSelfRef.__VdlySet__copy_table__v249 = 0U;
    vlSelfRef.__VdlySet__copy_table__v250 = 0U;
    vlSelfRef.__VdlySet__copy_table__v251 = 0U;
    vlSelfRef.__VdlySet__copy_table__v252 = 0U;
    vlSelfRef.__VdlySet__copy_table__v253 = 0U;
    vlSelfRef.__VdlySet__copy_table__v254 = 0U;
    vlSelfRef.__VdlySet__copy_table__v255 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v0 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v1 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v2 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v3 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v4 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v5 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v6 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v7 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v8 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v9 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v10 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v11 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v12 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v13 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v14 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v15 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v16 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v17 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v18 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v19 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v20 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v21 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v22 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v23 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v24 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v25 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v26 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v27 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v28 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v29 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v30 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v31 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v32 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v33 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v34 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v35 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v36 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v37 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v38 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v39 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v40 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v41 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v42 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v43 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v44 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v45 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v46 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v47 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v48 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v49 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v50 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v51 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v52 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v53 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v54 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v55 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v56 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v57 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v58 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v59 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v60 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v61 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v62 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v63 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v64 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v65 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v66 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v67 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v68 = 0U;
    vlSelfRef.__VdlySet__reg_map_table__v69 = 0U;
    vlSelfRef.__VdlyVal__copy_table__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][0U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((0U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [0U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [0U])));
    vlSelfRef.__VdlySet__copy_table__v0 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][1U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((1U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [1U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [1U])));
    vlSelfRef.__VdlySet__copy_table__v1 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][2U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((2U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [2U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [2U])));
    vlSelfRef.__VdlySet__copy_table__v2 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][3U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((3U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [3U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [3U])));
    vlSelfRef.__VdlySet__copy_table__v3 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][4U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((4U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [4U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [4U])));
    vlSelfRef.__VdlySet__copy_table__v4 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][5U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((5U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [5U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [5U])));
    vlSelfRef.__VdlySet__copy_table__v5 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][6U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((6U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [6U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [6U])));
    vlSelfRef.__VdlySet__copy_table__v6 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][7U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((7U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [7U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [7U])));
    vlSelfRef.__VdlySet__copy_table__v7 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v8 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][8U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((8U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [8U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [8U])));
    vlSelfRef.__VdlySet__copy_table__v8 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v9 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? vlSelfRef.copy_table
                                            [0U][9U]
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                ((((9U 
                                                    == (IData)(vlSelfRef.instr0_rd)) 
                                                   & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                  ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                  : 
                                                 vlSelfRef.reg_map_table
                                                 [9U])
                                                 : 
                                                vlSelfRef.copy_table
                                                [0U]
                                                [9U])));
    vlSelfRef.__VdlySet__copy_table__v9 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v10 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0xaU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xaU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xaU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v10 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v11 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0xbU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xbU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xbU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v11 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v12 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0xcU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xcU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xcU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v12 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v13 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0xdU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xdU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xdU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v13 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v14 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0xeU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xeU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xeU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v14 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v15 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0xfU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xfU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xfU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v15 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v16 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x10U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x10U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x10U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v16 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v17 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x11U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x11U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x11U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v17 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v18 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x12U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x12U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x12U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v18 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v19 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x13U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x13U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x13U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v19 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v20 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x14U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x14U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x14U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v20 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v21 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x15U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x15U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x15U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v21 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v22 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x16U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x16U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x16U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v22 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v23 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x17U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x17U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x17U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v23 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v24 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x18U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x18U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x18U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v24 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v25 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x19U]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x19U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x19U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v25 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v26 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x1aU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1aU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1aU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v26 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v27 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x1bU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1bU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1bU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v27 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v28 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x1cU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1cU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1cU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v28 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v29 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x1dU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1dU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1dU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v29 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v30 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x1eU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1eU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1eU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v30 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v31 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [0U][0x1fU]
                                              : ((0U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1fU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1fU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [0U]
                                                 [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v31 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v32 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0U])));
    vlSelfRef.__VdlySet__copy_table__v32 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v33 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][1U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((1U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [1U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [1U])));
    vlSelfRef.__VdlySet__copy_table__v33 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v34 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][2U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((2U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [2U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [2U])));
    vlSelfRef.__VdlySet__copy_table__v34 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v35 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][3U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((3U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [3U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [3U])));
    vlSelfRef.__VdlySet__copy_table__v35 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v36 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][4U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((4U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [4U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [4U])));
    vlSelfRef.__VdlySet__copy_table__v36 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v37 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][5U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((5U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [5U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [5U])));
    vlSelfRef.__VdlySet__copy_table__v37 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v38 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][6U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((6U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [6U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [6U])));
    vlSelfRef.__VdlySet__copy_table__v38 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v39 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][7U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((7U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [7U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [7U])));
    vlSelfRef.__VdlySet__copy_table__v39 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v40 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][8U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((8U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [8U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [8U])));
    vlSelfRef.__VdlySet__copy_table__v40 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v41 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][9U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((9U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [9U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [9U])));
    vlSelfRef.__VdlySet__copy_table__v41 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v42 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0xaU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xaU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xaU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v42 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v43 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0xbU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xbU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xbU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v43 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v44 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0xcU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xcU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xcU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v44 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v45 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0xdU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xdU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xdU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v45 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v46 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0xeU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xeU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xeU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v46 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v47 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0xfU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xfU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xfU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v47 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v48 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x10U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x10U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x10U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v48 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v49 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x11U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x11U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x11U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v49 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v50 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x12U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x12U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x12U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v50 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v51 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x13U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x13U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x13U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v51 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v52 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x14U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x14U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x14U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v52 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v53 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x15U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x15U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x15U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v53 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v54 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x16U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x16U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x16U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v54 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v55 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x17U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x17U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x17U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v55 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v56 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x18U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x18U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x18U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v56 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v57 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x19U]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x19U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x19U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v57 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v58 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x1aU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1aU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1aU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v58 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v59 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x1bU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1bU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1bU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v59 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v60 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x1cU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1cU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1cU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v60 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v61 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x1dU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1dU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1dU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v61 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v62 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x1eU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1eU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1eU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v62 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v63 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [1U][0x1fU]
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1fU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1fU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [1U]
                                                 [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v63 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v64 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0U])));
    vlSelfRef.__VdlySet__copy_table__v64 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v65 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][1U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((1U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [1U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [1U])));
    vlSelfRef.__VdlySet__copy_table__v65 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v66 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][2U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((2U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [2U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [2U])));
    vlSelfRef.__VdlySet__copy_table__v66 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v67 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][3U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((3U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [3U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [3U])));
    vlSelfRef.__VdlySet__copy_table__v67 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v68 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][4U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((4U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [4U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [4U])));
    vlSelfRef.__VdlySet__copy_table__v68 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v69 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][5U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((5U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [5U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [5U])));
    vlSelfRef.__VdlySet__copy_table__v69 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v70 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][6U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((6U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [6U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [6U])));
    vlSelfRef.__VdlySet__copy_table__v70 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v71 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][7U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((7U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [7U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [7U])));
    vlSelfRef.__VdlySet__copy_table__v71 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v72 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][8U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((8U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [8U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [8U])));
    vlSelfRef.__VdlySet__copy_table__v72 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v73 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][9U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((9U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [9U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [9U])));
    vlSelfRef.__VdlySet__copy_table__v73 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v74 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0xaU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xaU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xaU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v74 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v75 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0xbU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xbU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xbU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v75 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v76 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0xcU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xcU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xcU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v76 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v77 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0xdU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xdU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xdU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v77 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v78 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0xeU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xeU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xeU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v78 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v79 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0xfU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0xfU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0xfU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v79 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v80 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x10U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x10U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x10U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v80 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v81 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x11U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x11U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x11U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v81 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v82 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x12U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x12U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x12U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v82 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v83 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x13U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x13U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x13U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v83 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v84 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x14U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x14U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x14U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v84 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v85 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x15U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x15U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x15U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v85 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v86 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x16U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x16U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x16U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v86 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v87 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x17U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x17U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x17U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v87 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v88 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x18U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x18U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x18U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v88 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v89 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x19U]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x19U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x19U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v89 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v90 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x1aU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1aU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1aU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v90 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v91 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x1bU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1bU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1bU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v91 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v92 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x1cU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1cU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1cU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v92 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v93 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x1dU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1dU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1dU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v93 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v94 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x1eU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1eU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1eU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v94 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v95 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [2U][0x1fU]
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0x1fU 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0x1fU])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [2U]
                                                 [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v95 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v96 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [3U][0U]
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((0U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [0U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [3U]
                                                 [0U])));
    vlSelfRef.__VdlySet__copy_table__v96 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v97 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [3U][1U]
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((1U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [1U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [3U]
                                                 [1U])));
    vlSelfRef.__VdlySet__copy_table__v97 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v98 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [3U][2U]
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((2U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [2U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [3U]
                                                 [2U])));
    vlSelfRef.__VdlySet__copy_table__v98 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v99 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? vlSelfRef.copy_table
                                             [3U][3U]
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 ((((3U 
                                                     == (IData)(vlSelfRef.instr0_rd)) 
                                                    & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                   ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                   : 
                                                  vlSelfRef.reg_map_table
                                                  [3U])
                                                  : 
                                                 vlSelfRef.copy_table
                                                 [3U]
                                                 [3U])));
    vlSelfRef.__VdlySet__copy_table__v99 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v100 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][4U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((4U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [4U])));
    vlSelfRef.__VdlySet__copy_table__v100 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v101 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][5U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((5U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [5U])));
    vlSelfRef.__VdlySet__copy_table__v101 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v102 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][6U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((6U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [6U])));
    vlSelfRef.__VdlySet__copy_table__v102 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v103 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][7U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((7U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [7U])));
    vlSelfRef.__VdlySet__copy_table__v103 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v104 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][8U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((8U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [8U])));
    vlSelfRef.__VdlySet__copy_table__v104 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v105 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][9U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((9U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [9U])));
    vlSelfRef.__VdlySet__copy_table__v105 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v106 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0xaU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xaU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v106 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v107 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0xbU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xbU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v107 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v108 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0xcU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xcU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v108 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v109 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0xdU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xdU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v109 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v110 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0xeU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xeU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v110 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v111 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0xfU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xfU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v111 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v112 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x10U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x10U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v112 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v113 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x11U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x11U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v113 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v114 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x12U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x12U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v114 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v115 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x13U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x13U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v115 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v116 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x14U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x14U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v116 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v117 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x15U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x15U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v117 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v118 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x16U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x16U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v118 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v119 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x17U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x17U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v119 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v120 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x18U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x18U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v120 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v121 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x19U]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x19U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v121 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v122 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x1aU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1aU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v122 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v123 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x1bU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1bU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v123 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v124 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x1cU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1cU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v124 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v125 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x1dU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1dU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v125 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v126 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x1eU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1eU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v126 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v127 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [3U][0x1fU]
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1fU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [3U]
                                                  [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v127 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v128 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0U])));
    vlSelfRef.__VdlySet__copy_table__v128 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v129 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][1U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((1U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [1U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [1U])));
    vlSelfRef.__VdlySet__copy_table__v129 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v130 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][2U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((2U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [2U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [2U])));
    vlSelfRef.__VdlySet__copy_table__v130 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v131 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][3U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((3U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [3U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [3U])));
    vlSelfRef.__VdlySet__copy_table__v131 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v132 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][4U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((4U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [4U])));
    vlSelfRef.__VdlySet__copy_table__v132 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v133 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][5U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((5U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [5U])));
    vlSelfRef.__VdlySet__copy_table__v133 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v134 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][6U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((6U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [6U])));
    vlSelfRef.__VdlySet__copy_table__v134 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v135 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][7U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((7U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [7U])));
    vlSelfRef.__VdlySet__copy_table__v135 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v136 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][8U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((8U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [8U])));
    vlSelfRef.__VdlySet__copy_table__v136 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v137 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][9U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((9U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [9U])));
    vlSelfRef.__VdlySet__copy_table__v137 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v138 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0xaU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xaU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v138 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v139 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0xbU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xbU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v139 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v140 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0xcU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xcU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v140 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v141 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0xdU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xdU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v141 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v142 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0xeU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xeU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v142 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v143 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0xfU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xfU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v143 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v144 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x10U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x10U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v144 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v145 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x11U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x11U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v145 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v146 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x12U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x12U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v146 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v147 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x13U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x13U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v147 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v148 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x14U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x14U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v148 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v149 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x15U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x15U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v149 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v150 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x16U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x16U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v150 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v151 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x17U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x17U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v151 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v152 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x18U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x18U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v152 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v153 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x19U]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x19U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v153 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v154 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x1aU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1aU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v154 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v155 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x1bU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1bU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v155 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v156 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x1cU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1cU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v156 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v157 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x1dU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1dU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v157 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v158 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x1eU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1eU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v158 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v159 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [4U][0x1fU]
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1fU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [4U]
                                                  [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v159 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v160 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0U])));
    vlSelfRef.__VdlySet__copy_table__v160 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v161 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][1U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((1U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [1U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [1U])));
    vlSelfRef.__VdlySet__copy_table__v161 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v162 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][2U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((2U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [2U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [2U])));
    vlSelfRef.__VdlySet__copy_table__v162 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v163 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][3U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((3U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [3U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [3U])));
    vlSelfRef.__VdlySet__copy_table__v163 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v164 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][4U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((4U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [4U])));
    vlSelfRef.__VdlySet__copy_table__v164 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v165 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][5U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((5U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [5U])));
    vlSelfRef.__VdlySet__copy_table__v165 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v166 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][6U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((6U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [6U])));
    vlSelfRef.__VdlySet__copy_table__v166 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v167 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][7U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((7U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [7U])));
    vlSelfRef.__VdlySet__copy_table__v167 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v168 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][8U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((8U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [8U])));
    vlSelfRef.__VdlySet__copy_table__v168 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v169 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][9U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((9U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [9U])));
    vlSelfRef.__VdlySet__copy_table__v169 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v170 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0xaU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xaU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v170 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v171 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0xbU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xbU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v171 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v172 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0xcU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xcU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v172 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v173 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0xdU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xdU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v173 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v174 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0xeU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xeU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v174 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v175 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0xfU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xfU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v175 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v176 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x10U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x10U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v176 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v177 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x11U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x11U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v177 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v178 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x12U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x12U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v178 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v179 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x13U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x13U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v179 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v180 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x14U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x14U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v180 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v181 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x15U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x15U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v181 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v182 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x16U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x16U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v182 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v183 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x17U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x17U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v183 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v184 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x18U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x18U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v184 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v185 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x19U]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x19U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v185 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v186 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x1aU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1aU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v186 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v187 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x1bU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1bU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v187 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v188 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x1cU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1cU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v188 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v189 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x1dU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1dU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v189 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v190 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x1eU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1eU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v190 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v191 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [5U][0x1fU]
                                               : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1fU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [5U]
                                                  [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v191 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v192 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0U])));
    vlSelfRef.__VdlySet__copy_table__v192 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v193 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][1U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((1U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [1U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [1U])));
    vlSelfRef.__VdlySet__copy_table__v193 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v194 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][2U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((2U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [2U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [2U])));
    vlSelfRef.__VdlySet__copy_table__v194 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v195 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][3U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((3U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [3U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [3U])));
    vlSelfRef.__VdlySet__copy_table__v195 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v196 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][4U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((4U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [4U])));
    vlSelfRef.__VdlySet__copy_table__v196 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v197 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][5U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((5U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [5U])));
    vlSelfRef.__VdlySet__copy_table__v197 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v198 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][6U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((6U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [6U])));
    vlSelfRef.__VdlySet__copy_table__v198 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v199 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][7U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((7U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [7U])));
    vlSelfRef.__VdlySet__copy_table__v199 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v200 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][8U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((8U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [8U])));
    vlSelfRef.__VdlySet__copy_table__v200 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v201 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][9U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((9U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [9U])));
    vlSelfRef.__VdlySet__copy_table__v201 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v202 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0xaU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xaU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v202 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v203 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0xbU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xbU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v203 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v204 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0xcU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xcU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v204 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v205 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0xdU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xdU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v205 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v206 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0xeU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xeU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v206 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v207 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0xfU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xfU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v207 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v208 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x10U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x10U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v208 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v209 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x11U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x11U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v209 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v210 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x12U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x12U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v210 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v211 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x13U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x13U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v211 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v212 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x14U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x14U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v212 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v213 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x15U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x15U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v213 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v214 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x16U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x16U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v214 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v215 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x17U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x17U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v215 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v216 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x18U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x18U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v216 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v217 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x19U]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x19U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v217 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v218 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x1aU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1aU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v218 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v219 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x1bU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1bU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v219 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v220 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x1cU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1cU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v220 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v221 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x1dU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1dU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v221 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v222 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x1eU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1eU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v222 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v223 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [6U][0x1fU]
                                               : ((6U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1fU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [6U]
                                                  [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v223 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v224 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0U])));
    vlSelfRef.__VdlySet__copy_table__v224 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v225 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][1U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((1U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [1U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [1U])));
    vlSelfRef.__VdlySet__copy_table__v225 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v226 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][2U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((2U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [2U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [2U])));
    vlSelfRef.__VdlySet__copy_table__v226 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v227 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][3U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((3U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [3U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [3U])));
    vlSelfRef.__VdlySet__copy_table__v227 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v228 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][4U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((4U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [4U])));
    vlSelfRef.__VdlySet__copy_table__v228 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v229 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][5U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((5U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [5U])));
    vlSelfRef.__VdlySet__copy_table__v229 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v230 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][6U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((6U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [6U])));
    vlSelfRef.__VdlySet__copy_table__v230 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v231 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][7U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((7U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [7U])));
    vlSelfRef.__VdlySet__copy_table__v231 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v232 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][8U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((8U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [8U])));
    vlSelfRef.__VdlySet__copy_table__v232 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v233 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][9U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((9U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [9U])));
    vlSelfRef.__VdlySet__copy_table__v233 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v234 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0xaU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xaU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0xaU])));
    vlSelfRef.__VdlySet__copy_table__v234 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v235 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0xbU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xbU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0xbU])));
    vlSelfRef.__VdlySet__copy_table__v235 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v236 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0xcU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xcU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0xcU])));
    vlSelfRef.__VdlySet__copy_table__v236 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v237 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0xdU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xdU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0xdU])));
    vlSelfRef.__VdlySet__copy_table__v237 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v238 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0xeU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xeU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0xeU])));
    vlSelfRef.__VdlySet__copy_table__v238 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v239 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0xfU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0xfU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0xfU])));
    vlSelfRef.__VdlySet__copy_table__v239 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v240 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x10U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x10U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x10U])));
    vlSelfRef.__VdlySet__copy_table__v240 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v241 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x11U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x11U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x11U])));
    vlSelfRef.__VdlySet__copy_table__v241 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v242 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x12U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x12U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x12U])));
    vlSelfRef.__VdlySet__copy_table__v242 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v243 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x13U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x13U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x13U])));
    vlSelfRef.__VdlySet__copy_table__v243 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v244 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x14U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x14U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x14U])));
    vlSelfRef.__VdlySet__copy_table__v244 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v245 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x15U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x15U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x15U])));
    vlSelfRef.__VdlySet__copy_table__v245 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v246 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x16U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x16U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x16U])));
    vlSelfRef.__VdlySet__copy_table__v246 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v247 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x17U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x17U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x17U])));
    vlSelfRef.__VdlySet__copy_table__v247 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v248 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x18U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x18U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x18U])));
    vlSelfRef.__VdlySet__copy_table__v248 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v249 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x19U]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x19U 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x19U])));
    vlSelfRef.__VdlySet__copy_table__v249 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v250 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x1aU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1aU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x1aU])));
    vlSelfRef.__VdlySet__copy_table__v250 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v251 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x1bU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1bU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x1bU])));
    vlSelfRef.__VdlySet__copy_table__v251 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v252 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x1cU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1cU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x1cU])));
    vlSelfRef.__VdlySet__copy_table__v252 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v253 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x1dU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1dU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x1dU])));
    vlSelfRef.__VdlySet__copy_table__v253 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v254 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x1eU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1eU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x1eU])));
    vlSelfRef.__VdlySet__copy_table__v254 = 1U;
    vlSelfRef.__VdlyVal__copy_table__v255 = ((IData)(vlSelfRef.__PVT__rst)
                                              ? 0U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                               ? vlSelfRef.copy_table
                                              [7U][0x1fU]
                                               : ((7U 
                                                   == (IData)(vlSelfRef.__PVT__copy_target))
                                                   ? 
                                                  ((((0x1fU 
                                                      == (IData)(vlSelfRef.instr0_rd)) 
                                                     & (IData)(vlSelfRef.instr0_rd_new_map_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__instr1_copy))
                                                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                                    : 
                                                   vlSelfRef.reg_map_table
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_table
                                                  [7U]
                                                  [0x1fU])));
    vlSelfRef.__VdlySet__copy_table__v255 = 1U;
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__reg_map_table__v0 = 1U;
        vlSelfRef.__PVT__i = 1U;
        vlSelfRef.__VdlySet__reg_map_table__v1 = 1U;
        vlSelfRef.__PVT__i = 2U;
        vlSelfRef.__VdlySet__reg_map_table__v2 = 1U;
        vlSelfRef.__PVT__i = 3U;
        vlSelfRef.__VdlySet__reg_map_table__v3 = 1U;
        vlSelfRef.__PVT__i = 4U;
        vlSelfRef.__VdlySet__reg_map_table__v4 = 1U;
        vlSelfRef.__PVT__i = 5U;
        vlSelfRef.__VdlySet__reg_map_table__v5 = 1U;
        vlSelfRef.__PVT__i = 6U;
        vlSelfRef.__VdlySet__reg_map_table__v6 = 1U;
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.__VdlySet__reg_map_table__v7 = 1U;
        vlSelfRef.__PVT__i = 8U;
        vlSelfRef.__VdlySet__reg_map_table__v8 = 1U;
        vlSelfRef.__PVT__i = 9U;
        vlSelfRef.__VdlySet__reg_map_table__v9 = 1U;
        vlSelfRef.__PVT__i = 0xaU;
        vlSelfRef.__VdlySet__reg_map_table__v10 = 1U;
        vlSelfRef.__PVT__i = 0xbU;
        vlSelfRef.__VdlySet__reg_map_table__v11 = 1U;
        vlSelfRef.__PVT__i = 0xcU;
        vlSelfRef.__VdlySet__reg_map_table__v12 = 1U;
        vlSelfRef.__PVT__i = 0xdU;
        vlSelfRef.__VdlySet__reg_map_table__v13 = 1U;
        vlSelfRef.__PVT__i = 0xeU;
        vlSelfRef.__VdlySet__reg_map_table__v14 = 1U;
        vlSelfRef.__PVT__i = 0xfU;
        vlSelfRef.__VdlySet__reg_map_table__v15 = 1U;
        vlSelfRef.__PVT__i = 0x10U;
        vlSelfRef.__VdlySet__reg_map_table__v16 = 1U;
        vlSelfRef.__PVT__i = 0x11U;
        vlSelfRef.__VdlySet__reg_map_table__v17 = 1U;
        vlSelfRef.__PVT__i = 0x12U;
        vlSelfRef.__VdlySet__reg_map_table__v18 = 1U;
        vlSelfRef.__PVT__i = 0x13U;
        vlSelfRef.__VdlySet__reg_map_table__v19 = 1U;
        vlSelfRef.__PVT__i = 0x14U;
        vlSelfRef.__VdlySet__reg_map_table__v20 = 1U;
        vlSelfRef.__PVT__i = 0x15U;
        vlSelfRef.__VdlySet__reg_map_table__v21 = 1U;
        vlSelfRef.__PVT__i = 0x16U;
        vlSelfRef.__VdlySet__reg_map_table__v22 = 1U;
        vlSelfRef.__PVT__i = 0x17U;
        vlSelfRef.__VdlySet__reg_map_table__v23 = 1U;
        vlSelfRef.__PVT__i = 0x18U;
        vlSelfRef.__VdlySet__reg_map_table__v24 = 1U;
        vlSelfRef.__PVT__i = 0x19U;
        vlSelfRef.__VdlySet__reg_map_table__v25 = 1U;
        vlSelfRef.__PVT__i = 0x1aU;
        vlSelfRef.__VdlySet__reg_map_table__v26 = 1U;
        vlSelfRef.__PVT__i = 0x1bU;
        vlSelfRef.__VdlySet__reg_map_table__v27 = 1U;
        vlSelfRef.__PVT__i = 0x1cU;
        vlSelfRef.__VdlySet__reg_map_table__v28 = 1U;
        vlSelfRef.__PVT__i = 0x1dU;
        vlSelfRef.__VdlySet__reg_map_table__v29 = 1U;
        vlSelfRef.__PVT__i = 0x1eU;
        vlSelfRef.__VdlySet__reg_map_table__v30 = 1U;
        vlSelfRef.__PVT__i = 0x1fU;
        vlSelfRef.__VdlySet__reg_map_table__v31 = 1U;
        vlSelfRef.__PVT__i = 0x20U;
    }
    if (((IData)(vlSelfRef.__PVT__recovery_flush) & 
         (~ (IData)(vlSelfRef.__PVT__recovery_no_copy)))) {
        vlSelfRef.__VdlyVal__reg_map_table__v32 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0U];
        vlSelfRef.__VdlySet__reg_map_table__v32 = 1U;
        vlSelfRef.__PVT__i = 1U;
        vlSelfRef.__VdlyVal__reg_map_table__v33 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][1U];
        vlSelfRef.__VdlySet__reg_map_table__v33 = 1U;
        vlSelfRef.__PVT__i = 2U;
        vlSelfRef.__VdlyVal__reg_map_table__v34 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][2U];
        vlSelfRef.__VdlySet__reg_map_table__v34 = 1U;
        vlSelfRef.__PVT__i = 3U;
        vlSelfRef.__VdlyVal__reg_map_table__v35 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][3U];
        vlSelfRef.__VdlySet__reg_map_table__v35 = 1U;
        vlSelfRef.__PVT__i = 4U;
        vlSelfRef.__VdlyVal__reg_map_table__v36 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][4U];
        vlSelfRef.__VdlySet__reg_map_table__v36 = 1U;
        vlSelfRef.__PVT__i = 5U;
        vlSelfRef.__VdlyVal__reg_map_table__v37 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][5U];
        vlSelfRef.__VdlySet__reg_map_table__v37 = 1U;
        vlSelfRef.__PVT__i = 6U;
        vlSelfRef.__VdlyVal__reg_map_table__v38 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][6U];
        vlSelfRef.__VdlySet__reg_map_table__v38 = 1U;
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.__VdlyVal__reg_map_table__v39 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][7U];
        vlSelfRef.__VdlySet__reg_map_table__v39 = 1U;
        vlSelfRef.__PVT__i = 8U;
        vlSelfRef.__VdlyVal__reg_map_table__v40 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][8U];
        vlSelfRef.__VdlySet__reg_map_table__v40 = 1U;
        vlSelfRef.__PVT__i = 9U;
        vlSelfRef.__VdlyVal__reg_map_table__v41 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][9U];
        vlSelfRef.__VdlySet__reg_map_table__v41 = 1U;
        vlSelfRef.__PVT__i = 0xaU;
        vlSelfRef.__VdlyVal__reg_map_table__v42 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0xaU];
        vlSelfRef.__VdlySet__reg_map_table__v42 = 1U;
        vlSelfRef.__PVT__i = 0xbU;
        vlSelfRef.__VdlyVal__reg_map_table__v43 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0xbU];
        vlSelfRef.__VdlySet__reg_map_table__v43 = 1U;
        vlSelfRef.__PVT__i = 0xcU;
        vlSelfRef.__VdlyVal__reg_map_table__v44 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0xcU];
        vlSelfRef.__VdlySet__reg_map_table__v44 = 1U;
        vlSelfRef.__PVT__i = 0xdU;
        vlSelfRef.__VdlyVal__reg_map_table__v45 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0xdU];
        vlSelfRef.__VdlySet__reg_map_table__v45 = 1U;
        vlSelfRef.__PVT__i = 0xeU;
        vlSelfRef.__VdlyVal__reg_map_table__v46 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0xeU];
        vlSelfRef.__VdlySet__reg_map_table__v46 = 1U;
        vlSelfRef.__PVT__i = 0xfU;
        vlSelfRef.__VdlyVal__reg_map_table__v47 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0xfU];
        vlSelfRef.__VdlySet__reg_map_table__v47 = 1U;
        vlSelfRef.__PVT__i = 0x10U;
        vlSelfRef.__VdlyVal__reg_map_table__v48 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x10U];
        vlSelfRef.__VdlySet__reg_map_table__v48 = 1U;
        vlSelfRef.__PVT__i = 0x11U;
        vlSelfRef.__VdlyVal__reg_map_table__v49 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x11U];
        vlSelfRef.__VdlySet__reg_map_table__v49 = 1U;
        vlSelfRef.__PVT__i = 0x12U;
        vlSelfRef.__VdlyVal__reg_map_table__v50 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x12U];
        vlSelfRef.__VdlySet__reg_map_table__v50 = 1U;
        vlSelfRef.__PVT__i = 0x13U;
        vlSelfRef.__VdlyVal__reg_map_table__v51 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x13U];
        vlSelfRef.__VdlySet__reg_map_table__v51 = 1U;
        vlSelfRef.__PVT__i = 0x14U;
        vlSelfRef.__VdlyVal__reg_map_table__v52 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x14U];
        vlSelfRef.__VdlySet__reg_map_table__v52 = 1U;
        vlSelfRef.__PVT__i = 0x15U;
        vlSelfRef.__VdlyVal__reg_map_table__v53 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x15U];
        vlSelfRef.__VdlySet__reg_map_table__v53 = 1U;
        vlSelfRef.__PVT__i = 0x16U;
        vlSelfRef.__VdlyVal__reg_map_table__v54 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x16U];
        vlSelfRef.__VdlySet__reg_map_table__v54 = 1U;
        vlSelfRef.__PVT__i = 0x17U;
        vlSelfRef.__VdlyVal__reg_map_table__v55 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x17U];
        vlSelfRef.__VdlySet__reg_map_table__v55 = 1U;
        vlSelfRef.__PVT__i = 0x18U;
        vlSelfRef.__VdlyVal__reg_map_table__v56 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x18U];
        vlSelfRef.__VdlySet__reg_map_table__v56 = 1U;
        vlSelfRef.__PVT__i = 0x19U;
        vlSelfRef.__VdlyVal__reg_map_table__v57 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x19U];
        vlSelfRef.__VdlySet__reg_map_table__v57 = 1U;
        vlSelfRef.__PVT__i = 0x1aU;
        vlSelfRef.__VdlyVal__reg_map_table__v58 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x1aU];
        vlSelfRef.__VdlySet__reg_map_table__v58 = 1U;
        vlSelfRef.__PVT__i = 0x1bU;
        vlSelfRef.__VdlyVal__reg_map_table__v59 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x1bU];
        vlSelfRef.__VdlySet__reg_map_table__v59 = 1U;
        vlSelfRef.__PVT__i = 0x1cU;
        vlSelfRef.__VdlyVal__reg_map_table__v60 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x1cU];
        vlSelfRef.__VdlySet__reg_map_table__v60 = 1U;
        vlSelfRef.__PVT__i = 0x1dU;
        vlSelfRef.__VdlyVal__reg_map_table__v61 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x1dU];
        vlSelfRef.__VdlySet__reg_map_table__v61 = 1U;
        vlSelfRef.__PVT__i = 0x1eU;
        vlSelfRef.__VdlyVal__reg_map_table__v62 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x1eU];
        vlSelfRef.__VdlySet__reg_map_table__v62 = 1U;
        vlSelfRef.__PVT__i = 0x1fU;
        vlSelfRef.__VdlyVal__reg_map_table__v63 = vlSelfRef.copy_table
            [vlSelfRef.recovery_target][0x1fU];
        vlSelfRef.__VdlySet__reg_map_table__v63 = 1U;
        vlSelfRef.__PVT__i = 0x20U;
    } else if (vlSelfRef.__PVT__recovery_mode) {
        if ((((IData)(vlSelfRef.__PVT__recovery_map_0_valid) 
              & (IData)(vlSelfRef.__PVT__recovery_map_1_valid)) 
             & ((IData)(vlSelfRef.__PVT__recovery_map_arf_0) 
                == (IData)(vlSelfRef.__PVT__recovery_map_arf_1)))) {
            vlSelfRef.__VdlyVal__reg_map_table__v64 
                = vlSelfRef.__PVT__recovery_map_prf_0;
            vlSelfRef.__VdlyDim0__reg_map_table__v64 
                = vlSelfRef.__PVT__recovery_map_arf_0;
            vlSelfRef.__VdlySet__reg_map_table__v64 = 1U;
        } else {
            if (vlSelfRef.__PVT__recovery_map_0_valid) {
                vlSelfRef.__VdlyVal__reg_map_table__v65 
                    = vlSelfRef.__PVT__recovery_map_prf_0;
                vlSelfRef.__VdlyDim0__reg_map_table__v65 
                    = vlSelfRef.__PVT__recovery_map_arf_0;
                vlSelfRef.__VdlySet__reg_map_table__v65 = 1U;
            }
            if (vlSelfRef.__PVT__recovery_map_1_valid) {
                vlSelfRef.__VdlyVal__reg_map_table__v66 
                    = vlSelfRef.__PVT__recovery_map_prf_1;
                vlSelfRef.__VdlyDim0__reg_map_table__v66 
                    = vlSelfRef.__PVT__recovery_map_arf_1;
                vlSelfRef.__VdlySet__reg_map_table__v66 = 1U;
            }
        }
    } else if ((((IData)(vlSelfRef.instr0_rd_new_map_valid) 
                 & (IData)(vlSelfRef.instr1_rd_new_map_valid)) 
                & ((IData)(vlSelfRef.instr0_rd) == (IData)(vlSelfRef.instr1_rd)))) {
        vlSelfRef.__VdlyVal__reg_map_table__v67 = vlSelfRef.__PVT__instr1_rd_new_prf;
        vlSelfRef.__VdlyDim0__reg_map_table__v67 = vlSelfRef.instr0_rd;
        vlSelfRef.__VdlySet__reg_map_table__v67 = 1U;
    } else {
        if (((IData)(vlSelfRef.instr0_rd_new_map_valid) 
             & (0U != (IData)(vlSelfRef.instr0_rd)))) {
            vlSelfRef.__VdlyVal__reg_map_table__v68 
                = ((IData)(vlSelfRef.instr0_rd_new_map_valid)
                    ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                    : vlSelfRef.reg_map_table[vlSelfRef.instr0_rd]);
            vlSelfRef.__VdlyDim0__reg_map_table__v68 
                = vlSelfRef.instr0_rd;
            vlSelfRef.__VdlySet__reg_map_table__v68 = 1U;
        }
        if (((IData)(vlSelfRef.instr1_rd_new_map_valid) 
             & (0U != (IData)(vlSelfRef.instr1_rd)))) {
            vlSelfRef.__VdlyVal__reg_map_table__v69 
                = ((IData)(vlSelfRef.instr1_rd_new_map_valid)
                    ? (IData)(vlSelfRef.__PVT__instr1_rd_new_prf)
                    : vlSelfRef.reg_map_table[vlSelfRef.instr1_rd]);
            vlSelfRef.__VdlyDim0__reg_map_table__v69 
                = vlSelfRef.instr1_rd;
            vlSelfRef.__VdlySet__reg_map_table__v69 = 1U;
        }
    }
    if (vlSelfRef.__VdlySet__copy_table__v0) {
        vlSelfRef.copy_table[0U][0U] = vlSelfRef.__VdlyVal__copy_table__v0;
    }
    if (vlSelfRef.__VdlySet__copy_table__v1) {
        vlSelfRef.copy_table[0U][1U] = vlSelfRef.__VdlyVal__copy_table__v1;
    }
    if (vlSelfRef.__VdlySet__copy_table__v2) {
        vlSelfRef.copy_table[0U][2U] = vlSelfRef.__VdlyVal__copy_table__v2;
    }
    if (vlSelfRef.__VdlySet__copy_table__v3) {
        vlSelfRef.copy_table[0U][3U] = vlSelfRef.__VdlyVal__copy_table__v3;
    }
    if (vlSelfRef.__VdlySet__copy_table__v4) {
        vlSelfRef.copy_table[0U][4U] = vlSelfRef.__VdlyVal__copy_table__v4;
    }
    if (vlSelfRef.__VdlySet__copy_table__v5) {
        vlSelfRef.copy_table[0U][5U] = vlSelfRef.__VdlyVal__copy_table__v5;
    }
    if (vlSelfRef.__VdlySet__copy_table__v6) {
        vlSelfRef.copy_table[0U][6U] = vlSelfRef.__VdlyVal__copy_table__v6;
    }
    if (vlSelfRef.__VdlySet__copy_table__v7) {
        vlSelfRef.copy_table[0U][7U] = vlSelfRef.__VdlyVal__copy_table__v7;
    }
    if (vlSelfRef.__VdlySet__copy_table__v8) {
        vlSelfRef.copy_table[0U][8U] = vlSelfRef.__VdlyVal__copy_table__v8;
    }
    if (vlSelfRef.__VdlySet__copy_table__v9) {
        vlSelfRef.copy_table[0U][9U] = vlSelfRef.__VdlyVal__copy_table__v9;
    }
    if (vlSelfRef.__VdlySet__copy_table__v10) {
        vlSelfRef.copy_table[0U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v10;
    }
    if (vlSelfRef.__VdlySet__copy_table__v11) {
        vlSelfRef.copy_table[0U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v11;
    }
    if (vlSelfRef.__VdlySet__copy_table__v12) {
        vlSelfRef.copy_table[0U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v12;
    }
    if (vlSelfRef.__VdlySet__copy_table__v13) {
        vlSelfRef.copy_table[0U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v13;
    }
    if (vlSelfRef.__VdlySet__copy_table__v14) {
        vlSelfRef.copy_table[0U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v14;
    }
    if (vlSelfRef.__VdlySet__copy_table__v15) {
        vlSelfRef.copy_table[0U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v15;
    }
    if (vlSelfRef.__VdlySet__copy_table__v16) {
        vlSelfRef.copy_table[0U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v16;
    }
    if (vlSelfRef.__VdlySet__copy_table__v17) {
        vlSelfRef.copy_table[0U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v17;
    }
    if (vlSelfRef.__VdlySet__copy_table__v18) {
        vlSelfRef.copy_table[0U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v18;
    }
    if (vlSelfRef.__VdlySet__copy_table__v19) {
        vlSelfRef.copy_table[0U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v19;
    }
    if (vlSelfRef.__VdlySet__copy_table__v20) {
        vlSelfRef.copy_table[0U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v20;
    }
    if (vlSelfRef.__VdlySet__copy_table__v21) {
        vlSelfRef.copy_table[0U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v21;
    }
    if (vlSelfRef.__VdlySet__copy_table__v22) {
        vlSelfRef.copy_table[0U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v22;
    }
    if (vlSelfRef.__VdlySet__copy_table__v23) {
        vlSelfRef.copy_table[0U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v23;
    }
    if (vlSelfRef.__VdlySet__copy_table__v24) {
        vlSelfRef.copy_table[0U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v24;
    }
    if (vlSelfRef.__VdlySet__copy_table__v25) {
        vlSelfRef.copy_table[0U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v25;
    }
    if (vlSelfRef.__VdlySet__copy_table__v26) {
        vlSelfRef.copy_table[0U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v26;
    }
    if (vlSelfRef.__VdlySet__copy_table__v27) {
        vlSelfRef.copy_table[0U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v27;
    }
    if (vlSelfRef.__VdlySet__copy_table__v28) {
        vlSelfRef.copy_table[0U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v28;
    }
    if (vlSelfRef.__VdlySet__copy_table__v29) {
        vlSelfRef.copy_table[0U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v29;
    }
    if (vlSelfRef.__VdlySet__copy_table__v30) {
        vlSelfRef.copy_table[0U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v30;
    }
    if (vlSelfRef.__VdlySet__copy_table__v31) {
        vlSelfRef.copy_table[0U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v31;
    }
    if (vlSelfRef.__VdlySet__copy_table__v32) {
        vlSelfRef.copy_table[1U][0U] = vlSelfRef.__VdlyVal__copy_table__v32;
    }
    if (vlSelfRef.__VdlySet__copy_table__v33) {
        vlSelfRef.copy_table[1U][1U] = vlSelfRef.__VdlyVal__copy_table__v33;
    }
    if (vlSelfRef.__VdlySet__copy_table__v34) {
        vlSelfRef.copy_table[1U][2U] = vlSelfRef.__VdlyVal__copy_table__v34;
    }
    if (vlSelfRef.__VdlySet__copy_table__v35) {
        vlSelfRef.copy_table[1U][3U] = vlSelfRef.__VdlyVal__copy_table__v35;
    }
    if (vlSelfRef.__VdlySet__copy_table__v36) {
        vlSelfRef.copy_table[1U][4U] = vlSelfRef.__VdlyVal__copy_table__v36;
    }
    if (vlSelfRef.__VdlySet__copy_table__v37) {
        vlSelfRef.copy_table[1U][5U] = vlSelfRef.__VdlyVal__copy_table__v37;
    }
    if (vlSelfRef.__VdlySet__copy_table__v38) {
        vlSelfRef.copy_table[1U][6U] = vlSelfRef.__VdlyVal__copy_table__v38;
    }
    if (vlSelfRef.__VdlySet__copy_table__v39) {
        vlSelfRef.copy_table[1U][7U] = vlSelfRef.__VdlyVal__copy_table__v39;
    }
    if (vlSelfRef.__VdlySet__copy_table__v40) {
        vlSelfRef.copy_table[1U][8U] = vlSelfRef.__VdlyVal__copy_table__v40;
    }
    if (vlSelfRef.__VdlySet__copy_table__v41) {
        vlSelfRef.copy_table[1U][9U] = vlSelfRef.__VdlyVal__copy_table__v41;
    }
    if (vlSelfRef.__VdlySet__copy_table__v42) {
        vlSelfRef.copy_table[1U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v42;
    }
    if (vlSelfRef.__VdlySet__copy_table__v43) {
        vlSelfRef.copy_table[1U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v43;
    }
    if (vlSelfRef.__VdlySet__copy_table__v44) {
        vlSelfRef.copy_table[1U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v44;
    }
    if (vlSelfRef.__VdlySet__copy_table__v45) {
        vlSelfRef.copy_table[1U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v45;
    }
    if (vlSelfRef.__VdlySet__copy_table__v46) {
        vlSelfRef.copy_table[1U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v46;
    }
    if (vlSelfRef.__VdlySet__copy_table__v47) {
        vlSelfRef.copy_table[1U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v47;
    }
    if (vlSelfRef.__VdlySet__copy_table__v48) {
        vlSelfRef.copy_table[1U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v48;
    }
    if (vlSelfRef.__VdlySet__copy_table__v49) {
        vlSelfRef.copy_table[1U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v49;
    }
    if (vlSelfRef.__VdlySet__copy_table__v50) {
        vlSelfRef.copy_table[1U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v50;
    }
    if (vlSelfRef.__VdlySet__copy_table__v51) {
        vlSelfRef.copy_table[1U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v51;
    }
    if (vlSelfRef.__VdlySet__copy_table__v52) {
        vlSelfRef.copy_table[1U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v52;
    }
    if (vlSelfRef.__VdlySet__copy_table__v53) {
        vlSelfRef.copy_table[1U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v53;
    }
    if (vlSelfRef.__VdlySet__copy_table__v54) {
        vlSelfRef.copy_table[1U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v54;
    }
    if (vlSelfRef.__VdlySet__copy_table__v55) {
        vlSelfRef.copy_table[1U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v55;
    }
    if (vlSelfRef.__VdlySet__copy_table__v56) {
        vlSelfRef.copy_table[1U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v56;
    }
    if (vlSelfRef.__VdlySet__copy_table__v57) {
        vlSelfRef.copy_table[1U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v57;
    }
    if (vlSelfRef.__VdlySet__copy_table__v58) {
        vlSelfRef.copy_table[1U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v58;
    }
    if (vlSelfRef.__VdlySet__copy_table__v59) {
        vlSelfRef.copy_table[1U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v59;
    }
    if (vlSelfRef.__VdlySet__copy_table__v60) {
        vlSelfRef.copy_table[1U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v60;
    }
    if (vlSelfRef.__VdlySet__copy_table__v61) {
        vlSelfRef.copy_table[1U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v61;
    }
    if (vlSelfRef.__VdlySet__copy_table__v62) {
        vlSelfRef.copy_table[1U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v62;
    }
    if (vlSelfRef.__VdlySet__copy_table__v63) {
        vlSelfRef.copy_table[1U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v63;
    }
    if (vlSelfRef.__VdlySet__copy_table__v64) {
        vlSelfRef.copy_table[2U][0U] = vlSelfRef.__VdlyVal__copy_table__v64;
    }
    if (vlSelfRef.__VdlySet__copy_table__v65) {
        vlSelfRef.copy_table[2U][1U] = vlSelfRef.__VdlyVal__copy_table__v65;
    }
    if (vlSelfRef.__VdlySet__copy_table__v66) {
        vlSelfRef.copy_table[2U][2U] = vlSelfRef.__VdlyVal__copy_table__v66;
    }
    if (vlSelfRef.__VdlySet__copy_table__v67) {
        vlSelfRef.copy_table[2U][3U] = vlSelfRef.__VdlyVal__copy_table__v67;
    }
    if (vlSelfRef.__VdlySet__copy_table__v68) {
        vlSelfRef.copy_table[2U][4U] = vlSelfRef.__VdlyVal__copy_table__v68;
    }
    if (vlSelfRef.__VdlySet__copy_table__v69) {
        vlSelfRef.copy_table[2U][5U] = vlSelfRef.__VdlyVal__copy_table__v69;
    }
    if (vlSelfRef.__VdlySet__copy_table__v70) {
        vlSelfRef.copy_table[2U][6U] = vlSelfRef.__VdlyVal__copy_table__v70;
    }
    if (vlSelfRef.__VdlySet__copy_table__v71) {
        vlSelfRef.copy_table[2U][7U] = vlSelfRef.__VdlyVal__copy_table__v71;
    }
    if (vlSelfRef.__VdlySet__copy_table__v72) {
        vlSelfRef.copy_table[2U][8U] = vlSelfRef.__VdlyVal__copy_table__v72;
    }
    if (vlSelfRef.__VdlySet__copy_table__v73) {
        vlSelfRef.copy_table[2U][9U] = vlSelfRef.__VdlyVal__copy_table__v73;
    }
    if (vlSelfRef.__VdlySet__copy_table__v74) {
        vlSelfRef.copy_table[2U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v74;
    }
    if (vlSelfRef.__VdlySet__copy_table__v75) {
        vlSelfRef.copy_table[2U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v75;
    }
    if (vlSelfRef.__VdlySet__copy_table__v76) {
        vlSelfRef.copy_table[2U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v76;
    }
    if (vlSelfRef.__VdlySet__copy_table__v77) {
        vlSelfRef.copy_table[2U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v77;
    }
    if (vlSelfRef.__VdlySet__copy_table__v78) {
        vlSelfRef.copy_table[2U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v78;
    }
    if (vlSelfRef.__VdlySet__copy_table__v79) {
        vlSelfRef.copy_table[2U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v79;
    }
    if (vlSelfRef.__VdlySet__copy_table__v80) {
        vlSelfRef.copy_table[2U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v80;
    }
    if (vlSelfRef.__VdlySet__copy_table__v81) {
        vlSelfRef.copy_table[2U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v81;
    }
    if (vlSelfRef.__VdlySet__copy_table__v82) {
        vlSelfRef.copy_table[2U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v82;
    }
    if (vlSelfRef.__VdlySet__copy_table__v83) {
        vlSelfRef.copy_table[2U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v83;
    }
    if (vlSelfRef.__VdlySet__copy_table__v84) {
        vlSelfRef.copy_table[2U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v84;
    }
    if (vlSelfRef.__VdlySet__copy_table__v85) {
        vlSelfRef.copy_table[2U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v85;
    }
    if (vlSelfRef.__VdlySet__copy_table__v86) {
        vlSelfRef.copy_table[2U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v86;
    }
    if (vlSelfRef.__VdlySet__copy_table__v87) {
        vlSelfRef.copy_table[2U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v87;
    }
    if (vlSelfRef.__VdlySet__copy_table__v88) {
        vlSelfRef.copy_table[2U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v88;
    }
    if (vlSelfRef.__VdlySet__copy_table__v89) {
        vlSelfRef.copy_table[2U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v89;
    }
    if (vlSelfRef.__VdlySet__copy_table__v90) {
        vlSelfRef.copy_table[2U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v90;
    }
    if (vlSelfRef.__VdlySet__copy_table__v91) {
        vlSelfRef.copy_table[2U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v91;
    }
    if (vlSelfRef.__VdlySet__copy_table__v92) {
        vlSelfRef.copy_table[2U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v92;
    }
    if (vlSelfRef.__VdlySet__copy_table__v93) {
        vlSelfRef.copy_table[2U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v93;
    }
    if (vlSelfRef.__VdlySet__copy_table__v94) {
        vlSelfRef.copy_table[2U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v94;
    }
    if (vlSelfRef.__VdlySet__copy_table__v95) {
        vlSelfRef.copy_table[2U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v95;
    }
    if (vlSelfRef.__VdlySet__copy_table__v96) {
        vlSelfRef.copy_table[3U][0U] = vlSelfRef.__VdlyVal__copy_table__v96;
    }
    if (vlSelfRef.__VdlySet__copy_table__v97) {
        vlSelfRef.copy_table[3U][1U] = vlSelfRef.__VdlyVal__copy_table__v97;
    }
    if (vlSelfRef.__VdlySet__copy_table__v98) {
        vlSelfRef.copy_table[3U][2U] = vlSelfRef.__VdlyVal__copy_table__v98;
    }
    if (vlSelfRef.__VdlySet__copy_table__v99) {
        vlSelfRef.copy_table[3U][3U] = vlSelfRef.__VdlyVal__copy_table__v99;
    }
    if (vlSelfRef.__VdlySet__copy_table__v100) {
        vlSelfRef.copy_table[3U][4U] = vlSelfRef.__VdlyVal__copy_table__v100;
    }
    if (vlSelfRef.__VdlySet__copy_table__v101) {
        vlSelfRef.copy_table[3U][5U] = vlSelfRef.__VdlyVal__copy_table__v101;
    }
    if (vlSelfRef.__VdlySet__copy_table__v102) {
        vlSelfRef.copy_table[3U][6U] = vlSelfRef.__VdlyVal__copy_table__v102;
    }
    if (vlSelfRef.__VdlySet__copy_table__v103) {
        vlSelfRef.copy_table[3U][7U] = vlSelfRef.__VdlyVal__copy_table__v103;
    }
    if (vlSelfRef.__VdlySet__copy_table__v104) {
        vlSelfRef.copy_table[3U][8U] = vlSelfRef.__VdlyVal__copy_table__v104;
    }
    if (vlSelfRef.__VdlySet__copy_table__v105) {
        vlSelfRef.copy_table[3U][9U] = vlSelfRef.__VdlyVal__copy_table__v105;
    }
    if (vlSelfRef.__VdlySet__copy_table__v106) {
        vlSelfRef.copy_table[3U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v106;
    }
    if (vlSelfRef.__VdlySet__copy_table__v107) {
        vlSelfRef.copy_table[3U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v107;
    }
    if (vlSelfRef.__VdlySet__copy_table__v108) {
        vlSelfRef.copy_table[3U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v108;
    }
    if (vlSelfRef.__VdlySet__copy_table__v109) {
        vlSelfRef.copy_table[3U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v109;
    }
    if (vlSelfRef.__VdlySet__copy_table__v110) {
        vlSelfRef.copy_table[3U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v110;
    }
    if (vlSelfRef.__VdlySet__copy_table__v111) {
        vlSelfRef.copy_table[3U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v111;
    }
    if (vlSelfRef.__VdlySet__copy_table__v112) {
        vlSelfRef.copy_table[3U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v112;
    }
    if (vlSelfRef.__VdlySet__copy_table__v113) {
        vlSelfRef.copy_table[3U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v113;
    }
    if (vlSelfRef.__VdlySet__copy_table__v114) {
        vlSelfRef.copy_table[3U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v114;
    }
    if (vlSelfRef.__VdlySet__copy_table__v115) {
        vlSelfRef.copy_table[3U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v115;
    }
    if (vlSelfRef.__VdlySet__copy_table__v116) {
        vlSelfRef.copy_table[3U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v116;
    }
    if (vlSelfRef.__VdlySet__copy_table__v117) {
        vlSelfRef.copy_table[3U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v117;
    }
    if (vlSelfRef.__VdlySet__copy_table__v118) {
        vlSelfRef.copy_table[3U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v118;
    }
    if (vlSelfRef.__VdlySet__copy_table__v119) {
        vlSelfRef.copy_table[3U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v119;
    }
    if (vlSelfRef.__VdlySet__copy_table__v120) {
        vlSelfRef.copy_table[3U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v120;
    }
    if (vlSelfRef.__VdlySet__copy_table__v121) {
        vlSelfRef.copy_table[3U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v121;
    }
    if (vlSelfRef.__VdlySet__copy_table__v122) {
        vlSelfRef.copy_table[3U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v122;
    }
    if (vlSelfRef.__VdlySet__copy_table__v123) {
        vlSelfRef.copy_table[3U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v123;
    }
    if (vlSelfRef.__VdlySet__copy_table__v124) {
        vlSelfRef.copy_table[3U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v124;
    }
    if (vlSelfRef.__VdlySet__copy_table__v125) {
        vlSelfRef.copy_table[3U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v125;
    }
    if (vlSelfRef.__VdlySet__copy_table__v126) {
        vlSelfRef.copy_table[3U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v126;
    }
    if (vlSelfRef.__VdlySet__copy_table__v127) {
        vlSelfRef.copy_table[3U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v127;
    }
    if (vlSelfRef.__VdlySet__copy_table__v128) {
        vlSelfRef.copy_table[4U][0U] = vlSelfRef.__VdlyVal__copy_table__v128;
    }
    if (vlSelfRef.__VdlySet__copy_table__v129) {
        vlSelfRef.copy_table[4U][1U] = vlSelfRef.__VdlyVal__copy_table__v129;
    }
    if (vlSelfRef.__VdlySet__copy_table__v130) {
        vlSelfRef.copy_table[4U][2U] = vlSelfRef.__VdlyVal__copy_table__v130;
    }
    if (vlSelfRef.__VdlySet__copy_table__v131) {
        vlSelfRef.copy_table[4U][3U] = vlSelfRef.__VdlyVal__copy_table__v131;
    }
    if (vlSelfRef.__VdlySet__copy_table__v132) {
        vlSelfRef.copy_table[4U][4U] = vlSelfRef.__VdlyVal__copy_table__v132;
    }
    if (vlSelfRef.__VdlySet__copy_table__v133) {
        vlSelfRef.copy_table[4U][5U] = vlSelfRef.__VdlyVal__copy_table__v133;
    }
    if (vlSelfRef.__VdlySet__copy_table__v134) {
        vlSelfRef.copy_table[4U][6U] = vlSelfRef.__VdlyVal__copy_table__v134;
    }
    if (vlSelfRef.__VdlySet__copy_table__v135) {
        vlSelfRef.copy_table[4U][7U] = vlSelfRef.__VdlyVal__copy_table__v135;
    }
    if (vlSelfRef.__VdlySet__copy_table__v136) {
        vlSelfRef.copy_table[4U][8U] = vlSelfRef.__VdlyVal__copy_table__v136;
    }
    if (vlSelfRef.__VdlySet__copy_table__v137) {
        vlSelfRef.copy_table[4U][9U] = vlSelfRef.__VdlyVal__copy_table__v137;
    }
    if (vlSelfRef.__VdlySet__copy_table__v138) {
        vlSelfRef.copy_table[4U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v138;
    }
    if (vlSelfRef.__VdlySet__copy_table__v139) {
        vlSelfRef.copy_table[4U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v139;
    }
    if (vlSelfRef.__VdlySet__copy_table__v140) {
        vlSelfRef.copy_table[4U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v140;
    }
    if (vlSelfRef.__VdlySet__copy_table__v141) {
        vlSelfRef.copy_table[4U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v141;
    }
    if (vlSelfRef.__VdlySet__copy_table__v142) {
        vlSelfRef.copy_table[4U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v142;
    }
    if (vlSelfRef.__VdlySet__copy_table__v143) {
        vlSelfRef.copy_table[4U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v143;
    }
    if (vlSelfRef.__VdlySet__copy_table__v144) {
        vlSelfRef.copy_table[4U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v144;
    }
    if (vlSelfRef.__VdlySet__copy_table__v145) {
        vlSelfRef.copy_table[4U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v145;
    }
    if (vlSelfRef.__VdlySet__copy_table__v146) {
        vlSelfRef.copy_table[4U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v146;
    }
    if (vlSelfRef.__VdlySet__copy_table__v147) {
        vlSelfRef.copy_table[4U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v147;
    }
    if (vlSelfRef.__VdlySet__copy_table__v148) {
        vlSelfRef.copy_table[4U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v148;
    }
    if (vlSelfRef.__VdlySet__copy_table__v149) {
        vlSelfRef.copy_table[4U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v149;
    }
    if (vlSelfRef.__VdlySet__copy_table__v150) {
        vlSelfRef.copy_table[4U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v150;
    }
    if (vlSelfRef.__VdlySet__copy_table__v151) {
        vlSelfRef.copy_table[4U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v151;
    }
    if (vlSelfRef.__VdlySet__copy_table__v152) {
        vlSelfRef.copy_table[4U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v152;
    }
    if (vlSelfRef.__VdlySet__copy_table__v153) {
        vlSelfRef.copy_table[4U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v153;
    }
    if (vlSelfRef.__VdlySet__copy_table__v154) {
        vlSelfRef.copy_table[4U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v154;
    }
    if (vlSelfRef.__VdlySet__copy_table__v155) {
        vlSelfRef.copy_table[4U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v155;
    }
    if (vlSelfRef.__VdlySet__copy_table__v156) {
        vlSelfRef.copy_table[4U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v156;
    }
    if (vlSelfRef.__VdlySet__copy_table__v157) {
        vlSelfRef.copy_table[4U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v157;
    }
    if (vlSelfRef.__VdlySet__copy_table__v158) {
        vlSelfRef.copy_table[4U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v158;
    }
    if (vlSelfRef.__VdlySet__copy_table__v159) {
        vlSelfRef.copy_table[4U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v159;
    }
    if (vlSelfRef.__VdlySet__copy_table__v160) {
        vlSelfRef.copy_table[5U][0U] = vlSelfRef.__VdlyVal__copy_table__v160;
    }
    if (vlSelfRef.__VdlySet__copy_table__v161) {
        vlSelfRef.copy_table[5U][1U] = vlSelfRef.__VdlyVal__copy_table__v161;
    }
    if (vlSelfRef.__VdlySet__copy_table__v162) {
        vlSelfRef.copy_table[5U][2U] = vlSelfRef.__VdlyVal__copy_table__v162;
    }
    if (vlSelfRef.__VdlySet__copy_table__v163) {
        vlSelfRef.copy_table[5U][3U] = vlSelfRef.__VdlyVal__copy_table__v163;
    }
    if (vlSelfRef.__VdlySet__copy_table__v164) {
        vlSelfRef.copy_table[5U][4U] = vlSelfRef.__VdlyVal__copy_table__v164;
    }
    if (vlSelfRef.__VdlySet__copy_table__v165) {
        vlSelfRef.copy_table[5U][5U] = vlSelfRef.__VdlyVal__copy_table__v165;
    }
    if (vlSelfRef.__VdlySet__copy_table__v166) {
        vlSelfRef.copy_table[5U][6U] = vlSelfRef.__VdlyVal__copy_table__v166;
    }
    if (vlSelfRef.__VdlySet__copy_table__v167) {
        vlSelfRef.copy_table[5U][7U] = vlSelfRef.__VdlyVal__copy_table__v167;
    }
    if (vlSelfRef.__VdlySet__copy_table__v168) {
        vlSelfRef.copy_table[5U][8U] = vlSelfRef.__VdlyVal__copy_table__v168;
    }
    if (vlSelfRef.__VdlySet__copy_table__v169) {
        vlSelfRef.copy_table[5U][9U] = vlSelfRef.__VdlyVal__copy_table__v169;
    }
    if (vlSelfRef.__VdlySet__copy_table__v170) {
        vlSelfRef.copy_table[5U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v170;
    }
    if (vlSelfRef.__VdlySet__copy_table__v171) {
        vlSelfRef.copy_table[5U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v171;
    }
    if (vlSelfRef.__VdlySet__copy_table__v172) {
        vlSelfRef.copy_table[5U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v172;
    }
    if (vlSelfRef.__VdlySet__copy_table__v173) {
        vlSelfRef.copy_table[5U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v173;
    }
    if (vlSelfRef.__VdlySet__copy_table__v174) {
        vlSelfRef.copy_table[5U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v174;
    }
    if (vlSelfRef.__VdlySet__copy_table__v175) {
        vlSelfRef.copy_table[5U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v175;
    }
    if (vlSelfRef.__VdlySet__copy_table__v176) {
        vlSelfRef.copy_table[5U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v176;
    }
    if (vlSelfRef.__VdlySet__copy_table__v177) {
        vlSelfRef.copy_table[5U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v177;
    }
    if (vlSelfRef.__VdlySet__copy_table__v178) {
        vlSelfRef.copy_table[5U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v178;
    }
    if (vlSelfRef.__VdlySet__copy_table__v179) {
        vlSelfRef.copy_table[5U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v179;
    }
    if (vlSelfRef.__VdlySet__copy_table__v180) {
        vlSelfRef.copy_table[5U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v180;
    }
    if (vlSelfRef.__VdlySet__copy_table__v181) {
        vlSelfRef.copy_table[5U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v181;
    }
    if (vlSelfRef.__VdlySet__copy_table__v182) {
        vlSelfRef.copy_table[5U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v182;
    }
    if (vlSelfRef.__VdlySet__copy_table__v183) {
        vlSelfRef.copy_table[5U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v183;
    }
    if (vlSelfRef.__VdlySet__copy_table__v184) {
        vlSelfRef.copy_table[5U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v184;
    }
    if (vlSelfRef.__VdlySet__copy_table__v185) {
        vlSelfRef.copy_table[5U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v185;
    }
    if (vlSelfRef.__VdlySet__copy_table__v186) {
        vlSelfRef.copy_table[5U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v186;
    }
    if (vlSelfRef.__VdlySet__copy_table__v187) {
        vlSelfRef.copy_table[5U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v187;
    }
    if (vlSelfRef.__VdlySet__copy_table__v188) {
        vlSelfRef.copy_table[5U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v188;
    }
    if (vlSelfRef.__VdlySet__copy_table__v189) {
        vlSelfRef.copy_table[5U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v189;
    }
    if (vlSelfRef.__VdlySet__copy_table__v190) {
        vlSelfRef.copy_table[5U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v190;
    }
    if (vlSelfRef.__VdlySet__copy_table__v191) {
        vlSelfRef.copy_table[5U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v191;
    }
    if (vlSelfRef.__VdlySet__copy_table__v192) {
        vlSelfRef.copy_table[6U][0U] = vlSelfRef.__VdlyVal__copy_table__v192;
    }
    if (vlSelfRef.__VdlySet__copy_table__v193) {
        vlSelfRef.copy_table[6U][1U] = vlSelfRef.__VdlyVal__copy_table__v193;
    }
    if (vlSelfRef.__VdlySet__copy_table__v194) {
        vlSelfRef.copy_table[6U][2U] = vlSelfRef.__VdlyVal__copy_table__v194;
    }
    if (vlSelfRef.__VdlySet__copy_table__v195) {
        vlSelfRef.copy_table[6U][3U] = vlSelfRef.__VdlyVal__copy_table__v195;
    }
    if (vlSelfRef.__VdlySet__copy_table__v196) {
        vlSelfRef.copy_table[6U][4U] = vlSelfRef.__VdlyVal__copy_table__v196;
    }
    if (vlSelfRef.__VdlySet__copy_table__v197) {
        vlSelfRef.copy_table[6U][5U] = vlSelfRef.__VdlyVal__copy_table__v197;
    }
    if (vlSelfRef.__VdlySet__copy_table__v198) {
        vlSelfRef.copy_table[6U][6U] = vlSelfRef.__VdlyVal__copy_table__v198;
    }
    if (vlSelfRef.__VdlySet__copy_table__v199) {
        vlSelfRef.copy_table[6U][7U] = vlSelfRef.__VdlyVal__copy_table__v199;
    }
    if (vlSelfRef.__VdlySet__copy_table__v200) {
        vlSelfRef.copy_table[6U][8U] = vlSelfRef.__VdlyVal__copy_table__v200;
    }
    if (vlSelfRef.__VdlySet__copy_table__v201) {
        vlSelfRef.copy_table[6U][9U] = vlSelfRef.__VdlyVal__copy_table__v201;
    }
    if (vlSelfRef.__VdlySet__copy_table__v202) {
        vlSelfRef.copy_table[6U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v202;
    }
    if (vlSelfRef.__VdlySet__copy_table__v203) {
        vlSelfRef.copy_table[6U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v203;
    }
    if (vlSelfRef.__VdlySet__copy_table__v204) {
        vlSelfRef.copy_table[6U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v204;
    }
    if (vlSelfRef.__VdlySet__copy_table__v205) {
        vlSelfRef.copy_table[6U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v205;
    }
    if (vlSelfRef.__VdlySet__copy_table__v206) {
        vlSelfRef.copy_table[6U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v206;
    }
    if (vlSelfRef.__VdlySet__copy_table__v207) {
        vlSelfRef.copy_table[6U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v207;
    }
    if (vlSelfRef.__VdlySet__copy_table__v208) {
        vlSelfRef.copy_table[6U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v208;
    }
    if (vlSelfRef.__VdlySet__copy_table__v209) {
        vlSelfRef.copy_table[6U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v209;
    }
    if (vlSelfRef.__VdlySet__copy_table__v210) {
        vlSelfRef.copy_table[6U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v210;
    }
    if (vlSelfRef.__VdlySet__copy_table__v211) {
        vlSelfRef.copy_table[6U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v211;
    }
    if (vlSelfRef.__VdlySet__copy_table__v212) {
        vlSelfRef.copy_table[6U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v212;
    }
    if (vlSelfRef.__VdlySet__copy_table__v213) {
        vlSelfRef.copy_table[6U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v213;
    }
    if (vlSelfRef.__VdlySet__copy_table__v214) {
        vlSelfRef.copy_table[6U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v214;
    }
    if (vlSelfRef.__VdlySet__copy_table__v215) {
        vlSelfRef.copy_table[6U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v215;
    }
    if (vlSelfRef.__VdlySet__copy_table__v216) {
        vlSelfRef.copy_table[6U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v216;
    }
    if (vlSelfRef.__VdlySet__copy_table__v217) {
        vlSelfRef.copy_table[6U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v217;
    }
    if (vlSelfRef.__VdlySet__copy_table__v218) {
        vlSelfRef.copy_table[6U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v218;
    }
    if (vlSelfRef.__VdlySet__copy_table__v219) {
        vlSelfRef.copy_table[6U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v219;
    }
    if (vlSelfRef.__VdlySet__copy_table__v220) {
        vlSelfRef.copy_table[6U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v220;
    }
    if (vlSelfRef.__VdlySet__copy_table__v221) {
        vlSelfRef.copy_table[6U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v221;
    }
    if (vlSelfRef.__VdlySet__copy_table__v222) {
        vlSelfRef.copy_table[6U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v222;
    }
    if (vlSelfRef.__VdlySet__copy_table__v223) {
        vlSelfRef.copy_table[6U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v223;
    }
    if (vlSelfRef.__VdlySet__copy_table__v224) {
        vlSelfRef.copy_table[7U][0U] = vlSelfRef.__VdlyVal__copy_table__v224;
    }
    if (vlSelfRef.__VdlySet__copy_table__v225) {
        vlSelfRef.copy_table[7U][1U] = vlSelfRef.__VdlyVal__copy_table__v225;
    }
    if (vlSelfRef.__VdlySet__copy_table__v226) {
        vlSelfRef.copy_table[7U][2U] = vlSelfRef.__VdlyVal__copy_table__v226;
    }
    if (vlSelfRef.__VdlySet__copy_table__v227) {
        vlSelfRef.copy_table[7U][3U] = vlSelfRef.__VdlyVal__copy_table__v227;
    }
    if (vlSelfRef.__VdlySet__copy_table__v228) {
        vlSelfRef.copy_table[7U][4U] = vlSelfRef.__VdlyVal__copy_table__v228;
    }
    if (vlSelfRef.__VdlySet__copy_table__v229) {
        vlSelfRef.copy_table[7U][5U] = vlSelfRef.__VdlyVal__copy_table__v229;
    }
    if (vlSelfRef.__VdlySet__copy_table__v230) {
        vlSelfRef.copy_table[7U][6U] = vlSelfRef.__VdlyVal__copy_table__v230;
    }
    if (vlSelfRef.__VdlySet__copy_table__v231) {
        vlSelfRef.copy_table[7U][7U] = vlSelfRef.__VdlyVal__copy_table__v231;
    }
    if (vlSelfRef.__VdlySet__copy_table__v232) {
        vlSelfRef.copy_table[7U][8U] = vlSelfRef.__VdlyVal__copy_table__v232;
    }
    if (vlSelfRef.__VdlySet__copy_table__v233) {
        vlSelfRef.copy_table[7U][9U] = vlSelfRef.__VdlyVal__copy_table__v233;
    }
    if (vlSelfRef.__VdlySet__copy_table__v234) {
        vlSelfRef.copy_table[7U][0xaU] = vlSelfRef.__VdlyVal__copy_table__v234;
    }
    if (vlSelfRef.__VdlySet__copy_table__v235) {
        vlSelfRef.copy_table[7U][0xbU] = vlSelfRef.__VdlyVal__copy_table__v235;
    }
    if (vlSelfRef.__VdlySet__copy_table__v236) {
        vlSelfRef.copy_table[7U][0xcU] = vlSelfRef.__VdlyVal__copy_table__v236;
    }
    if (vlSelfRef.__VdlySet__copy_table__v237) {
        vlSelfRef.copy_table[7U][0xdU] = vlSelfRef.__VdlyVal__copy_table__v237;
    }
    if (vlSelfRef.__VdlySet__copy_table__v238) {
        vlSelfRef.copy_table[7U][0xeU] = vlSelfRef.__VdlyVal__copy_table__v238;
    }
    if (vlSelfRef.__VdlySet__copy_table__v239) {
        vlSelfRef.copy_table[7U][0xfU] = vlSelfRef.__VdlyVal__copy_table__v239;
    }
    if (vlSelfRef.__VdlySet__copy_table__v240) {
        vlSelfRef.copy_table[7U][0x10U] = vlSelfRef.__VdlyVal__copy_table__v240;
    }
    if (vlSelfRef.__VdlySet__copy_table__v241) {
        vlSelfRef.copy_table[7U][0x11U] = vlSelfRef.__VdlyVal__copy_table__v241;
    }
    if (vlSelfRef.__VdlySet__copy_table__v242) {
        vlSelfRef.copy_table[7U][0x12U] = vlSelfRef.__VdlyVal__copy_table__v242;
    }
    if (vlSelfRef.__VdlySet__copy_table__v243) {
        vlSelfRef.copy_table[7U][0x13U] = vlSelfRef.__VdlyVal__copy_table__v243;
    }
    if (vlSelfRef.__VdlySet__copy_table__v244) {
        vlSelfRef.copy_table[7U][0x14U] = vlSelfRef.__VdlyVal__copy_table__v244;
    }
    if (vlSelfRef.__VdlySet__copy_table__v245) {
        vlSelfRef.copy_table[7U][0x15U] = vlSelfRef.__VdlyVal__copy_table__v245;
    }
    if (vlSelfRef.__VdlySet__copy_table__v246) {
        vlSelfRef.copy_table[7U][0x16U] = vlSelfRef.__VdlyVal__copy_table__v246;
    }
    if (vlSelfRef.__VdlySet__copy_table__v247) {
        vlSelfRef.copy_table[7U][0x17U] = vlSelfRef.__VdlyVal__copy_table__v247;
    }
    if (vlSelfRef.__VdlySet__copy_table__v248) {
        vlSelfRef.copy_table[7U][0x18U] = vlSelfRef.__VdlyVal__copy_table__v248;
    }
    if (vlSelfRef.__VdlySet__copy_table__v249) {
        vlSelfRef.copy_table[7U][0x19U] = vlSelfRef.__VdlyVal__copy_table__v249;
    }
    if (vlSelfRef.__VdlySet__copy_table__v250) {
        vlSelfRef.copy_table[7U][0x1aU] = vlSelfRef.__VdlyVal__copy_table__v250;
    }
    if (vlSelfRef.__VdlySet__copy_table__v251) {
        vlSelfRef.copy_table[7U][0x1bU] = vlSelfRef.__VdlyVal__copy_table__v251;
    }
    if (vlSelfRef.__VdlySet__copy_table__v252) {
        vlSelfRef.copy_table[7U][0x1cU] = vlSelfRef.__VdlyVal__copy_table__v252;
    }
    if (vlSelfRef.__VdlySet__copy_table__v253) {
        vlSelfRef.copy_table[7U][0x1dU] = vlSelfRef.__VdlyVal__copy_table__v253;
    }
    if (vlSelfRef.__VdlySet__copy_table__v254) {
        vlSelfRef.copy_table[7U][0x1eU] = vlSelfRef.__VdlyVal__copy_table__v254;
    }
    if (vlSelfRef.__VdlySet__copy_table__v255) {
        vlSelfRef.copy_table[7U][0x1fU] = vlSelfRef.__VdlyVal__copy_table__v255;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v0) {
        vlSelfRef.reg_map_table[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v1) {
        vlSelfRef.reg_map_table[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v2) {
        vlSelfRef.reg_map_table[2U] = 2U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v3) {
        vlSelfRef.reg_map_table[3U] = 3U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v4) {
        vlSelfRef.reg_map_table[4U] = 4U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v5) {
        vlSelfRef.reg_map_table[5U] = 5U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v6) {
        vlSelfRef.reg_map_table[6U] = 6U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v7) {
        vlSelfRef.reg_map_table[7U] = 7U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v8) {
        vlSelfRef.reg_map_table[8U] = 8U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v9) {
        vlSelfRef.reg_map_table[9U] = 9U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v10) {
        vlSelfRef.reg_map_table[0xaU] = 0xaU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v11) {
        vlSelfRef.reg_map_table[0xbU] = 0xbU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v12) {
        vlSelfRef.reg_map_table[0xcU] = 0xcU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v13) {
        vlSelfRef.reg_map_table[0xdU] = 0xdU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v14) {
        vlSelfRef.reg_map_table[0xeU] = 0xeU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v15) {
        vlSelfRef.reg_map_table[0xfU] = 0xfU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v16) {
        vlSelfRef.reg_map_table[0x10U] = 0x10U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v17) {
        vlSelfRef.reg_map_table[0x11U] = 0x11U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v18) {
        vlSelfRef.reg_map_table[0x12U] = 0x12U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v19) {
        vlSelfRef.reg_map_table[0x13U] = 0x13U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v20) {
        vlSelfRef.reg_map_table[0x14U] = 0x14U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v21) {
        vlSelfRef.reg_map_table[0x15U] = 0x15U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v22) {
        vlSelfRef.reg_map_table[0x16U] = 0x16U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v23) {
        vlSelfRef.reg_map_table[0x17U] = 0x17U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v24) {
        vlSelfRef.reg_map_table[0x18U] = 0x18U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v25) {
        vlSelfRef.reg_map_table[0x19U] = 0x19U;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v26) {
        vlSelfRef.reg_map_table[0x1aU] = 0x1aU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v27) {
        vlSelfRef.reg_map_table[0x1bU] = 0x1bU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v28) {
        vlSelfRef.reg_map_table[0x1cU] = 0x1cU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v29) {
        vlSelfRef.reg_map_table[0x1dU] = 0x1dU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v30) {
        vlSelfRef.reg_map_table[0x1eU] = 0x1eU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v31) {
        vlSelfRef.reg_map_table[0x1fU] = 0x1fU;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v32) {
        vlSelfRef.reg_map_table[0U] = vlSelfRef.__VdlyVal__reg_map_table__v32;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v33) {
        vlSelfRef.reg_map_table[1U] = vlSelfRef.__VdlyVal__reg_map_table__v33;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v34) {
        vlSelfRef.reg_map_table[2U] = vlSelfRef.__VdlyVal__reg_map_table__v34;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v35) {
        vlSelfRef.reg_map_table[3U] = vlSelfRef.__VdlyVal__reg_map_table__v35;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v36) {
        vlSelfRef.reg_map_table[4U] = vlSelfRef.__VdlyVal__reg_map_table__v36;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v37) {
        vlSelfRef.reg_map_table[5U] = vlSelfRef.__VdlyVal__reg_map_table__v37;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v38) {
        vlSelfRef.reg_map_table[6U] = vlSelfRef.__VdlyVal__reg_map_table__v38;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v39) {
        vlSelfRef.reg_map_table[7U] = vlSelfRef.__VdlyVal__reg_map_table__v39;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v40) {
        vlSelfRef.reg_map_table[8U] = vlSelfRef.__VdlyVal__reg_map_table__v40;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v41) {
        vlSelfRef.reg_map_table[9U] = vlSelfRef.__VdlyVal__reg_map_table__v41;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v42) {
        vlSelfRef.reg_map_table[0xaU] = vlSelfRef.__VdlyVal__reg_map_table__v42;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v43) {
        vlSelfRef.reg_map_table[0xbU] = vlSelfRef.__VdlyVal__reg_map_table__v43;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v44) {
        vlSelfRef.reg_map_table[0xcU] = vlSelfRef.__VdlyVal__reg_map_table__v44;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v45) {
        vlSelfRef.reg_map_table[0xdU] = vlSelfRef.__VdlyVal__reg_map_table__v45;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v46) {
        vlSelfRef.reg_map_table[0xeU] = vlSelfRef.__VdlyVal__reg_map_table__v46;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v47) {
        vlSelfRef.reg_map_table[0xfU] = vlSelfRef.__VdlyVal__reg_map_table__v47;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v48) {
        vlSelfRef.reg_map_table[0x10U] = vlSelfRef.__VdlyVal__reg_map_table__v48;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v49) {
        vlSelfRef.reg_map_table[0x11U] = vlSelfRef.__VdlyVal__reg_map_table__v49;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v50) {
        vlSelfRef.reg_map_table[0x12U] = vlSelfRef.__VdlyVal__reg_map_table__v50;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v51) {
        vlSelfRef.reg_map_table[0x13U] = vlSelfRef.__VdlyVal__reg_map_table__v51;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v52) {
        vlSelfRef.reg_map_table[0x14U] = vlSelfRef.__VdlyVal__reg_map_table__v52;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v53) {
        vlSelfRef.reg_map_table[0x15U] = vlSelfRef.__VdlyVal__reg_map_table__v53;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v54) {
        vlSelfRef.reg_map_table[0x16U] = vlSelfRef.__VdlyVal__reg_map_table__v54;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v55) {
        vlSelfRef.reg_map_table[0x17U] = vlSelfRef.__VdlyVal__reg_map_table__v55;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v56) {
        vlSelfRef.reg_map_table[0x18U] = vlSelfRef.__VdlyVal__reg_map_table__v56;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v57) {
        vlSelfRef.reg_map_table[0x19U] = vlSelfRef.__VdlyVal__reg_map_table__v57;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v58) {
        vlSelfRef.reg_map_table[0x1aU] = vlSelfRef.__VdlyVal__reg_map_table__v58;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v59) {
        vlSelfRef.reg_map_table[0x1bU] = vlSelfRef.__VdlyVal__reg_map_table__v59;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v60) {
        vlSelfRef.reg_map_table[0x1cU] = vlSelfRef.__VdlyVal__reg_map_table__v60;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v61) {
        vlSelfRef.reg_map_table[0x1dU] = vlSelfRef.__VdlyVal__reg_map_table__v61;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v62) {
        vlSelfRef.reg_map_table[0x1eU] = vlSelfRef.__VdlyVal__reg_map_table__v62;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v63) {
        vlSelfRef.reg_map_table[0x1fU] = vlSelfRef.__VdlyVal__reg_map_table__v63;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v64) {
        vlSelfRef.reg_map_table[vlSelfRef.__VdlyDim0__reg_map_table__v64] 
            = vlSelfRef.__VdlyVal__reg_map_table__v64;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v65) {
        vlSelfRef.reg_map_table[vlSelfRef.__VdlyDim0__reg_map_table__v65] 
            = vlSelfRef.__VdlyVal__reg_map_table__v65;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v66) {
        vlSelfRef.reg_map_table[vlSelfRef.__VdlyDim0__reg_map_table__v66] 
            = vlSelfRef.__VdlyVal__reg_map_table__v66;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v67) {
        vlSelfRef.reg_map_table[vlSelfRef.__VdlyDim0__reg_map_table__v67] 
            = vlSelfRef.__VdlyVal__reg_map_table__v67;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v68) {
        vlSelfRef.reg_map_table[vlSelfRef.__VdlyDim0__reg_map_table__v68] 
            = vlSelfRef.__VdlyVal__reg_map_table__v68;
    }
    if (vlSelfRef.__VdlySet__reg_map_table__v69) {
        vlSelfRef.reg_map_table[vlSelfRef.__VdlyDim0__reg_map_table__v69] 
            = vlSelfRef.__VdlyVal__reg_map_table__v69;
    }
}

VL_INLINE_OPT void Vfalco_top_register_map_table___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_copy = (0U == (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr0_rob_tag), 0U, 3U)));
    vlSelfRef.recovery_target = (7U & VL_SEL_IIII(32, 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__recovery_target_rob_tag), 0U, 3U)))
                                                    ? 
                                                   VL_EXTEND_II(32,3, 
                                                                (7U 
                                                                 & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__recovery_target_rob_tag), 3U, 3U)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    VL_EXTEND_II(32,3, 
                                                                 (7U 
                                                                  & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__recovery_target_rob_tag), 3U, 3U))))), 0U, 3U));
}

VL_INLINE_OPT void Vfalco_top_register_map_table___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_rs2_prf = vlSelfRef.reg_map_table
        [vlSelfRef.__PVT__instr0_rs2];
    vlSelfRef.__PVT__instr0_rs1_prf = vlSelfRef.reg_map_table
        [vlSelfRef.__PVT__instr0_rs1];
    vlSelfRef.__PVT__instr0_rd_stale_prf = vlSelfRef.reg_map_table
        [vlSelfRef.instr0_rd];
}

VL_INLINE_OPT void Vfalco_top_register_map_table___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_copy = (0U == (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr1_rob_tag), 0U, 3U)));
    vlSelfRef.__PVT__copy_target = (7U & ((IData)(vlSelfRef.__PVT__instr0_copy)
                                           ? VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr0_rob_tag), 3U, 3U)
                                           : VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__instr1_rob_tag), 3U, 3U)));
}

VL_INLINE_OPT void Vfalco_top_register_map_table___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__2(Vfalco_top_register_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_map_table___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Map_Table__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_rd_stale_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                              == (IData)(vlSelfRef.instr1_rd)) 
                                             & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                             ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                             : vlSelfRef.reg_map_table
                                            [vlSelfRef.instr1_rd]);
    vlSelfRef.__PVT__instr1_rs1_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                         == (IData)(vlSelfRef.__PVT__instr1_rs1)) 
                                        & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                        ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                        : vlSelfRef.reg_map_table
                                       [vlSelfRef.__PVT__instr1_rs1]);
    vlSelfRef.__PVT__instr1_rs2_prf = ((((IData)(vlSelfRef.instr0_rd) 
                                         == (IData)(vlSelfRef.__PVT__instr1_rs2)) 
                                        & (IData)(vlSelfRef.instr0_rd_new_map_valid))
                                        ? (IData)(vlSelfRef.__PVT__instr0_rd_new_prf)
                                        : vlSelfRef.reg_map_table
                                       [vlSelfRef.__PVT__instr1_rs2]);
}
