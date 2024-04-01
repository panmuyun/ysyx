module ALU(
    input [2:0] op, //功能选择
    //input reg cin,
    input [3:0] a,
    input [3:0] b,
    output reg [3:0] out,
    output reg overflow,
    output reg carryflag,
    output reg zeroflag
);
    
    always @(*) begin
        begin
            out=0;
            overflow=0;
            carryflag=0;
            zeroflag=0;
        end
        case (op)
            3'b000: begin   //加法
                {carryflag, out} = a + b;
                overflow = (a[3]==b[3])&&(out[3]!=a[3]);
                zeroflag = (out[2:0]==0)? 1:0;
            end 
            3'b001: begin   //减法
                {carryflag, out} = a + ~{b[3],b} + 5'b00001;
                overflow = (a[3]!=b[3])&&(out[3]!=a[3]);
                zeroflag = (out[2:0]==0)? 1:0;
            end
            3'b010: begin   //取反
                out = ~a;
            end
            3'b011: begin   //与
                out = a & b;
            end
            3'b100: begin   //或
                out = a | b;
            end
            3'b101: begin   //异或
                out = a ^ b;
            end
            3'b110: begin   //比较大小
                if(a[3]==b[3]) begin
                    out = (a[2:0] < b[2:0])? 1:0;
                end
                else if(a[3]==0)
                    out = 0;
                else if(a[3]==1)
                    out = 1;
            end
            3'b111: begin   //判断相等
                out = (a==b)? 1:0;
            end
            //default: 
        endcase
    end
endmodule
