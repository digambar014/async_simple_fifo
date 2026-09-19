// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "verilated.h"

#include "Vfifo_tb__Syms.h"
#include "Vfifo_tb__Syms.h"
#include "Vfifo_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__0(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->fifo_tb__DOT__wr_rst = 1U;
    vlSelf->fifo_tb__DOT__rd_rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "fifo_tb.v", 
                                       39);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__wr_rst = 0U;
    vlSelf->fifo_tb__DOT__rd_rst = 0U;
    co_await vlSelf->__VtrigSched_h23437c54__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((7U & ((IData)(1U) + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr))) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__wr_en = 1U;
        vlSelf->fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->fifo_tb__DOT__wr_data)));
    }
    co_await vlSelf->__VtrigSched_h23437b93__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__wr_en = 0U;
    co_await vlSelf->__VtrigSched_h23437c54__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((7U & ((IData)(1U) + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr))) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__wr_en = 1U;
        vlSelf->fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->fifo_tb__DOT__wr_data)));
    }
    co_await vlSelf->__VtrigSched_h23437b93__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__wr_en = 0U;
    co_await vlSelf->__VtrigSched_h23437c54__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((7U & ((IData)(1U) + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr))) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__wr_en = 1U;
        vlSelf->fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->fifo_tb__DOT__wr_data)));
    }
    co_await vlSelf->__VtrigSched_h23437b93__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__wr_en = 0U;
    co_await vlSelf->__VtrigSched_h23437c54__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       48);
    if (((7U & ((IData)(1U) + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr))) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__wr_en = 1U;
        vlSelf->fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->fifo_tb__DOT__wr_data)));
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h23437b93__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.wr_clk)", 
                                                       "fifo_tb.v", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__wr_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "fifo_tb.v", 
                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h8955e423__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__rd_en = 1U;
    }
    co_await vlSelf->__VtrigSched_h8955e464__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "fifo_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelf->fifo_tb__DOT__rd_en)) {
        VL_WRITEF("Time = %0t ns | Read Data = %0x (Decimal: %0#)\n",
                  64,VL_TIME_UNITED_Q(1),-12,8,(IData)(vlSelf->fifo_tb__DOT__rd_data),
                  8,vlSelf->fifo_tb__DOT__rd_data);
    }
    vlSelf->fifo_tb__DOT__rd_en = 0U;
    co_await vlSelf->__VtrigSched_h8955e423__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__rd_en = 1U;
    }
    co_await vlSelf->__VtrigSched_h8955e464__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "fifo_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelf->fifo_tb__DOT__rd_en)) {
        VL_WRITEF("Time = %0t ns | Read Data = %0x (Decimal: %0#)\n",
                  64,VL_TIME_UNITED_Q(1),-12,8,(IData)(vlSelf->fifo_tb__DOT__rd_data),
                  8,vlSelf->fifo_tb__DOT__rd_data);
    }
    vlSelf->fifo_tb__DOT__rd_en = 0U;
    co_await vlSelf->__VtrigSched_h8955e423__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__rd_en = 1U;
    }
    co_await vlSelf->__VtrigSched_h8955e464__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "fifo_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelf->fifo_tb__DOT__rd_en)) {
        VL_WRITEF("Time = %0t ns | Read Data = %0x (Decimal: %0#)\n",
                  64,VL_TIME_UNITED_Q(1),-12,8,(IData)(vlSelf->fifo_tb__DOT__rd_data),
                  8,vlSelf->fifo_tb__DOT__rd_data);
    }
    vlSelf->fifo_tb__DOT__rd_en = 0U;
    co_await vlSelf->__VtrigSched_h8955e423__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       67);
    if (((IData)(vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr) 
         != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))) {
        vlSelf->fifo_tb__DOT__rd_en = 1U;
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h8955e464__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge fifo_tb.rd_clk)", 
                                                       "fifo_tb.v", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "fifo_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelf->fifo_tb__DOT__rd_en)) {
        VL_WRITEF("Time = %0t ns | Read Data = %0x (Decimal: %0#)\n",
                  64,VL_TIME_UNITED_Q(1),-12,8,(IData)(vlSelf->fifo_tb__DOT__rd_data),
                  8,vlSelf->fifo_tb__DOT__rd_data);
    }
    vlSelf->fifo_tb__DOT__rd_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "fifo_tb.v", 
                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("fifo_tb.v", 93, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->fifo_tb__DOT__wr_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0))) 
                                     | ((IData)(vlSelf->fifo_tb__DOT__wr_rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->fifo_tb__DOT__rd_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0))) 
                                     | ((IData)(vlSelf->fifo_tb__DOT__rd_rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0)))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->fifo_tb__DOT__wr_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->fifo_tb__DOT__wr_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0))));
    vlSelf->__VactTriggered.set(5U, ((~ (IData)(vlSelf->fifo_tb__DOT__rd_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->fifo_tb__DOT__rd_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0 
        = vlSelf->fifo_tb__DOT__wr_clk;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0 
        = vlSelf->fifo_tb__DOT__wr_rst;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0 
        = vlSelf->fifo_tb__DOT__rd_clk;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0 
        = vlSelf->fifo_tb__DOT__rd_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
