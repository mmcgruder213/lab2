// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x39aU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->top__DOT__mem_clear) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)] = 0U;
                vlSymsp->__Vcoverage[4536].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
    } else if (vlSelf->top__DOT__reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0xfffU)) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4539].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4542].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            }
        }
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__4\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0 = 0;
    CData/*3:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b = 0;
    CData/*3:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout = 0;
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
        = ((0x7ffc00000000ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
           | (((QData)((IData)((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_rdy))) {
        vlSymsp->__Vcoverage[3564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    }
    vlSelf->top__DOT__imem_reqstream_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)
                                             ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
                                                & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay)))
                                             : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
                                                & (0U 
                                                   == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_val))) {
        vlSymsp->__Vcoverage[3721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_val;
    }
    vlSelf->top__DOT__imem_respstream_val = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D)));
    vlSelf->top__DOT__mngr2proc_msg = ((IData)(vlSelf->top__DOT__mngr2proc_val)
                                        ? vlSelf->top__DOT__src__DOT__src_msg
                                        : 0U);
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
            = vlSelf->top__DOT__mngr2proc_msg;
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
            = ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))
                ? 1U : 0U);
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D) 
           | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D) 
              | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D) 
                 | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D) 
                    | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D) 
                       | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__pc_sel_F = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X;
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_F = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X)))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    }
    vlSelf->top__DOT__dmem_reqstream_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)
                                             ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
                                                & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay)))
                                             : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                                & (0U 
                                                   == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val))) {
        vlSymsp->__Vcoverage[3770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_val;
    }
    vlSelf->top__DOT__dmem_respstream_val = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D = 
        (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_gen_D__DOT__imm__out__strong__out0 
         | (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_gen_D__DOT__imm__out__strong__out1 
            | (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_gen_D__DOT__imm__out__strong__out2 
               | ((0xfffff000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_gen_D__DOT__imm__out__strong__out3) 
                  | ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_gen_D__DOT__imm__out__strong__out4) 
                     | vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_gen_D__DOT__imm__out__strong__out5)))));
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__ostream_msg);
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M)))) {
        vlSymsp->__Vcoverage[4576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[4595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[4597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[4599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[4601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[4603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[4605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[4606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[4607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[4609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[4610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[4611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[4612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[4613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[4614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[4615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[4616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[4619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[4620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[4621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[4622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp0_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M)))) {
        vlSymsp->__Vcoverage[4623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[4642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[4643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[4644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[4645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[4646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[4647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[4648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[4649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[4650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[4651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[4652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[4653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[4654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[4655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[4656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[4657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[4658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[4659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[4660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[4661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[4662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[4663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[4664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[4665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[4666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[4667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[4668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[4669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp1_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp));
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D;
    }
    if ((1U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (1U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((2U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (2U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((4U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (4U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((8U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (8U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if (((vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
              | ((~ (IData)(vlSelf->top__DOT__DUT__DOT__istream_rdy)) 
                 | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D))));
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val = 
        ((IData)(vlSelf->top__DOT__commit_inst) & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
                vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
                vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__dmem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__dmem_respstream_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
           & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M))));
    if ((1U & ((IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                 + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[2685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                      + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                     >> 0x20U))));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D);
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
            = ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F);
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
            = ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X
                : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))
                    ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D
                    : 0U));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if (vlSelf->top__DOT__imem_respstream_val) {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg);
        vlSelf->top__DOT__imem_respstream_msg = vlSelf->top__DOT__mem__DOT__mem_memresp0_msg;
    } else {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data = 0U;
        vlSelf->top__DOT__imem_respstream_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg)))) {
        vlSymsp->__Vcoverage[3723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[3724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[3725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[3726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[3727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[3728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[3729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[3730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[3731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[3732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[3733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[3734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[3735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[3736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[3737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[3738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[3739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[3740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[3741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[3742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[3743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[3744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[3745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[3746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[3747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[3748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[3755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[3756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[3757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[3758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[3759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[3760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[3761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[3762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[3763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[3764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[3769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (vlSelf->top__DOT__dmem_respstream_val) {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg);
        vlSelf->top__DOT__dmem_respstream_msg = vlSelf->top__DOT__mem__DOT__mem_memresp1_msg;
    } else {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data = 0U;
        vlSelf->top__DOT__dmem_respstream_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg)))) {
        vlSymsp->__Vcoverage[3772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[3773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[3774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[3775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[3776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[3777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[3778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[3779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[3780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[3781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[3782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[3783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[3784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[3785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[3786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[3787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[3788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[3812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D = 
        ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
          ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D
          : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D
              : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
                  ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D
                  : 0U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M;
    }
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__imem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_msg)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
                ? vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M);
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__dmem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dmem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_msg)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__dmem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__req_rdy) {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        >> 1U));
        vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        >> 1U));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D;
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg 
                        >> 1U));
        vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg 
                        >> 1U));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg;
    }
    if ((0x40U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
        if ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout = 1U;
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            } else {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout = 2U;
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        } else {
                            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout 
                                = ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 3U);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    } else {
                        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout 
                            = ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U));
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                } else {
                    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout 
                        = ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 5U)));
                }
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            } else {
                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout 
                    = ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 6U))));
            }
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        } else {
            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout 
                = ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 7U)))));
        }
        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                      >> 5U)))) {
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout 
            = ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                ? ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 6U)))))
                : ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))
                                                   ? 1U
                                                   : 8U))))));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2 
        = __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__Vfuncout;
    if ((0x40U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
        if ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout = 1U;
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            } else {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout = 2U;
                            }
                        } else {
                            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout 
                                = ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 3U);
                        }
                    } else {
                        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout 
                            = ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U));
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                } else {
                    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout 
                        = ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 5U)));
                }
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            } else {
                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout 
                    = ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 6U))));
            }
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        } else {
            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout 
                = ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 7U)))));
        }
        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout 
            = ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                ? ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 6U)))))
                : ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))
                                                   ? 1U
                                                   : 8U))))));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2 
        = __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__Vfuncout;
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                       | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6bfbc66e__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
           | (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x2000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x4000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x8000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x10000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x20000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x40000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x80000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x100000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x200000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x400000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x800000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x1000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x2000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x4000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x8000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x10000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x20000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x40000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if (((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1dU)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
                              >> 0x1fU))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((2U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((4U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((8U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U];
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[2514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__111__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
           << (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2));
    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b)))) {
                                vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__112__b))) {
                                vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
}