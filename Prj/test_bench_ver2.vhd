--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:37:26 10/05/2022
-- Design Name:   
-- Module Name:   D:/FPGA/FPGA with VHDL/project/UART_Transmitter/Prj/test_bench_ver2.vhd
-- Project Name:  Uart_transmitter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Top_module
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_bench_ver2 IS
END test_bench_ver2;
 
ARCHITECTURE behavior OF test_bench_ver2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Top_module
			Generic 
			(
			N		 : integer := 9;
			M		 : integer := 163;
			d_bit	 : integer := 8;
			sb_tick: integer := 16;
			b		 : Natural := 8;
			w		 : Natural := 2
			);
    PORT(
         CKHT : IN  std_logic;
         RST : IN  std_logic;
         WR_DATA : IN  std_logic_vector(7 downto 0);
         WR : IN  std_logic;
         TX : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CKHT : std_logic := '0';
   signal RST : std_logic := '0';
   signal WR_DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal WR : std_logic := '0';

 	--Outputs
   signal TX : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant CKHT_period : time := 20 ns;
	constant 	N  	: integer := 9;
	constant		M		  : integer := 163;
	constant	 	d_bit	  : integer := 8;
	constant		sb_tick : integer := 16;
	constant 	b		 : Natural := 8;
	constant 	w		 : Natural := 2;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Top_module
			Generic map 
			(
			N		  => N,
			M		  => M,
			d_bit	  => d_bit,
			sb_tick => sb_tick,
			b		  => b,
			w		  => w
			)
	PORT MAP 
		 (
          CKHT => CKHT,
          RST => RST,
          WR_DATA => WR_DATA,
          WR => WR,
          TX => TX
        );

   -- Clock process definitions
   CKHT_process :process
   begin
		CKHT <= '0';
		wait for CKHT_period/2;
		CKHT <= '1';
		wait for CKHT_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		wait for 100 ns;
		RST	<= '0';
		wait until rising_edge(CKHT);
		RST	<= '1';
		wait until rising_edge(CKHT);
		WR		<= '1';
		WR_DATA	<= X"38";
		wait until rising_edge(CKHT);
		WR_DATA	<= X"39";
		wait until rising_edge(CKHT);
		WR_DATA	<= X"40";
		wait until rising_edge(CKHT);
		WR_DATA	<= X"41";
		wait until rising_edge(CKHT);
		WR		<= '0';
		wait;
   end process;

END;
