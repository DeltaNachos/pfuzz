// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_gshare_branch_predictor.h"

VL_INLINE_OPT void Vfalco_top_gshare_branch_predictor___ico_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__0(Vfalco_top_gshare_branch_predictor* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_gshare_branch_predictor___ico_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_gshare_hash__1__branch_pc = vlSelfRef.__PVT__IF_instr0_pc;
    vlSelfRef.__Vfunc_gshare_hash__1__bhsr = vlSelfRef.__PVT__gshare_BHSR;
    vlSelfRef.__Vfunc_gshare_hash__1__Vfuncout = (0x3ffU 
                                                  & ((IData)(vlSelfRef.__Vfunc_gshare_hash__1__bhsr) 
                                                     ^ 
                                                     VL_SEL_IIII(32, vlSelfRef.__Vfunc_gshare_hash__1__branch_pc, 2U, 0xaU)));
    vlSelfRef.__PVT__gshare_instr0_hash_addr = vlSelfRef.__Vfunc_gshare_hash__1__Vfuncout;
    vlSelfRef.__Vfunc_gshare_hash__2__branch_pc = vlSelfRef.__PVT__IF_instr1_pc;
    vlSelfRef.__Vfunc_gshare_hash__2__bhsr = vlSelfRef.__PVT__gshare_BHSR;
    vlSelfRef.__Vfunc_gshare_hash__2__Vfuncout = (0x3ffU 
                                                  & ((IData)(vlSelfRef.__Vfunc_gshare_hash__2__bhsr) 
                                                     ^ 
                                                     VL_SEL_IIII(32, vlSelfRef.__Vfunc_gshare_hash__2__branch_pc, 2U, 0xaU)));
    vlSelfRef.__PVT__gshare_instr1_hash_addr = vlSelfRef.__Vfunc_gshare_hash__2__Vfuncout;
    vlSelfRef.__Vfunc_gshare_hash__3__branch_pc = vlSelfRef.__PVT__IF_instr1_pc;
    vlSelfRef.__Vfunc_gshare_hash__3__bhsr = VL_EXTEND_II(10,1, (IData)(vlSelfRef.__PVT__gshare_instr1_BHSR));
    vlSelfRef.__Vfunc_gshare_hash__3__Vfuncout = (0x3ffU 
                                                  & ((IData)(vlSelfRef.__Vfunc_gshare_hash__3__bhsr) 
                                                     ^ 
                                                     VL_SEL_IIII(32, vlSelfRef.__Vfunc_gshare_hash__3__branch_pc, 2U, 0xaU)));
    vlSelfRef.__PVT__gshare_i0_taken_i1_hash_addr = vlSelfRef.__Vfunc_gshare_hash__3__Vfuncout;
    vlSelfRef.__PVT__instr0_branch_predict_taken = 
        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__gshare_pht_table
                             [vlSelfRef.__PVT__gshare_instr0_hash_addr], 1U));
}

VL_INLINE_OPT void Vfalco_top_gshare_branch_predictor___ico_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__1(Vfalco_top_gshare_branch_predictor* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_gshare_branch_predictor___ico_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__current_instr1_BHSR = (((IData)(vlSelfRef.__PVT__IF_instr0_btb_hit) 
                                             & (~ (IData)(vlSelfRef.__PVT__instr0_branch_predict_taken)))
                                             ? VL_CONCAT_III(10,9,1, 
                                                             (0x1ffU 
                                                              & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__gshare_BHSR), 0U, 9U)), 0U)
                                             : (IData)(vlSelfRef.__PVT__gshare_BHSR));
    vlSelfRef.__PVT__instr1_branch_predict_taken = 
        (1U & (((~ (IData)(vlSelfRef.__PVT__instr0_branch_predict_taken)) 
                & (IData)(vlSelfRef.__PVT__IF_instr0_btb_hit))
                ? VL_BITSEL_IIII(2, vlSelfRef.__PVT__gshare_pht_table
                                 [vlSelfRef.__PVT__gshare_instr1_hash_addr], 1U)
                : VL_BITSEL_IIII(2, vlSelfRef.__PVT__gshare_pht_table
                                 [vlSelfRef.__PVT__gshare_i0_taken_i1_hash_addr], 1U)));
    vlSelfRef.__PVT__gshare_update_BHSR = (((IData)(vlSelfRef.__PVT__instr0_branch_predict_taken) 
                                            & (IData)(vlSelfRef.__PVT__IF_instr0_btb_hit))
                                            ? VL_CONCAT_III(10,9,1, 
                                                            (0x1ffU 
                                                             & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__gshare_BHSR), 0U, 9U)), (IData)(vlSelfRef.__PVT__instr0_branch_predict_taken))
                                            : ((((IData)(vlSelfRef.__PVT__instr1_branch_predict_taken) 
                                                 & (IData)(vlSelfRef.__PVT__IF_instr1_btb_hit)) 
                                                & (IData)(vlSelfRef.__PVT__IF_instr0_btb_hit))
                                                ? VL_CONCAT_III(10,8,2, 
                                                                (0xffU 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__gshare_BHSR), 0U, 8U)), 
                                                                VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__instr1_branch_predict_taken)))
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__instr1_branch_predict_taken) 
                                                    & (IData)(vlSelfRef.__PVT__IF_instr1_btb_hit))
                                                    ? 
                                                   VL_CONCAT_III(10,9,1, 
                                                                 (0x1ffU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__gshare_BHSR), 0U, 9U)), (IData)(vlSelfRef.__PVT__instr1_branch_predict_taken))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__IF_instr0_btb_hit)
                                                     ? 
                                                    VL_CONCAT_III(10,9,1, 
                                                                  (0x1ffU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__gshare_BHSR), 0U, 9U)), 0U)
                                                     : (IData)(vlSelfRef.__PVT__gshare_BHSR)))));
}

