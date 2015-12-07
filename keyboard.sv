//-------------------------------------------------------------------------
//      PS2 Keyboard interface                                           --
//      Sai Ma                                                           --
//      11-13-2014                                                       --
//                                                                       --
//      For use with ECE 385 Final Project                     --
//      ECE Department @ UIUC                                            --
//-------------------------------------------------------------------------
module keyboard(input logic Clk, psClk, psData, reset,
					 output logic [7:0] keyCode,
					 output logic press);
					
					
	logic Q1, Q2, en, enable, shiftoutA, shiftoutB, Press;
	logic [4:0] Count; 
	logic [10:0] DO_A, DO_B;
	logic [7:0] Data;
	logic [9:0] counter;
	
	//Counter to sync ps2 clock and system clock
	always@(posedge Clk or posedge reset)
	begin
		if(reset)
		begin
			counter = 10'b0000000000;
			enable = 1'b1;
		end
		else if (counter == 10'b0111111111)
		begin
			counter = 10'b0000000000;
			enable = 1'b1;
		end
		else 
		begin
			counter += 1'b1;
			enable = 1'b0;
		end
	end
	
	//edge detector of PS2 clock
	always@(posedge Clk)
	begin
		if(enable==1)
		begin
			if((reset)|| (Count==5'b01011))    
				Count <= 5'b00000;
		else if(Q1==0 && Q2==1)
			begin  			
				Count += 1'b1;
				en = 1'b1;
			end
		end
	end     

	always@(posedge Clk)
	begin
		if( Count == 5'b01011)
		begin
			//if the user keeps pressing the key
			if(DO_A[9:2] == DO_B[9:2])	
			begin
				Data =DO_A[9:2];
				Press = 1'b1;
			end
			//if the current key pressed is released  
			else if(DO_B[9:2]== 8'b00001111 || DO_A[9:2]== 8'b00001111)  
				Press = 1'b0;
			else if(DO_B[9:2]== 8'b11110000|| DO_A[9:2]== 8'b11110000)  
				Press = 1'b0;
			//another key is pressed
			else if(DO_A[9:2] != DO_B[9:2])   
			begin
				Data = DO_B[9:2];
				Press = 1'b1;
			end
		end
	end
	
	Dreg Dreg_instance1 ( .*,
								 .Load(enable),
								 .Reset(reset), 
								 .D(psClk),
								 .Q(Q1) );
   Dreg Dreg_instance2 ( .*,
								 .Load(enable),
								 .Reset(reset), 
								 .D(Q1),
								 .Q(Q2) );
	
	reg_11 reg_B(
					.Clk(psClk),
					.Reset(reset), 
					.Shift_In(psData), 
					.Load(1'b0), 
					.Shift_En(en),
					.D(11'd0),
					.Shift_Out(shiftoutB),
					.Data_Out(DO_B)
					);
	
	reg_11 reg_A(
					.Clk(psClk),
					.Reset(reset), 
					.Shift_In(shiftoutB), 
					.Load(1'b0), 
					.Shift_En(en),
					.D(11'd0),
					.Shift_Out(shiftoutA),
					.Data_Out(DO_A)
					);
		
	assign keyCode=Data;
	assign press=Press;
	
endmodule 