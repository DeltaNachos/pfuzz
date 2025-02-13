// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaquila_top.h"
#include "Vaquila_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vaquila_top::Vaquila_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaquila_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , __PVT__aquila_top{vlSymsp->TOP.__PVT__aquila_top}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaquila_top::Vaquila_top(const char* _vcname__)
    : Vaquila_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaquila_top::~Vaquila_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaquila_top___024root___eval_debug_assertions(Vaquila_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vaquila_top___024root___eval_static(Vaquila_top___024root* vlSelf);
void Vaquila_top___024root___eval_initial(Vaquila_top___024root* vlSelf);
void Vaquila_top___024root___eval_settle(Vaquila_top___024root* vlSelf);
void Vaquila_top___024root___eval(Vaquila_top___024root* vlSelf);

void Vaquila_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaquila_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaquila_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaquila_top___024root___eval_static(&(vlSymsp->TOP));
        Vaquila_top___024root___eval_initial(&(vlSymsp->TOP));
        Vaquila_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaquila_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaquila_top::eventsPending() { return false; }

uint64_t Vaquila_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaquila_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaquila_top___024root___eval_final(Vaquila_top___024root* vlSelf);

VL_ATTR_COLD void Vaquila_top::final() {
    Vaquila_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaquila_top::hierName() const { return vlSymsp->name(); }
const char* Vaquila_top::modelName() const { return "Vaquila_top"; }
unsigned Vaquila_top::threads() const { return 1; }
void Vaquila_top::prepareClone() const { contextp()->prepareClone(); }
void Vaquila_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vaquila_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaquila_top___024root__trace_init_top(Vaquila_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaquila_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaquila_top___024root*>(voidSelf);
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vaquila_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vaquila_top___024root__trace_register(Vaquila_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaquila_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaquila_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaquila_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
