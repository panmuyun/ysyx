// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vps2_keyboard__Syms.h"


void Vps2_keyboard___024root__trace_chg_sub_0(Vps2_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vps2_keyboard___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_chg_top_0\n"); );
    // Init
    Vps2_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_keyboard___024root*>(voidSelf);
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vps2_keyboard___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vps2_keyboard___024root__trace_chg_sub_0(Vps2_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->ps2_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+1,(vlSelf->ps2_keyboard__DOT__count),4);
        bufp->chgCData(oldp+2,(vlSelf->ps2_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+3,((IData)((4U == (6U & (IData)(vlSelf->ps2_keyboard__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->resetn));
    bufp->chgBit(oldp+6,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+7,(vlSelf->ps2_data));
    bufp->chgIData(oldp+8,(vlSelf->data),32);
    bufp->chgCData(oldp+9,(vlSelf->presscount),8);
}

void Vps2_keyboard___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root__trace_cleanup\n"); );
    // Init
    Vps2_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_keyboard___024root*>(voidSelf);
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
