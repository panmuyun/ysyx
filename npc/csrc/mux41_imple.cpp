#include <nvboard.h>
#include <Vmux41.h>

static TOP_NAME top; //实例化模块

void nvboard_bind_all_pins(TOP_NAME* top); //函数声明

static void single_cycle() {
    // int a = rand() &1;
    // int b = rand() &1;
    // top.a=a;
    // top.b=b;
    top.eval();
    /* //设置了clk时才用到
    dut.clk = 0; dut.eval(); 
    dut.clk = 1; dut.eval();
    */
}

/*
static void reset(int n) { //设置了clk时才用到
    dut.rst = 1; 
    while (n -- > 0) single_cycle();
    dut.rst = 0;
}
*/

int main() {
    nvboard_bind_all_pins(&top);
    nvboard_init();

    //reset(10); //复位10个周期
    //int count=0;
    while(1) {
        nvboard_update();
        single_cycle();

        // if(count==0)
        //     single_cycle();
        // if(count>100000000) //设置频率
        //     count=0;
        // else 
        //     count++;
    }
    return 0;
}