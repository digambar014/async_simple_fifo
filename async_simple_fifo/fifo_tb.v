module fifo_tb; 
 
    reg wr_clk = 0, rd_clk = 0; 
    reg wr_rst = 1, rd_rst = 1; 
    reg wr_en = 0, rd_en = 0; 
    reg [7:0] wr_data = 8'd0; 
 
    wire [7:0] rd_data; 
    wire wr_full, rd_empty; 
 
    // Clock generation 
    always #5 wr_clk <= ~wr_clk;   // 100 MHz 
    always #7 rd_clk <= ~rd_clk;   // ~71.4 MHz 
 
    // DUT 
    fifo uut ( 
        .wr_clk  (wr_clk), 
        .rd_clk  (rd_clk), 
        .wr_rst  (wr_rst), 
        .rd_rst  (rd_rst), 
        .wr_en   (wr_en), 
        .rd_en   (rd_en), 
        .wr_data (wr_data), 
        .rd_data (rd_data), 
        .wr_full (wr_full), 
        .rd_empty(rd_empty) 
    ); 
 
    initial begin 
        $dumpfile("dump.vcd"); 
        $dumpvars(0, fifo_tb); 
 
        // ------------------------- 
        // Reset 
        // ------------------------- 
        wr_rst = 1; 
        rd_rst = 1; 
 
        #20; 
 
        wr_rst = 0; 
        rd_rst = 0; 
 
        // ------------------------- 
        // Write 4 values 
        // ------------------------- 
        repeat (4) begin 
            @(negedge wr_clk); 
 
            if (!wr_full) begin 
                wr_en   = 1; 
                wr_data = wr_data + 1; 
            end 
 
            @(posedge wr_clk); 
 
            wr_en = 0; 
        end 
 
        // Wait before reading 
        #30; 
 
        // ------------------------- 
        // Read 4 values 
        // ------------------------- 
        repeat (4) begin 
            @(negedge rd_clk); 
 
            if (!rd_empty) 
                rd_en = 1; 
 
            @(posedge rd_clk); 
 
            #1; 
 
            if (rd_en) begin 
                $display( 
                    "Time = %0t ns | Read Data = %0h (Decimal: %0d)", 
                    $time, 
                    rd_data, 
                    rd_data 
                ); 
            end 
 
            rd_en = 0; 
        end 
 
        // ------------------------- 
        // Finish simulation 
        // ------------------------- 
        #50; 
 
        $finish; 
    end 
 
endmodule
