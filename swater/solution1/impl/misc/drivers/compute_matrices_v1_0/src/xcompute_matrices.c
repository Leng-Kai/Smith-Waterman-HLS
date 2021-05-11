// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xcompute_matrices.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XCompute_matrices_CfgInitialize(XCompute_matrices *InstancePtr, XCompute_matrices_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XCompute_matrices_Start(XCompute_matrices *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL) & 0x80;
    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XCompute_matrices_IsDone(XCompute_matrices *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XCompute_matrices_IsIdle(XCompute_matrices *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XCompute_matrices_IsReady(XCompute_matrices *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XCompute_matrices_EnableAutoRestart(XCompute_matrices *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XCompute_matrices_DisableAutoRestart(XCompute_matrices *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_AP_CTRL, 0);
}

void XCompute_matrices_Set_string1_g_V(XCompute_matrices *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_STRING1_G_V_DATA, Data);
}

u32 XCompute_matrices_Get_string1_g_V(XCompute_matrices *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_STRING1_G_V_DATA);
    return Data;
}

void XCompute_matrices_Set_string2_g_V(XCompute_matrices *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_STRING2_G_V_DATA, Data);
}

u32 XCompute_matrices_Get_string2_g_V(XCompute_matrices *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_STRING2_G_V_DATA);
    return Data;
}

void XCompute_matrices_Set_direction_matrix_g_V(XCompute_matrices *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_DIRECTION_MATRIX_G_V_DATA, Data);
}

u32 XCompute_matrices_Get_direction_matrix_g_V(XCompute_matrices *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_DIRECTION_MATRIX_G_V_DATA);
    return Data;
}

void XCompute_matrices_InterruptGlobalEnable(XCompute_matrices *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_GIE, 1);
}

void XCompute_matrices_InterruptGlobalDisable(XCompute_matrices *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_GIE, 0);
}

void XCompute_matrices_InterruptEnable(XCompute_matrices *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_IER);
    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_IER, Register | Mask);
}

void XCompute_matrices_InterruptDisable(XCompute_matrices *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_IER);
    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_IER, Register & (~Mask));
}

void XCompute_matrices_InterruptClear(XCompute_matrices *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCompute_matrices_WriteReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_ISR, Mask);
}

u32 XCompute_matrices_InterruptGetEnabled(XCompute_matrices *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_IER);
}

u32 XCompute_matrices_InterruptGetStatus(XCompute_matrices *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCompute_matrices_ReadReg(InstancePtr->Control_BaseAddress, XCOMPUTE_MATRICES_CONTROL_ADDR_ISR);
}

