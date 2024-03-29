module prio_encoder83(
    input [7:0] x,
    input en,
    output reg [2:0] encode_x,
    output reg flag,
    output [6:0] led
);
    
    always @(*) begin
        flag=0;
        if(en) begin
            encode_x=0;
            flag=1;
            casex(x)
                8'b1xxx_xxxx: encode_x=3'd7;
                8'b01xx_xxxx: encode_x=3'd6;
                8'b001x_xxxx: encode_x=3'd5;
                8'b0001_xxxx: encode_x=3'd4;
                8'b0000_1xxx: encode_x=3'd3;
                8'b0000_01xx: encode_x=3'd2;
                8'b0000_001x: encode_x=3'd1;
                8'b0000_0001: encode_x=3'd0;
                default: begin encode_x=3'd0;flag=0; end
            endcase
        end
        if(en==0) 
            encode_x=0;
    end

    bcd7seg u_bcd7seg({1'b0,encode_x}, led);
    
endmodule
