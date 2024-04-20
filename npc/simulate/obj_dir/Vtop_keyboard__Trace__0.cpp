// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_keyboard__Syms.h"


void Vtop_keyboard___024root__trace_chg_sub_0(Vtop_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_keyboard___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_keyboard___024root*>(voidSelf);
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_keyboard___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_keyboard___024root__trace_chg_sub_0(Vtop_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top_keyboard__DOT__data),32);
        bufp->chgCData(oldp+1,(vlSelf->top_keyboard__DOT__presscount),8);
        bufp->chgSData(oldp+2,(vlSelf->top_keyboard__DOT__asciicode),12);
        bufp->chgBit(oldp+3,((0xf0U != (0xffU & (vlSelf->top_keyboard__DOT__data 
                                                 >> 8U)))));
        bufp->chgCData(oldp+4,((0xfU & (vlSelf->top_keyboard__DOT__data 
                                        >> 4U))),4);
        bufp->chgBit(oldp+5,(vlSelf->top_keyboard__DOT__LH0__DOT__a));
        bufp->chgBit(oldp+6,(vlSelf->top_keyboard__DOT__LH0__DOT__bb));
        bufp->chgBit(oldp+7,(vlSelf->top_keyboard__DOT__LH0__DOT__c));
        bufp->chgBit(oldp+8,(vlSelf->top_keyboard__DOT__LH0__DOT__d));
        bufp->chgBit(oldp+9,(vlSelf->top_keyboard__DOT__LH0__DOT__e));
        bufp->chgBit(oldp+10,(vlSelf->top_keyboard__DOT__LH0__DOT__f));
        bufp->chgBit(oldp+11,(vlSelf->top_keyboard__DOT__LH0__DOT__g));
        bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSelf->top_keyboard__DOT__asciicode) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+13,(vlSelf->top_keyboard__DOT__LH1__DOT__a));
        bufp->chgBit(oldp+14,(vlSelf->top_keyboard__DOT__LH1__DOT__bb));
        bufp->chgBit(oldp+15,(vlSelf->top_keyboard__DOT__LH1__DOT__c));
        bufp->chgBit(oldp+16,(vlSelf->top_keyboard__DOT__LH1__DOT__d));
        bufp->chgBit(oldp+17,(vlSelf->top_keyboard__DOT__LH1__DOT__e));
        bufp->chgBit(oldp+18,(vlSelf->top_keyboard__DOT__LH1__DOT__f));
        bufp->chgBit(oldp+19,(vlSelf->top_keyboard__DOT__LH1__DOT__g));
        bufp->chgCData(oldp+20,((0xfU & ((IData)(vlSelf->top_keyboard__DOT__presscount) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+21,(vlSelf->top_keyboard__DOT__PCLH__DOT__a));
        bufp->chgBit(oldp+22,(vlSelf->top_keyboard__DOT__PCLH__DOT__bb));
        bufp->chgBit(oldp+23,(vlSelf->top_keyboard__DOT__PCLH__DOT__c));
        bufp->chgBit(oldp+24,(vlSelf->top_keyboard__DOT__PCLH__DOT__d));
        bufp->chgBit(oldp+25,(vlSelf->top_keyboard__DOT__PCLH__DOT__e));
        bufp->chgBit(oldp+26,(vlSelf->top_keyboard__DOT__PCLH__DOT__f));
        bufp->chgBit(oldp+27,(vlSelf->top_keyboard__DOT__PCLH__DOT__g));
        bufp->chgCData(oldp+28,((0xfU & (IData)(vlSelf->top_keyboard__DOT__presscount))),4);
        bufp->chgBit(oldp+29,(vlSelf->top_keyboard__DOT__PCRH__DOT__a));
        bufp->chgBit(oldp+30,(vlSelf->top_keyboard__DOT__PCRH__DOT__bb));
        bufp->chgBit(oldp+31,(vlSelf->top_keyboard__DOT__PCRH__DOT__c));
        bufp->chgBit(oldp+32,(vlSelf->top_keyboard__DOT__PCRH__DOT__d));
        bufp->chgBit(oldp+33,(vlSelf->top_keyboard__DOT__PCRH__DOT__e));
        bufp->chgBit(oldp+34,(vlSelf->top_keyboard__DOT__PCRH__DOT__f));
        bufp->chgBit(oldp+35,(vlSelf->top_keyboard__DOT__PCRH__DOT__g));
        bufp->chgCData(oldp+36,((0xfU & vlSelf->top_keyboard__DOT__data)),4);
        bufp->chgBit(oldp+37,(vlSelf->top_keyboard__DOT__RH0__DOT__a));
        bufp->chgBit(oldp+38,(vlSelf->top_keyboard__DOT__RH0__DOT__bb));
        bufp->chgBit(oldp+39,(vlSelf->top_keyboard__DOT__RH0__DOT__c));
        bufp->chgBit(oldp+40,(vlSelf->top_keyboard__DOT__RH0__DOT__d));
        bufp->chgBit(oldp+41,(vlSelf->top_keyboard__DOT__RH0__DOT__e));
        bufp->chgBit(oldp+42,(vlSelf->top_keyboard__DOT__RH0__DOT__f));
        bufp->chgBit(oldp+43,(vlSelf->top_keyboard__DOT__RH0__DOT__g));
        bufp->chgCData(oldp+44,((0xfU & (IData)(vlSelf->top_keyboard__DOT__asciicode))),4);
        bufp->chgBit(oldp+45,(vlSelf->top_keyboard__DOT__RH1__DOT__a));
        bufp->chgBit(oldp+46,(vlSelf->top_keyboard__DOT__RH1__DOT__bb));
        bufp->chgBit(oldp+47,(vlSelf->top_keyboard__DOT__RH1__DOT__c));
        bufp->chgBit(oldp+48,(vlSelf->top_keyboard__DOT__RH1__DOT__d));
        bufp->chgBit(oldp+49,(vlSelf->top_keyboard__DOT__RH1__DOT__e));
        bufp->chgBit(oldp+50,(vlSelf->top_keyboard__DOT__RH1__DOT__f));
        bufp->chgBit(oldp+51,(vlSelf->top_keyboard__DOT__RH1__DOT__g));
        bufp->chgCData(oldp+52,((0xfU & ((IData)(vlSelf->top_keyboard__DOT__asciicode) 
                                         >> 8U))),4);
        bufp->chgBit(oldp+53,(vlSelf->top_keyboard__DOT__RH2__DOT__a));
        bufp->chgBit(oldp+54,(vlSelf->top_keyboard__DOT__RH2__DOT__bb));
        bufp->chgBit(oldp+55,(vlSelf->top_keyboard__DOT__RH2__DOT__c));
        bufp->chgBit(oldp+56,(vlSelf->top_keyboard__DOT__RH2__DOT__d));
        bufp->chgBit(oldp+57,(vlSelf->top_keyboard__DOT__RH2__DOT__e));
        bufp->chgBit(oldp+58,(vlSelf->top_keyboard__DOT__RH2__DOT__f));
        bufp->chgBit(oldp+59,(vlSelf->top_keyboard__DOT__RH2__DOT__g));
        bufp->chgSData(oldp+60,(vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+61,(vlSelf->top_keyboard__DOT__my_keyboard__DOT__count),4);
        bufp->chgCData(oldp+62,(vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+63,((IData)((4U == (6U & (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync))))));
        bufp->chgCData(oldp+64,((0xffU & vlSelf->top_keyboard__DOT__data)),8);
    }
    bufp->chgBit(oldp+65,(vlSelf->clk));
    bufp->chgBit(oldp+66,(vlSelf->rst));
    bufp->chgBit(oldp+67,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+68,(vlSelf->ps2_data));
    bufp->chgCData(oldp+69,(vlSelf->ledL2),7);
    bufp->chgCData(oldp+70,(vlSelf->ledR2),7);
    bufp->chgCData(oldp+71,(vlSelf->ledL1),7);
    bufp->chgCData(oldp+72,(vlSelf->ledR1),7);
    bufp->chgCData(oldp+73,(vlSelf->ledL0),7);
    bufp->chgCData(oldp+74,(vlSelf->ledR0),7);
    bufp->chgCData(oldp+75,(vlSelf->presscount_ledL),7);
    bufp->chgCData(oldp+76,(vlSelf->presscount_ledR),7);
    bufp->chgBit(oldp+77,((1U & (~ (IData)(vlSelf->rst)))));
}

void Vtop_keyboard___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_cleanup\n"); );
    // Init
    Vtop_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_keyboard___024root*>(voidSelf);
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
