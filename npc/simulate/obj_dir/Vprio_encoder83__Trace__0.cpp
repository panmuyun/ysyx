// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vprio_encoder83__Syms.h"


void Vprio_encoder83___024root__trace_chg_sub_0(Vprio_encoder83___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vprio_encoder83___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_chg_top_0\n"); );
    // Init
    Vprio_encoder83___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprio_encoder83___024root*>(voidSelf);
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vprio_encoder83___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vprio_encoder83___024root__trace_chg_sub_0(Vprio_encoder83___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->prio_encoder83__DOT__i),32);
        bufp->chgBit(oldp+1,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a));
        bufp->chgBit(oldp+2,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb));
        bufp->chgBit(oldp+3,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c));
        bufp->chgBit(oldp+4,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d));
        bufp->chgBit(oldp+5,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e));
        bufp->chgBit(oldp+6,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f));
        bufp->chgBit(oldp+7,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g));
    }
    bufp->chgCData(oldp+8,(vlSelf->x),8);
    bufp->chgBit(oldp+9,(vlSelf->en));
    bufp->chgCData(oldp+10,(vlSelf->encode_x),3);
    bufp->chgBit(oldp+11,(vlSelf->flag));
    bufp->chgCData(oldp+12,(vlSelf->led),7);
    bufp->chgCData(oldp+13,(vlSelf->encode_x),4);
}

void Vprio_encoder83___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_cleanup\n"); );
    // Init
    Vprio_encoder83___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprio_encoder83___024root*>(voidSelf);
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