VL_INLINE_OPT void Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__0(Vfalco_top_gshare_branch_predictor* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_gshare_branch_predictor___nba_sequent__TOP__falco_top__core__instruction_fetch__branch_predictor__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__gshare_BHSR = vlSelfRef.__PVT__gshare_BHSR;
    vlSelfRef.__VdlySet__gshare_pht_table__v0 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v3 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v4 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v5 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v6 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v7 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v8 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v9 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v10 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v11 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v12 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v13 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v14 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v15 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v16 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v17 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v18 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v19 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v20 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v21 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v22 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v23 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v24 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v25 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v26 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v27 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v28 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v29 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v30 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v31 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v32 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v33 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v34 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v35 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v36 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v37 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v38 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v39 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v40 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v41 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v42 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v43 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v44 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v45 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v46 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v47 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v48 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v49 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v50 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v51 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v52 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v53 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v54 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v55 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v56 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v57 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v58 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v59 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v60 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v61 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v62 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v63 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v64 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v65 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v66 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v67 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v68 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v69 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v70 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v71 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v72 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v73 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v74 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v75 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v76 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v77 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v78 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v79 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v80 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v81 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v82 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v83 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v84 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v85 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v86 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v87 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v88 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v89 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v90 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v91 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v92 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v93 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v94 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v95 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v96 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v97 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v98 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v99 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v100 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v101 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v102 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v103 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v104 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v105 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v106 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v107 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v108 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v109 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v110 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v111 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v112 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v113 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v114 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v115 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v116 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v117 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v118 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v119 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v120 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v121 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v122 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v123 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v124 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v125 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v126 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v127 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v128 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v129 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v130 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v131 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v132 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v133 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v134 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v135 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v136 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v137 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v138 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v139 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v140 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v141 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v142 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v143 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v144 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v145 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v146 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v147 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v148 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v149 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v150 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v151 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v152 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v153 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v154 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v155 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v156 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v157 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v158 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v159 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v160 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v161 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v162 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v163 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v164 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v165 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v166 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v167 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v168 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v169 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v170 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v171 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v172 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v173 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v174 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v175 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v176 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v177 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v178 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v179 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v180 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v181 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v182 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v183 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v184 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v185 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v186 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v187 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v188 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v189 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v190 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v191 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v192 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v193 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v194 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v195 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v196 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v197 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v198 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v199 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v200 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v201 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v202 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v203 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v204 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v205 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v206 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v207 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v208 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v209 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v210 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v211 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v212 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v213 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v214 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v215 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v216 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v217 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v218 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v219 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v220 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v221 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v222 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v223 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v224 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v225 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v226 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v227 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v228 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v229 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v230 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v231 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v232 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v233 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v234 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v235 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v236 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v237 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v238 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v239 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v240 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v241 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v242 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v243 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v244 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v245 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v246 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v247 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v248 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v249 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v250 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v251 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v252 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v253 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v254 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v255 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v256 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v257 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v258 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v259 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v260 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v261 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v262 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v263 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v264 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v265 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v266 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v267 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v268 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v269 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v270 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v271 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v272 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v273 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v274 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v275 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v276 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v277 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v278 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v279 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v280 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v281 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v282 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v283 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v284 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v285 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v286 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v287 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v288 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v289 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v290 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v291 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v292 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v293 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v294 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v295 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v296 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v297 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v298 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v299 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v300 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v301 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v302 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v303 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v304 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v305 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v306 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v307 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v308 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v309 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v310 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v311 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v312 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v313 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v314 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v315 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v316 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v317 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v318 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v319 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v320 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v321 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v322 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v323 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v324 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v325 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v326 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v327 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v328 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v329 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v330 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v331 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v332 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v333 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v334 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v335 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v336 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v337 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v338 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v339 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v340 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v341 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v342 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v343 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v344 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v345 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v346 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v347 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v348 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v349 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v350 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v351 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v352 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v353 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v354 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v355 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v356 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v357 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v358 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v359 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v360 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v361 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v362 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v363 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v364 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v365 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v366 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v367 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v368 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v369 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v370 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v371 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v372 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v373 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v374 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v375 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v376 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v377 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v378 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v379 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v380 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v381 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v382 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v383 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v384 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v385 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v386 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v387 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v388 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v389 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v390 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v391 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v392 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v393 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v394 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v395 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v396 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v397 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v398 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v399 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v400 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v401 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v402 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v403 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v404 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v405 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v406 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v407 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v408 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v409 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v410 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v411 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v412 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v413 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v414 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v415 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v416 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v417 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v418 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v419 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v420 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v421 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v422 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v423 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v424 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v425 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v426 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v427 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v428 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v429 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v430 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v431 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v432 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v433 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v434 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v435 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v436 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v437 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v438 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v439 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v440 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v441 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v442 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v443 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v444 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v445 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v446 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v447 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v448 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v449 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v450 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v451 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v452 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v453 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v454 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v455 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v456 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v457 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v458 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v459 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v460 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v461 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v462 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v463 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v464 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v465 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v466 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v467 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v468 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v469 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v470 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v471 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v472 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v473 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v474 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v475 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v476 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v477 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v478 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v479 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v480 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v481 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v482 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v483 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v484 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v485 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v486 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v487 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v488 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v489 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v490 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v491 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v492 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v493 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v494 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v495 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v496 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v497 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v498 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v499 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v500 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v501 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v502 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v503 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v504 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v505 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v506 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v507 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v508 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v509 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v510 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v511 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v512 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v513 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v514 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v515 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v516 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v517 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v518 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v519 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v520 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v521 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v522 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v523 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v524 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v525 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v526 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v527 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v528 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v529 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v530 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v531 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v532 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v533 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v534 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v535 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v536 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v537 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v538 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v539 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v540 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v541 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v542 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v543 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v544 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v545 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v546 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v547 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v548 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v549 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v550 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v551 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v552 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v553 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v554 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v555 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v556 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v557 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v558 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v559 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v560 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v561 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v562 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v563 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v564 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v565 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v566 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v567 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v568 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v569 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v570 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v571 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v572 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v573 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v574 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v575 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v576 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v577 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v578 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v579 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v580 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v581 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v582 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v583 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v584 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v585 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v586 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v587 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v588 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v589 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v590 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v591 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v592 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v593 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v594 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v595 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v596 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v597 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v598 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v599 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v600 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v601 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v602 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v603 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v604 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v605 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v606 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v607 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v608 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v609 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v610 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v611 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v612 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v613 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v614 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v615 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v616 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v617 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v618 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v619 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v620 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v621 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v622 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v623 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v624 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v625 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v626 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v627 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v628 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v629 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v630 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v631 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v632 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v633 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v634 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v635 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v636 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v637 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v638 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v639 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v640 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v641 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v642 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v643 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v644 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v645 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v646 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v647 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v648 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v649 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v650 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v651 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v652 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v653 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v654 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v655 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v656 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v657 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v658 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v659 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v660 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v661 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v662 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v663 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v664 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v665 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v666 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v667 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v668 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v669 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v670 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v671 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v672 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v673 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v674 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v675 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v676 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v677 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v678 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v679 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v680 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v681 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v682 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v683 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v684 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v685 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v686 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v687 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v688 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v689 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v690 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v691 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v692 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v693 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v694 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v695 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v696 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v697 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v698 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v699 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v700 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v701 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v702 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v703 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v704 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v705 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v706 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v707 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v708 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v709 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v710 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v711 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v712 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v713 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v714 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v715 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v716 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v717 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v718 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v719 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v720 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v721 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v722 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v723 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v724 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v725 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v726 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v727 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v728 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v729 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v730 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v731 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v732 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v733 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v734 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v735 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v736 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v737 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v738 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v739 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v740 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v741 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v742 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v743 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v744 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v745 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v746 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v747 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v748 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v749 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v750 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v751 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v752 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v753 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v754 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v755 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v756 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v757 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v758 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v759 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v760 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v761 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v762 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v763 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v764 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v765 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v766 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v767 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v768 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v769 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v770 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v771 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v772 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v773 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v774 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v775 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v776 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v777 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v778 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v779 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v780 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v781 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v782 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v783 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v784 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v785 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v786 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v787 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v788 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v789 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v790 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v791 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v792 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v793 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v794 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v795 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v796 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v797 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v798 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v799 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v800 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v801 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v802 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v803 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v804 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v805 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v806 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v807 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v808 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v809 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v810 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v811 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v812 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v813 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v814 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v815 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v816 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v817 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v818 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v819 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v820 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v821 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v822 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v823 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v824 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v825 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v826 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v827 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v828 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v829 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v830 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v831 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v832 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v833 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v834 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v835 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v836 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v837 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v838 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v839 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v840 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v841 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v842 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v843 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v844 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v845 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v846 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v847 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v848 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v849 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v850 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v851 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v852 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v853 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v854 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v855 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v856 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v857 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v858 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v859 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v860 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v861 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v862 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v863 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v864 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v865 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v866 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v867 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v868 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v869 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v870 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v871 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v872 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v873 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v874 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v875 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v876 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v877 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v878 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v879 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v880 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v881 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v882 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v883 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v884 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v885 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v886 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v887 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v888 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v889 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v890 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v891 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v892 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v893 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v894 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v895 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v896 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v897 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v898 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v899 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v900 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v901 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v902 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v903 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v904 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v905 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v906 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v907 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v908 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v909 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v910 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v911 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v912 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v913 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v914 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v915 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v916 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v917 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v918 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v919 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v920 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v921 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v922 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v923 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v924 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v925 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v926 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v927 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v928 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v929 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v930 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v931 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v932 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v933 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v934 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v935 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v936 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v937 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v938 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v939 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v940 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v941 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v942 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v943 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v944 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v945 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v946 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v947 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v948 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v949 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v950 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v951 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v952 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v953 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v954 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v955 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v956 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v957 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v958 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v959 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v960 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v961 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v962 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v963 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v964 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v965 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v966 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v967 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v968 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v969 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v970 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v971 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v972 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v973 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v974 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v975 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v976 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v977 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v978 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v979 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v980 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v981 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v982 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v983 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v984 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v985 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v986 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v987 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v988 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v989 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v990 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v991 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v992 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v993 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v994 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v995 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v996 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v997 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v998 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v999 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1000 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1001 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1002 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1003 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1004 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1005 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1006 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1007 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1008 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1009 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1010 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1011 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1012 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1013 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1014 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1015 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1016 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1017 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1018 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1019 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1020 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1021 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1022 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1023 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1024 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1025 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1026 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1027 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1028 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1029 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1030 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1031 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1032 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1033 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1034 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1035 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1036 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1037 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1038 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1039 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1040 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1041 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1042 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1043 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1044 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1045 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1046 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1047 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1048 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1049 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1050 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1051 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1052 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1053 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1054 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1055 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1056 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1057 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1058 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1059 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1060 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1061 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1062 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1063 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1064 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1065 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1066 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1067 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1068 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1069 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1070 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1071 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1072 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1073 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1074 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1075 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1076 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1077 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1078 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1079 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1080 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1081 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1082 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1083 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1084 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1085 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1086 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1087 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1088 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1089 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1090 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1091 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1092 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1093 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1094 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1095 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1096 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1097 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1098 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1099 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1100 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1101 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1102 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1103 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1104 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1105 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1106 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1107 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1108 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1109 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1110 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1111 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1112 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1113 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1114 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1115 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1116 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1117 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1118 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1119 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1120 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1121 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1122 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1123 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1124 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1125 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1126 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1127 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1128 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1129 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1130 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1131 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1132 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1133 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1134 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1135 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1136 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1137 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1138 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1139 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1140 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1141 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1142 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1143 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1144 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1145 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1146 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1147 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1148 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1149 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1150 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1151 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1152 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1153 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1154 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1155 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1156 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1157 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1158 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1159 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1160 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1161 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1162 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1163 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1164 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1165 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1166 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1167 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1168 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1169 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1170 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1171 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1172 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1173 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1174 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1175 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1176 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1177 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1178 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1179 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1180 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1181 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1182 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1183 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1184 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1185 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1186 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1187 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1188 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1189 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1190 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1191 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1192 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1193 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1194 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1195 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1196 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1197 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1198 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1199 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1200 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1201 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1202 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1203 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1204 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1205 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1206 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1207 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1208 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1209 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1210 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1211 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1212 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1213 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1214 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1215 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1216 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1217 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1218 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1219 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1220 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1221 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1222 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1223 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1224 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1225 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1226 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1227 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1228 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1229 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1230 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1231 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1232 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1233 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1234 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1235 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1236 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1237 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1238 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1239 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1240 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1241 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1242 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1243 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1244 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1245 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1246 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1247 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1248 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1249 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1250 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1251 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1252 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1253 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1254 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1255 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1256 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1257 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1258 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1259 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1260 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1261 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1262 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1263 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1264 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1265 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1266 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1267 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1268 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1269 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1270 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1271 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1272 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1273 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1274 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1275 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1276 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1277 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1278 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1279 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1280 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1281 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1282 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1283 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1284 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1285 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1286 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1287 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1288 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1289 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1290 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1291 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1292 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1293 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1294 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1295 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1296 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1297 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1298 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1299 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1300 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1301 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1302 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1303 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1304 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1305 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1306 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1307 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1308 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1309 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1310 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1311 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1312 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1313 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1314 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1315 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1316 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1317 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1318 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1319 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1320 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1321 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1322 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1323 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1324 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1325 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1326 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1327 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1328 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1329 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1330 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1331 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1332 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1333 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1334 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1335 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1336 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1337 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1338 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1339 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1340 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1341 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1342 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1343 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1344 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1345 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1346 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1347 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1348 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1349 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1350 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1351 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1352 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1353 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1354 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1355 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1356 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1357 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1358 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1359 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1360 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1361 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1362 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1363 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1364 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1365 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1366 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1367 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1368 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1369 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1370 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1371 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1372 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1373 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1374 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1375 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1376 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1377 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1378 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1379 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1380 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1381 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1382 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1383 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1384 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1385 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1386 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1387 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1388 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1389 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1390 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1391 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1392 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1393 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1394 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1395 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1396 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1397 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1398 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1399 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1400 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1401 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1402 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1403 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1404 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1405 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1406 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1407 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1408 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1409 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1410 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1411 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1412 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1413 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1414 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1415 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1416 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1417 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1418 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1419 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1420 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1421 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1422 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1423 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1424 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1425 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1426 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1427 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1428 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1429 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1430 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1431 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1432 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1433 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1434 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1435 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1436 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1437 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1438 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1439 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1440 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1441 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1442 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1443 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1444 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1445 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1446 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1447 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1448 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1449 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1450 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1451 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1452 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1453 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1454 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1455 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1456 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1457 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1458 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1459 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1460 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1461 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1462 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1463 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1464 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1465 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1466 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1467 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1468 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1469 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1470 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1471 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1472 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1473 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1474 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1475 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1476 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1477 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1478 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1479 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1480 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1481 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1482 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1483 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1484 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1485 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1486 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1487 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1488 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1489 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1490 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1491 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1492 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1493 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1494 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1495 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1496 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1497 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1498 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1499 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1500 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1501 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1502 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1503 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1504 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1505 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1506 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1507 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1508 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1509 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1510 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1511 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1512 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1513 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1514 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1515 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1516 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1517 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1518 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1519 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1520 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1521 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1522 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1523 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1524 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1525 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1526 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1527 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1528 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1529 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1530 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1531 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1532 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1533 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1534 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1535 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1536 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1537 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1538 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1539 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1540 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1541 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1542 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1543 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1544 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1545 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1546 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1547 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1548 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1549 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1550 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1551 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1552 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1553 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1554 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1555 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1556 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1557 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1558 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1559 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1560 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1561 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1562 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1563 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1564 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1565 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1566 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1567 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1568 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1569 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1570 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1571 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1572 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1573 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1574 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1575 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1576 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1577 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1578 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1579 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1580 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1581 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1582 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1583 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1584 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1585 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1586 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1587 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1588 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1589 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1590 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1591 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1592 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1593 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1594 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1595 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1596 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1597 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1598 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1599 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1600 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1601 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1602 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1603 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1604 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1605 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1606 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1607 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1608 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1609 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1610 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1611 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1612 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1613 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1614 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1615 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1616 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1617 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1618 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1619 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1620 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1621 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1622 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1623 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1624 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1625 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1626 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1627 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1628 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1629 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1630 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1631 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1632 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1633 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1634 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1635 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1636 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1637 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1638 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1639 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1640 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1641 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1642 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1643 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1644 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1645 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1646 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1647 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1648 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1649 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1650 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1651 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1652 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1653 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1654 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1655 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1656 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1657 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1658 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1659 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1660 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1661 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1662 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1663 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1664 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1665 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1666 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1667 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1668 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1669 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1670 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1671 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1672 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1673 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1674 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1675 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1676 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1677 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1678 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1679 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1680 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1681 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1682 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1683 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1684 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1685 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1686 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1687 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1688 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1689 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1690 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1691 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1692 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1693 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1694 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1695 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1696 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1697 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1698 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1699 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1700 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1701 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1702 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1703 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1704 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1705 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1706 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1707 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1708 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1709 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1710 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1711 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1712 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1713 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1714 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1715 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1716 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1717 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1718 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1719 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1720 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1721 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1722 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1723 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1724 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1725 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1726 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1727 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1728 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1729 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1730 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1731 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1732 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1733 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1734 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1735 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1736 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1737 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1738 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1739 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1740 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1741 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1742 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1743 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1744 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1745 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1746 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1747 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1748 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1749 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1750 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1751 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1752 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1753 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1754 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1755 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1756 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1757 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1758 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1759 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1760 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1761 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1762 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1763 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1764 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1765 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1766 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1767 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1768 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1769 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1770 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1771 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1772 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1773 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1774 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1775 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1776 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1777 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1778 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1779 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1780 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1781 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1782 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1783 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1784 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1785 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1786 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1787 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1788 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1789 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1790 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1791 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1792 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1793 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1794 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1795 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1796 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1797 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1798 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1799 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1800 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1801 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1802 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1803 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1804 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1805 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1806 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1807 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1808 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1809 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1810 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1811 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1812 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1813 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1814 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1815 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1816 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1817 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1818 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1819 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1820 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1821 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1822 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1823 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1824 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1825 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1826 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1827 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1828 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1829 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1830 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1831 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1832 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1833 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1834 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1835 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1836 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1837 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1838 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1839 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1840 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1841 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1842 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1843 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1844 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1845 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1846 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1847 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1848 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1849 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1850 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1851 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1852 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1853 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1854 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1855 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1856 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1857 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1858 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1859 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1860 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1861 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1862 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1863 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1864 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1865 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1866 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1867 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1868 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1869 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1870 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1871 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1872 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1873 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1874 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1875 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1876 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1877 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1878 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1879 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1880 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1881 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1882 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1883 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1884 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1885 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1886 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1887 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1888 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1889 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1890 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1891 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1892 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1893 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1894 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1895 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1896 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1897 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1898 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1899 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1900 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1901 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1902 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1903 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1904 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1905 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1906 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1907 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1908 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1909 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1910 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1911 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1912 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1913 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1914 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1915 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1916 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1917 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1918 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1919 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1920 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1921 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1922 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1923 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1924 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1925 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1926 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1927 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1928 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1929 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1930 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1931 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1932 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1933 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1934 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1935 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1936 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1937 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1938 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1939 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1940 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1941 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1942 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1943 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1944 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1945 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1946 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1947 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1948 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1949 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1950 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1951 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1952 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1953 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1954 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1955 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1956 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1957 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1958 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1959 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1960 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1961 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1962 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1963 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1964 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1965 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1966 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1967 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1968 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1969 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1970 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1971 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1972 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1973 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1974 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1975 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1976 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1977 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1978 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1979 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1980 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1981 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1982 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1983 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1984 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1985 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1986 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1987 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1988 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1989 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1990 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1991 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1992 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1993 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1994 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1995 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1996 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1997 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1998 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v1999 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2000 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2001 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2002 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2003 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2004 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2005 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2006 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2007 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2008 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2009 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2010 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2011 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2012 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2013 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2014 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2015 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2016 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2017 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2018 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2019 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2020 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2021 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2022 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2023 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2024 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2025 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2026 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2027 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2028 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2029 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2030 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2031 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2032 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2033 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2034 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2035 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2036 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2037 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2038 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2039 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2040 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2041 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2042 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2043 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2044 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2045 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2046 = 0U;
    vlSelfRef.__VdlySet__gshare_pht_table__v2047 = 0U;
    vlSelfRef.__Vdly__gshare_BHSR = ((IData)(vlSelfRef.__PVT__rst)
                                      ? 0U : (((IData)(vlSelfRef.__PVT__store_set_violation) 
                                               & (~ (IData)(vlSelfRef.__PVT__branch_miss_first)))
                                               ? (IData)(vlSelfRef.__PVT__lsu_bhsr)
                                               : ((IData)(vlSelfRef.__PVT__exe_cond_miss_prediction)
                                                   ? (IData)(vlSelfRef.__PVT__gshare_recovery_BHSR)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__cache_hit)
                                                    ? (IData)(vlSelfRef.__PVT__gshare_update_BHSR)
                                                    : (IData)(vlSelfRef.__PVT__gshare_BHSR)))));
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v0 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v1 = 
            vlSelfRef.__PVT__gshare_pht_table[0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v1 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v2 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [1U])) {
            vlSelfRef.__PVT__gshare_pht_table[1U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [1U])) {
            vlSelfRef.__PVT__gshare_pht_table[1U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [1U])) {
            vlSelfRef.__PVT__gshare_pht_table[1U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [1U])) {
            vlSelfRef.__PVT__gshare_pht_table[1U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v3 = 
            vlSelfRef.__PVT__gshare_pht_table[1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v3 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v4 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [2U])) {
            vlSelfRef.__PVT__gshare_pht_table[2U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [2U])) {
            vlSelfRef.__PVT__gshare_pht_table[2U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [2U])) {
            vlSelfRef.__PVT__gshare_pht_table[2U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [2U])) {
            vlSelfRef.__PVT__gshare_pht_table[2U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v5 = 
            vlSelfRef.__PVT__gshare_pht_table[2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v5 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v6 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [3U])) {
            vlSelfRef.__PVT__gshare_pht_table[3U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [3U])) {
            vlSelfRef.__PVT__gshare_pht_table[3U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [3U])) {
            vlSelfRef.__PVT__gshare_pht_table[3U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [3U])) {
            vlSelfRef.__PVT__gshare_pht_table[3U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v7 = 
            vlSelfRef.__PVT__gshare_pht_table[3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v7 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v8 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [4U])) {
            vlSelfRef.__PVT__gshare_pht_table[4U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [4U])) {
            vlSelfRef.__PVT__gshare_pht_table[4U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [4U])) {
            vlSelfRef.__PVT__gshare_pht_table[4U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [4U])) {
            vlSelfRef.__PVT__gshare_pht_table[4U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v9 = 
            vlSelfRef.__PVT__gshare_pht_table[4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v9 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v10 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [5U])) {
            vlSelfRef.__PVT__gshare_pht_table[5U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [5U])) {
            vlSelfRef.__PVT__gshare_pht_table[5U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [5U])) {
            vlSelfRef.__PVT__gshare_pht_table[5U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [5U])) {
            vlSelfRef.__PVT__gshare_pht_table[5U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v11 
            = vlSelfRef.__PVT__gshare_pht_table[5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v11 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v12 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [6U])) {
            vlSelfRef.__PVT__gshare_pht_table[6U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [6U])) {
            vlSelfRef.__PVT__gshare_pht_table[6U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [6U])) {
            vlSelfRef.__PVT__gshare_pht_table[6U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [6U])) {
            vlSelfRef.__PVT__gshare_pht_table[6U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v13 
            = vlSelfRef.__PVT__gshare_pht_table[6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v13 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v14 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [7U])) {
            vlSelfRef.__PVT__gshare_pht_table[7U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [7U])) {
            vlSelfRef.__PVT__gshare_pht_table[7U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [7U])) {
            vlSelfRef.__PVT__gshare_pht_table[7U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [7U])) {
            vlSelfRef.__PVT__gshare_pht_table[7U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v15 
            = vlSelfRef.__PVT__gshare_pht_table[7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v15 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v16 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [8U])) {
            vlSelfRef.__PVT__gshare_pht_table[8U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [8U])) {
            vlSelfRef.__PVT__gshare_pht_table[8U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [8U])) {
            vlSelfRef.__PVT__gshare_pht_table[8U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [8U])) {
            vlSelfRef.__PVT__gshare_pht_table[8U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v17 
            = vlSelfRef.__PVT__gshare_pht_table[8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v17 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v18 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [9U])) {
            vlSelfRef.__PVT__gshare_pht_table[9U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [9U])) {
            vlSelfRef.__PVT__gshare_pht_table[9U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [9U])) {
            vlSelfRef.__PVT__gshare_pht_table[9U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [9U])) {
            vlSelfRef.__PVT__gshare_pht_table[9U] = 
                ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                  ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v19 
            = vlSelfRef.__PVT__gshare_pht_table[9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v19 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v20 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v21 
            = vlSelfRef.__PVT__gshare_pht_table[0xaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v21 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v22 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xbU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xbU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xbU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v23 
            = vlSelfRef.__PVT__gshare_pht_table[0xbU];
        vlSelfRef.__VdlySet__gshare_pht_table__v23 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v24 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xcU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xcU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xcU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v25 
            = vlSelfRef.__PVT__gshare_pht_table[0xcU];
        vlSelfRef.__VdlySet__gshare_pht_table__v25 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v26 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xdU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xdU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xdU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v27 
            = vlSelfRef.__PVT__gshare_pht_table[0xdU];
        vlSelfRef.__VdlySet__gshare_pht_table__v27 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v28 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v29 
            = vlSelfRef.__PVT__gshare_pht_table[0xeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v29 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v30 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xfU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xfU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xfU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v31 
            = vlSelfRef.__PVT__gshare_pht_table[0xfU];
        vlSelfRef.__VdlySet__gshare_pht_table__v31 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v32 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x10U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x10U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x10U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x10U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v33 
            = vlSelfRef.__PVT__gshare_pht_table[0x10U];
        vlSelfRef.__VdlySet__gshare_pht_table__v33 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v34 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x11U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x11U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x11U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x11U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v35 
            = vlSelfRef.__PVT__gshare_pht_table[0x11U];
        vlSelfRef.__VdlySet__gshare_pht_table__v35 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v36 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x12U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x12U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x12U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x12U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v37 
            = vlSelfRef.__PVT__gshare_pht_table[0x12U];
        vlSelfRef.__VdlySet__gshare_pht_table__v37 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v38 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x13U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x13U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x13U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x13U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v39 
            = vlSelfRef.__PVT__gshare_pht_table[0x13U];
        vlSelfRef.__VdlySet__gshare_pht_table__v39 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v40 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x14U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x14U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x14U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x14U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v41 
            = vlSelfRef.__PVT__gshare_pht_table[0x14U];
        vlSelfRef.__VdlySet__gshare_pht_table__v41 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v42 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x15U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x15U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x15U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x15U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v43 
            = vlSelfRef.__PVT__gshare_pht_table[0x15U];
        vlSelfRef.__VdlySet__gshare_pht_table__v43 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v44 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x16U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x16U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x16U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x16U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v45 
            = vlSelfRef.__PVT__gshare_pht_table[0x16U];
        vlSelfRef.__VdlySet__gshare_pht_table__v45 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v46 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x17U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x17U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x17U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x17U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v47 
            = vlSelfRef.__PVT__gshare_pht_table[0x17U];
        vlSelfRef.__VdlySet__gshare_pht_table__v47 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v48 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x18U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x18U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x18U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x18U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v49 
            = vlSelfRef.__PVT__gshare_pht_table[0x18U];
        vlSelfRef.__VdlySet__gshare_pht_table__v49 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v50 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x19U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x19U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x19U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x19U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v51 
            = vlSelfRef.__PVT__gshare_pht_table[0x19U];
        vlSelfRef.__VdlySet__gshare_pht_table__v51 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v52 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v53 
            = vlSelfRef.__PVT__gshare_pht_table[0x1aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v53 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v54 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v55 
            = vlSelfRef.__PVT__gshare_pht_table[0x1bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v55 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v56 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v57 
            = vlSelfRef.__PVT__gshare_pht_table[0x1cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v57 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v58 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v59 
            = vlSelfRef.__PVT__gshare_pht_table[0x1dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v59 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v60 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v61 
            = vlSelfRef.__PVT__gshare_pht_table[0x1eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v61 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v62 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x1fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x1fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x1fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x1fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v63 
            = vlSelfRef.__PVT__gshare_pht_table[0x1fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v63 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v64 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x20U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x20U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x20U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x20U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v65 
            = vlSelfRef.__PVT__gshare_pht_table[0x20U];
        vlSelfRef.__VdlySet__gshare_pht_table__v65 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v66 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x21U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x21U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x21U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x21U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v67 
            = vlSelfRef.__PVT__gshare_pht_table[0x21U];
        vlSelfRef.__VdlySet__gshare_pht_table__v67 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v68 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x22U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x22U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x22U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x22U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v69 
            = vlSelfRef.__PVT__gshare_pht_table[0x22U];
        vlSelfRef.__VdlySet__gshare_pht_table__v69 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v70 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x23U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x23U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x23U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x23U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v71 
            = vlSelfRef.__PVT__gshare_pht_table[0x23U];
        vlSelfRef.__VdlySet__gshare_pht_table__v71 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v72 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x24U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x24U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x24U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x24U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v73 
            = vlSelfRef.__PVT__gshare_pht_table[0x24U];
        vlSelfRef.__VdlySet__gshare_pht_table__v73 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v74 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x25U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x25U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x25U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x25U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v75 
            = vlSelfRef.__PVT__gshare_pht_table[0x25U];
        vlSelfRef.__VdlySet__gshare_pht_table__v75 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v76 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x26U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x26U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x26U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x26U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v77 
            = vlSelfRef.__PVT__gshare_pht_table[0x26U];
        vlSelfRef.__VdlySet__gshare_pht_table__v77 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v78 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x27U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x27U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x27U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x27U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v79 
            = vlSelfRef.__PVT__gshare_pht_table[0x27U];
        vlSelfRef.__VdlySet__gshare_pht_table__v79 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v80 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x28U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x28U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x28U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x28U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v81 
            = vlSelfRef.__PVT__gshare_pht_table[0x28U];
        vlSelfRef.__VdlySet__gshare_pht_table__v81 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v82 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x29U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x29U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x29U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x29U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v83 
            = vlSelfRef.__PVT__gshare_pht_table[0x29U];
        vlSelfRef.__VdlySet__gshare_pht_table__v83 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v84 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v85 
            = vlSelfRef.__PVT__gshare_pht_table[0x2aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v85 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v86 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v87 
            = vlSelfRef.__PVT__gshare_pht_table[0x2bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v87 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v88 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v89 
            = vlSelfRef.__PVT__gshare_pht_table[0x2cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v89 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v90 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v91 
            = vlSelfRef.__PVT__gshare_pht_table[0x2dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v91 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v92 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v93 
            = vlSelfRef.__PVT__gshare_pht_table[0x2eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v93 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v94 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x2fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x2fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x2fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x2fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v95 
            = vlSelfRef.__PVT__gshare_pht_table[0x2fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v95 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v96 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x30U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x30U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x30U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x30U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v97 
            = vlSelfRef.__PVT__gshare_pht_table[0x30U];
        vlSelfRef.__VdlySet__gshare_pht_table__v97 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v98 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x31U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x31U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x31U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x31U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v99 
            = vlSelfRef.__PVT__gshare_pht_table[0x31U];
        vlSelfRef.__VdlySet__gshare_pht_table__v99 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v100 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x32U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x32U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x32U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x32U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v101 
            = vlSelfRef.__PVT__gshare_pht_table[0x32U];
        vlSelfRef.__VdlySet__gshare_pht_table__v101 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v102 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x33U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x33U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x33U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x33U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v103 
            = vlSelfRef.__PVT__gshare_pht_table[0x33U];
        vlSelfRef.__VdlySet__gshare_pht_table__v103 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v104 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x34U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x34U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x34U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x34U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v105 
            = vlSelfRef.__PVT__gshare_pht_table[0x34U];
        vlSelfRef.__VdlySet__gshare_pht_table__v105 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v106 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x35U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x35U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x35U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x35U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v107 
            = vlSelfRef.__PVT__gshare_pht_table[0x35U];
        vlSelfRef.__VdlySet__gshare_pht_table__v107 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v108 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x36U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x36U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x36U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x36U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v109 
            = vlSelfRef.__PVT__gshare_pht_table[0x36U];
        vlSelfRef.__VdlySet__gshare_pht_table__v109 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v110 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x37U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x37U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x37U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x37U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v111 
            = vlSelfRef.__PVT__gshare_pht_table[0x37U];
        vlSelfRef.__VdlySet__gshare_pht_table__v111 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v112 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x38U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x38U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x38U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x38U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v113 
            = vlSelfRef.__PVT__gshare_pht_table[0x38U];
        vlSelfRef.__VdlySet__gshare_pht_table__v113 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v114 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x39U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x39U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x39U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x39U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v115 
            = vlSelfRef.__PVT__gshare_pht_table[0x39U];
        vlSelfRef.__VdlySet__gshare_pht_table__v115 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v116 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v117 
            = vlSelfRef.__PVT__gshare_pht_table[0x3aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v117 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v118 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v119 
            = vlSelfRef.__PVT__gshare_pht_table[0x3bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v119 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v120 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v121 
            = vlSelfRef.__PVT__gshare_pht_table[0x3cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v121 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v122 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v123 
            = vlSelfRef.__PVT__gshare_pht_table[0x3dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v123 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v124 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v125 
            = vlSelfRef.__PVT__gshare_pht_table[0x3eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v125 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v126 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x3fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x3fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x3fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x3fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v127 
            = vlSelfRef.__PVT__gshare_pht_table[0x3fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v127 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v128 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x40U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x40U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x40U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x40U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x40U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x40U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x40U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x40U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x40U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v129 
            = vlSelfRef.__PVT__gshare_pht_table[0x40U];
        vlSelfRef.__VdlySet__gshare_pht_table__v129 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v130 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x41U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x41U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x41U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x41U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x41U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x41U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x41U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x41U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x41U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v131 
            = vlSelfRef.__PVT__gshare_pht_table[0x41U];
        vlSelfRef.__VdlySet__gshare_pht_table__v131 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v132 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x42U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x42U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x42U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x42U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x42U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x42U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x42U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x42U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x42U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v133 
            = vlSelfRef.__PVT__gshare_pht_table[0x42U];
        vlSelfRef.__VdlySet__gshare_pht_table__v133 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v134 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x43U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x43U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x43U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x43U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x43U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x43U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x43U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x43U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x43U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v135 
            = vlSelfRef.__PVT__gshare_pht_table[0x43U];
        vlSelfRef.__VdlySet__gshare_pht_table__v135 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v136 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x44U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x44U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x44U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x44U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x44U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x44U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x44U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x44U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x44U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v137 
            = vlSelfRef.__PVT__gshare_pht_table[0x44U];
        vlSelfRef.__VdlySet__gshare_pht_table__v137 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v138 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x45U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x45U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x45U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x45U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x45U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x45U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x45U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x45U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x45U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v139 
            = vlSelfRef.__PVT__gshare_pht_table[0x45U];
        vlSelfRef.__VdlySet__gshare_pht_table__v139 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v140 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x46U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x46U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x46U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x46U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x46U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x46U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x46U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x46U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x46U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v141 
            = vlSelfRef.__PVT__gshare_pht_table[0x46U];
        vlSelfRef.__VdlySet__gshare_pht_table__v141 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v142 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x47U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x47U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x47U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x47U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x47U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x47U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x47U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x47U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x47U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v143 
            = vlSelfRef.__PVT__gshare_pht_table[0x47U];
        vlSelfRef.__VdlySet__gshare_pht_table__v143 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v144 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x48U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x48U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x48U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x48U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x48U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x48U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x48U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x48U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x48U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v145 
            = vlSelfRef.__PVT__gshare_pht_table[0x48U];
        vlSelfRef.__VdlySet__gshare_pht_table__v145 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v146 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x49U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x49U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x49U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x49U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x49U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x49U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x49U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x49U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x49U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v147 
            = vlSelfRef.__PVT__gshare_pht_table[0x49U];
        vlSelfRef.__VdlySet__gshare_pht_table__v147 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v148 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x4aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x4aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v149 
            = vlSelfRef.__PVT__gshare_pht_table[0x4aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v149 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v150 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x4bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x4bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v151 
            = vlSelfRef.__PVT__gshare_pht_table[0x4bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v151 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v152 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x4cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x4cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v153 
            = vlSelfRef.__PVT__gshare_pht_table[0x4cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v153 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v154 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x4dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x4dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v155 
            = vlSelfRef.__PVT__gshare_pht_table[0x4dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v155 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v156 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x4eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x4eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v157 
            = vlSelfRef.__PVT__gshare_pht_table[0x4eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v157 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v158 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x4fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x4fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x4fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x4fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v159 
            = vlSelfRef.__PVT__gshare_pht_table[0x4fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v159 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v160 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x50U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x50U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x50U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x50U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x50U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x50U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x50U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x50U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x50U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v161 
            = vlSelfRef.__PVT__gshare_pht_table[0x50U];
        vlSelfRef.__VdlySet__gshare_pht_table__v161 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v162 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x51U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x51U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x51U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x51U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x51U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x51U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x51U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x51U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x51U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v163 
            = vlSelfRef.__PVT__gshare_pht_table[0x51U];
        vlSelfRef.__VdlySet__gshare_pht_table__v163 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v164 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x52U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x52U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x52U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x52U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x52U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x52U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x52U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x52U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x52U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v165 
            = vlSelfRef.__PVT__gshare_pht_table[0x52U];
        vlSelfRef.__VdlySet__gshare_pht_table__v165 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v166 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x53U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x53U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x53U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x53U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x53U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x53U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x53U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x53U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x53U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v167 
            = vlSelfRef.__PVT__gshare_pht_table[0x53U];
        vlSelfRef.__VdlySet__gshare_pht_table__v167 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v168 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x54U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x54U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x54U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x54U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x54U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x54U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x54U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x54U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x54U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v169 
            = vlSelfRef.__PVT__gshare_pht_table[0x54U];
        vlSelfRef.__VdlySet__gshare_pht_table__v169 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v170 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x55U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x55U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x55U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x55U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x55U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x55U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x55U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x55U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x55U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v171 
            = vlSelfRef.__PVT__gshare_pht_table[0x55U];
        vlSelfRef.__VdlySet__gshare_pht_table__v171 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v172 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x56U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x56U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x56U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x56U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x56U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x56U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x56U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x56U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x56U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v173 
            = vlSelfRef.__PVT__gshare_pht_table[0x56U];
        vlSelfRef.__VdlySet__gshare_pht_table__v173 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v174 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x57U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x57U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x57U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x57U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x57U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x57U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x57U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x57U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x57U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v175 
            = vlSelfRef.__PVT__gshare_pht_table[0x57U];
        vlSelfRef.__VdlySet__gshare_pht_table__v175 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v176 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x58U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x58U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x58U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x58U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x58U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x58U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x58U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x58U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x58U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v177 
            = vlSelfRef.__PVT__gshare_pht_table[0x58U];
        vlSelfRef.__VdlySet__gshare_pht_table__v177 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v178 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x59U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x59U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x59U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x59U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x59U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x59U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x59U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x59U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x59U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v179 
            = vlSelfRef.__PVT__gshare_pht_table[0x59U];
        vlSelfRef.__VdlySet__gshare_pht_table__v179 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v180 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x5aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x5aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v181 
            = vlSelfRef.__PVT__gshare_pht_table[0x5aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v181 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v182 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x5bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x5bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v183 
            = vlSelfRef.__PVT__gshare_pht_table[0x5bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v183 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v184 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x5cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x5cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v185 
            = vlSelfRef.__PVT__gshare_pht_table[0x5cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v185 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v186 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x5dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x5dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v187 
            = vlSelfRef.__PVT__gshare_pht_table[0x5dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v187 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v188 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x5eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x5eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v189 
            = vlSelfRef.__PVT__gshare_pht_table[0x5eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v189 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v190 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x5fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x5fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x5fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x5fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v191 
            = vlSelfRef.__PVT__gshare_pht_table[0x5fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v191 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v192 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x60U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x60U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x60U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x60U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x60U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x60U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x60U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x60U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x60U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v193 
            = vlSelfRef.__PVT__gshare_pht_table[0x60U];
        vlSelfRef.__VdlySet__gshare_pht_table__v193 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v194 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x61U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x61U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x61U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x61U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x61U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x61U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x61U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x61U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x61U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v195 
            = vlSelfRef.__PVT__gshare_pht_table[0x61U];
        vlSelfRef.__VdlySet__gshare_pht_table__v195 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v196 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x62U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x62U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x62U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x62U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x62U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x62U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x62U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x62U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x62U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v197 
            = vlSelfRef.__PVT__gshare_pht_table[0x62U];
        vlSelfRef.__VdlySet__gshare_pht_table__v197 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v198 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x63U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x63U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x63U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x63U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x63U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x63U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x63U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x63U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x63U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v199 
            = vlSelfRef.__PVT__gshare_pht_table[0x63U];
        vlSelfRef.__VdlySet__gshare_pht_table__v199 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v200 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x64U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x64U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x64U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x64U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x64U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x64U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x64U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x64U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x64U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v201 
            = vlSelfRef.__PVT__gshare_pht_table[0x64U];
        vlSelfRef.__VdlySet__gshare_pht_table__v201 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v202 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x65U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x65U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x65U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x65U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x65U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x65U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x65U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x65U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x65U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v203 
            = vlSelfRef.__PVT__gshare_pht_table[0x65U];
        vlSelfRef.__VdlySet__gshare_pht_table__v203 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v204 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x66U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x66U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x66U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x66U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x66U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x66U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x66U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x66U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x66U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v205 
            = vlSelfRef.__PVT__gshare_pht_table[0x66U];
        vlSelfRef.__VdlySet__gshare_pht_table__v205 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v206 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x67U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x67U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x67U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x67U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x67U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x67U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x67U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x67U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x67U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v207 
            = vlSelfRef.__PVT__gshare_pht_table[0x67U];
        vlSelfRef.__VdlySet__gshare_pht_table__v207 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v208 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x68U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x68U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x68U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x68U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x68U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x68U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x68U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x68U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x68U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v209 
            = vlSelfRef.__PVT__gshare_pht_table[0x68U];
        vlSelfRef.__VdlySet__gshare_pht_table__v209 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v210 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x69U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x69U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x69U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x69U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x69U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x69U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x69U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x69U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x69U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v211 
            = vlSelfRef.__PVT__gshare_pht_table[0x69U];
        vlSelfRef.__VdlySet__gshare_pht_table__v211 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v212 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x6aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x6aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v213 
            = vlSelfRef.__PVT__gshare_pht_table[0x6aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v213 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v214 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x6bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x6bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v215 
            = vlSelfRef.__PVT__gshare_pht_table[0x6bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v215 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v216 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x6cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x6cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v217 
            = vlSelfRef.__PVT__gshare_pht_table[0x6cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v217 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v218 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x6dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x6dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v219 
            = vlSelfRef.__PVT__gshare_pht_table[0x6dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v219 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v220 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x6eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x6eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v221 
            = vlSelfRef.__PVT__gshare_pht_table[0x6eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v221 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v222 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x6fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x6fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x6fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x6fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v223 
            = vlSelfRef.__PVT__gshare_pht_table[0x6fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v223 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v224 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x70U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x70U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x70U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x70U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x70U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x70U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x70U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x70U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x70U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v225 
            = vlSelfRef.__PVT__gshare_pht_table[0x70U];
        vlSelfRef.__VdlySet__gshare_pht_table__v225 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v226 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x71U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x71U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x71U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x71U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x71U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x71U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x71U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x71U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x71U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v227 
            = vlSelfRef.__PVT__gshare_pht_table[0x71U];
        vlSelfRef.__VdlySet__gshare_pht_table__v227 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v228 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x72U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x72U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x72U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x72U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x72U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x72U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x72U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x72U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x72U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v229 
            = vlSelfRef.__PVT__gshare_pht_table[0x72U];
        vlSelfRef.__VdlySet__gshare_pht_table__v229 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v230 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x73U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x73U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x73U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x73U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x73U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x73U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x73U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x73U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x73U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v231 
            = vlSelfRef.__PVT__gshare_pht_table[0x73U];
        vlSelfRef.__VdlySet__gshare_pht_table__v231 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v232 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x74U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x74U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x74U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x74U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x74U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x74U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x74U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x74U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x74U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v233 
            = vlSelfRef.__PVT__gshare_pht_table[0x74U];
        vlSelfRef.__VdlySet__gshare_pht_table__v233 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v234 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x75U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x75U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x75U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x75U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x75U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x75U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x75U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x75U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x75U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v235 
            = vlSelfRef.__PVT__gshare_pht_table[0x75U];
        vlSelfRef.__VdlySet__gshare_pht_table__v235 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v236 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x76U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x76U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x76U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x76U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x76U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x76U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x76U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x76U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x76U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v237 
            = vlSelfRef.__PVT__gshare_pht_table[0x76U];
        vlSelfRef.__VdlySet__gshare_pht_table__v237 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v238 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x77U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x77U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x77U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x77U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x77U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x77U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x77U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x77U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x77U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v239 
            = vlSelfRef.__PVT__gshare_pht_table[0x77U];
        vlSelfRef.__VdlySet__gshare_pht_table__v239 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v240 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x78U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x78U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x78U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x78U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x78U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x78U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x78U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x78U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x78U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v241 
            = vlSelfRef.__PVT__gshare_pht_table[0x78U];
        vlSelfRef.__VdlySet__gshare_pht_table__v241 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v242 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x79U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x79U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x79U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x79U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x79U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x79U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x79U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x79U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x79U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v243 
            = vlSelfRef.__PVT__gshare_pht_table[0x79U];
        vlSelfRef.__VdlySet__gshare_pht_table__v243 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v244 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x7aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x7aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v245 
            = vlSelfRef.__PVT__gshare_pht_table[0x7aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v245 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v246 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x7bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x7bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v247 
            = vlSelfRef.__PVT__gshare_pht_table[0x7bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v247 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v248 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x7cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x7cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v249 
            = vlSelfRef.__PVT__gshare_pht_table[0x7cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v249 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v250 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x7dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x7dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v251 
            = vlSelfRef.__PVT__gshare_pht_table[0x7dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v251 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v252 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x7eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x7eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v253 
            = vlSelfRef.__PVT__gshare_pht_table[0x7eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v253 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v254 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x7fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x7fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x7fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x7fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v255 
            = vlSelfRef.__PVT__gshare_pht_table[0x7fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v255 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v256 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x80U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x80U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x80U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x80U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x80U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x80U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x80U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x80U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x80U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v257 
            = vlSelfRef.__PVT__gshare_pht_table[0x80U];
        vlSelfRef.__VdlySet__gshare_pht_table__v257 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v258 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x81U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x81U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x81U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x81U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x81U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x81U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x81U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x81U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x81U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v259 
            = vlSelfRef.__PVT__gshare_pht_table[0x81U];
        vlSelfRef.__VdlySet__gshare_pht_table__v259 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v260 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x82U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x82U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x82U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x82U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x82U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x82U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x82U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x82U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x82U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v261 
            = vlSelfRef.__PVT__gshare_pht_table[0x82U];
        vlSelfRef.__VdlySet__gshare_pht_table__v261 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v262 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x83U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x83U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x83U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x83U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x83U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x83U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x83U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x83U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x83U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v263 
            = vlSelfRef.__PVT__gshare_pht_table[0x83U];
        vlSelfRef.__VdlySet__gshare_pht_table__v263 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v264 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x84U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x84U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x84U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x84U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x84U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x84U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x84U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x84U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x84U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v265 
            = vlSelfRef.__PVT__gshare_pht_table[0x84U];
        vlSelfRef.__VdlySet__gshare_pht_table__v265 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v266 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x85U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x85U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x85U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x85U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x85U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x85U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x85U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x85U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x85U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v267 
            = vlSelfRef.__PVT__gshare_pht_table[0x85U];
        vlSelfRef.__VdlySet__gshare_pht_table__v267 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v268 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x86U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x86U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x86U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x86U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x86U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x86U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x86U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x86U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x86U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v269 
            = vlSelfRef.__PVT__gshare_pht_table[0x86U];
        vlSelfRef.__VdlySet__gshare_pht_table__v269 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v270 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x87U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x87U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x87U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x87U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x87U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x87U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x87U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x87U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x87U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v271 
            = vlSelfRef.__PVT__gshare_pht_table[0x87U];
        vlSelfRef.__VdlySet__gshare_pht_table__v271 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v272 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x88U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x88U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x88U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x88U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x88U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x88U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x88U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x88U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x88U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v273 
            = vlSelfRef.__PVT__gshare_pht_table[0x88U];
        vlSelfRef.__VdlySet__gshare_pht_table__v273 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v274 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x89U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x89U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x89U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x89U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x89U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x89U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x89U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x89U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x89U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v275 
            = vlSelfRef.__PVT__gshare_pht_table[0x89U];
        vlSelfRef.__VdlySet__gshare_pht_table__v275 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v276 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x8aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x8aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v277 
            = vlSelfRef.__PVT__gshare_pht_table[0x8aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v277 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v278 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x8bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x8bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v279 
            = vlSelfRef.__PVT__gshare_pht_table[0x8bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v279 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v280 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x8cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x8cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v281 
            = vlSelfRef.__PVT__gshare_pht_table[0x8cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v281 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v282 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x8dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x8dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v283 
            = vlSelfRef.__PVT__gshare_pht_table[0x8dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v283 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v284 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x8eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x8eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v285 
            = vlSelfRef.__PVT__gshare_pht_table[0x8eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v285 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v286 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x8fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x8fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x8fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x8fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v287 
            = vlSelfRef.__PVT__gshare_pht_table[0x8fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v287 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v288 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x90U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x90U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x90U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x90U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x90U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x90U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x90U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x90U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x90U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v289 
            = vlSelfRef.__PVT__gshare_pht_table[0x90U];
        vlSelfRef.__VdlySet__gshare_pht_table__v289 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v290 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x91U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x91U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x91U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x91U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x91U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x91U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x91U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x91U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x91U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v291 
            = vlSelfRef.__PVT__gshare_pht_table[0x91U];
        vlSelfRef.__VdlySet__gshare_pht_table__v291 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v292 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x92U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x92U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x92U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x92U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x92U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x92U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x92U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x92U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x92U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v293 
            = vlSelfRef.__PVT__gshare_pht_table[0x92U];
        vlSelfRef.__VdlySet__gshare_pht_table__v293 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v294 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x93U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x93U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x93U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x93U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x93U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x93U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x93U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x93U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x93U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v295 
            = vlSelfRef.__PVT__gshare_pht_table[0x93U];
        vlSelfRef.__VdlySet__gshare_pht_table__v295 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v296 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x94U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x94U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x94U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x94U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x94U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x94U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x94U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x94U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x94U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v297 
            = vlSelfRef.__PVT__gshare_pht_table[0x94U];
        vlSelfRef.__VdlySet__gshare_pht_table__v297 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v298 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x95U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x95U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x95U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x95U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x95U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x95U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x95U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x95U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x95U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v299 
            = vlSelfRef.__PVT__gshare_pht_table[0x95U];
        vlSelfRef.__VdlySet__gshare_pht_table__v299 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v300 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x96U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x96U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x96U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x96U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x96U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x96U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x96U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x96U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x96U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v301 
            = vlSelfRef.__PVT__gshare_pht_table[0x96U];
        vlSelfRef.__VdlySet__gshare_pht_table__v301 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v302 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x97U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x97U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x97U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x97U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x97U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x97U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x97U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x97U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x97U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v303 
            = vlSelfRef.__PVT__gshare_pht_table[0x97U];
        vlSelfRef.__VdlySet__gshare_pht_table__v303 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v304 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x98U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x98U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x98U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x98U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x98U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x98U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x98U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x98U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x98U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v305 
            = vlSelfRef.__PVT__gshare_pht_table[0x98U];
        vlSelfRef.__VdlySet__gshare_pht_table__v305 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v306 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x99U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x99U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x99U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x99U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x99U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x99U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x99U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x99U])) {
            vlSelfRef.__PVT__gshare_pht_table[0x99U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v307 
            = vlSelfRef.__PVT__gshare_pht_table[0x99U];
        vlSelfRef.__VdlySet__gshare_pht_table__v307 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v308 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x9aU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x9aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9aU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9aU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v309 
            = vlSelfRef.__PVT__gshare_pht_table[0x9aU];
        vlSelfRef.__VdlySet__gshare_pht_table__v309 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v310 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x9bU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x9bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9bU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9bU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v311 
            = vlSelfRef.__PVT__gshare_pht_table[0x9bU];
        vlSelfRef.__VdlySet__gshare_pht_table__v311 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v312 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x9cU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x9cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9cU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9cU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v313 
            = vlSelfRef.__PVT__gshare_pht_table[0x9cU];
        vlSelfRef.__VdlySet__gshare_pht_table__v313 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v314 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x9dU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x9dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9dU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9dU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v315 
            = vlSelfRef.__PVT__gshare_pht_table[0x9dU];
        vlSelfRef.__VdlySet__gshare_pht_table__v315 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v316 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x9eU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x9eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9eU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9eU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v317 
            = vlSelfRef.__PVT__gshare_pht_table[0x9eU];
        vlSelfRef.__VdlySet__gshare_pht_table__v317 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v318 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0x9fU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0x9fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0x9fU])) {
            vlSelfRef.__PVT__gshare_pht_table[0x9fU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v319 
            = vlSelfRef.__PVT__gshare_pht_table[0x9fU];
        vlSelfRef.__VdlySet__gshare_pht_table__v319 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v320 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v321 
            = vlSelfRef.__PVT__gshare_pht_table[0xa0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v321 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v322 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v323 
            = vlSelfRef.__PVT__gshare_pht_table[0xa1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v323 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v324 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v325 
            = vlSelfRef.__PVT__gshare_pht_table[0xa2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v325 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v326 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v327 
            = vlSelfRef.__PVT__gshare_pht_table[0xa3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v327 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v328 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v329 
            = vlSelfRef.__PVT__gshare_pht_table[0xa4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v329 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v330 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v331 
            = vlSelfRef.__PVT__gshare_pht_table[0xa5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v331 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v332 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v333 
            = vlSelfRef.__PVT__gshare_pht_table[0xa6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v333 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v334 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v335 
            = vlSelfRef.__PVT__gshare_pht_table[0xa7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v335 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v336 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v337 
            = vlSelfRef.__PVT__gshare_pht_table[0xa8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v337 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v338 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xa9U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xa9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xa9U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xa9U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v339 
            = vlSelfRef.__PVT__gshare_pht_table[0xa9U];
        vlSelfRef.__VdlySet__gshare_pht_table__v339 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v340 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xaaU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xaaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaaU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaaU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v341 
            = vlSelfRef.__PVT__gshare_pht_table[0xaaU];
        vlSelfRef.__VdlySet__gshare_pht_table__v341 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v342 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xabU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xabU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xabU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xabU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xabU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xabU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xabU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xabU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xabU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v343 
            = vlSelfRef.__PVT__gshare_pht_table[0xabU];
        vlSelfRef.__VdlySet__gshare_pht_table__v343 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v344 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xacU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xacU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xacU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xacU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xacU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xacU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xacU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xacU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xacU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v345 
            = vlSelfRef.__PVT__gshare_pht_table[0xacU];
        vlSelfRef.__VdlySet__gshare_pht_table__v345 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v346 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xadU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xadU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xadU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xadU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xadU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xadU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xadU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xadU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xadU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v347 
            = vlSelfRef.__PVT__gshare_pht_table[0xadU];
        vlSelfRef.__VdlySet__gshare_pht_table__v347 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v348 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xaeU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xaeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xaeU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xaeU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v349 
            = vlSelfRef.__PVT__gshare_pht_table[0xaeU];
        vlSelfRef.__VdlySet__gshare_pht_table__v349 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v350 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xafU == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xafU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xafU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xafU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xafU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xafU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xafU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xafU])) {
            vlSelfRef.__PVT__gshare_pht_table[0xafU] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v351 
            = vlSelfRef.__PVT__gshare_pht_table[0xafU];
        vlSelfRef.__VdlySet__gshare_pht_table__v351 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v352 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb0U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb0U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb0U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v353 
            = vlSelfRef.__PVT__gshare_pht_table[0xb0U];
        vlSelfRef.__VdlySet__gshare_pht_table__v353 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v354 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb1U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb1U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb1U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v355 
            = vlSelfRef.__PVT__gshare_pht_table[0xb1U];
        vlSelfRef.__VdlySet__gshare_pht_table__v355 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v356 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb2U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb2U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb2U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v357 
            = vlSelfRef.__PVT__gshare_pht_table[0xb2U];
        vlSelfRef.__VdlySet__gshare_pht_table__v357 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v358 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb3U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb3U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb3U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v359 
            = vlSelfRef.__PVT__gshare_pht_table[0xb3U];
        vlSelfRef.__VdlySet__gshare_pht_table__v359 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v360 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb4U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb4U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb4U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v361 
            = vlSelfRef.__PVT__gshare_pht_table[0xb4U];
        vlSelfRef.__VdlySet__gshare_pht_table__v361 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v362 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb5U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb5U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb5U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v363 
            = vlSelfRef.__PVT__gshare_pht_table[0xb5U];
        vlSelfRef.__VdlySet__gshare_pht_table__v363 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v364 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb6U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb6U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb6U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v365 
            = vlSelfRef.__PVT__gshare_pht_table[0xb6U];
        vlSelfRef.__VdlySet__gshare_pht_table__v365 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v366 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb7U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb7U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb7U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v367 
            = vlSelfRef.__PVT__gshare_pht_table[0xb7U];
        vlSelfRef.__VdlySet__gshare_pht_table__v367 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__gshare_pht_table__v368 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__gshare_pht_update) 
                & (0xb8U == (IData)(vlSelfRef.__PVT__gshare_update_hash_addr)))) {
        if ((0U == vlSelfRef.__PVT__gshare_pht_table
             [0xb8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 1U : 0U);
        } else if ((1U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 2U : 0U);
        } else if ((2U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 1U);
        } else if ((3U == vlSelfRef.__PVT__gshare_pht_table
                    [0xb8U])) {
            vlSelfRef.__PVT__gshare_pht_table[0xb8U] 
                = ((IData)(vlSelfRef.__PVT__exe_cond_branch_taken)
                    ? 3U : 2U);
        }
    } else {
        vlSelfRef.__VdlyVal__gshare_pht_table__v369 
            = vlSelfRef.__PVT__gshare_pht_table[0xb8U];
        vlSelfRef.__VdlySet__gshare_pht_table__v369 = 1U;
    }
}
