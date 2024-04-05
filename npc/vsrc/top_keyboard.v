module top_keyboard(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output [6:0] ledL2,
    output [6:0] ledR2,
    output [6:0] ledL1,
    output [6:0] ledR1,
    output [6:0] ledL0,
    output [6:0] ledR0,
    output [6:0] presscount_ledL,
    output [6:0] presscount_ledR
);
    wire [31:0] data;
    wire [7:0] presscount;
    ps2_keyboard my_keyboard(
        .clk(clk),
        .resetn(~rst),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .data(data),
        .presscount(presscount)
    );
    wire [11:0] asciicode;
    keyboard_rom rom(.key(data[7:0]), .value(asciicode));

    bcd7seg PCLH(.b( presscount[7:4] ), .en(1) , .h( presscount_ledL  )); 
    bcd7seg PCRH(.b( presscount[3:0]  ), .en(1) , .h( presscount_ledR  ));

    bcd7seg LH2(.b( 4'b0000 ), .en(0) , .h( ledL2  )); 
    bcd7seg RH2(.b( asciicode[11:8]  ), .en(1) , .h( ledR2  ));
    bcd7seg LH1(.b( asciicode[7:4] ), .en(1) , .h( ledL1 )); 
    bcd7seg RH1(.b( asciicode[3:0]  ), .en(1) , .h( ledR1  ));
    wire en;
    assign en = (data[15:8]==8'hf0)? 0:1;
    bcd7seg LH0(.b( data[7:4] ), .en(en) , .h( ledL0  )); 
    bcd7seg RH0(.b( data[3:0]  ), .en(en),  .h( ledR0  ));

endmodule //top_keyboard
