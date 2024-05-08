
module ps2_keyboard(
    input clk,
    input resetn,
    input ps2_clk,  //传输时钟的信号线，用于指示数据线上的比特位在何时有效
    input ps2_data, //传输数据的信号线 ; 两根信号线都为高电平（空闲）时，键盘才可以给主机发送信号
    output reg [31:0] data,
    output reg [7:0] presscount
);
    /*
    键盘以每帧11位的格式串行传送数据给主机：
        开始位(0)、8位数据位(底位在前：01234567)、奇偶校验位、停止位(1)
    每位都在时钟的下降沿有效（因为下降沿正好在数据位的中间，可以让数据位从开始变化到接收采样时能有一段信号建立时间）
    */
    
    reg [9:0] buffer;        // 保存每一帧的前10位数据位
    reg [3:0] count;  // 保存已接收到多少位数据位
    reg [2:0] ps2_clk_sync; 

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};   //记录ps2时钟信号的历史信息
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; //[上][下][]；发现下降沿时，sampling置1

    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;data<=0;presscount<=0;
        end
        else begin
            if (sampling) begin //位有效
              if (count == 4'd10) begin //已经接收了10个位
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    data <= data<<8;
                    data[7:0] <= buffer[8:1];   //把当前接收到的8个数据位保存到data的低8位
                    if(data[7:0]==8'hf0 && data[23:16]!=data[15:8]) 
                        presscount <= presscount+1;
                    // $display("receive %x", buffer[8:1]);
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end

endmodule

/*
状态集合S = {<时序逻辑元件的值>}
激励事件E = {组合逻辑}
状态转移规则next: SxE->S
初始状态S0 = <复位时的时序逻辑元件的值>
*/

