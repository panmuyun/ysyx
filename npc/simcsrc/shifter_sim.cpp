#include "Vshifter.h" 
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vshifter* top;

void sim_init(int argc, char** argv){
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    top = new Vshifter{contextp};
    tfp= new VerilatedVcdC;
    contextp->traceEverOn(true); //打开追踪
    top->trace(tfp,0);
    tfp->open("wave_shifter.vcd"); //保存位置
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
int main(int argc, char** argv) {
    sim_init(argc, argv);
    int cycle=0;
    int clk=0;
    while (!contextp->gotFinish()) {
        if(cycle==30)   //设定最长时钟周期
            break;
        top->clk=1-clk;
        //int a = rand() & ((1<<位数) -1);
        //int b = rand() & ((1<<位数) -1);
        //top->a=a;
        //top->b=b;
        step_and_dump_wave();
        //printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        //assert(top->f == (a ^ b));
        cycle++;
    }
    sim_exit();
    return 0;
}