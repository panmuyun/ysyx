// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vprio_encoder83__Syms.h"


VL_ATTR_COLD void Vprio_encoder83___024root__trace_init_sub__TOP__0(Vprio_encoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+8,"x", false,-1, 7,0);
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"encode_x", false,-1, 2,0);
    tracep->declBit(c+11,"flag", false,-1);
    tracep->declBus(c+12,"led", false,-1, 6,0);
    tracep->pushNamePrefix("prio_encoder83 ");
    tracep->declBus(c+8,"x", false,-1, 7,0);
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"encode_x", false,-1, 2,0);
    tracep->declBit(c+11,"flag", false,-1);
    tracep->declBus(c+12,"led", false,-1, 6,0);
    tracep->pushNamePrefix("u_bcd7seg ");
    tracep->declBus(c+13,"b", false,-1, 3,0);
    tracep->declBit(c+14,"en", false,-1);
    tracep->declBus(c+12,"h", false,-1, 6,0);
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"bb", false,-1);
    tracep->declBit(c+3,"c", false,-1);
    tracep->declBit(c+4,"d", false,-1);
    tracep->declBit(c+5,"e", false,-1);
    tracep->declBit(c+6,"f", false,-1);
    tracep->declBit(c+7,"g", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vprio_encoder83___024root__trace_init_top(Vprio_encoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_init_top\n"); );
    // Body
    Vprio_encoder83___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vprio_encoder83___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprio_encoder83___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprio_encoder83___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vprio_encoder83___024root__trace_register(Vprio_encoder83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vprio_encoder83___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vprio_encoder83___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vprio_encoder83___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vprio_encoder83___024root__trace_full_sub_0(Vprio_encoder83___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vprio_encoder83___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_full_top_0\n"); );
    // Init
    Vprio_encoder83___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprio_encoder83___024root*>(voidSelf);
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprio_encoder83___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprio_encoder83___024root__trace_full_sub_0(Vprio_encoder83___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a));
    bufp->fullBit(oldp+2,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb));
    bufp->fullBit(oldp+3,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c));
    bufp->fullBit(oldp+4,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d));
    bufp->fullBit(oldp+5,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e));
    bufp->fullBit(oldp+6,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f));
    bufp->fullBit(oldp+7,(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g));
    bufp->fullCData(oldp+8,(vlSelf->x),8);
    bufp->fullBit(oldp+9,(vlSelf->en));
    bufp->fullCData(oldp+10,(vlSelf->encode_x),3);
    bufp->fullBit(oldp+11,(vlSelf->flag));
    bufp->fullCData(oldp+12,(vlSelf->led),7);
    bufp->fullCData(oldp+13,(vlSelf->encode_x),4);
    bufp->fullBit(oldp+14,(1U));
}
