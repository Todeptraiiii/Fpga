----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:15:56 10/05/2022 
-- Design Name: 
-- Module Name:    Top_module - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Top_module is
Generic 
(
N		 : integer := 9;
M		 : integer := 163;
d_bit	 : integer := 8;
sb_tick: integer := 16;
b		 : Natural := 8;
w		 : Natural := 2
);
Port
(
	CKHT		: in STD_LOGIC;
	RST		: in STD_LOGIC;
	WR_DATA	: in STD_LOGIC_VECTOR(7 downto 0);
	WR			: in STD_LOGIC;
	--FULL	: out STD_LOGIC;
	TX			: out STD_LOGIC
);
end Top_module;

architecture Behavioral of Top_module is
------------------------------------------
component Baudrate_Generator is
generic( n: integer := 9; m: integer:= 163);
Port
(
CKHT : in STD_LOGIC;
RST  : in STD_LOGIC;
TICK : out STD_LOGIC
);
end component Baudrate_Generator;
---------------------------------------------
component Uart_transmitter is
Generic
(
d_bit	 : integer := 8;
sb_tick: integer := 16
);
Port
(
CKHT			 : in STD_LOGIC;
RST			 : in STD_LOGIC;
S_TICK		 : in STD_LOGIC;
TX_DATA		 : in STD_LOGIC_VECTOR(7 downto 0);
TX_FIFO_EMPTY: in STD_LOGIC;
TX_DONE_TICK : out STD_LOGIC;
TX				 : out STD_LOGIC
);
end component Uart_transmitter;
----------------------------------------------
component FIFO_TX is
Generic
(
b	: Natural := 8;
w	: Natural := 2
);
Port
(
ckht		: in std_logic;
rst		: in std_logic;
rd			: in std_logic;
wr			: in std_logic;
wr_data	: in std_logic_vector(b-1 downto 0);
empty		: out std_logic;
--full	: std_logic;
rd_data	: out std_logic_vector(b-1 downto 0)
);
end component FIFO_TX;
-------------------------------------------------
signal fifo_tx_data_out : std_logic_vector(7 downto 0);
signal fifo_tx_rd			: std_logic;
signal fifo_tx_empty		: std_logic;
signal s_tick				: std_logic;
-------------------------------------------------
begin

Baudrate_Generator_inst1: Baudrate_Generator
Generic map(N	=>	N, M	=> m)
Port map
	(
	CKHT	=>	CKHT,
	RST	=>	RST,
	TICK	=> s_tick
	);
Uart_Transmitter_inst1: Uart_transmitter
Generic map(d_bit => d_bit, sb_tick	=> sb_tick)
Port map 
(
	CKHT	=>	CKHT,
	RST	=>	RST,
	S_TICK			=> s_tick,
	TX_DATA			=> fifo_tx_data_out,
	tx_done_tick	=>	fifo_tx_rd,
	tx_fifo_empty	=> fifo_tx_empty,
	TX					=> TX
);
FIFO_TX_INST1: FIFO_TX
Generic map(B	=> B, W => W)
Port map
(	
	CKHT				=> CKHT,
	RST				=> RST,
	WR_DATA			=> WR_DATA,
	WR					=> WR,
	RD_DATA			=> fifo_tx_data_out,
	RD					=> fifo_tx_rd,
	EMPTY				=> fifo_tx_empty
);
end Behavioral;

