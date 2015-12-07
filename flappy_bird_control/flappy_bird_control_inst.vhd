	component flappy_bird_control is
		port (
			bird_x_export_export  : out   std_logic_vector(15 downto 0);                    -- export
			bird_y_export_export  : out   std_logic_vector(15 downto 0);                    -- export
			clk_clk               : in    std_logic                     := 'X';             -- clk
			first_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			keycode_export_export : in    std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			pipe1_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			pipe2_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			pipe3_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			pipe4_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			pipe5_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			pipe_x_export_export  : out   std_logic_vector(15 downto 0);                    -- export
			press_export_export   : in    std_logic                     := 'X';             -- export
			reset_reset_n         : in    std_logic                     := 'X';             -- reset_n
			scorex_export_export  : out   std_logic_vector(15 downto 0);                    -- export
			scorey_export_export  : out   std_logic_vector(15 downto 0);                    -- export
			sdram_clk_clk         : out   std_logic;                                        -- clk
			sdram_wire_addr       : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_wire_ba         : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_wire_cas_n      : out   std_logic;                                        -- cas_n
			sdram_wire_cke        : out   std_logic;                                        -- cke
			sdram_wire_cs_n       : out   std_logic;                                        -- cs_n
			sdram_wire_dq         : inout std_logic_vector(15 downto 0) := (others => 'X'); -- dq
			sdram_wire_dqm        : out   std_logic_vector(1 downto 0);                     -- dqm
			sdram_wire_ras_n      : out   std_logic;                                        -- ras_n
			sdram_wire_we_n       : out   std_logic;                                        -- we_n
			second_export_export  : out   std_logic_vector(15 downto 0);                    -- export
			text_on_export        : out   std_logic_vector(15 downto 0);                    -- export
			textx_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			texty_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			third_export_export   : out   std_logic_vector(15 downto 0);                    -- export
			scorex2_export_export : out   std_logic_vector(15 downto 0);                    -- export
			scorey2_export_export : out   std_logic_vector(15 downto 0);                    -- export
			bird_y2_export_export : out   std_logic_vector(15 downto 0);                    -- export
			first2_export_export  : out   std_logic_vector(15 downto 0);                    -- export
			second2_export_export : out   std_logic_vector(15 downto 0);                    -- export
			third2_export_export  : out   std_logic_vector(15 downto 0)                     -- export
		);
	end component flappy_bird_control;

	u0 : component flappy_bird_control
		port map (
			bird_x_export_export  => CONNECTED_TO_bird_x_export_export,  --  bird_x_export.export
			bird_y_export_export  => CONNECTED_TO_bird_y_export_export,  --  bird_y_export.export
			clk_clk               => CONNECTED_TO_clk_clk,               --            clk.clk
			first_export_export   => CONNECTED_TO_first_export_export,   --   first_export.export
			keycode_export_export => CONNECTED_TO_keycode_export_export, -- keycode_export.export
			pipe1_export_export   => CONNECTED_TO_pipe1_export_export,   --   pipe1_export.export
			pipe2_export_export   => CONNECTED_TO_pipe2_export_export,   --   pipe2_export.export
			pipe3_export_export   => CONNECTED_TO_pipe3_export_export,   --   pipe3_export.export
			pipe4_export_export   => CONNECTED_TO_pipe4_export_export,   --   pipe4_export.export
			pipe5_export_export   => CONNECTED_TO_pipe5_export_export,   --   pipe5_export.export
			pipe_x_export_export  => CONNECTED_TO_pipe_x_export_export,  --  pipe_x_export.export
			press_export_export   => CONNECTED_TO_press_export_export,   --   press_export.export
			reset_reset_n         => CONNECTED_TO_reset_reset_n,         --          reset.reset_n
			scorex_export_export  => CONNECTED_TO_scorex_export_export,  --  scorex_export.export
			scorey_export_export  => CONNECTED_TO_scorey_export_export,  --  scorey_export.export
			sdram_clk_clk         => CONNECTED_TO_sdram_clk_clk,         --      sdram_clk.clk
			sdram_wire_addr       => CONNECTED_TO_sdram_wire_addr,       --     sdram_wire.addr
			sdram_wire_ba         => CONNECTED_TO_sdram_wire_ba,         --               .ba
			sdram_wire_cas_n      => CONNECTED_TO_sdram_wire_cas_n,      --               .cas_n
			sdram_wire_cke        => CONNECTED_TO_sdram_wire_cke,        --               .cke
			sdram_wire_cs_n       => CONNECTED_TO_sdram_wire_cs_n,       --               .cs_n
			sdram_wire_dq         => CONNECTED_TO_sdram_wire_dq,         --               .dq
			sdram_wire_dqm        => CONNECTED_TO_sdram_wire_dqm,        --               .dqm
			sdram_wire_ras_n      => CONNECTED_TO_sdram_wire_ras_n,      --               .ras_n
			sdram_wire_we_n       => CONNECTED_TO_sdram_wire_we_n,       --               .we_n
			second_export_export  => CONNECTED_TO_second_export_export,  --  second_export.export
			text_on_export        => CONNECTED_TO_text_on_export,        --        text_on.export
			textx_export_export   => CONNECTED_TO_textx_export_export,   --   textx_export.export
			texty_export_export   => CONNECTED_TO_texty_export_export,   --   texty_export.export
			third_export_export   => CONNECTED_TO_third_export_export,   --   third_export.export
			scorex2_export_export => CONNECTED_TO_scorex2_export_export, -- scorex2_export.export
			scorey2_export_export => CONNECTED_TO_scorey2_export_export, -- scorey2_export.export
			bird_y2_export_export => CONNECTED_TO_bird_y2_export_export, -- bird_y2_export.export
			first2_export_export  => CONNECTED_TO_first2_export_export,  --  first2_export.export
			second2_export_export => CONNECTED_TO_second2_export_export, -- second2_export.export
			third2_export_export  => CONNECTED_TO_third2_export_export   --  third2_export.export
		);

