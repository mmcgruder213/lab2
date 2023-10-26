// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_QUEUEDPATH1__PZ3_PB4D_H_
#define VERILATED_VTOP_VC_QUEUEDPATH1__PZ3_PB4D_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_EnReg__P4d;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_QueueDpath1__Pz3_PB4d final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_EnReg__P4d* __PVT__qstore_reg;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__bypass_mux_sel,0,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__write_en;
    CData/*0:0*/ __Vtogcov__bypass_mux_sel;
    VL_INW(__PVT__enq_msg,76,0,3);
    VL_OUTW(__PVT__deq_msg,76,0,3);
    VlWide<3>/*76:0*/ __PVT__qstore;
    VlWide<3>/*76:0*/ __Vtogcov__enq_msg;
    VlWide<3>/*76:0*/ __Vtogcov__deq_msg;
    VlWide<3>/*76:0*/ __Vtogcov__qstore;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_QueueDpath1__Pz3_PB4d(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_QueueDpath1__Pz3_PB4d();
    VL_UNCOPYABLE(Vtop_vc_QueueDpath1__Pz3_PB4d);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard