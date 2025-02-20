// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_prf_freelist.h"

VL_INLINE_OPT void Vfalco_top_prf_freelist___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__freelist__0(Vfalco_top_prf_freelist* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_prf_freelist___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__freelist__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tail_ptr = vlSelfRef.tail_ptr;
    vlSelfRef.__VdlySet__copy_tail_ptr__v0 = 0U;
    vlSelfRef.__VdlySet__copy_tail_ptr__v1 = 0U;
    vlSelfRef.__VdlySet__copy_tail_ptr__v2 = 0U;
    vlSelfRef.__VdlySet__copy_tail_ptr__v3 = 0U;
    vlSelfRef.__VdlySet__copy_tail_ptr__v4 = 0U;
    vlSelfRef.__VdlySet__copy_tail_ptr__v5 = 0U;
    vlSelfRef.__VdlySet__copy_tail_ptr__v6 = 0U;
    vlSelfRef.__VdlySet__copy_tail_ptr__v7 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v0 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v1 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v2 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v3 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v4 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v5 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v6 = 0U;
    vlSelfRef.__VdlySet__copy_head_ptr__v7 = 0U;
    vlSelfRef.__Vdly__head_ptr = vlSelfRef.head_ptr;
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((0x20U < (IData)(vlSelfRef.__Vsampled_TOP__falco_top__core__rename_dispatch_stage__freelist__counter)))) {
            VL_WRITEF_NX("[%0t] redundant freelist push occur: counter = %2#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,6,(IData)(vlSelfRef.counter));
            VL_WRITEF_NX("rd0: %2#, valid: %1#\n",0,
                         6,vlSelfRef.__PVT__push_stale_rd0,
                         1,(IData)(vlSelfRef.__PVT__push_stale_rd0_valid));
            VL_WRITEF_NX("r10: %2#, valid: %1#\n",0,
                         6,vlSelfRef.__PVT__push_stale_rd1,
                         1,(IData)(vlSelfRef.__PVT__push_stale_rd1_valid));
        }
    }
    vlSelfRef.__VdlySet__copy_counter__v0 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v1 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v2 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v3 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v4 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v5 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v6 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v7 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v8 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v9 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v10 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v11 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v12 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v13 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v14 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v15 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v16 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v17 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v18 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v19 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v20 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v21 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v22 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v23 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v24 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v25 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v26 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v27 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v28 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v29 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v30 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v31 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v32 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v33 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v34 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v35 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v36 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v37 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v38 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v39 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v40 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v41 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v42 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v43 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v44 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v45 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v46 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v47 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v48 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v49 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v50 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v51 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v52 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v53 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v54 = 0U;
    vlSelfRef.__VdlySet__copy_counter__v55 = 0U;
    vlSelfRef.__VdlySet__copy_list__v0 = 0U;
    vlSelfRef.__VdlySet__copy_list__v1 = 0U;
    vlSelfRef.__VdlySet__copy_list__v2 = 0U;
    vlSelfRef.__VdlySet__copy_list__v3 = 0U;
    vlSelfRef.__VdlySet__copy_list__v4 = 0U;
    vlSelfRef.__VdlySet__copy_list__v5 = 0U;
    vlSelfRef.__VdlySet__copy_list__v6 = 0U;
    vlSelfRef.__VdlySet__copy_list__v7 = 0U;
    vlSelfRef.__VdlySet__copy_list__v8 = 0U;
    vlSelfRef.__VdlySet__copy_list__v9 = 0U;
    vlSelfRef.__VdlySet__copy_list__v10 = 0U;
    vlSelfRef.__VdlySet__copy_list__v11 = 0U;
    vlSelfRef.__VdlySet__copy_list__v12 = 0U;
    vlSelfRef.__VdlySet__copy_list__v13 = 0U;
    vlSelfRef.__VdlySet__copy_list__v14 = 0U;
    vlSelfRef.__VdlySet__copy_list__v15 = 0U;
    vlSelfRef.__VdlySet__copy_list__v16 = 0U;
    vlSelfRef.__VdlySet__copy_list__v17 = 0U;
    vlSelfRef.__VdlySet__copy_list__v18 = 0U;
    vlSelfRef.__VdlySet__copy_list__v19 = 0U;
    vlSelfRef.__VdlySet__copy_list__v20 = 0U;
    vlSelfRef.__VdlySet__copy_list__v21 = 0U;
    vlSelfRef.__VdlySet__copy_list__v22 = 0U;
    vlSelfRef.__VdlySet__copy_list__v23 = 0U;
    vlSelfRef.__VdlySet__copy_list__v24 = 0U;
    vlSelfRef.__VdlySet__copy_list__v25 = 0U;
    vlSelfRef.__VdlySet__copy_list__v26 = 0U;
    vlSelfRef.__VdlySet__copy_list__v27 = 0U;
    vlSelfRef.__VdlySet__copy_list__v28 = 0U;
    vlSelfRef.__VdlySet__copy_list__v29 = 0U;
    vlSelfRef.__VdlySet__copy_list__v30 = 0U;
    vlSelfRef.__VdlySet__copy_list__v31 = 0U;
    vlSelfRef.__VdlySet__copy_list__v32 = 0U;
    vlSelfRef.__VdlySet__copy_list__v33 = 0U;
    vlSelfRef.__VdlySet__copy_list__v34 = 0U;
    vlSelfRef.__VdlySet__copy_list__v35 = 0U;
    vlSelfRef.__VdlySet__copy_list__v36 = 0U;
    vlSelfRef.__VdlySet__copy_list__v37 = 0U;
    vlSelfRef.__VdlySet__copy_list__v38 = 0U;
    vlSelfRef.__VdlySet__copy_list__v39 = 0U;
    vlSelfRef.__VdlySet__copy_list__v40 = 0U;
    vlSelfRef.__VdlySet__copy_list__v41 = 0U;
    vlSelfRef.__VdlySet__copy_list__v42 = 0U;
    vlSelfRef.__VdlySet__copy_list__v43 = 0U;
    vlSelfRef.__VdlySet__copy_list__v44 = 0U;
    vlSelfRef.__VdlySet__copy_list__v45 = 0U;
    vlSelfRef.__VdlySet__copy_list__v46 = 0U;
    vlSelfRef.__VdlySet__copy_list__v47 = 0U;
    vlSelfRef.__VdlySet__copy_list__v48 = 0U;
    vlSelfRef.__VdlySet__copy_list__v49 = 0U;
    vlSelfRef.__VdlySet__copy_list__v50 = 0U;
    vlSelfRef.__VdlySet__copy_list__v51 = 0U;
    vlSelfRef.__VdlySet__copy_list__v52 = 0U;
    vlSelfRef.__VdlySet__copy_list__v53 = 0U;
    vlSelfRef.__VdlySet__copy_list__v54 = 0U;
    vlSelfRef.__VdlySet__copy_list__v55 = 0U;
    vlSelfRef.__VdlySet__copy_list__v56 = 0U;
    vlSelfRef.__VdlySet__copy_list__v57 = 0U;
    vlSelfRef.__VdlySet__copy_list__v58 = 0U;
    vlSelfRef.__VdlySet__copy_list__v59 = 0U;
    vlSelfRef.__VdlySet__copy_list__v60 = 0U;
    vlSelfRef.__VdlySet__copy_list__v61 = 0U;
    vlSelfRef.__VdlySet__copy_list__v62 = 0U;
    vlSelfRef.__VdlySet__copy_list__v63 = 0U;
    vlSelfRef.__VdlySet__copy_list__v64 = 0U;
    vlSelfRef.__VdlySet__copy_list__v65 = 0U;
    vlSelfRef.__VdlySet__copy_list__v66 = 0U;
    vlSelfRef.__VdlySet__copy_list__v67 = 0U;
    vlSelfRef.__VdlySet__copy_list__v68 = 0U;
    vlSelfRef.__VdlySet__copy_list__v69 = 0U;
    vlSelfRef.__VdlySet__copy_list__v70 = 0U;
    vlSelfRef.__VdlySet__copy_list__v71 = 0U;
    vlSelfRef.__VdlySet__copy_list__v72 = 0U;
    vlSelfRef.__VdlySet__copy_list__v73 = 0U;
    vlSelfRef.__VdlySet__copy_list__v74 = 0U;
    vlSelfRef.__VdlySet__copy_list__v75 = 0U;
    vlSelfRef.__VdlySet__copy_list__v76 = 0U;
    vlSelfRef.__VdlySet__copy_list__v77 = 0U;
    vlSelfRef.__VdlySet__copy_list__v78 = 0U;
    vlSelfRef.__VdlySet__copy_list__v79 = 0U;
    vlSelfRef.__VdlySet__copy_list__v80 = 0U;
    vlSelfRef.__VdlySet__copy_list__v81 = 0U;
    vlSelfRef.__VdlySet__copy_list__v82 = 0U;
    vlSelfRef.__VdlySet__copy_list__v83 = 0U;
    vlSelfRef.__VdlySet__copy_list__v84 = 0U;
    vlSelfRef.__VdlySet__copy_list__v85 = 0U;
    vlSelfRef.__VdlySet__copy_list__v86 = 0U;
    vlSelfRef.__VdlySet__copy_list__v87 = 0U;
    vlSelfRef.__VdlySet__copy_list__v88 = 0U;
    vlSelfRef.__VdlySet__copy_list__v89 = 0U;
    vlSelfRef.__VdlySet__copy_list__v90 = 0U;
    vlSelfRef.__VdlySet__copy_list__v91 = 0U;
    vlSelfRef.__VdlySet__copy_list__v92 = 0U;
    vlSelfRef.__VdlySet__copy_list__v93 = 0U;
    vlSelfRef.__VdlySet__copy_list__v94 = 0U;
    vlSelfRef.__VdlySet__copy_list__v95 = 0U;
    vlSelfRef.__VdlySet__copy_list__v96 = 0U;
    vlSelfRef.__VdlySet__copy_list__v97 = 0U;
    vlSelfRef.__VdlySet__copy_list__v98 = 0U;
    vlSelfRef.__VdlySet__copy_list__v99 = 0U;
    vlSelfRef.__VdlySet__copy_list__v100 = 0U;
    vlSelfRef.__VdlySet__copy_list__v101 = 0U;
    vlSelfRef.__VdlySet__copy_list__v102 = 0U;
    vlSelfRef.__VdlySet__copy_list__v103 = 0U;
    vlSelfRef.__VdlySet__copy_list__v104 = 0U;
    vlSelfRef.__VdlySet__copy_list__v105 = 0U;
    vlSelfRef.__VdlySet__copy_list__v106 = 0U;
    vlSelfRef.__VdlySet__copy_list__v107 = 0U;
    vlSelfRef.__VdlySet__copy_list__v108 = 0U;
    vlSelfRef.__VdlySet__copy_list__v109 = 0U;
    vlSelfRef.__VdlySet__copy_list__v110 = 0U;
    vlSelfRef.__VdlySet__copy_list__v111 = 0U;
    vlSelfRef.__VdlySet__copy_list__v112 = 0U;
    vlSelfRef.__VdlySet__copy_list__v113 = 0U;
    vlSelfRef.__VdlySet__copy_list__v114 = 0U;
    vlSelfRef.__VdlySet__copy_list__v115 = 0U;
    vlSelfRef.__VdlySet__copy_list__v116 = 0U;
    vlSelfRef.__VdlySet__copy_list__v117 = 0U;
    vlSelfRef.__VdlySet__copy_list__v118 = 0U;
    vlSelfRef.__VdlySet__copy_list__v119 = 0U;
    vlSelfRef.__VdlySet__copy_list__v120 = 0U;
    vlSelfRef.__VdlySet__copy_list__v121 = 0U;
    vlSelfRef.__VdlySet__copy_list__v122 = 0U;
    vlSelfRef.__VdlySet__copy_list__v123 = 0U;
    vlSelfRef.__VdlySet__copy_list__v124 = 0U;
    vlSelfRef.__VdlySet__copy_list__v125 = 0U;
    vlSelfRef.__VdlySet__copy_list__v126 = 0U;
    vlSelfRef.__VdlySet__copy_list__v127 = 0U;
    vlSelfRef.__VdlySet__copy_list__v128 = 0U;
    vlSelfRef.__VdlySet__copy_list__v129 = 0U;
    vlSelfRef.__VdlySet__copy_list__v130 = 0U;
    vlSelfRef.__VdlySet__copy_list__v131 = 0U;
    vlSelfRef.__VdlySet__copy_list__v132 = 0U;
    vlSelfRef.__VdlySet__copy_list__v133 = 0U;
    vlSelfRef.__VdlySet__copy_list__v134 = 0U;
    vlSelfRef.__VdlySet__copy_list__v135 = 0U;
    vlSelfRef.__VdlySet__copy_list__v136 = 0U;
    vlSelfRef.__VdlySet__copy_list__v137 = 0U;
    vlSelfRef.__VdlySet__copy_list__v138 = 0U;
    vlSelfRef.__VdlySet__copy_list__v139 = 0U;
    vlSelfRef.__VdlySet__copy_list__v140 = 0U;
    vlSelfRef.__VdlySet__copy_list__v141 = 0U;
    vlSelfRef.__VdlySet__copy_list__v142 = 0U;
    vlSelfRef.__VdlySet__copy_list__v143 = 0U;
    vlSelfRef.__VdlySet__copy_list__v144 = 0U;
    vlSelfRef.__VdlySet__copy_list__v145 = 0U;
    vlSelfRef.__VdlySet__copy_list__v146 = 0U;
    vlSelfRef.__VdlySet__copy_list__v147 = 0U;
    vlSelfRef.__VdlySet__copy_list__v148 = 0U;
    vlSelfRef.__VdlySet__copy_list__v149 = 0U;
    vlSelfRef.__VdlySet__copy_list__v150 = 0U;
    vlSelfRef.__VdlySet__copy_list__v151 = 0U;
    vlSelfRef.__VdlySet__copy_list__v152 = 0U;
    vlSelfRef.__VdlySet__copy_list__v153 = 0U;
    vlSelfRef.__VdlySet__copy_list__v154 = 0U;
    vlSelfRef.__VdlySet__copy_list__v155 = 0U;
    vlSelfRef.__VdlySet__copy_list__v156 = 0U;
    vlSelfRef.__VdlySet__copy_list__v157 = 0U;
    vlSelfRef.__VdlySet__copy_list__v158 = 0U;
    vlSelfRef.__VdlySet__copy_list__v159 = 0U;
    vlSelfRef.__VdlySet__copy_list__v160 = 0U;
    vlSelfRef.__VdlySet__copy_list__v161 = 0U;
    vlSelfRef.__VdlySet__copy_list__v162 = 0U;
    vlSelfRef.__VdlySet__copy_list__v163 = 0U;
    vlSelfRef.__VdlySet__copy_list__v164 = 0U;
    vlSelfRef.__VdlySet__copy_list__v165 = 0U;
    vlSelfRef.__VdlySet__copy_list__v166 = 0U;
    vlSelfRef.__VdlySet__copy_list__v167 = 0U;
    vlSelfRef.__VdlySet__copy_list__v168 = 0U;
    vlSelfRef.__VdlySet__copy_list__v169 = 0U;
    vlSelfRef.__VdlySet__copy_list__v170 = 0U;
    vlSelfRef.__VdlySet__copy_list__v171 = 0U;
    vlSelfRef.__VdlySet__copy_list__v172 = 0U;
    vlSelfRef.__VdlySet__copy_list__v173 = 0U;
    vlSelfRef.__VdlySet__copy_list__v174 = 0U;
    vlSelfRef.__VdlySet__copy_list__v175 = 0U;
    vlSelfRef.__VdlySet__copy_list__v176 = 0U;
    vlSelfRef.__VdlySet__copy_list__v177 = 0U;
    vlSelfRef.__VdlySet__copy_list__v178 = 0U;
    vlSelfRef.__VdlySet__copy_list__v179 = 0U;
    vlSelfRef.__VdlySet__copy_list__v180 = 0U;
    vlSelfRef.__VdlySet__copy_list__v181 = 0U;
    vlSelfRef.__VdlySet__copy_list__v182 = 0U;
    vlSelfRef.__VdlySet__copy_list__v183 = 0U;
    vlSelfRef.__VdlySet__copy_list__v184 = 0U;
    vlSelfRef.__VdlySet__copy_list__v185 = 0U;
    vlSelfRef.__VdlySet__copy_list__v186 = 0U;
    vlSelfRef.__VdlySet__copy_list__v187 = 0U;
    vlSelfRef.__VdlySet__copy_list__v188 = 0U;
    vlSelfRef.__VdlySet__copy_list__v189 = 0U;
    vlSelfRef.__VdlySet__copy_list__v190 = 0U;
    vlSelfRef.__VdlySet__copy_list__v191 = 0U;
    vlSelfRef.__VdlySet__copy_list__v192 = 0U;
    vlSelfRef.__VdlySet__copy_list__v193 = 0U;
    vlSelfRef.__VdlySet__copy_list__v194 = 0U;
    vlSelfRef.__VdlySet__copy_list__v195 = 0U;
    vlSelfRef.__VdlySet__copy_list__v196 = 0U;
    vlSelfRef.__VdlySet__copy_list__v197 = 0U;
    vlSelfRef.__VdlySet__copy_list__v198 = 0U;
    vlSelfRef.__VdlySet__copy_list__v199 = 0U;
    vlSelfRef.__VdlySet__copy_list__v200 = 0U;
    vlSelfRef.__VdlySet__copy_list__v201 = 0U;
    vlSelfRef.__VdlySet__copy_list__v202 = 0U;
    vlSelfRef.__VdlySet__copy_list__v203 = 0U;
    vlSelfRef.__VdlySet__copy_list__v204 = 0U;
    vlSelfRef.__VdlySet__copy_list__v205 = 0U;
    vlSelfRef.__VdlySet__copy_list__v206 = 0U;
    vlSelfRef.__VdlySet__copy_list__v207 = 0U;
    vlSelfRef.__VdlySet__copy_list__v208 = 0U;
    vlSelfRef.__VdlySet__copy_list__v209 = 0U;
    vlSelfRef.__VdlySet__copy_list__v210 = 0U;
    vlSelfRef.__VdlySet__copy_list__v211 = 0U;
    vlSelfRef.__VdlySet__copy_list__v212 = 0U;
    vlSelfRef.__VdlySet__copy_list__v213 = 0U;
    vlSelfRef.__VdlySet__copy_list__v214 = 0U;
    vlSelfRef.__VdlySet__copy_list__v215 = 0U;
    vlSelfRef.__VdlySet__copy_list__v216 = 0U;
    vlSelfRef.__VdlySet__copy_list__v217 = 0U;
    vlSelfRef.__VdlySet__copy_list__v218 = 0U;
    vlSelfRef.__VdlySet__copy_list__v219 = 0U;
    vlSelfRef.__VdlySet__copy_list__v220 = 0U;
    vlSelfRef.__VdlySet__copy_list__v221 = 0U;
    vlSelfRef.__VdlySet__copy_list__v222 = 0U;
    vlSelfRef.__VdlySet__copy_list__v223 = 0U;
    vlSelfRef.__VdlySet__copy_list__v224 = 0U;
    vlSelfRef.__VdlySet__copy_list__v225 = 0U;
    vlSelfRef.__VdlySet__copy_list__v226 = 0U;
    vlSelfRef.__VdlySet__copy_list__v227 = 0U;
    vlSelfRef.__VdlySet__copy_list__v228 = 0U;
    vlSelfRef.__VdlySet__copy_list__v229 = 0U;
    vlSelfRef.__VdlySet__copy_list__v230 = 0U;
    vlSelfRef.__VdlySet__copy_list__v231 = 0U;
    vlSelfRef.__VdlySet__copy_list__v232 = 0U;
    vlSelfRef.__VdlySet__copy_list__v233 = 0U;
    vlSelfRef.__VdlySet__copy_list__v234 = 0U;
    vlSelfRef.__VdlySet__copy_list__v235 = 0U;
    vlSelfRef.__VdlySet__copy_list__v236 = 0U;
    vlSelfRef.__VdlySet__copy_list__v237 = 0U;
    vlSelfRef.__VdlySet__copy_list__v238 = 0U;
    vlSelfRef.__VdlySet__copy_list__v239 = 0U;
    vlSelfRef.__VdlySet__copy_list__v240 = 0U;
    vlSelfRef.__VdlySet__copy_list__v241 = 0U;
    vlSelfRef.__VdlySet__copy_list__v242 = 0U;
    vlSelfRef.__VdlySet__copy_list__v243 = 0U;
    vlSelfRef.__VdlySet__copy_list__v244 = 0U;
    vlSelfRef.__VdlySet__copy_list__v245 = 0U;
    vlSelfRef.__VdlySet__copy_list__v246 = 0U;
    vlSelfRef.__VdlySet__copy_list__v247 = 0U;
    vlSelfRef.__VdlySet__copy_list__v248 = 0U;
    vlSelfRef.__VdlySet__copy_list__v249 = 0U;
    vlSelfRef.__VdlySet__copy_list__v250 = 0U;
    vlSelfRef.__VdlySet__copy_list__v251 = 0U;
    vlSelfRef.__VdlySet__copy_list__v252 = 0U;
    vlSelfRef.__VdlySet__copy_list__v253 = 0U;
    vlSelfRef.__VdlySet__copy_list__v254 = 0U;
    vlSelfRef.__VdlySet__copy_list__v255 = 0U;
    vlSelfRef.__Vdly__counter = vlSelfRef.counter;
    vlSelfRef.__VdlySet__freelist__v0 = 0U;
    vlSelfRef.__VdlySet__freelist__v1 = 0U;
    vlSelfRef.__VdlySet__freelist__v2 = 0U;
    vlSelfRef.__VdlySet__freelist__v3 = 0U;
    vlSelfRef.__VdlySet__freelist__v4 = 0U;
    vlSelfRef.__VdlySet__freelist__v5 = 0U;
    vlSelfRef.__VdlySet__freelist__v6 = 0U;
    vlSelfRef.__VdlySet__freelist__v7 = 0U;
    vlSelfRef.__VdlySet__freelist__v8 = 0U;
    vlSelfRef.__VdlySet__freelist__v9 = 0U;
    vlSelfRef.__VdlySet__freelist__v10 = 0U;
    vlSelfRef.__VdlySet__freelist__v11 = 0U;
    vlSelfRef.__VdlySet__freelist__v12 = 0U;
    vlSelfRef.__VdlySet__freelist__v13 = 0U;
    vlSelfRef.__VdlySet__freelist__v14 = 0U;
    vlSelfRef.__VdlySet__freelist__v15 = 0U;
    vlSelfRef.__VdlySet__freelist__v16 = 0U;
    vlSelfRef.__VdlySet__freelist__v17 = 0U;
    vlSelfRef.__VdlySet__freelist__v18 = 0U;
    vlSelfRef.__VdlySet__freelist__v19 = 0U;
    vlSelfRef.__VdlySet__freelist__v20 = 0U;
    vlSelfRef.__VdlySet__freelist__v21 = 0U;
    vlSelfRef.__VdlySet__freelist__v22 = 0U;
    vlSelfRef.__VdlySet__freelist__v23 = 0U;
    vlSelfRef.__VdlySet__freelist__v24 = 0U;
    vlSelfRef.__VdlySet__freelist__v25 = 0U;
    vlSelfRef.__VdlySet__freelist__v26 = 0U;
    vlSelfRef.__VdlySet__freelist__v27 = 0U;
    vlSelfRef.__VdlySet__freelist__v28 = 0U;
    vlSelfRef.__VdlySet__freelist__v29 = 0U;
    vlSelfRef.__VdlySet__freelist__v30 = 0U;
    vlSelfRef.__VdlySet__freelist__v31 = 0U;
    vlSelfRef.__VdlySet__freelist__v32 = 0U;
    vlSelfRef.__VdlySet__freelist__v33 = 0U;
    vlSelfRef.__VdlySet__freelist__v34 = 0U;
    vlSelfRef.__VdlySet__freelist__v35 = 0U;
    vlSelfRef.__VdlySet__freelist__v36 = 0U;
    vlSelfRef.__VdlySet__freelist__v37 = 0U;
    vlSelfRef.__VdlySet__freelist__v38 = 0U;
    vlSelfRef.__VdlySet__freelist__v39 = 0U;
    vlSelfRef.__VdlySet__freelist__v40 = 0U;
    vlSelfRef.__VdlySet__freelist__v41 = 0U;
    vlSelfRef.__VdlySet__freelist__v42 = 0U;
    vlSelfRef.__VdlySet__freelist__v43 = 0U;
    vlSelfRef.__VdlySet__freelist__v44 = 0U;
    vlSelfRef.__VdlySet__freelist__v45 = 0U;
    vlSelfRef.__VdlySet__freelist__v46 = 0U;
    vlSelfRef.__VdlySet__freelist__v47 = 0U;
    vlSelfRef.__VdlySet__freelist__v48 = 0U;
    vlSelfRef.__VdlySet__freelist__v49 = 0U;
    vlSelfRef.__VdlySet__freelist__v50 = 0U;
    vlSelfRef.__VdlySet__freelist__v51 = 0U;
    vlSelfRef.__VdlySet__freelist__v52 = 0U;
    vlSelfRef.__VdlySet__freelist__v53 = 0U;
    vlSelfRef.__VdlySet__freelist__v54 = 0U;
    vlSelfRef.__VdlySet__freelist__v55 = 0U;
    vlSelfRef.__VdlySet__freelist__v56 = 0U;
    vlSelfRef.__VdlySet__freelist__v57 = 0U;
    vlSelfRef.__VdlySet__freelist__v58 = 0U;
    vlSelfRef.__VdlySet__freelist__v59 = 0U;
    vlSelfRef.__VdlySet__freelist__v60 = 0U;
    vlSelfRef.__VdlySet__freelist__v61 = 0U;
    vlSelfRef.__VdlySet__freelist__v62 = 0U;
    vlSelfRef.__VdlySet__freelist__v63 = 0U;
    vlSelfRef.__VdlySet__freelist__v64 = 0U;
    vlSelfRef.__VdlySet__freelist__v66 = 0U;
    vlSelfRef.__VdlySet__freelist__v67 = 0U;
    vlSelfRef.__VdlySet__freelist__v68 = 0U;
    vlSelfRef.__VdlySet__freelist__v69 = 0U;
    vlSelfRef.__VdlySet__freelist__v70 = 0U;
    vlSelfRef.__VdlySet__freelist__v71 = 0U;
    vlSelfRef.__VdlySet__freelist__v72 = 0U;
    vlSelfRef.__VdlySet__freelist__v73 = 0U;
    vlSelfRef.__VdlySet__freelist__v74 = 0U;
    vlSelfRef.__VdlySet__freelist__v75 = 0U;
    vlSelfRef.__VdlySet__freelist__v76 = 0U;
    vlSelfRef.__VdlySet__freelist__v77 = 0U;
    vlSelfRef.__VdlySet__freelist__v78 = 0U;
    vlSelfRef.__VdlySet__freelist__v79 = 0U;
    vlSelfRef.__VdlySet__freelist__v80 = 0U;
    vlSelfRef.__VdlySet__freelist__v81 = 0U;
    vlSelfRef.__VdlySet__freelist__v82 = 0U;
    vlSelfRef.__VdlySet__freelist__v83 = 0U;
    vlSelfRef.__VdlySet__freelist__v84 = 0U;
    vlSelfRef.__VdlySet__freelist__v85 = 0U;
    vlSelfRef.__VdlySet__freelist__v86 = 0U;
    vlSelfRef.__VdlySet__freelist__v87 = 0U;
    vlSelfRef.__VdlySet__freelist__v88 = 0U;
    vlSelfRef.__VdlySet__freelist__v89 = 0U;
    vlSelfRef.__VdlySet__freelist__v90 = 0U;
    vlSelfRef.__VdlySet__freelist__v91 = 0U;
    vlSelfRef.__VdlySet__freelist__v92 = 0U;
    vlSelfRef.__VdlySet__freelist__v93 = 0U;
    vlSelfRef.__VdlySet__freelist__v94 = 0U;
    vlSelfRef.__VdlySet__freelist__v95 = 0U;
    vlSelfRef.__VdlySet__freelist__v96 = 0U;
    vlSelfRef.__VdlySet__freelist__v97 = 0U;
    vlSelfRef.__Vdly__tail_ptr = (0x1fU & ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           (((IData)(vlSelfRef.__PVT__recovery_flush) 
                                             & (~ (IData)(vlSelfRef.__PVT__recovery_no_copy)))
                                             ? vlSelfRef.copy_tail_ptr
                                            [vlSelfRef.__PVT__recovery_target]
                                             : ((IData)(vlSelfRef.__PVT__push)
                                                 ? 
                                                ((IData)(vlSelfRef.tail_ptr) 
                                                 + 
                                                 VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                 : (IData)(vlSelfRef.tail_ptr)))));
    vlSelfRef.__VdlyVal__copy_tail_ptr__v0 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [0U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [0U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v0 = 1U;
    vlSelfRef.__VdlyVal__copy_tail_ptr__v1 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [1U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((1U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [1U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v1 = 1U;
    vlSelfRef.__VdlyVal__copy_tail_ptr__v2 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [2U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [2U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v2 = 1U;
    vlSelfRef.__VdlyVal__copy_tail_ptr__v3 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [3U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [3U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v3 = 1U;
    vlSelfRef.__VdlyVal__copy_tail_ptr__v4 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [4U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((4U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [4U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v4 = 1U;
    vlSelfRef.__VdlyVal__copy_tail_ptr__v5 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [5U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((5U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [5U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v5 = 1U;
    vlSelfRef.__VdlyVal__copy_tail_ptr__v6 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [6U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((6U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [6U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v6 = 1U;
    vlSelfRef.__VdlyVal__copy_tail_ptr__v7 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  (vlSelfRef.copy_tail_ptr
                                                   [7U] 
                                                   + 
                                                   VL_SEL_IIII(32, 
                                                               ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                 ? 0U
                                                                 : 
                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tail_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__push_count)))
                                                    : 
                                                   (vlSelfRef.copy_tail_ptr
                                                    [7U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 5U))))));
    vlSelfRef.__VdlySet__copy_tail_ptr__v7 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v0 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [0U]
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [0U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v0 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v1 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [1U]
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [1U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v1 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v2 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [2U]
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [2U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v2 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v3 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [3U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [3U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v3 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v4 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [4U]
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [4U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v4 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v5 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [5U]
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [5U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v5 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v6 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [6U]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [6U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v6 = 1U;
    vlSelfRef.__VdlyVal__copy_head_ptr__v7 = (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                   ? 
                                                  vlSelfRef.copy_head_ptr
                                                  [7U]
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.__PVT__copy_target))
                                                    ? 
                                                   ((IData)(vlSelfRef.head_ptr) 
                                                    + 
                                                    VL_EXTEND_II(5,1, 
                                                                 ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                                  & (IData)(vlSelfRef.__PVT__instr0_req))))
                                                    : 
                                                   vlSelfRef.copy_head_ptr
                                                   [7U]))));
    vlSelfRef.__VdlySet__copy_head_ptr__v7 = 1U;
    vlSelfRef.__Vdly__head_ptr = (0x1fU & ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           (((IData)(vlSelfRef.__PVT__recovery_flush) 
                                             & (~ (IData)(vlSelfRef.__PVT__recovery_no_copy)))
                                             ? vlSelfRef.copy_head_ptr
                                            [vlSelfRef.__PVT__recovery_target]
                                             : ((IData)(vlSelfRef.__PVT__pop)
                                                 ? 
                                                ((IData)(vlSelfRef.head_ptr) 
                                                 + 
                                                 VL_EXTEND_II(5,2, (IData)(vlSelfRef.__PVT__pop_count)))
                                                 : (IData)(vlSelfRef.head_ptr)))));
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v0 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v1 = (0x3fU 
                                                 & (vlSelfRef.copy_counter
                                                    [0U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v1 = 1U;
    } else if (((0U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v2 = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v2 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v3 = 
                (0x3fU & ((IData)(vlSelfRef.counter) 
                          - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                               & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v3 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v4 = 
                (0x3fU & ((IData)(vlSelfRef.counter) 
                          + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v4 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v5 = 
                (0x3fU & (((IData)(vlSelfRef.counter) 
                           + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                          - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                               & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v5 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v6 = (0x3fU 
                                                 & (vlSelfRef.copy_counter
                                                    [0U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v6 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v7 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v8 = (0x3fU 
                                                 & (vlSelfRef.copy_counter
                                                    [1U] 
                                                    + 
                                                    VL_SEL_IIII(32, 
                                                                ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v8 = 1U;
    } else if (((1U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v9 = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v9 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v10 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v10 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v11 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v11 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v12 
                = (0x3fU & (((IData)(vlSelfRef.counter) 
                             + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v12 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v13 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [1U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v13 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v14 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v15 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [2U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v15 = 1U;
    } else if (((2U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v16 
                = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v16 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v17 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v17 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v18 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v18 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v19 
                = (0x3fU & (((IData)(vlSelfRef.counter) 
                             + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v19 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v20 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [2U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v20 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v21 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v22 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [3U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v22 = 1U;
    } else if (((3U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v23 
                = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v23 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v24 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v24 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v25 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v25 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v26 
                = (0x3fU & (((IData)(vlSelfRef.counter) 
                             + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v26 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v27 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [3U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v27 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v28 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v29 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [4U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v29 = 1U;
    } else if (((4U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v30 
                = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v30 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v31 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v31 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v32 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v32 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v33 
                = (0x3fU & (((IData)(vlSelfRef.counter) 
                             + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v33 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v34 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [4U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v34 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v35 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v36 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [5U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v36 = 1U;
    } else if (((5U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v37 
                = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v37 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v38 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v38 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v39 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v39 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v40 
                = (0x3fU & (((IData)(vlSelfRef.counter) 
                             + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v40 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v41 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [5U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v41 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v42 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v43 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [6U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v43 = 1U;
    } else if (((6U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v44 
                = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v44 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v45 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v45 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v46 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v46 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v47 
                = (0x3fU & (((IData)(vlSelfRef.counter) 
                             + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v47 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v48 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [6U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v48 = 1U;
    }
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__copy_counter__v49 = 1U;
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                      & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))) {
        vlSelfRef.__VdlyVal__copy_counter__v50 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [7U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v50 = 1U;
    } else if (((7U == (IData)(vlSelfRef.__PVT__copy_target)) 
                & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))) {
        if ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v51 
                = vlSelfRef.counter;
            vlSelfRef.__VdlySet__copy_counter__v51 = 1U;
        } else if ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v52 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v52 = 1U;
        } else if ((2U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v53 
                = (0x3fU & ((IData)(vlSelfRef.counter) 
                            + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))));
            vlSelfRef.__VdlySet__copy_counter__v53 = 1U;
        } else if ((3U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__push), (IData)(vlSelfRef.__PVT__pop)))) {
            vlSelfRef.__VdlyVal__copy_counter__v54 
                = (0x3fU & (((IData)(vlSelfRef.counter) 
                             + VL_EXTEND_II(6,2, (IData)(vlSelfRef.__PVT__push_count))) 
                            - VL_EXTEND_II(6,1, ((IData)(vlSelfRef.__PVT__instr1_copy) 
                                                 & (IData)(vlSelfRef.__PVT__instr0_req)))));
            vlSelfRef.__VdlySet__copy_counter__v54 = 1U;
        }
    } else {
        vlSelfRef.__VdlyVal__copy_counter__v55 = (0x3fU 
                                                  & (vlSelfRef.copy_counter
                                                     [7U] 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__recovery_rollback)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__push_count))), 0U, 6U)));
        vlSelfRef.__VdlySet__copy_counter__v55 = 1U;
    }
    vlSelfRef.__VdlyVal__copy_list__v0 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [0U]))
                                                     : 
                                                    (((0U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [0U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [0U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [0U]))
                                                      : 
                                                     (((0U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [0U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [0U]))
                                                     : 
                                                    (((0U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [0U]))
                                                      : 
                                                     (((0U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [0U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [0U])))));
    vlSelfRef.__VdlySet__copy_list__v0 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v1 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((1U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [1U]))
                                                     : 
                                                    (((1U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [1U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [1U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((1U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [1U]))
                                                      : 
                                                     (((1U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [1U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [1U]))
                                                     : 
                                                    (((1U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [1U]))
                                                      : 
                                                     (((1U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [1U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [1U])))));
    vlSelfRef.__VdlySet__copy_list__v1 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v2 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((2U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [2U]))
                                                     : 
                                                    (((2U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [2U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [2U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((2U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [2U]))
                                                      : 
                                                     (((2U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [2U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [2U]))
                                                     : 
                                                    (((2U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [2U]))
                                                      : 
                                                     (((2U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [2U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [2U])))));
    vlSelfRef.__VdlySet__copy_list__v2 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v3 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((3U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [3U]))
                                                     : 
                                                    (((3U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [3U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [3U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((3U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [3U]))
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [3U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [3U]))
                                                     : 
                                                    (((3U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [3U]))
                                                      : 
                                                     (((3U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [3U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [3U])))));
    vlSelfRef.__VdlySet__copy_list__v3 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v4 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((4U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [4U]))
                                                     : 
                                                    (((4U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [4U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [4U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((4U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [4U]))
                                                      : 
                                                     (((4U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [4U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [4U]))
                                                     : 
                                                    (((4U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [4U]))
                                                      : 
                                                     (((4U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [4U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [4U])))));
    vlSelfRef.__VdlySet__copy_list__v4 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v5 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((5U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [5U]))
                                                     : 
                                                    (((5U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [5U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [5U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((5U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [5U]))
                                                      : 
                                                     (((5U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [5U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [5U]))
                                                     : 
                                                    (((5U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [5U]))
                                                      : 
                                                     (((5U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [5U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [5U])))));
    vlSelfRef.__VdlySet__copy_list__v5 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v6 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((6U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [6U]))
                                                     : 
                                                    (((6U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [6U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [6U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((6U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [6U]))
                                                      : 
                                                     (((6U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [6U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [6U]))
                                                     : 
                                                    (((6U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [6U]))
                                                      : 
                                                     (((6U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [6U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [6U])))));
    vlSelfRef.__VdlySet__copy_list__v6 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v7 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((7U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [7U]))
                                                     : 
                                                    (((7U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [7U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [7U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((7U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [7U]))
                                                      : 
                                                     (((7U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [7U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [7U]))
                                                     : 
                                                    (((7U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [7U]))
                                                      : 
                                                     (((7U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [7U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [7U])))));
    vlSelfRef.__VdlySet__copy_list__v7 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v8 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((8U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [8U]))
                                                     : 
                                                    (((8U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [8U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [8U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((8U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [8U]))
                                                      : 
                                                     (((8U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [8U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [8U]))
                                                     : 
                                                    (((8U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [8U]))
                                                      : 
                                                     (((8U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [8U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [8U])))));
    vlSelfRef.__VdlySet__copy_list__v8 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v9 = ((IData)(vlSelfRef.__PVT__rst)
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                                    ? 
                                                   (((9U 
                                                      == 
                                                      vlSelfRef.copy_tail_ptr
                                                      [0U]) 
                                                     & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                      ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [9U]))
                                                     : 
                                                    (((9U 
                                                       == 
                                                       vlSelfRef.copy_tail_next_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                       & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [9U])
                                                      : 
                                                     vlSelfRef.copy_list
                                                     [0U]
                                                     [9U]))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__PVT__copy_target))
                                                     ? 
                                                    (((9U 
                                                       == (IData)(vlSelfRef.tail_ptr)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [9U]))
                                                      : 
                                                     (((9U 
                                                        == (IData)(vlSelfRef.tail_next_ptr)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.freelist
                                                       [9U])
                                                       : 
                                                      vlSelfRef.freelist
                                                      [9U]))
                                                     : 
                                                    (((9U 
                                                       == 
                                                       vlSelfRef.copy_tail_ptr
                                                       [0U]) 
                                                      & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                       ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [9U]))
                                                      : 
                                                     (((9U 
                                                        == 
                                                        vlSelfRef.copy_tail_next_ptr
                                                        [0U]) 
                                                       & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                       ? 
                                                      (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                        & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                        ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                        : 
                                                       vlSelfRef.copy_list
                                                       [0U]
                                                       [9U])
                                                       : 
                                                      vlSelfRef.copy_list
                                                      [0U]
                                                      [9U])))));
    vlSelfRef.__VdlySet__copy_list__v9 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v10 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xaU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xaU]))
                                                 : 
                                                (((0xaU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xaU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0xaU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xaU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xaU]))
                                                 : 
                                                (((0xaU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xaU])))));
    vlSelfRef.__VdlySet__copy_list__v10 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v11 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xbU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xbU]))
                                                 : 
                                                (((0xbU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xbU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0xbU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xbU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xbU]))
                                                 : 
                                                (((0xbU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xbU])))));
    vlSelfRef.__VdlySet__copy_list__v11 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v12 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xcU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xcU]))
                                                 : 
                                                (((0xcU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xcU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0xcU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xcU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xcU]))
                                                 : 
                                                (((0xcU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xcU])))));
    vlSelfRef.__VdlySet__copy_list__v12 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v13 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xdU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xdU]))
                                                 : 
                                                (((0xdU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xdU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0xdU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xdU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xdU]))
                                                 : 
                                                (((0xdU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xdU])))));
    vlSelfRef.__VdlySet__copy_list__v13 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v14 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xeU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xeU]))
                                                 : 
                                                (((0xeU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xeU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0xeU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xeU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xeU]))
                                                 : 
                                                (((0xeU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xeU])))));
    vlSelfRef.__VdlySet__copy_list__v14 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v15 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xfU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xfU]))
                                                 : 
                                                (((0xfU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xfU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0xfU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xfU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xfU]))
                                                 : 
                                                (((0xfU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0xfU])))));
    vlSelfRef.__VdlySet__copy_list__v15 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v16 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x10U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x10U]))
                                                 : 
                                                (((0x10U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x10U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x10U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x10U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x10U]))
                                                 : 
                                                (((0x10U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x10U])))));
    vlSelfRef.__VdlySet__copy_list__v16 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v17 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x11U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x11U]))
                                                 : 
                                                (((0x11U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x11U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x11U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x11U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x11U]))
                                                 : 
                                                (((0x11U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x11U])))));
    vlSelfRef.__VdlySet__copy_list__v17 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v18 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x12U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x12U]))
                                                 : 
                                                (((0x12U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x12U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x12U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x12U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x12U]))
                                                 : 
                                                (((0x12U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x12U])))));
    vlSelfRef.__VdlySet__copy_list__v18 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v19 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x13U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x13U]))
                                                 : 
                                                (((0x13U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x13U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x13U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x13U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x13U]))
                                                 : 
                                                (((0x13U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x13U])))));
    vlSelfRef.__VdlySet__copy_list__v19 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v20 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x14U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x14U]))
                                                 : 
                                                (((0x14U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x14U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x14U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x14U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x14U]))
                                                 : 
                                                (((0x14U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x14U])))));
    vlSelfRef.__VdlySet__copy_list__v20 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v21 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x15U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x15U]))
                                                 : 
                                                (((0x15U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x15U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x15U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x15U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x15U]))
                                                 : 
                                                (((0x15U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x15U])))));
    vlSelfRef.__VdlySet__copy_list__v21 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v22 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x16U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x16U]))
                                                 : 
                                                (((0x16U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x16U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x16U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x16U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x16U]))
                                                 : 
                                                (((0x16U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x16U])))));
    vlSelfRef.__VdlySet__copy_list__v22 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v23 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x17U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x17U]))
                                                 : 
                                                (((0x17U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x17U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x17U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x17U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x17U]))
                                                 : 
                                                (((0x17U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x17U])))));
    vlSelfRef.__VdlySet__copy_list__v23 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v24 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x18U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x18U]))
                                                 : 
                                                (((0x18U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x18U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x18U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x18U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x18U]))
                                                 : 
                                                (((0x18U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x18U])))));
    vlSelfRef.__VdlySet__copy_list__v24 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v25 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x19U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x19U]))
                                                 : 
                                                (((0x19U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x19U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x19U]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x19U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x19U]))
                                                 : 
                                                (((0x19U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x19U])))));
    vlSelfRef.__VdlySet__copy_list__v25 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v26 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1aU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1aU]))
                                                 : 
                                                (((0x1aU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1aU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x1aU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1aU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1aU]))
                                                 : 
                                                (((0x1aU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1aU])))));
    vlSelfRef.__VdlySet__copy_list__v26 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v27 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1bU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1bU]))
                                                 : 
                                                (((0x1bU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1bU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x1bU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1bU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1bU]))
                                                  : 
                                                 (((0x1bU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1bU]))
                                                 : 
                                                (((0x1bU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1bU]))
                                                  : 
                                                 (((0x1bU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1bU])))));
    vlSelfRef.__VdlySet__copy_list__v27 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v28 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1cU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1cU]))
                                                 : 
                                                (((0x1cU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1cU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x1cU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1cU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1cU]))
                                                  : 
                                                 (((0x1cU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1cU]))
                                                 : 
                                                (((0x1cU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1cU]))
                                                  : 
                                                 (((0x1cU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1cU])))));
    vlSelfRef.__VdlySet__copy_list__v28 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v29 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1dU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1dU]))
                                                 : 
                                                (((0x1dU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1dU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x1dU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1dU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1dU]))
                                                  : 
                                                 (((0x1dU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1dU]))
                                                 : 
                                                (((0x1dU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1dU]))
                                                  : 
                                                 (((0x1dU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1dU])))));
    vlSelfRef.__VdlySet__copy_list__v29 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v30 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1eU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1eU]))
                                                 : 
                                                (((0x1eU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1eU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x1eU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1eU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1eU]))
                                                  : 
                                                 (((0x1eU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1eU]))
                                                 : 
                                                (((0x1eU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1eU]))
                                                  : 
                                                 (((0x1eU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1eU])))));
    vlSelfRef.__VdlySet__copy_list__v30 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v31 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1fU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [0U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1fU]))
                                                 : 
                                                (((0x1fU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1fU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [0U]
                                                 [0x1fU]))
                                             : ((0U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1fU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1fU]))
                                                  : 
                                                 (((0x1fU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1fU]))
                                                 : 
                                                (((0x1fU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [0U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1fU]))
                                                  : 
                                                 (((0x1fU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [0U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [0U]
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [0U]
                                                  [0x1fU])))));
    vlSelfRef.__VdlySet__copy_list__v31 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v32 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0U]))
                                                 : 
                                                (((0U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0U]))
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0U]))
                                                 : 
                                                (((0U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0U]))
                                                  : 
                                                 (((0U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0U])))));
    vlSelfRef.__VdlySet__copy_list__v32 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v33 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((1U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [1U]))
                                                 : 
                                                (((1U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [1U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [1U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((1U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [1U]))
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [1U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [1U]))
                                                 : 
                                                (((1U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [1U]))
                                                  : 
                                                 (((1U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [1U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [1U])))));
    vlSelfRef.__VdlySet__copy_list__v33 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v34 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((2U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [2U]))
                                                 : 
                                                (((2U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [2U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [2U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [2U]))
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [2U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [2U]))
                                                 : 
                                                (((2U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [2U]))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [2U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [2U])))));
    vlSelfRef.__VdlySet__copy_list__v34 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v35 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((3U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [3U]))
                                                 : 
                                                (((3U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [3U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [3U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((3U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [3U]))
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [3U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [3U]))
                                                 : 
                                                (((3U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [3U]))
                                                  : 
                                                 (((3U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [3U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [3U])))));
    vlSelfRef.__VdlySet__copy_list__v35 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v36 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((4U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [4U]))
                                                 : 
                                                (((4U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [4U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [4U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((4U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [4U]))
                                                  : 
                                                 (((4U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [4U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [4U]))
                                                 : 
                                                (((4U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [4U]))
                                                  : 
                                                 (((4U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [4U])))));
    vlSelfRef.__VdlySet__copy_list__v36 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v37 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((5U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [5U]))
                                                 : 
                                                (((5U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [5U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [5U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((5U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [5U]))
                                                  : 
                                                 (((5U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [5U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [5U]))
                                                 : 
                                                (((5U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [5U]))
                                                  : 
                                                 (((5U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [5U])))));
    vlSelfRef.__VdlySet__copy_list__v37 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v38 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((6U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [6U]))
                                                 : 
                                                (((6U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [6U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [6U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((6U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [6U]))
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [6U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [6U]))
                                                 : 
                                                (((6U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [6U]))
                                                  : 
                                                 (((6U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [6U])))));
    vlSelfRef.__VdlySet__copy_list__v38 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v39 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((7U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [7U]))
                                                 : 
                                                (((7U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [7U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [7U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((7U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [7U]))
                                                  : 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [7U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [7U]))
                                                 : 
                                                (((7U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [7U]))
                                                  : 
                                                 (((7U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [7U])))));
    vlSelfRef.__VdlySet__copy_list__v39 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v40 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((8U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [8U]))
                                                 : 
                                                (((8U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [8U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [8U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((8U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [8U]))
                                                  : 
                                                 (((8U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [8U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [8U]))
                                                 : 
                                                (((8U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [8U]))
                                                  : 
                                                 (((8U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [8U])))));
    vlSelfRef.__VdlySet__copy_list__v40 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v41 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((9U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [9U]))
                                                 : 
                                                (((9U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [9U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [9U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((9U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [9U]))
                                                  : 
                                                 (((9U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [9U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [9U]))
                                                 : 
                                                (((9U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [9U]))
                                                  : 
                                                 (((9U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [9U])))));
    vlSelfRef.__VdlySet__copy_list__v41 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v42 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xaU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xaU]))
                                                 : 
                                                (((0xaU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xaU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0xaU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xaU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xaU]))
                                                 : 
                                                (((0xaU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xaU])))));
    vlSelfRef.__VdlySet__copy_list__v42 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v43 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xbU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xbU]))
                                                 : 
                                                (((0xbU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xbU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0xbU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xbU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xbU]))
                                                 : 
                                                (((0xbU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xbU])))));
    vlSelfRef.__VdlySet__copy_list__v43 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v44 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xcU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xcU]))
                                                 : 
                                                (((0xcU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xcU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0xcU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xcU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xcU]))
                                                 : 
                                                (((0xcU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xcU])))));
    vlSelfRef.__VdlySet__copy_list__v44 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v45 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xdU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xdU]))
                                                 : 
                                                (((0xdU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xdU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0xdU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xdU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xdU]))
                                                 : 
                                                (((0xdU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xdU])))));
    vlSelfRef.__VdlySet__copy_list__v45 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v46 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xeU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xeU]))
                                                 : 
                                                (((0xeU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xeU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0xeU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xeU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xeU]))
                                                 : 
                                                (((0xeU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xeU])))));
    vlSelfRef.__VdlySet__copy_list__v46 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v47 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xfU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xfU]))
                                                 : 
                                                (((0xfU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xfU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0xfU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xfU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xfU]))
                                                 : 
                                                (((0xfU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0xfU])))));
    vlSelfRef.__VdlySet__copy_list__v47 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v48 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x10U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x10U]))
                                                 : 
                                                (((0x10U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x10U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x10U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x10U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x10U]))
                                                 : 
                                                (((0x10U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x10U])))));
    vlSelfRef.__VdlySet__copy_list__v48 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v49 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x11U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x11U]))
                                                 : 
                                                (((0x11U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x11U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x11U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x11U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x11U]))
                                                 : 
                                                (((0x11U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x11U])))));
    vlSelfRef.__VdlySet__copy_list__v49 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v50 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x12U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x12U]))
                                                 : 
                                                (((0x12U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x12U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x12U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x12U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x12U]))
                                                 : 
                                                (((0x12U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x12U])))));
    vlSelfRef.__VdlySet__copy_list__v50 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v51 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x13U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x13U]))
                                                 : 
                                                (((0x13U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x13U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x13U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x13U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x13U]))
                                                 : 
                                                (((0x13U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x13U])))));
    vlSelfRef.__VdlySet__copy_list__v51 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v52 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x14U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x14U]))
                                                 : 
                                                (((0x14U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x14U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x14U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x14U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x14U]))
                                                 : 
                                                (((0x14U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x14U])))));
    vlSelfRef.__VdlySet__copy_list__v52 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v53 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x15U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x15U]))
                                                 : 
                                                (((0x15U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x15U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x15U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x15U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x15U]))
                                                 : 
                                                (((0x15U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x15U])))));
    vlSelfRef.__VdlySet__copy_list__v53 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v54 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x16U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x16U]))
                                                 : 
                                                (((0x16U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x16U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x16U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x16U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x16U]))
                                                 : 
                                                (((0x16U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x16U])))));
    vlSelfRef.__VdlySet__copy_list__v54 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v55 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x17U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x17U]))
                                                 : 
                                                (((0x17U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x17U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x17U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x17U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x17U]))
                                                 : 
                                                (((0x17U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x17U])))));
    vlSelfRef.__VdlySet__copy_list__v55 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v56 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x18U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x18U]))
                                                 : 
                                                (((0x18U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x18U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x18U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x18U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x18U]))
                                                 : 
                                                (((0x18U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x18U])))));
    vlSelfRef.__VdlySet__copy_list__v56 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v57 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x19U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x19U]))
                                                 : 
                                                (((0x19U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x19U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x19U]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x19U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x19U]))
                                                 : 
                                                (((0x19U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x19U])))));
    vlSelfRef.__VdlySet__copy_list__v57 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v58 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1aU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1aU]))
                                                 : 
                                                (((0x1aU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1aU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x1aU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1aU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1aU]))
                                                 : 
                                                (((0x1aU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1aU])))));
    vlSelfRef.__VdlySet__copy_list__v58 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v59 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1bU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1bU]))
                                                 : 
                                                (((0x1bU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1bU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x1bU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1bU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1bU]))
                                                  : 
                                                 (((0x1bU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1bU]))
                                                 : 
                                                (((0x1bU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1bU]))
                                                  : 
                                                 (((0x1bU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1bU])))));
    vlSelfRef.__VdlySet__copy_list__v59 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v60 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1cU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1cU]))
                                                 : 
                                                (((0x1cU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1cU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x1cU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1cU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1cU]))
                                                  : 
                                                 (((0x1cU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1cU]))
                                                 : 
                                                (((0x1cU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1cU]))
                                                  : 
                                                 (((0x1cU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1cU])))));
    vlSelfRef.__VdlySet__copy_list__v60 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v61 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1dU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1dU]))
                                                 : 
                                                (((0x1dU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1dU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x1dU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1dU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1dU]))
                                                  : 
                                                 (((0x1dU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1dU]))
                                                 : 
                                                (((0x1dU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1dU]))
                                                  : 
                                                 (((0x1dU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1dU])))));
    vlSelfRef.__VdlySet__copy_list__v61 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v62 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1eU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1eU]))
                                                 : 
                                                (((0x1eU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1eU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x1eU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1eU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1eU]))
                                                  : 
                                                 (((0x1eU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1eU]))
                                                 : 
                                                (((0x1eU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1eU]))
                                                  : 
                                                 (((0x1eU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1eU])))));
    vlSelfRef.__VdlySet__copy_list__v62 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v63 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1fU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [1U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1fU]))
                                                 : 
                                                (((0x1fU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1fU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [1U]
                                                 [0x1fU]))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1fU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1fU]))
                                                  : 
                                                 (((0x1fU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1fU]))
                                                 : 
                                                (((0x1fU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [1U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1fU]))
                                                  : 
                                                 (((0x1fU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [1U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [1U]
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [1U]
                                                  [0x1fU])))));
    vlSelfRef.__VdlySet__copy_list__v63 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v64 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0U]))
                                                 : 
                                                (((0U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0U]))
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0U]))
                                                 : 
                                                (((0U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0U]))
                                                  : 
                                                 (((0U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0U])))));
    vlSelfRef.__VdlySet__copy_list__v64 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v65 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((1U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [1U]))
                                                 : 
                                                (((1U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [1U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [1U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((1U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [1U]))
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [1U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [1U]))
                                                 : 
                                                (((1U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [1U]))
                                                  : 
                                                 (((1U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [1U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [1U])))));
    vlSelfRef.__VdlySet__copy_list__v65 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v66 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((2U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [2U]))
                                                 : 
                                                (((2U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [2U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [2U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [2U]))
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [2U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [2U]))
                                                 : 
                                                (((2U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [2U]))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [2U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [2U])))));
    vlSelfRef.__VdlySet__copy_list__v66 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v67 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((3U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [3U]))
                                                 : 
                                                (((3U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [3U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [3U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((3U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [3U]))
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [3U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [3U]))
                                                 : 
                                                (((3U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [3U]))
                                                  : 
                                                 (((3U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [3U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [3U])))));
    vlSelfRef.__VdlySet__copy_list__v67 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v68 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((4U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [4U]))
                                                 : 
                                                (((4U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [4U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [4U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((4U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [4U]))
                                                  : 
                                                 (((4U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [4U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [4U]))
                                                 : 
                                                (((4U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [4U]))
                                                  : 
                                                 (((4U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [4U])))));
    vlSelfRef.__VdlySet__copy_list__v68 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v69 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((5U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [5U]))
                                                 : 
                                                (((5U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [5U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [5U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((5U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [5U]))
                                                  : 
                                                 (((5U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [5U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [5U]))
                                                 : 
                                                (((5U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [5U]))
                                                  : 
                                                 (((5U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [5U])))));
    vlSelfRef.__VdlySet__copy_list__v69 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v70 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((6U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [6U]))
                                                 : 
                                                (((6U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [6U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [6U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((6U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [6U]))
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [6U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [6U]))
                                                 : 
                                                (((6U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [6U]))
                                                  : 
                                                 (((6U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [6U])))));
    vlSelfRef.__VdlySet__copy_list__v70 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v71 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((7U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [7U]))
                                                 : 
                                                (((7U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [7U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [7U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((7U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [7U]))
                                                  : 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [7U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [7U]))
                                                 : 
                                                (((7U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [7U]))
                                                  : 
                                                 (((7U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [7U])))));
    vlSelfRef.__VdlySet__copy_list__v71 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v72 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((8U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [8U]))
                                                 : 
                                                (((8U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [8U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [8U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((8U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [8U]))
                                                  : 
                                                 (((8U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [8U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [8U]))
                                                 : 
                                                (((8U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [8U]))
                                                  : 
                                                 (((8U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [8U])))));
    vlSelfRef.__VdlySet__copy_list__v72 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v73 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((9U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [9U]))
                                                 : 
                                                (((9U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [9U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [9U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((9U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [9U]))
                                                  : 
                                                 (((9U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [9U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [9U]))
                                                 : 
                                                (((9U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [9U]))
                                                  : 
                                                 (((9U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [9U])))));
    vlSelfRef.__VdlySet__copy_list__v73 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v74 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xaU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xaU]))
                                                 : 
                                                (((0xaU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xaU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0xaU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xaU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xaU]))
                                                 : 
                                                (((0xaU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xaU])))));
    vlSelfRef.__VdlySet__copy_list__v74 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v75 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xbU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xbU]))
                                                 : 
                                                (((0xbU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xbU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0xbU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xbU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xbU]))
                                                 : 
                                                (((0xbU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xbU])))));
    vlSelfRef.__VdlySet__copy_list__v75 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v76 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xcU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xcU]))
                                                 : 
                                                (((0xcU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xcU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0xcU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xcU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xcU]))
                                                 : 
                                                (((0xcU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xcU])))));
    vlSelfRef.__VdlySet__copy_list__v76 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v77 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xdU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xdU]))
                                                 : 
                                                (((0xdU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xdU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0xdU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xdU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xdU]))
                                                 : 
                                                (((0xdU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xdU])))));
    vlSelfRef.__VdlySet__copy_list__v77 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v78 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xeU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xeU]))
                                                 : 
                                                (((0xeU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xeU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0xeU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xeU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xeU]))
                                                 : 
                                                (((0xeU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xeU])))));
    vlSelfRef.__VdlySet__copy_list__v78 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v79 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0xfU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xfU]))
                                                 : 
                                                (((0xfU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xfU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0xfU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0xfU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0xfU]))
                                                 : 
                                                (((0xfU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0xfU])))));
    vlSelfRef.__VdlySet__copy_list__v79 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v80 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x10U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x10U]))
                                                 : 
                                                (((0x10U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x10U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x10U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x10U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x10U]))
                                                 : 
                                                (((0x10U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x10U])))));
    vlSelfRef.__VdlySet__copy_list__v80 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v81 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x11U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x11U]))
                                                 : 
                                                (((0x11U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x11U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x11U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x11U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x11U]))
                                                 : 
                                                (((0x11U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x11U])))));
    vlSelfRef.__VdlySet__copy_list__v81 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v82 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x12U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x12U]))
                                                 : 
                                                (((0x12U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x12U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x12U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x12U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x12U]))
                                                 : 
                                                (((0x12U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x12U])))));
    vlSelfRef.__VdlySet__copy_list__v82 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v83 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x13U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x13U]))
                                                 : 
                                                (((0x13U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x13U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x13U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x13U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x13U]))
                                                 : 
                                                (((0x13U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x13U])))));
    vlSelfRef.__VdlySet__copy_list__v83 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v84 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x14U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x14U]))
                                                 : 
                                                (((0x14U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x14U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x14U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x14U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x14U]))
                                                 : 
                                                (((0x14U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x14U])))));
    vlSelfRef.__VdlySet__copy_list__v84 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v85 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x15U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x15U]))
                                                 : 
                                                (((0x15U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x15U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x15U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x15U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x15U]))
                                                 : 
                                                (((0x15U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x15U])))));
    vlSelfRef.__VdlySet__copy_list__v85 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v86 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x16U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x16U]))
                                                 : 
                                                (((0x16U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x16U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x16U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x16U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x16U]))
                                                 : 
                                                (((0x16U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x16U])))));
    vlSelfRef.__VdlySet__copy_list__v86 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v87 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x17U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x17U]))
                                                 : 
                                                (((0x17U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x17U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x17U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x17U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x17U]))
                                                 : 
                                                (((0x17U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x17U])))));
    vlSelfRef.__VdlySet__copy_list__v87 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v88 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x18U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x18U]))
                                                 : 
                                                (((0x18U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x18U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x18U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x18U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x18U]))
                                                 : 
                                                (((0x18U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x18U])))));
    vlSelfRef.__VdlySet__copy_list__v88 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v89 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x19U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x19U]))
                                                 : 
                                                (((0x19U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x19U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x19U]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x19U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x19U]))
                                                 : 
                                                (((0x19U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x19U])))));
    vlSelfRef.__VdlySet__copy_list__v89 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v90 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1aU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1aU]))
                                                 : 
                                                (((0x1aU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1aU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x1aU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1aU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1aU]))
                                                 : 
                                                (((0x1aU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1aU])))));
    vlSelfRef.__VdlySet__copy_list__v90 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v91 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1bU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1bU]))
                                                 : 
                                                (((0x1bU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1bU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x1bU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1bU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1bU]))
                                                  : 
                                                 (((0x1bU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1bU]))
                                                 : 
                                                (((0x1bU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1bU]))
                                                  : 
                                                 (((0x1bU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1bU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1bU])))));
    vlSelfRef.__VdlySet__copy_list__v91 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v92 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1cU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1cU]))
                                                 : 
                                                (((0x1cU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1cU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x1cU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1cU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1cU]))
                                                  : 
                                                 (((0x1cU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1cU]))
                                                 : 
                                                (((0x1cU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1cU]))
                                                  : 
                                                 (((0x1cU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1cU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1cU])))));
    vlSelfRef.__VdlySet__copy_list__v92 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v93 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1dU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1dU]))
                                                 : 
                                                (((0x1dU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1dU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x1dU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1dU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1dU]))
                                                  : 
                                                 (((0x1dU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1dU]))
                                                 : 
                                                (((0x1dU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1dU]))
                                                  : 
                                                 (((0x1dU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1dU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1dU])))));
    vlSelfRef.__VdlySet__copy_list__v93 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v94 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1eU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1eU]))
                                                 : 
                                                (((0x1eU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1eU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x1eU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1eU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1eU]))
                                                  : 
                                                 (((0x1eU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1eU]))
                                                 : 
                                                (((0x1eU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1eU]))
                                                  : 
                                                 (((0x1eU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1eU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1eU])))));
    vlSelfRef.__VdlySet__copy_list__v94 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v95 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0x1fU 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [2U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1fU]))
                                                 : 
                                                (((0x1fU 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1fU])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [2U]
                                                 [0x1fU]))
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0x1fU 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1fU]))
                                                  : 
                                                 (((0x1fU 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0x1fU]))
                                                 : 
                                                (((0x1fU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [2U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1fU]))
                                                  : 
                                                 (((0x1fU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [2U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [2U]
                                                   [0x1fU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [2U]
                                                  [0x1fU])))));
    vlSelfRef.__VdlySet__copy_list__v95 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v96 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((0U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [3U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0U]))
                                                 : 
                                                (((0U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [3U]
                                                 [0U]))
                                             : ((3U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((0U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0U]))
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [0U]))
                                                 : 
                                                (((0U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0U]))
                                                  : 
                                                 (((0U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0U])))));
    vlSelfRef.__VdlySet__copy_list__v96 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v97 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((1U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [3U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [1U]))
                                                 : 
                                                (((1U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [1U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [3U]
                                                 [1U]))
                                             : ((3U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((1U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [1U]))
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [1U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [1U]))
                                                 : 
                                                (((1U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [1U]))
                                                  : 
                                                 (((1U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [1U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [1U])))));
    vlSelfRef.__VdlySet__copy_list__v97 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v98 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((2U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [3U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [2U]))
                                                 : 
                                                (((2U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [2U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [3U]
                                                 [2U]))
                                             : ((3U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [2U]))
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [2U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [2U]))
                                                 : 
                                                (((2U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [2U]))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [2U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [2U])))));
    vlSelfRef.__VdlySet__copy_list__v98 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v99 = ((IData)(vlSelfRef.__PVT__rst)
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                             ? (((3U 
                                                  == 
                                                  vlSelfRef.copy_tail_ptr
                                                  [3U]) 
                                                 & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                  ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [3U]))
                                                 : 
                                                (((3U 
                                                   == 
                                                   vlSelfRef.copy_tail_next_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                   & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [3U])
                                                  : 
                                                 vlSelfRef.copy_list
                                                 [3U]
                                                 [3U]))
                                             : ((3U 
                                                 == (IData)(vlSelfRef.__PVT__copy_target))
                                                 ? 
                                                (((3U 
                                                   == (IData)(vlSelfRef.tail_ptr)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [3U]))
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.tail_next_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.freelist
                                                   [3U])
                                                   : 
                                                  vlSelfRef.freelist
                                                  [3U]))
                                                 : 
                                                (((3U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [3U]))
                                                  : 
                                                 (((3U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [3U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [3U])))));
    vlSelfRef.__VdlySet__copy_list__v99 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v100 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((4U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [4U]))
                                                  : 
                                                 (((4U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [4U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [4U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((4U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [4U]))
                                                   : 
                                                  (((4U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [4U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [4U]))
                                                  : 
                                                 (((4U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [4U]))
                                                   : 
                                                  (((4U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [4U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [4U])))));
    vlSelfRef.__VdlySet__copy_list__v100 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v101 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((5U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [5U]))
                                                  : 
                                                 (((5U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [5U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [5U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((5U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [5U]))
                                                   : 
                                                  (((5U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [5U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [5U]))
                                                  : 
                                                 (((5U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [5U]))
                                                   : 
                                                  (((5U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [5U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [5U])))));
    vlSelfRef.__VdlySet__copy_list__v101 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v102 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((6U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [6U]))
                                                  : 
                                                 (((6U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [6U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [6U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((6U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [6U]))
                                                   : 
                                                  (((6U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [6U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [6U]))
                                                  : 
                                                 (((6U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [6U]))
                                                   : 
                                                  (((6U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [6U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [6U])))));
    vlSelfRef.__VdlySet__copy_list__v102 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v103 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((7U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [7U]))
                                                  : 
                                                 (((7U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [7U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [7U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [7U]))
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [7U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [7U]))
                                                  : 
                                                 (((7U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [7U]))
                                                   : 
                                                  (((7U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [7U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [7U])))));
    vlSelfRef.__VdlySet__copy_list__v103 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v104 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((8U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [8U]))
                                                  : 
                                                 (((8U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [8U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [8U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((8U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [8U]))
                                                   : 
                                                  (((8U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [8U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [8U]))
                                                  : 
                                                 (((8U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [8U]))
                                                   : 
                                                  (((8U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [8U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [8U])))));
    vlSelfRef.__VdlySet__copy_list__v104 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v105 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((9U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [9U]))
                                                  : 
                                                 (((9U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [9U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [9U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((9U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [9U]))
                                                   : 
                                                  (((9U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [9U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [9U]))
                                                  : 
                                                 (((9U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [9U]))
                                                   : 
                                                  (((9U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [9U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [9U])))));
    vlSelfRef.__VdlySet__copy_list__v105 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v106 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0xaU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xaU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0xaU]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0xaU 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xaU]))
                                                   : 
                                                  (((0xaU 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xaU])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xaU]))
                                                  : 
                                                 (((0xaU 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xaU]))
                                                   : 
                                                  (((0xaU 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xaU])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xaU])))));
    vlSelfRef.__VdlySet__copy_list__v106 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v107 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0xbU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xbU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0xbU]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0xbU 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xbU]))
                                                   : 
                                                  (((0xbU 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xbU])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xbU]))
                                                  : 
                                                 (((0xbU 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xbU]))
                                                   : 
                                                  (((0xbU 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xbU])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xbU])))));
    vlSelfRef.__VdlySet__copy_list__v107 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v108 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0xcU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xcU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0xcU]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0xcU 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xcU]))
                                                   : 
                                                  (((0xcU 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xcU])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xcU]))
                                                  : 
                                                 (((0xcU 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xcU]))
                                                   : 
                                                  (((0xcU 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xcU])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xcU])))));
    vlSelfRef.__VdlySet__copy_list__v108 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v109 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0xdU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xdU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0xdU]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0xdU 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xdU]))
                                                   : 
                                                  (((0xdU 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xdU])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xdU]))
                                                  : 
                                                 (((0xdU 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xdU]))
                                                   : 
                                                  (((0xdU 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xdU])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xdU])))));
    vlSelfRef.__VdlySet__copy_list__v109 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v110 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0xeU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xeU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0xeU]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0xeU 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xeU]))
                                                   : 
                                                  (((0xeU 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xeU])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xeU]))
                                                  : 
                                                 (((0xeU 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xeU]))
                                                   : 
                                                  (((0xeU 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xeU])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xeU])))));
    vlSelfRef.__VdlySet__copy_list__v110 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v111 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0xfU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xfU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0xfU]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0xfU 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xfU]))
                                                   : 
                                                  (((0xfU 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0xfU])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0xfU]))
                                                  : 
                                                 (((0xfU 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xfU]))
                                                   : 
                                                  (((0xfU 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0xfU])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0xfU])))));
    vlSelfRef.__VdlySet__copy_list__v111 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v112 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x10U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x10U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x10U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x10U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x10U]))
                                                   : 
                                                  (((0x10U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x10U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x10U]))
                                                  : 
                                                 (((0x10U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x10U]))
                                                   : 
                                                  (((0x10U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x10U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x10U])))));
    vlSelfRef.__VdlySet__copy_list__v112 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v113 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x11U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x11U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x11U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x11U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x11U]))
                                                   : 
                                                  (((0x11U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x11U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x11U]))
                                                  : 
                                                 (((0x11U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x11U]))
                                                   : 
                                                  (((0x11U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x11U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x11U])))));
    vlSelfRef.__VdlySet__copy_list__v113 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v114 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x12U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x12U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x12U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x12U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x12U]))
                                                   : 
                                                  (((0x12U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x12U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x12U]))
                                                  : 
                                                 (((0x12U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x12U]))
                                                   : 
                                                  (((0x12U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x12U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x12U])))));
    vlSelfRef.__VdlySet__copy_list__v114 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v115 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x13U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x13U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x13U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x13U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x13U]))
                                                   : 
                                                  (((0x13U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x13U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x13U]))
                                                  : 
                                                 (((0x13U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x13U]))
                                                   : 
                                                  (((0x13U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x13U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x13U])))));
    vlSelfRef.__VdlySet__copy_list__v115 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v116 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x14U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x14U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x14U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x14U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x14U]))
                                                   : 
                                                  (((0x14U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x14U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x14U]))
                                                  : 
                                                 (((0x14U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x14U]))
                                                   : 
                                                  (((0x14U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x14U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x14U])))));
    vlSelfRef.__VdlySet__copy_list__v116 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v117 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x15U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x15U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x15U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x15U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x15U]))
                                                   : 
                                                  (((0x15U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x15U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x15U]))
                                                  : 
                                                 (((0x15U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x15U]))
                                                   : 
                                                  (((0x15U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x15U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x15U])))));
    vlSelfRef.__VdlySet__copy_list__v117 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v118 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x16U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x16U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x16U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x16U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x16U]))
                                                   : 
                                                  (((0x16U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x16U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x16U]))
                                                  : 
                                                 (((0x16U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x16U]))
                                                   : 
                                                  (((0x16U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x16U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x16U])))));
    vlSelfRef.__VdlySet__copy_list__v118 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v119 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x17U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x17U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x17U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x17U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x17U]))
                                                   : 
                                                  (((0x17U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x17U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x17U]))
                                                  : 
                                                 (((0x17U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x17U]))
                                                   : 
                                                  (((0x17U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x17U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x17U])))));
    vlSelfRef.__VdlySet__copy_list__v119 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v120 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x18U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x18U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x18U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x18U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x18U]))
                                                   : 
                                                  (((0x18U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x18U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x18U]))
                                                  : 
                                                 (((0x18U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x18U]))
                                                   : 
                                                  (((0x18U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x18U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x18U])))));
    vlSelfRef.__VdlySet__copy_list__v120 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v121 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x19U 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x19U])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x19U]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x19U 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x19U]))
                                                   : 
                                                  (((0x19U 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x19U])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x19U]))
                                                  : 
                                                 (((0x19U 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x19U]))
                                                   : 
                                                  (((0x19U 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x19U])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x19U])))));
    vlSelfRef.__VdlySet__copy_list__v121 = 1U;
    vlSelfRef.__VdlyVal__copy_list__v122 = ((IData)(vlSelfRef.__PVT__rst)
                                             ? 0U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__instr0_copy)) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_copy))))
                                              ? (((0x1aU 
                                                   == 
                                                   vlSelfRef.copy_tail_ptr
                                                   [3U]) 
                                                  & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                   ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == 
                                                    vlSelfRef.copy_tail_next_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                    & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x1aU])
                                                   : 
                                                  vlSelfRef.copy_list
                                                  [3U]
                                                  [0x1aU]))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__copy_target))
                                                  ? 
                                                 (((0x1aU 
                                                    == (IData)(vlSelfRef.tail_ptr)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x1aU]))
                                                   : 
                                                  (((0x1aU 
                                                     == (IData)(vlSelfRef.tail_next_ptr)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.freelist
                                                    [0x1aU])
                                                    : 
                                                   vlSelfRef.freelist
                                                   [0x1aU]))
                                                  : 
                                                 (((0x1aU 
                                                    == 
                                                    vlSelfRef.copy_tail_ptr
                                                    [3U]) 
                                                   & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__push_stale_rd0_valid)
                                                    ? (IData)(vlSelfRef.__PVT__push_stale_rd0)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__push_stale_rd1_valid)
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x1aU]))
                                                   : 
                                                  (((0x1aU 
                                                     == 
                                                     vlSelfRef.copy_tail_next_ptr
                                                     [3U]) 
                                                    & (~ (IData)(vlSelfRef.__PVT__recovery_rollback)))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__push_stale_rd1_valid) 
                                                     & (IData)(vlSelfRef.__PVT__push_stale_rd0_valid))
                                                     ? (IData)(vlSelfRef.__PVT__push_stale_rd1)
                                                     : 
                                                    vlSelfRef.copy_list
                                                    [3U]
                                                    [0x1aU])
                                                    : 
                                                   vlSelfRef.copy_list
                                                   [3U]
                                                   [0x1aU])))));
}
