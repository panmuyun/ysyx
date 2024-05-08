// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vps2_keyboard__Syms.h"


VL_ATTR_COLD void Vps2_keyboard___024root__trace_init_sub__TOP__0(Vps2_keyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"resetn", false,-1);
    tracep->declBit(c+7,"ps2_clk", false,-1);
    tracep->declBit(c+8,"ps2_data", false,-1);
    tracep->declBus(c+9,"data", false,-1, 31,0);
    tracep->declBus(c+10,"presscount", false,-1, 7,0);
    tracep->pushNamePrefix("ps2_keyboard ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"resetn", false,-1);
    tracep->declBit(c+7,"ps2_clk", false,-1);
    tracep->declBit(c+8,"ps2_data", false,-1);
    tracep->declBus(c+9,"data", false,-1, 31,0);
    tracep->declBus(c+10,"presscount", false,-1, 7,0);
    tracep->declBus(c+1,"buffer", false,-1, 9,0);
    tracep->declBus(c+2,"count", false,-1, 3,0);
    tracep->declBus(c+3,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+4,"sampling", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vps2_keyboard___024root__trace_init_top(Vps2_keyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_init_top\n"); );
    // Body
    Vps2_keyboard___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vps2_keyboard___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vps2_keyboard___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vps2_keyboard___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vps2_keyboard___024root__trace_register(Vps2_keyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vps2_keyboard___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vps2_keyboard___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vps2_keyboard___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vps2_keyboard___024root__trace_full_sub_0(Vps2_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vps2_keyboard___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_full_top_0\n"); );
    // Init
    Vps2_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_keyboard___024root*>(voidSelf);
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vps2_keyboard___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vps2_keyboard___024root__trace_full_sub_0(Vps2_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->ps2_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+2,(vlSelf->ps2_keyboard__DOT__count),4);
    bufp->fullCData(oldp+3,(vlSelf->ps2_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+4,((IData)((4U == (6U & (IData)(vlSelf->ps2_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->resetn));
    bufp->fullBit(oldp+7,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+8,(vlSelf->ps2_data));
    bufp->fullIData(oldp+9,(vlSelf->data),32);
    bufp->fullCData(oldp+10,(vlSelf->presscount),8);
}
