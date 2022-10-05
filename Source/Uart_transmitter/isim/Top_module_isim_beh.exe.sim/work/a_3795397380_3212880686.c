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
static const char *ng0 = "D:/FPGA/FPGA with VHDL/project/UART_Transmitter/Source/Uart_transmitter/Uart_Transmitter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_1438093509_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_3727956728_3536714472(char *, char *, char *, int );


static void work_a_3795397380_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(66, ng0);
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
LAB3:    t1 = (t0 + 3344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3404);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 3440);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t5 = (t0 + 3476);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(70, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3512);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3548);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1328U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 3404);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3440);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3476);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3512);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3548);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_3795397380_3212880686_p_1(char *t0)
{
    char t12[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    unsigned int t20;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3584);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 3620);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3656);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 3692);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3728);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3764);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3352);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 3728);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3728);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB2;

LAB5:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t16 = (0 - 7);
    t13 = (t16 * -1);
    t14 = (1U * t13);
    t17 = (0 + t14);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t4 = (t0 + 3728);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB6:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3728);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB2;

LAB7:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3584);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(94, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t4 = (t0 + 3620);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 3692);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1420U);
    t4 = *((char **)t1);
    t1 = (t0 + 7284U);
    t10 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t4, t1, 15);
    if (t10 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 7284U);
    t4 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t2, t1, 1);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t14 = (1U * t13);
    t3 = (4U != t14);
    if (t3 == 1)
        goto LAB16;

LAB17:    t6 = (t0 + 3620);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t11 = (t8 + 40U);
    t15 = *((char **)t11);
    memcpy(t15, t4, 4U);
    xsi_driver_first_trans_fast(t6);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 3584);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(102, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t4 = (t0 + 3620);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(103, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t4 = (t0 + 3656);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t14, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1420U);
    t4 = *((char **)t1);
    t1 = (t0 + 7284U);
    t10 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t4, t1, 15);
    if (t10 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 7284U);
    t4 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t2, t1, 1);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t14 = (1U * t13);
    t3 = (4U != t14);
    if (t3 == 1)
        goto LAB31;

LAB32:    t6 = (t0 + 3620);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t11 = (t8 + 40U);
    t15 = *((char **)t11);
    memcpy(t15, t4, 4U);
    xsi_driver_first_trans_fast(t6);

LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(112, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t6 = t5;
    memset(t6, (unsigned char)2, 4U);
    t7 = (t0 + 3620);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t15 = (t11 + 40U);
    t18 = *((char **)t15);
    memcpy(t18, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t17 = (0 + t14);
    t1 = (t2 + t17);
    t5 = ((IEEE_P_2592010699) + 2332);
    t6 = (t19 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 7;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t16 = (1 - 7);
    t20 = (t16 * -1);
    t20 = (t20 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t20;
    t4 = xsi_base_array_concat(t4, t12, t5, (char)99, (unsigned char)2, (char)97, t1, t19, (char)101);
    t20 = (1U + 7U);
    t3 = (8U != t20);
    if (t3 == 1)
        goto LAB24;

LAB25:    t7 = (t0 + 3692);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t15 = (t11 + 40U);
    t18 = *((char **)t15);
    memcpy(t18, t4, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 7300U);
    t16 = (8 - 1);
    t3 = ieee_p_3499444699_sub_3727956728_3536714472(IEEE_P_3499444699, t2, t1, t16);
    if (t3 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 7300U);
    t4 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t2, t1, 1);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t14 = (1U * t13);
    t3 = (3U != t14);
    if (t3 == 1)
        goto LAB29;

LAB30:    t6 = (t0 + 3656);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t11 = (t8 + 40U);
    t15 = *((char **)t11);
    memcpy(t15, t4, 3U);
    xsi_driver_first_trans_fast(t6);

LAB27:    goto LAB22;

LAB24:    xsi_size_not_matching(8U, t20, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 3584);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB27;

LAB29:    xsi_size_not_matching(3U, t14, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(4U, t14, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 1420U);
    t4 = *((char **)t1);
    t1 = (t0 + 7284U);
    t16 = (16 - 1);
    t10 = ieee_p_3499444699_sub_3727956728_3536714472(IEEE_P_3499444699, t4, t1, t16);
    if (t10 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 7284U);
    t4 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t12, t2, t1, 1);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t14 = (1U * t13);
    t3 = (4U != t14);
    if (t3 == 1)
        goto LAB39;

LAB40:    t6 = (t0 + 3620);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t11 = (t8 + 40U);
    t15 = *((char **)t11);
    memcpy(t15, t4, 4U);
    xsi_driver_first_trans_fast(t6);

LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(127, ng0);
    t5 = (t0 + 3584);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3764);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB37;

LAB39:    xsi_size_not_matching(4U, t14, 0);
    goto LAB40;

}

static void work_a_3795397380_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(135, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3800);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3360);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3795397380_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3795397380_3212880686_p_0,(void *)work_a_3795397380_3212880686_p_1,(void *)work_a_3795397380_3212880686_p_2};
	xsi_register_didat("work_a_3795397380_3212880686", "isim/Top_module_isim_beh.exe.sim/work/a_3795397380_3212880686.didat");
	xsi_register_executes(pe);
}
