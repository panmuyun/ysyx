// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshifter__Syms.h"


VL_ATTR_COLD void Vshifter___024root__trace_init_sub__TOP__0(Vshifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"rst", false,-1);
    tracep->declBus(c+20,"ledL", false,-1, 6,0);
    tracep->declBus(c+21,"ledR", false,-1, 6,0);
    tracep->pushNamePrefix("shifter ");
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"rst", false,-1);
    tracep->declBus(c+20,"ledL", false,-1, 6,0);
    tracep->declBus(c+21,"ledR", false,-1, 6,0);
    tracep->declBus(c+1,"data", false,-1, 7,0);
    tracep->pushNamePrefix("LH ");
    tracep->declBus(c+2,"b", false,-1, 3,0);
    tracep->declBit(c+22,"en", false,-1);
    tracep->declBus(c+20,"h", false,-1, 6,0);
    tracep->declBit(c+3,"a", false,-1);
    tracep->declBit(c+4,"bb", false,-1);
    tracep->declBit(c+5,"c", false,-1);
    tracep->declBit(c+6,"d", false,-1);
    tracep->declBit(c+7,"e", false,-1);
    tracep->declBit(c+8,"f", false,-1);
    tracep->declBit(c+9,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RH ");
    tracep->declBus(c+10,"b", false,-1, 3,0);
    tracep->declBit(c+22,"en", false,-1);
    tracep->declBus(c+21,"h", false,-1, 6,0);
    tracep->declBit(c+11,"a", false,-1);
    tracep->declBit(c+12,"bb", false,-1);
    tracep->declBit(c+13,"c", false,-1);
    tracep->declBit(c+14,"d", false,-1);
    tracep->declBit(c+15,"e", false,-1);
    tracep->declBit(c+16,"f", false,-1);
    tracep->declBit(c+17,"g", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vshifter___024root__trace_init_top(Vshifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_init_top\n"); );
    // Body
    Vshifter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshifter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshifter___024root__trace_register(Vshifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vshifter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vshifter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vshifter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshifter___024root__trace_full_sub_0(Vshifter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vshifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_full_top_0\n"); );
    // Init
    Vshifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshifter___024root*>(voidSelf);
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vshifter___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vshifter___024root__trace_full_sub_0(Vshifter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->shifter__DOT__data),8);
    bufp->fullCData(oldp+2,((0xfU & ((IData)(vlSelf->shifter__DOT__data) 
                                     >> 4U))),4);
    bufp->fullBit(oldp+3,(vlSelf->shifter__DOT__LH__DOT__a));
    bufp->fullBit(oldp+4,(vlSelf->shifter__DOT__LH__DOT__bb));
    bufp->fullBit(oldp+5,(vlSelf->shifter__DOT__LH__DOT__c));
    bufp->fullBit(oldp+6,(vlSelf->shifter__DOT__LH__DOT__d));
    bufp->fullBit(oldp+7,(vlSelf->shifter__DOT__LH__DOT__e));
    bufp->fullBit(oldp+8,(vlSelf->shifter__DOT__LH__DOT__f));
    bufp->fullBit(oldp+9,(vlSelf->shifter__DOT__LH__DOT__g));
    bufp->fullCData(oldp+10,((0xfU & (IData)(vlSelf->shifter__DOT__data))),4);
    bufp->fullBit(oldp+11,(vlSelf->shifter__DOT__RH__DOT__a));
    bufp->fullBit(oldp+12,(vlSelf->shifter__DOT__RH__DOT__bb));
    bufp->fullBit(oldp+13,(vlSelf->shifter__DOT__RH__DOT__c));
    bufp->fullBit(oldp+14,(vlSelf->shifter__DOT__RH__DOT__d));
    bufp->fullBit(oldp+15,(vlSelf->shifter__DOT__RH__DOT__e));
    bufp->fullBit(oldp+16,(vlSelf->shifter__DOT__RH__DOT__f));
    bufp->fullBit(oldp+17,(vlSelf->shifter__DOT__RH__DOT__g));
    bufp->fullBit(oldp+18,(vlSelf->clk));
    bufp->fullBit(oldp+19,(vlSelf->rst));
    bufp->fullCData(oldp+20,(vlSelf->ledL),7);
    bufp->fullCData(oldp+21,(vlSelf->ledR),7);
    bufp->fullBit(oldp+22,(1U));
}
