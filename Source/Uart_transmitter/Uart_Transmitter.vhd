----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:51:04 09/27/2022 
-- Design Name: 
-- Module Name:    TX_UART - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Uart_transmitter is
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
end Uart_transmitter;

architecture Behavioral of Uart_transmitter is
type state_type is(idle,start,data,stop);
signal state_r : state_type;
signal state_n : state_type;
----------------------------
signal s_r,s_n : unsigned(3 downto 0);
signal n_r,n_n : unsigned(2 downto 0);
----------------------------
signal b_r,b_n   : std_logic_vector(7 downto 0);
signal tx_r, tx_n: std_logic;
----------------------------
begin
process(ckht,rst)
	begin
		if rst = '0' then
			state_r <= idle;
			s_r	  <= (others => '0');
			n_r	  <= (others => '0');
			b_r	  <= (others => '0');
			tx_r	  <= '1';
		elsif rising_edge(ckht) then
			state_r	<= state_n;
			s_r		<= s_n;
			n_r		<= n_n;
			b_r		<= b_n;
			tx_r		<= tx_n;
		end if;
end process;
process(state_r,s_r,n_r,b_r,s_tick,tx_r,tx_fifo_empty,tx_data)
	begin
		state_n	<= state_r;
		s_n		<= s_r;
		n_n		<= n_r;
		b_n		<= b_r;
		tx_n		<= tx_r;
		tx_done_tick	<= '0';
		
		case state_r is
			when idle =>
				tx_n	<= '1';
				if tx_fifo_empty = '0' then
					state_n	<= start;
					s_n		<= (others => '0');
					b_n		<= tx_data;
				end if;
			when start =>
				tx_n	<= '0';
				if s_tick = '1' then
					if s_r = 15 then 
						state_n	<= data;
						s_n		<= (others => '0');
						n_n		<= (others => '0');
					else
						s_n		<= s_r + 1;
					end if;
				end if;
			when data =>
				tx_n	<= b_r(0);
				if s_tick = '1' then
					if s_r = 15 then 
						s_n	<= (others =>'0');
						b_n	<= '0' & b_r(7 downto 1);
						if n_r = (d_bit - 1) then
							state_n	<= stop;
						else
							n_n	<= n_r + 1;
						end if;
					else 
						s_n <= s_r + 1;
				end if;
			end if;
			when stop =>
				tx_n	<= '1';
				if s_tick = '1' then 
					if s_r <= sb_tick - 1 then
						state_n		 <= idle;
						tx_done_tick <= '1';
					else
						s_n	<= s_r + 1;
					end if;
				end if;
		end case;	
end process;
tx <= tx_r;
end Behavioral;