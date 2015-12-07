//Flappy_Bird.sv
//ECE 385 Final Project, Fall 2015
//Zefan Xu
//zefanxu2@illinois.edu
//top module

module  Flappy_Bird 	   (input         CLOCK_50,
                       		input    KEY0, KEY1, //bit 0 is set up as Reset
							output [6:0]  HEX0, HEX1,// HEX2, HEX3, HEX4, HEX5, HEX6, HEX7,

							input PS2_KBCLK, PS2_KBDAT,
                       		output [7:0]  VGA_R,					//VGA Red
							              VGA_G,					//VGA Green
										  VGA_B,					//VGA Blue
							output        VGA_CLK,				//VGA Clock
							              VGA_SYNC_N,			//VGA Sync signal
										  VGA_BLANK_N,			//VGA Blank signal
										  VGA_VS,					//VGA virtical sync signal	
										  VGA_HS,					//VGA horizontal sync signal
   						    // SDRAM Interface for Nios II Software
							output [12:0] DRAM_ADDR,				// SDRAM Address 13 Bits
							inout [31:0]  DRAM_DQ,				// SDRAM Data 32 Bits
							output [1:0]  DRAM_BA,				// SDRAM Bank Address 2 Bits
							output [3:0]  DRAM_DQM,				// SDRAM Data Mast 4 Bits
							output			 DRAM_RAS_N,			// SDRAM Row Address Strobe
							output			 DRAM_CAS_N,			// SDRAM Column Address Strobe
							output			 DRAM_CKE,				// SDRAM Clock Enable
							output			 DRAM_WE_N,				// SDRAM Write Enable
							output			 DRAM_CS_N,				// SDRAM Chip Select
							output			 DRAM_CLK				// SDRAM Clock
							);
    
    logic Reset_h, vssig, Clk;
    logic [9:0] drawxsig, drawysig, ballxsig, ballysig, ballsizesig;
	 logic [15:0] keycode;
    
	assign Clk = CLOCK_50;
    assign {Reset_h}=~ (KEY0);  // The push buttons are active low
	
	 
	 wire [1:0] hpi_addr;
	 wire [15:0] hpi_data_in, hpi_data_out;
	 wire hpi_r, hpi_w,hpi_cs;
	 
	 wire [10:0] drawx, drawy, birdx, birdy, pipex, pipe1, pipe2, pipe3, pipe4, pipe5, TextX, TextY, scorex2, scorey2, birdy2;
	 
	 wire press;
	 wire w;
	 wire [15:0] status, first, second, third, scorex, scorey, first2, second2, third2;
	 
	 
	 flappy_bird_control nios_system(
										 .clk_clk(Clk),         
										 .reset_reset_n(KEY0),   
										 .sdram_wire_addr(DRAM_ADDR), 
										 .sdram_wire_ba(DRAM_BA),   
										 .sdram_wire_cas_n(DRAM_CAS_N),
										 .sdram_wire_cke(DRAM_CKE),  
										 .sdram_wire_cs_n(DRAM_CS_N), 
										 .sdram_wire_dq(DRAM_DQ),   
										 .sdram_wire_dqm(DRAM_DQM),  
										 .sdram_wire_ras_n(DRAM_RAS_N),
										 .sdram_wire_we_n(DRAM_WE_N), 
										 .sdram_clk_clk(DRAM_CLK),
										 .text_on_export(status),
										 .bird_x_export_export (birdx), // bird_x_export.export
										 .bird_y_export_export (birdy),
										 .pipe3_export_export  (pipe3),  //  pipe3_export.export
										 .pipe2_export_export  (pipe2),  //  pipe2_export.export
										 .pipe1_export_export  (pipe1),  //  pipe1_export.export
										 .pipe4_export_export  (pipe4),
										 .pipe5_export_export  (pipe5),
										 .pipe_x_export_export (pipex),
										 .textx_export_export   (TextX),
										 .texty_export_export   (TextY),
										 .press_export_export   (press),
										 .keycode_export_export (keycode),
										 .first_export_export   (first), 
									   	 .second_export_export  (second), 
										 .third_export_export   (third),
										 .scorex_export_export  (scorex),
										 .scorey_export_export  (scorey),
										 .scorex2_export_export (scorex2), // scorex2_export.export
										 .scorey2_export_export (scorey2), // scorey2_export.export
										 .bird_y2_export_export (birdy2),
										 .first2_export_export  (first2),  //  first2_export.export
							 			 .second2_export_export (second2), // second2_export.export
										 .third2_export_export  (third2));

	//Fill in the connections for the rest of the modules 
    vga_controller vgasync_instance(.Clk(CLOCK_50),
												.Reset(Reset_h),
												.hs(VGA_HS),
												.vs(VGA_VS),
												.pixel_clk(VGA_CLK),
												.blank(VGA_BLANK_N),
												.sync(VGA_SYNC_N),
												.DrawX(drawx),
												.DrawY(drawy)
												);
   
/*    ball ball_instance(.Reset(Reset_h),
							  .frame_clk(VGA_VS),
							  .BallX(ballx),
							  .BallY(bally));*/
   
    color_mapper color_instance(.BirdPositionX(birdx),
										  .BirdPositionY(birdy),
										  .DrawX(drawx),
										  .DrawY(drawy),
										  .PipePositionX(pipex),
										  .PipePositionY1(pipe1),
										  .PipePositionY2(pipe2),
										  .PipePositionY3(pipe3),
										  .PipePositionY4(pipe4),
										  .PipePositionY5(pipe5),
										  .status(status),
										  .TextX(TextX),
										  .TextY(TextY),
										  .first(first),
										  .second(second),
										  .third(third),
										  .DigitPositionX(scorex),
										  .DigitPositionY(scorey),
										  .DigitPositionX2(scorex2),
										  .DigitPositionY2(scorey2),
										  .BirdPositionY2(birdy2),
										  .first2(first2),
										  .second2(second2),
										  .third2(third2),
										  .Red(VGA_R),
										  .Green(VGA_G),
										  .Blue(VGA_B));
										  
	 HexDriver hex_inst_0 (keycode[3:0], HEX0);
	 HexDriver hex_inst_1 (keycode[7:4], HEX1);

	 keyboard PS2Keyboard(.Clk(CLOCK_50), 
	 					  .psClk(PS2_KBCLK),
	 					  .psData(PS2_KBDAT),
	 					  .reset(Reset_h),
	 					  .keyCode(keycode),
	 					  .press(press));
    

endmodule
