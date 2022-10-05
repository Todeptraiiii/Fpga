----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:41:19 09/23/2022 
-- Design Name: 
-- Module Name:    Baudrate_Generator - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Baudrate_Generator is
generic( n: integer := 9; m: integer:= 163);
Port
(
CKHT : in STD_LOGIC;
RST  : in STD_LOGIC;
TICK : out STD_LOGIC
);
end Baudrate_Generator;

architecture Behavioral of Baudrate_Generator is
signal r_r : unsigned(n-1 downto 0);
signal r_n : unsigned(n-1 downto 0);
begin
	process(CKHT,RST)
		begin
			if RST = '0' then
				r_r	<= (others => '0');
			elsif rising_edge(CKHT) then
				r_r	<= r_n;
			end if;
	end process;
r_n	<=	(others => '0')	when r_r = (m-1) else
			r_r + 1;
TICK 	<= '1' when r_r = (m-1) else '0';
end Behavioral;

