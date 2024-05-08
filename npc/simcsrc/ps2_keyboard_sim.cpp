#include "Vps2_keyboard.h" 
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <bitset>
#include <vector>
#include <algorithm>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vps2_keyboard* top;

void sim_init(int argc, char** argv){
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    top = new Vps2_keyboard{contextp};
    tfp= new VerilatedVcdC;
    contextp->traceEverOn(true); //打开追踪
    top->trace(tfp,0);
    tfp->open("wave_ps2_keyboard.vcd"); //保存位置
}

void step_and_dump_wave(){  
    top->eval();  
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //仿真时间推进
}

void sim_exit(){
    delete top;
    tfp->close();
    delete contextp;
}

int kbd_clk_period = 60;

void kbd_sendcode(std::string code, std::string *send_buffer){
    int i;
    //bitset<1> startbit(0);
    std::bitset<8> databits(code);
    std::bitset<1> oddparitybit=databits.test(0)?1:0;
    for(int k=1;k<8;k++)
        oddparitybit = oddparitybit^std::bitset<1>(databits.test(k)?1:0);
    //bitset<1> stopbit(1);
    reverse(code.begin(),code.end());
    *send_buffer = "0"+ code + oddparitybit.to_string()+"1";
    
}

int main(int argc, char** argv) {
    sim_init(argc, argv);
    int cycle=0;
    std::string send_buffer="";
    int i=0;
    int v=0;
    std::vector<std::string> vt={"00011100", "11110000", "00011100", "00011011", "11110000", "00011011"};


    top->clk = 0;
    top->resetn = 0;
    top->ps2_clk = 1;
    top->eval();
    top->resetn = 1;
    // tfp->dump(contextp->time()); //dump wave

    while (!contextp->gotFinish()) {
        if(cycle==150)   //设定最长时钟周期
            break;
            
        contextp->timeInc(5);
        top->clk = !top->clk;
        top->eval();
        tfp->dump(contextp->time()); //dump wave

        if(i==11)
            i=0;
        
        if(i==0 && v<6)
            kbd_sendcode(vt[v++], &send_buffer);
        top->ps2_data = send_buffer[i]=='1'? 1 : 0;
        top->eval();
        // tfp->dump(contextp->time()); //dump wave

        for(int t=0;t<3;t++){
            contextp->timeInc(5);
            top->clk = !top->clk;
            top->eval();
            tfp->dump(contextp->time()); //dump wave
        }
        contextp->timeInc(5);
        top->clk = !top->clk;
        top->ps2_clk = 0;
        top->eval();
        tfp->dump(contextp->time()); //dump wave
        
        for(int t=0;t<3;t++){
            contextp->timeInc(5);
            top->clk = !top->clk;
            top->eval();
            tfp->dump(contextp->time()); //dump wave
        }
        contextp->timeInc(5);
        top->clk = !top->clk;
        top->ps2_clk = 1;
        top->eval();
        tfp->dump(contextp->time()); //dump wave
        // contextp->timeInc(20);
        // top->ps2_clk = 1;
        // top->eval();
        // tfp->dump(contextp->time()); //dump wave

        i++;
        // kbd_sendcode("11110000");
        // kbd_sendcode("00011100");
        // kbd_sendcode("00011011");
        // kbd_sendcode("11110000");
        // kbd_sendcode("00011011");
        
        // top->eval();
        // tfp->dump(contextp->time()); //dump wave
        printf("ps2_data = %d, data = %d, presscount = %d\n", top->ps2_data, top->data, top->presscount);
        // printf("clk = %d, resetn = %d, ps2_clk = %d, ps2_data = %d\n", top->clk, top->resetn, top->ps2_clk, top->ps2_data);
        //assert(top->f == (a ^ b));
        cycle++;
    }
    sim_exit();
    return 0;
}