/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2004-2007 Cavium Networks
 */
#ifndef __OCTEON_IRQ_H__
#define __OCTEON_IRQ_H__

#define NR_IRQS OCTEON_IRQ_LAST
#define MIPS_CPU_IRQ_BASE 0

/* 0 - 7 represent the 8 MIPS standard interrupt sources */
#define OCTEON_IRQ_SW0          0
#define OCTEON_IRQ_SW1          1
#define OCTEON_IRQ_CIU0         2
#define OCTEON_IRQ_CIU1         3
#define OCTEON_IRQ_CIU4         4
#define OCTEON_IRQ_5            5
#define OCTEON_IRQ_PERF         6
#define OCTEON_IRQ_TIMER        7
/* 8 - 71 represent the sources in CIU_INTX_EN0 */
#define OCTEON_IRQ_WORKQ0       8
#define OCTEON_IRQ_WORKQ1       9
#define OCTEON_IRQ_WORKQ2       10
#define OCTEON_IRQ_WORKQ3       11
#define OCTEON_IRQ_WORKQ4       12
#define OCTEON_IRQ_WORKQ5       13
#define OCTEON_IRQ_WORKQ6       14
#define OCTEON_IRQ_WORKQ7       15
#define OCTEON_IRQ_WORKQ8       16
#define OCTEON_IRQ_WORKQ9       17
#define OCTEON_IRQ_WORKQ10      18
#define OCTEON_IRQ_WORKQ11      19
#define OCTEON_IRQ_WORKQ12      20
#define OCTEON_IRQ_WORKQ13      21
#define OCTEON_IRQ_WORKQ14      22
#define OCTEON_IRQ_WORKQ15      23
#define OCTEON_IRQ_GPIO0        24
#define OCTEON_IRQ_GPIO1        25
#define OCTEON_IRQ_GPIO2        26
#define OCTEON_IRQ_GPIO3        27
#define OCTEON_IRQ_GPIO4        28
#define OCTEON_IRQ_GPIO5        29
#define OCTEON_IRQ_GPIO6        30
#define OCTEON_IRQ_GPIO7        31
#define OCTEON_IRQ_GPIO8        32
#define OCTEON_IRQ_GPIO9        33
#define OCTEON_IRQ_GPIO10       34
#define OCTEON_IRQ_GPIO11       35
#define OCTEON_IRQ_GPIO12       36
#define OCTEON_IRQ_GPIO13       37
#define OCTEON_IRQ_GPIO14       38
#define OCTEON_IRQ_GPIO15       39
#define OCTEON_IRQ_MBOX0        40
#define OCTEON_IRQ_MBOX1        41
#define OCTEON_IRQ_UART0        42
#define OCTEON_IRQ_UART1        43
#define OCTEON_IRQ_PCI_INT0     44
#define OCTEON_IRQ_PCI_INT1     45
#define OCTEON_IRQ_PCI_INT2     46
#define OCTEON_IRQ_PCI_INT3     47
#define OCTEON_IRQ_PCI_MSI0     48
#define OCTEON_IRQ_PCI_MSI1     49
#define OCTEON_IRQ_PCI_MSI2     50
#define OCTEON_IRQ_PCI_MSI3     51
#define OCTEON_IRQ_RESERVED52   52	/* Summary of CIU_INT_SUM1 */
#define OCTEON_IRQ_TWSI         53
#define OCTEON_IRQ_RML          54
#define OCTEON_IRQ_TRACE        55
#define OCTEON_IRQ_GMX_DRP0     56
#define OCTEON_IRQ_GMX_DRP1     57
#define OCTEON_IRQ_IPD_DRP      58
#define OCTEON_IRQ_KEY_ZERO     59
#define OCTEON_IRQ_TIMER0       60
#define OCTEON_IRQ_TIMER1       61
#define OCTEON_IRQ_TIMER2       62
#define OCTEON_IRQ_TIMER3       63
#define OCTEON_IRQ_USB0         64
#define OCTEON_IRQ_PCM          65
#define OCTEON_IRQ_MPI          66
#define OCTEON_IRQ_TWSI2        67
#define OCTEON_IRQ_POWIQ        68
#define OCTEON_IRQ_IPDPPTHR     69
#define OCTEON_IRQ_MII0         70
#define OCTEON_IRQ_BOOTDMA      71
/* 72 - 135 represent the sources in CIU_INTX_EN1 */
#define OCTEON_IRQ_WDOG0        72
#define OCTEON_IRQ_WDOG1        73
#define OCTEON_IRQ_WDOG2        74
#define OCTEON_IRQ_WDOG3        75
#define OCTEON_IRQ_WDOG4        76
#define OCTEON_IRQ_WDOG5        77
#define OCTEON_IRQ_WDOG6        78
#define OCTEON_IRQ_WDOG7        79
#define OCTEON_IRQ_WDOG8        80
#define OCTEON_IRQ_WDOG9        81
#define OCTEON_IRQ_WDOG10       82
#define OCTEON_IRQ_WDOG11       83
#define OCTEON_IRQ_WDOG12       84
#define OCTEON_IRQ_WDOG13       85
#define OCTEON_IRQ_WDOG14       86
#define OCTEON_IRQ_WDOG15       87
#define OCTEON_IRQ_UART2        88
#define OCTEON_IRQ_USB1         89
#define OCTEON_IRQ_MII1         90
#define OCTEON_IRQ_RESERVED91   91
#define OCTEON_IRQ_RESERVED92   92
#define OCTEON_IRQ_RESERVED93   93
#define OCTEON_IRQ_RESERVED94   94
#define OCTEON_IRQ_RESERVED95   95
#define OCTEON_IRQ_RESERVED96   96
#define OCTEON_IRQ_RESERVED97   97
#define OCTEON_IRQ_RESERVED98   98
#define OCTEON_IRQ_RESERVED99   99
#define OCTEON_IRQ_RESERVED100  100
#define OCTEON_IRQ_RESERVED101  101
#define OCTEON_IRQ_RESERVED102  102
#define OCTEON_IRQ_RESERVED103  103
#define OCTEON_IRQ_RESERVED104  104
#define OCTEON_IRQ_RESERVED105  105
#define OCTEON_IRQ_RESERVED106  106
#define OCTEON_IRQ_RESERVED107  107
#define OCTEON_IRQ_RESERVED108  108
#define OCTEON_IRQ_RESERVED109  109
#define OCTEON_IRQ_RESERVED110  110
#define OCTEON_IRQ_RESERVED111  111
#define OCTEON_IRQ_RESERVED112  112
#define OCTEON_IRQ_RESERVED113  113
#define OCTEON_IRQ_RESERVED114  114
#define OCTEON_IRQ_RESERVED115  115
#define OCTEON_IRQ_RESERVED116  116
#define OCTEON_IRQ_RESERVED117  117
#define OCTEON_IRQ_RESERVED118  118
#define OCTEON_IRQ_RESERVED119  119
#define OCTEON_IRQ_RESERVED120  120
#define OCTEON_IRQ_RESERVED121  121
#define OCTEON_IRQ_RESERVED122  122
#define OCTEON_IRQ_RESERVED123  123
#define OCTEON_IRQ_RESERVED124  124
#define OCTEON_IRQ_RESERVED125  125
#define OCTEON_IRQ_RESERVED126  126
#define OCTEON_IRQ_RESERVED127  127
#define OCTEON_IRQ_RESERVED128  128
#define OCTEON_IRQ_RESERVED129  129
#define OCTEON_IRQ_RESERVED130  130
#define OCTEON_IRQ_RESERVED131  131
#define OCTEON_IRQ_RESERVED132  132
#define OCTEON_IRQ_RESERVED133  133
#define OCTEON_IRQ_RESERVED134  134
#define OCTEON_IRQ_RESERVED135  135
/* 136 - 143 are reserved to align the i8259 in a multiple of 16. This
   alignment is necessary since old style ISA interrupts hanging off the i8259
   have internal alignment assumptions */
