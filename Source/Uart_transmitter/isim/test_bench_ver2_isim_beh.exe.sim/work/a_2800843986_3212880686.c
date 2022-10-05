/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/FPGA/FPGA with VHDL/project/UART_Transmitter/Source/Uart_transmitter/Baudrate_Generator.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_1438093509_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char *, char *, char *, int );


static void work_a_2800843986_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2240);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t5 = t1;
    memset(t5, (unsigned char)2, 9U);
    t6 = (t0 + 2300);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 960U);
    t5 = *((char **)t2);
    t2 = (t0 + 2300);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 9U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_2800843986_3212880686_p_1(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 4400U);
    t3 = (163 - 1);
    t4 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, t3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 868U);
    t14 = *((char **)t13);
    t13 = (t0 + 4400U);
    t15 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t14, t13, 1);
    t16 = (t12 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (9U != t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    t20 = (t0 + 2336);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 9U);
    xsi_driver_first_trans_fast(t20);

LAB2:    t25 = (t0 + 2248);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t5 = xsi_get_transient_memory(9U);
    memset(t5, 0, 9U);
    t6 = t5;
    memset(t6, (unsigned char)2, 9U);
    t7 = (t0 + 2336);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 9U);
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(9U, t18, 0);
    goto LAB8;

}

static void work_a_2800843986_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 4400U);
    t3 = (163 - 1);
    t4 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, t3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 2372);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 2256);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 2372);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_2800843986_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2800843986_3212880686_p_0,(void *)work_a_2800843986_3212880686_p_1,(void *)work_a_2800843986_3212880686_p_2};
	xsi_register_didat("work_a_2800843986_3212880686", "isim/test_bench_ver2_isim_beh.exe.sim/work/a_2800843986_3212880686.didat");
	xsi_register_executes(pe);
}
