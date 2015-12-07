
module flappy_bird_control (
	bird_x_export_export,
	bird_y_export_export,
	clk_clk,
	first_export_export,
	keycode_export_export,
	pipe1_export_export,
	pipe2_export_export,
	pipe3_export_export,
	pipe4_export_export,
	pipe5_export_export,
	pipe_x_export_export,
	press_export_export,
	reset_reset_n,
	scorex_export_export,
	scorey_export_export,
	sdram_clk_clk,
	sdram_wire_addr,
	sdram_wire_ba,
	sdram_wire_cas_n,
	sdram_wire_cke,
	sdram_wire_cs_n,
	sdram_wire_dq,
	sdram_wire_dqm,
	sdram_wire_ras_n,
	sdram_wire_we_n,
	second_export_export,
	text_on_export,
	textx_export_export,
	texty_export_export,
	third_export_export,
	scorex2_export_export,
	scorey2_export_export,
	bird_y2_export_export,
	first2_export_export,
	second2_export_export,
	third2_export_export);	

	output	[15:0]	bird_x_export_export;
	output	[15:0]	bird_y_export_export;
	input		clk_clk;
	output	[15:0]	first_export_export;
	input	[7:0]	keycode_export_export;
	output	[15:0]	pipe1_export_export;
	output	[15:0]	pipe2_export_export;
	output	[15:0]	pipe3_export_export;
	output	[15:0]	pipe4_export_export;
	output	[15:0]	pipe5_export_export;
	output	[15:0]	pipe_x_export_export;
	input		press_export_export;
	input		reset_reset_n;
	output	[15:0]	scorex_export_export;
	output	[15:0]	scorey_export_export;
	output		sdram_clk_clk;
	output	[12:0]	sdram_wire_addr;
	output	[1:0]	sdram_wire_ba;
	output		sdram_wire_cas_n;
	output		sdram_wire_cke;
	output		sdram_wire_cs_n;
	inout	[15:0]	sdram_wire_dq;
	output	[1:0]	sdram_wire_dqm;
	output		sdram_wire_ras_n;
	output		sdram_wire_we_n;
	output	[15:0]	second_export_export;
	output	[15:0]	text_on_export;
	output	[15:0]	textx_export_export;
	output	[15:0]	texty_export_export;
	output	[15:0]	third_export_export;
	output	[15:0]	scorex2_export_export;
	output	[15:0]	scorey2_export_export;
	output	[15:0]	bird_y2_export_export;
	output	[15:0]	first2_export_export;
	output	[15:0]	second2_export_export;
	output	[15:0]	third2_export_export;
endmodule
