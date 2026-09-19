// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo.h for the primary calling header

#ifndef VERILATED_VFIFO___024ROOT_H_
#define VERILATED_VFIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fifo_tb__DOT__wr_clk;
    CData/*0:0*/ fifo_tb__DOT__rd_clk;
    CData/*0:0*/ fifo_tb__DOT__wr_rst;
    CData/*0:0*/ fifo_tb__DOT__rd_rst;
    CData/*0:0*/ fifo_tb__DOT__wr_en;
    CData/*0:0*/ fifo_tb__DOT__rd_en;
    CData/*7:0*/ fifo_tb__DOT__wr_data;
    CData/*7:0*/ fifo_tb__DOT__rd_data;
    CData/*0:0*/ fifo_tb__DOT__wr_full;
    CData/*0:0*/ fifo_tb__DOT__rd_empty;
    CData/*2:0*/ fifo_tb__DOT__uut__DOT__wr_ptr;
    CData/*2:0*/ fifo_tb__DOT__uut__DOT__rd_ptr;
    CData/*0:0*/ __Vdlyvval__fifo_tb__DOT__rd_clk__v0;
    CData/*0:0*/ __Vdlyvset__fifo_tb__DOT__rd_clk__v0;
    CData/*0:0*/ __Vdlyvval__fifo_tb__DOT__wr_clk__v0;
    CData/*0:0*/ __Vdlyvset__fifo_tb__DOT__wr_clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> fifo_tb__DOT__uut__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h23437c54__0;
    VlTriggerScheduler __VtrigSched_h23437b93__0;
    VlTriggerScheduler __VtrigSched_h8955e423__0;
    VlTriggerScheduler __VtrigSched_h8955e464__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfifo___024root(Vfifo__Syms* symsp, const char* v__name);
    ~Vfifo___024root();
    VL_UNCOPYABLE(Vfifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
