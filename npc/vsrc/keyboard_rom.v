module keyboard_rom(
    input [7:0] key,
    output reg [11:0] value
);
    always @(*) begin
        case (key)
            8'h45: value=12'h048;
            8'h16: value=12'h049; 
            8'h1e: value=12'h050;
            8'h26: value=12'h051;
            8'h25: value=12'h052;
            8'h2e: value=12'h053;
            8'h36: value=12'h054;
            8'h3d: value=12'h055;
            8'h3e: value=12'h056;
            8'h46: value=12'h057;
            8'h1c: value=12'h097;
            8'h32: value=12'h098;
            8'h21: value=12'h099;
            8'h23: value=12'h100;
            8'h24: value=12'h101;
            8'h2b: value=12'h102;
            8'h34: value=12'h103;
            8'h33: value=12'h104;
            8'h43: value=12'h105;
            8'h3b: value=12'h106;
            8'h42: value=12'h107;
            8'h4b: value=12'h108;
            8'h3a: value=12'h109;
            8'h31: value=12'h110;
            8'h44: value=12'h111;
            8'h4d: value=12'h112;
            8'h15: value=12'h113;
            8'h2d: value=12'h114;
            8'h1b: value=12'h115;
            8'h2c: value=12'h116;
            8'h3c: value=12'h117;
            8'h2a: value=12'h118;
            8'h1d: value=12'h119;
            8'h22: value=12'h120;
            8'h35: value=12'h121;
            8'h1a: value=12'h122;
            default: value=12'h000;
        endcase
    end
endmodule //keyboard_rom

