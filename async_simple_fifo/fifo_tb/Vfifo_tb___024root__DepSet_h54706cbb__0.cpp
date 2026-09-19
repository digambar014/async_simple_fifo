// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "verilated.h"

#include "Vfifo_tb__Syms.h"
#include "Vfifo_tb___024root.h"

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__1(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__2(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vfifo_tb___024root___eval_initial__TOP__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__1(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0 
        = vlSelf->fifo_tb__DOT__wr_clk;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0 
        = vlSelf->fifo_tb__DOT__wr_rst;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0 
        = vlSelf->fifo_tb__DOT__rd_clk;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0 
        = vlSelf->fifo_tb__DOT__rd_rst;
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__1(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(7ULL, nullptr, 
                                           "fifo_tb.v", 
                                           13);
        vlSelf->__Vdlyvval__fifo_tb__DOT__rd_clk__v0 
            = (1U & (~ (IData)(vlSelf->fifo_tb__DOT__rd_clk)));
        vlSelf->__Vdlyvset__fifo_tb__DOT__rd_clk__v0 = 1U;
    }
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__2(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "fifo_tb.v", 
                                           12);
        vlSelf->__Vdlyvval__fifo_tb__DOT__wr_clk__v0 
            = (1U & (~ (IData)(vlSelf->fifo_tb__DOT__wr_clk)));
        vlSelf->__Vdlyvset__fifo_tb__DOT__wr_clk__v0 = 1U;
    }
}

void Vfifo_tb___024root___eval_act(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0;
    // Body
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr;
    if (vlSelf->fifo_tb__DOT__rd_rst) {
        __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0U;
    } else if (((IData)(vlSelf->fifo_tb__DOT__rd_en) 
                & (~ (IData)(vlSelf->fifo_tb__DOT__rd_empty)))) {
        vlSelf->fifo_tb__DOT__rd_data = vlSelf->fifo_tb__DOT__uut__DOT__mem
            [vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr];
        __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr)));
    }
    vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr = __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_sequent__TOP__1(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdlyvdim0__fifo_tb__DOT__uut__DOT__mem__v0;
    __Vdlyvdim0__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__fifo_tb__DOT__uut__DOT__mem__v0;
    __Vdlyvval__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fifo_tb__DOT__uut__DOT__mem__v0;
    __Vdlyvset__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__fifo_tb__DOT__uut__DOT__mem__v0 = 0U;
    __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr;
    if (vlSelf->fifo_tb__DOT__wr_rst) {
        __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = 0U;
    } else if (((IData)(vlSelf->fifo_tb__DOT__wr_en) 
                & (~ (IData)(vlSelf->fifo_tb__DOT__wr_full)))) {
        __Vdlyvval__fifo_tb__DOT__uut__DOT__mem__v0 
            = vlSelf->fifo_tb__DOT__wr_data;
        __Vdlyvset__fifo_tb__DOT__uut__DOT__mem__v0 = 1U;
        __Vdlyvdim0__fifo_tb__DOT__uut__DOT__mem__v0 
            = vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr;
        __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr)));
    }
    if (__Vdlyvset__fifo_tb__DOT__uut__DOT__mem__v0) {
        vlSelf->fifo_tb__DOT__uut__DOT__mem[__Vdlyvdim0__fifo_tb__DOT__uut__DOT__mem__v0] 
            = __Vdlyvval__fifo_tb__DOT__uut__DOT__mem__v0;
    }
    vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr = __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr;
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_sequent__TOP__2(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__fifo_tb__DOT__rd_clk__v0) {
        vlSelf->fifo_tb__DOT__rd_clk = vlSelf->__Vdlyvval__fifo_tb__DOT__rd_clk__v0;
        vlSelf->__Vdlyvset__fifo_tb__DOT__rd_clk__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__fifo_tb__DOT__wr_clk__v0) {
        vlSelf->fifo_tb__DOT__wr_clk = vlSelf->__Vdlyvval__fifo_tb__DOT__wr_clk__v0;
        vlSelf->__Vdlyvset__fifo_tb__DOT__wr_clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_comb__TOP__0(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->fifo_tb__DOT__wr_full = ((7U & ((IData)(1U) 
                                            + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr))) 
                                     == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr));
    vlSelf->fifo_tb__DOT__rd_empty = ((IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr) 
                                      == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr));
}

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___timing_commit(Vfifo_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__nba(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vfifo_tb___024root___eval_triggers__act(vlSelf);
            Vfifo_tb___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vfifo_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("fifo_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vfifo_tb___024root___timing_resume(vlSelf);
                Vfifo_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vfifo_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("fifo_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vfifo_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vfifo_tb___024root___timing_commit(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h23437c54__0.commit("@(negedge fifo_tb.wr_clk)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h23437b93__0.commit("@(posedge fifo_tb.wr_clk)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8955e423__0.commit("@(negedge fifo_tb.rd_clk)");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8955e464__0.commit("@(posedge fifo_tb.rd_clk)");
    }
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h23437c54__0.resume("@(negedge fifo_tb.wr_clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h23437b93__0.resume("@(posedge fifo_tb.wr_clk)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8955e423__0.resume("@(negedge fifo_tb.rd_clk)");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8955e464__0.resume("@(posedge fifo_tb.rd_clk)");
    }
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
