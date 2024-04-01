// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshifter__Syms.h"


void Vshifter___024root__trace_chg_sub_0(Vshifter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vshifter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_chg_top_0\n"); );
    // Init
    Vshifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshifter___024root*>(voidSelf);
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vshifter___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vshifter___024root__trace_chg_sub_0(Vshifter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->shifter__DOT__highest));
        bufp->chgCData(oldp+1,(vlSelf->shifter__DOT__out_shiftreg),8);
        bufp->chgCData(oldp+2,((0xfU & ((IData)(vlSelf->shifter__DOT__out_shiftreg) 
                                        >> 4U))),4);
        bufp->chgBit(oldp+3,(vlSelf->shifter__DOT__LH__DOT__a));
        bufp->chgBit(oldp+4,(vlSelf->shifter__DOT__LH__DOT__bb));
        bufp->chgBit(oldp+5,(vlSelf->shifter__DOT__LH__DOT__c));
        bufp->chgBit(oldp+6,(vlSelf->shifter__DOT__LH__DOT__d));
        bufp->chgBit(oldp+7,(vlSelf->shifter__DOT__LH__DOT__e));
        bufp->chgBit(oldp+8,(vlSelf->shifter__DOT__LH__DOT__f));
        bufp->chgBit(oldp+9,(vlSelf->shifter__DOT__LH__DOT__g));
        bufp->chgCData(oldp+10,((0xfU & (IData)(vlSelf->shifter__DOT__out_shiftreg))),4);
        bufp->chgBit(oldp+11,(vlSelf->shifter__DOT__RH__DOT__a));
        bufp->chgBit(oldp+12,(vlSelf->shifter__DOT__RH__DOT__bb));
        bufp->chgBit(oldp+13,(vlSelf->shifter__DOT__RH__DOT__c));
        bufp->chgBit(oldp+14,(vlSelf->shifter__DOT__RH__DOT__d));
        bufp->chgBit(oldp+15,(vlSelf->shifter__DOT__RH__DOT__e));
        bufp->chgBit(oldp+16,(vlSelf->shifter__DOT__RH__DOT__f));
        bufp->chgBit(oldp+17,(vlSelf->shifter__DOT__RH__DOT__g));
    }
    bufp->chgBit(oldp+18,(vlSelf->clk));
    bufp->chgBit(oldp+19,(vlSelf->rst));
    bufp->chgCData(oldp+20,(vlSelf->ledL),7);
    bufp->chgCData(oldp+21,(vlSelf->ledR),7);
}

void Vshifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_cleanup\n"); );
    // Init
    Vshifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshifter___024root*>(voidSelf);
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
