// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_keyboard__Syms.h"


VL_ATTR_COLD void Vtop_keyboard___024root__trace_init_sub__TOP__0(Vtop_keyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBit(c+68,"ps2_clk", false,-1);
    tracep->declBit(c+69,"ps2_data", false,-1);
    tracep->declBus(c+70,"ledL2", false,-1, 6,0);
    tracep->declBus(c+71,"ledR2", false,-1, 6,0);
    tracep->declBus(c+72,"ledL1", false,-1, 6,0);
    tracep->declBus(c+73,"ledR1", false,-1, 6,0);
    tracep->declBus(c+74,"ledL0", false,-1, 6,0);
    tracep->declBus(c+75,"ledR0", false,-1, 6,0);
    tracep->declBus(c+76,"presscount_ledL", false,-1, 6,0);
    tracep->declBus(c+77,"presscount_ledR", false,-1, 6,0);
    tracep->pushNamePrefix("top_keyboard ");
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBit(c+68,"ps2_clk", false,-1);
    tracep->declBit(c+69,"ps2_data", false,-1);
    tracep->declBus(c+70,"ledL2", false,-1, 6,0);
    tracep->declBus(c+71,"ledR2", false,-1, 6,0);
    tracep->declBus(c+72,"ledL1", false,-1, 6,0);
    tracep->declBus(c+73,"ledR1", false,-1, 6,0);
    tracep->declBus(c+74,"ledL0", false,-1, 6,0);
    tracep->declBus(c+75,"ledR0", false,-1, 6,0);
    tracep->declBus(c+76,"presscount_ledL", false,-1, 6,0);
    tracep->declBus(c+77,"presscount_ledR", false,-1, 6,0);
    tracep->declBus(c+1,"data", false,-1, 31,0);
    tracep->declBus(c+2,"presscount", false,-1, 7,0);
    tracep->declBus(c+3,"asciicode", false,-1, 11,0);
    tracep->declBit(c+4,"en", false,-1);
    tracep->pushNamePrefix("LH0 ");
    tracep->declBus(c+5,"b", false,-1, 3,0);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBus(c+74,"h", false,-1, 6,0);
    tracep->declBit(c+6,"a", false,-1);
    tracep->declBit(c+7,"bb", false,-1);
    tracep->declBit(c+8,"c", false,-1);
    tracep->declBit(c+9,"d", false,-1);
    tracep->declBit(c+10,"e", false,-1);
    tracep->declBit(c+11,"f", false,-1);
    tracep->declBit(c+12,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LH1 ");
    tracep->declBus(c+13,"b", false,-1, 3,0);
    tracep->declBit(c+79,"en", false,-1);
    tracep->declBus(c+72,"h", false,-1, 6,0);
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+15,"bb", false,-1);
    tracep->declBit(c+16,"c", false,-1);
    tracep->declBit(c+17,"d", false,-1);
    tracep->declBit(c+18,"e", false,-1);
    tracep->declBit(c+19,"f", false,-1);
    tracep->declBit(c+20,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LH2 ");
    tracep->declBus(c+80,"b", false,-1, 3,0);
    tracep->declBit(c+81,"en", false,-1);
    tracep->declBus(c+70,"h", false,-1, 6,0);
    tracep->declBit(c+81,"a", false,-1);
    tracep->declBit(c+81,"bb", false,-1);
    tracep->declBit(c+81,"c", false,-1);
    tracep->declBit(c+81,"d", false,-1);
    tracep->declBit(c+81,"e", false,-1);
    tracep->declBit(c+81,"f", false,-1);
    tracep->declBit(c+81,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCLH ");
    tracep->declBus(c+21,"b", false,-1, 3,0);
    tracep->declBit(c+79,"en", false,-1);
    tracep->declBus(c+76,"h", false,-1, 6,0);
    tracep->declBit(c+22,"a", false,-1);
    tracep->declBit(c+23,"bb", false,-1);
    tracep->declBit(c+24,"c", false,-1);
    tracep->declBit(c+25,"d", false,-1);
    tracep->declBit(c+26,"e", false,-1);
    tracep->declBit(c+27,"f", false,-1);
    tracep->declBit(c+28,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCRH ");
    tracep->declBus(c+29,"b", false,-1, 3,0);
    tracep->declBit(c+79,"en", false,-1);
    tracep->declBus(c+77,"h", false,-1, 6,0);
    tracep->declBit(c+30,"a", false,-1);
    tracep->declBit(c+31,"bb", false,-1);
    tracep->declBit(c+32,"c", false,-1);
    tracep->declBit(c+33,"d", false,-1);
    tracep->declBit(c+34,"e", false,-1);
    tracep->declBit(c+35,"f", false,-1);
    tracep->declBit(c+36,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RH0 ");
    tracep->declBus(c+37,"b", false,-1, 3,0);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBus(c+75,"h", false,-1, 6,0);
    tracep->declBit(c+38,"a", false,-1);
    tracep->declBit(c+39,"bb", false,-1);
    tracep->declBit(c+40,"c", false,-1);
    tracep->declBit(c+41,"d", false,-1);
    tracep->declBit(c+42,"e", false,-1);
    tracep->declBit(c+43,"f", false,-1);
    tracep->declBit(c+44,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RH1 ");
    tracep->declBus(c+45,"b", false,-1, 3,0);
    tracep->declBit(c+79,"en", false,-1);
    tracep->declBus(c+73,"h", false,-1, 6,0);
    tracep->declBit(c+46,"a", false,-1);
    tracep->declBit(c+47,"bb", false,-1);
    tracep->declBit(c+48,"c", false,-1);
    tracep->declBit(c+49,"d", false,-1);
    tracep->declBit(c+50,"e", false,-1);
    tracep->declBit(c+51,"f", false,-1);
    tracep->declBit(c+52,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RH2 ");
    tracep->declBus(c+53,"b", false,-1, 3,0);
    tracep->declBit(c+79,"en", false,-1);
    tracep->declBus(c+71,"h", false,-1, 6,0);
    tracep->declBit(c+54,"a", false,-1);
    tracep->declBit(c+55,"bb", false,-1);
    tracep->declBit(c+56,"c", false,-1);
    tracep->declBit(c+57,"d", false,-1);
    tracep->declBit(c+58,"e", false,-1);
    tracep->declBit(c+59,"f", false,-1);
    tracep->declBit(c+60,"g", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+78,"resetn", false,-1);
    tracep->declBit(c+68,"ps2_clk", false,-1);
    tracep->declBit(c+69,"ps2_data", false,-1);
    tracep->declBus(c+1,"data", false,-1, 31,0);
    tracep->declBus(c+2,"presscount", false,-1, 7,0);
    tracep->declBus(c+61,"buffer", false,-1, 9,0);
    tracep->declBus(c+62,"count", false,-1, 3,0);
    tracep->declBus(c+63,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+64,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+65,"key", false,-1, 7,0);
    tracep->declBus(c+3,"value", false,-1, 11,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_keyboard___024root__trace_init_top(Vtop_keyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_init_top\n"); );
    // Body
    Vtop_keyboard___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_keyboard___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_keyboard___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_keyboard___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_keyboard___024root__trace_register(Vtop_keyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_keyboard___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_keyboard___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_keyboard___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_keyboard___024root__trace_full_sub_0(Vtop_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_keyboard___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_full_top_0\n"); );
    // Init
    Vtop_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_keyboard___024root*>(voidSelf);
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_keyboard___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_keyboard___024root__trace_full_sub_0(Vtop_keyboard___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top_keyboard__DOT__data),32);
    bufp->fullCData(oldp+2,(vlSelf->top_keyboard__DOT__presscount),8);
    bufp->fullSData(oldp+3,(vlSelf->top_keyboard__DOT__asciicode),12);
    bufp->fullBit(oldp+4,((0xf0U != (0xffU & (vlSelf->top_keyboard__DOT__data 
                                              >> 8U)))));
    bufp->fullCData(oldp+5,((0xfU & (vlSelf->top_keyboard__DOT__data 
                                     >> 4U))),4);
    bufp->fullBit(oldp+6,(vlSelf->top_keyboard__DOT__LH0__DOT__a));
    bufp->fullBit(oldp+7,(vlSelf->top_keyboard__DOT__LH0__DOT__bb));
    bufp->fullBit(oldp+8,(vlSelf->top_keyboard__DOT__LH0__DOT__c));
    bufp->fullBit(oldp+9,(vlSelf->top_keyboard__DOT__LH0__DOT__d));
    bufp->fullBit(oldp+10,(vlSelf->top_keyboard__DOT__LH0__DOT__e));
    bufp->fullBit(oldp+11,(vlSelf->top_keyboard__DOT__LH0__DOT__f));
    bufp->fullBit(oldp+12,(vlSelf->top_keyboard__DOT__LH0__DOT__g));
    bufp->fullCData(oldp+13,((0xfU & ((IData)(vlSelf->top_keyboard__DOT__asciicode) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+14,(vlSelf->top_keyboard__DOT__LH1__DOT__a));
    bufp->fullBit(oldp+15,(vlSelf->top_keyboard__DOT__LH1__DOT__bb));
    bufp->fullBit(oldp+16,(vlSelf->top_keyboard__DOT__LH1__DOT__c));
    bufp->fullBit(oldp+17,(vlSelf->top_keyboard__DOT__LH1__DOT__d));
    bufp->fullBit(oldp+18,(vlSelf->top_keyboard__DOT__LH1__DOT__e));
    bufp->fullBit(oldp+19,(vlSelf->top_keyboard__DOT__LH1__DOT__f));
    bufp->fullBit(oldp+20,(vlSelf->top_keyboard__DOT__LH1__DOT__g));
    bufp->fullCData(oldp+21,((0xfU & ((IData)(vlSelf->top_keyboard__DOT__presscount) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+22,(vlSelf->top_keyboard__DOT__PCLH__DOT__a));
    bufp->fullBit(oldp+23,(vlSelf->top_keyboard__DOT__PCLH__DOT__bb));
    bufp->fullBit(oldp+24,(vlSelf->top_keyboard__DOT__PCLH__DOT__c));
    bufp->fullBit(oldp+25,(vlSelf->top_keyboard__DOT__PCLH__DOT__d));
    bufp->fullBit(oldp+26,(vlSelf->top_keyboard__DOT__PCLH__DOT__e));
    bufp->fullBit(oldp+27,(vlSelf->top_keyboard__DOT__PCLH__DOT__f));
    bufp->fullBit(oldp+28,(vlSelf->top_keyboard__DOT__PCLH__DOT__g));
    bufp->fullCData(oldp+29,((0xfU & (IData)(vlSelf->top_keyboard__DOT__presscount))),4);
    bufp->fullBit(oldp+30,(vlSelf->top_keyboard__DOT__PCRH__DOT__a));
    bufp->fullBit(oldp+31,(vlSelf->top_keyboard__DOT__PCRH__DOT__bb));
    bufp->fullBit(oldp+32,(vlSelf->top_keyboard__DOT__PCRH__DOT__c));
    bufp->fullBit(oldp+33,(vlSelf->top_keyboard__DOT__PCRH__DOT__d));
    bufp->fullBit(oldp+34,(vlSelf->top_keyboard__DOT__PCRH__DOT__e));
    bufp->fullBit(oldp+35,(vlSelf->top_keyboard__DOT__PCRH__DOT__f));
    bufp->fullBit(oldp+36,(vlSelf->top_keyboard__DOT__PCRH__DOT__g));
    bufp->fullCData(oldp+37,((0xfU & vlSelf->top_keyboard__DOT__data)),4);
    bufp->fullBit(oldp+38,(vlSelf->top_keyboard__DOT__RH0__DOT__a));
    bufp->fullBit(oldp+39,(vlSelf->top_keyboard__DOT__RH0__DOT__bb));
    bufp->fullBit(oldp+40,(vlSelf->top_keyboard__DOT__RH0__DOT__c));
    bufp->fullBit(oldp+41,(vlSelf->top_keyboard__DOT__RH0__DOT__d));
    bufp->fullBit(oldp+42,(vlSelf->top_keyboard__DOT__RH0__DOT__e));
    bufp->fullBit(oldp+43,(vlSelf->top_keyboard__DOT__RH0__DOT__f));
    bufp->fullBit(oldp+44,(vlSelf->top_keyboard__DOT__RH0__DOT__g));
    bufp->fullCData(oldp+45,((0xfU & (IData)(vlSelf->top_keyboard__DOT__asciicode))),4);
    bufp->fullBit(oldp+46,(vlSelf->top_keyboard__DOT__RH1__DOT__a));
    bufp->fullBit(oldp+47,(vlSelf->top_keyboard__DOT__RH1__DOT__bb));
    bufp->fullBit(oldp+48,(vlSelf->top_keyboard__DOT__RH1__DOT__c));
    bufp->fullBit(oldp+49,(vlSelf->top_keyboard__DOT__RH1__DOT__d));
    bufp->fullBit(oldp+50,(vlSelf->top_keyboard__DOT__RH1__DOT__e));
    bufp->fullBit(oldp+51,(vlSelf->top_keyboard__DOT__RH1__DOT__f));
    bufp->fullBit(oldp+52,(vlSelf->top_keyboard__DOT__RH1__DOT__g));
    bufp->fullCData(oldp+53,((0xfU & ((IData)(vlSelf->top_keyboard__DOT__asciicode) 
                                      >> 8U))),4);
    bufp->fullBit(oldp+54,(vlSelf->top_keyboard__DOT__RH2__DOT__a));
    bufp->fullBit(oldp+55,(vlSelf->top_keyboard__DOT__RH2__DOT__bb));
    bufp->fullBit(oldp+56,(vlSelf->top_keyboard__DOT__RH2__DOT__c));
    bufp->fullBit(oldp+57,(vlSelf->top_keyboard__DOT__RH2__DOT__d));
    bufp->fullBit(oldp+58,(vlSelf->top_keyboard__DOT__RH2__DOT__e));
    bufp->fullBit(oldp+59,(vlSelf->top_keyboard__DOT__RH2__DOT__f));
    bufp->fullBit(oldp+60,(vlSelf->top_keyboard__DOT__RH2__DOT__g));
    bufp->fullSData(oldp+61,(vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+62,(vlSelf->top_keyboard__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+63,(vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+64,((IData)((4U == (6U & (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+65,((0xffU & vlSelf->top_keyboard__DOT__data)),8);
    bufp->fullBit(oldp+66,(vlSelf->clk));
    bufp->fullBit(oldp+67,(vlSelf->rst));
    bufp->fullBit(oldp+68,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+69,(vlSelf->ps2_data));
    bufp->fullCData(oldp+70,(vlSelf->ledL2),7);
    bufp->fullCData(oldp+71,(vlSelf->ledR2),7);
    bufp->fullCData(oldp+72,(vlSelf->ledL1),7);
    bufp->fullCData(oldp+73,(vlSelf->ledR1),7);
    bufp->fullCData(oldp+74,(vlSelf->ledL0),7);
    bufp->fullCData(oldp+75,(vlSelf->ledR0),7);
    bufp->fullCData(oldp+76,(vlSelf->presscount_ledL),7);
    bufp->fullCData(oldp+77,(vlSelf->presscount_ledR),7);
    bufp->fullBit(oldp+78,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+79,(1U));
    bufp->fullCData(oldp+80,(0U),4);
    bufp->fullBit(oldp+81,(0U));
}