#define OCTEON_IRQ_RESERVED136  136
#define OCTEON_IRQ_RESERVED137  137
#define OCTEON_IRQ_RESERVED138  138
#define OCTEON_IRQ_RESERVED139  139
#define OCTEON_IRQ_RESERVED140  140
#define OCTEON_IRQ_RESERVED141  141
#define OCTEON_IRQ_RESERVED142  142
#define OCTEON_IRQ_RESERVED143  143
/* 144 - 151 represent the i8259 master */
#define OCTEON_IRQ_I8259M0      144
#define OCTEON_IRQ_I8259M1      145
#define OCTEON_IRQ_I8259M2      146
#define OCTEON_IRQ_I8259M3      147
#define OCTEON_IRQ_I8259M4      148
#define OCTEON_IRQ_I8259M5      149
#define OCTEON_IRQ_I8259M6      150
#define OCTEON_IRQ_I8259M7      151
/* 152 - 159 represent the i8259 slave */
#define OCTEON_IRQ_I8259S0      152
#define OCTEON_IRQ_I8259S1      153
#define OCTEON_IRQ_I8259S2      154
#define OCTEON_IRQ_I8259S3      155
#define OCTEON_IRQ_I8259S4      156
#define OCTEON_IRQ_I8259S5      157
#define OCTEON_IRQ_I8259S6      158
#define OCTEON_IRQ_I8259S7      159
#ifdef CONFIG_PCI_MSI
/* 160 - 223 represent the MSI interrupts 0-63 */
#define OCTEON_IRQ_MSI_BIT0     160
#define OCTEON_IRQ_MSI_BIT1     161
#define OCTEON_IRQ_MSI_BIT2     162
#define OCTEON_IRQ_MSI_BIT3     163
#define OCTEON_IRQ_MSI_BIT4     164
#define OCTEON_IRQ_MSI_BIT5     165
#define OCTEON_IRQ_MSI_BIT6     166
#define OCTEON_IRQ_MSI_BIT7     167
#define OCTEON_IRQ_MSI_BIT8     168
#define OCTEON_IRQ_MSI_BIT9     169
#define OCTEON_IRQ_MSI_BIT10    170
#define OCTEON_IRQ_MSI_BIT11    171
#define OCTEON_IRQ_MSI_BIT12    172
#define OCTEON_IRQ_MSI_BIT13    173
#define OCTEON_IRQ_MSI_BIT14    174
#define OCTEON_IRQ_MSI_BIT15    175
#define OCTEON_IRQ_MSI_BIT16    176
#define OCTEON_IRQ_MSI_BIT17    177
#define OCTEON_IRQ_MSI_BIT18    178
#define OCTEON_IRQ_MSI_BIT19    179
#define OCTEON_IRQ_MSI_BIT20    180
#define OCTEON_IRQ_MSI_BIT21    181
#define OCTEON_IRQ_MSI_BIT22    182
#define OCTEON_IRQ_MSI_BIT23    183
#define OCTEON_IRQ_MSI_BIT24    184
#define OCTEON_IRQ_MSI_BIT25    185
#define OCTEON_IRQ_MSI_BIT26    186
#define OCTEON_IRQ_MSI_BIT27    187
#define OCTEON_IRQ_MSI_BIT28    188
#define OCTEON_IRQ_MSI_BIT29    189
#define OCTEON_IRQ_MSI_BIT30    190
#define OCTEON_IRQ_MSI_BIT31    191
#define OCTEON_IRQ_MSI_BIT32    192
#define OCTEON_IRQ_MSI_BIT33    193
#define OCTEON_IRQ_MSI_BIT34    194
#define OCTEON_IRQ_MSI_BIT35    195
#define OCTEON_IRQ_MSI_BIT36    196
#define OCTEON_IRQ_MSI_BIT37    197
#define OCTEON_IRQ_MSI_BIT38    198
#define OCTEON_IRQ_MSI_BIT39    199
#define OCTEON_IRQ_MSI_BIT40    200
#define OCTEON_IRQ_MSI_BIT41    201
#define OCTEON_IRQ_MSI_BIT42    202
#define OCTEON_IRQ_MSI_BIT43    203
#define OCTEON_IRQ_MSI_BIT44    204
#define OCTEON_IRQ_MSI_BIT45    205
#define OCTEON_IRQ_MSI_BIT46    206
#define OCTEON_IRQ_MSI_BIT47    207
#define OCTEON_IRQ_MSI_BIT48    208
#define OCTEON_IRQ_MSI_BIT49    209
#define OCTEON_IRQ_MSI_BIT50    210
#define OCTEON_IRQ_MSI_BIT51    211
#define OCTEON_IRQ_MSI_BIT52    212
#define OCTEON_IRQ_MSI_BIT53    213
#define OCTEON_IRQ_MSI_BIT54    214
#define OCTEON_IRQ_MSI_BIT55    215
#define OCTEON_IRQ_MSI_BIT56    216
#define OCTEON_IRQ_MSI_BIT57    217
#define OCTEON_IRQ_MSI_BIT58    218
#define OCTEON_IRQ_MSI_BIT59    219
#define OCTEON_IRQ_MSI_BIT60    220
#define OCTEON_IRQ_MSI_BIT61    221
#define OCTEON_IRQ_MSI_BIT62    222
#define OCTEON_IRQ_MSI_BIT63    223
#define OCTEON_IRQ_LAST         224
#else
#define OCTEON_IRQ_LAST         160
#endif

#endif