// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// control
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of string1_g_V
//        bit 31~0 - string1_g_V[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of string2_g_V
//        bit 31~0 - string2_g_V[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of direction_matrix_g_V
//        bit 31~0 - direction_matrix_g_V[31:0] (Read/Write)
// 0x24 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL                   0x00
#define XCOMPUTE_MATRICES_CONTROL_ADDR_GIE                       0x04
#define XCOMPUTE_MATRICES_CONTROL_ADDR_IER                       0x08
#define XCOMPUTE_MATRICES_CONTROL_ADDR_ISR                       0x0c
#define XCOMPUTE_MATRICES_CONTROL_ADDR_STRING1_G_V_DATA          0x10
#define XCOMPUTE_MATRICES_CONTROL_BITS_STRING1_G_V_DATA          32
#define XCOMPUTE_MATRICES_CONTROL_ADDR_STRING2_G_V_DATA          0x18
#define XCOMPUTE_MATRICES_CONTROL_BITS_STRING2_G_V_DATA          32
#define XCOMPUTE_MATRICES_CONTROL_ADDR_DIRECTION_MATRIX_G_V_DATA 0x20
#define XCOMPUTE_MATRICES_CONTROL_BITS_DIRECTION_MATRIX_G_V_DATA 32

