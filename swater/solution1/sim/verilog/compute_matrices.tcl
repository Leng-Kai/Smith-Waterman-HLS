
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set string1_g_V__string2_g_V__direction_matrix_g_V__return_group [add_wave_group string1_g_V__string2_g_V__direction_matrix_g_V__return(axi_slave) -into $cinoutgroup]
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/interrupt -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_BRESP -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_BREADY -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_BVALID -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_RRESP -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_RDATA -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_RREADY -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_RVALID -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_ARREADY -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_ARVALID -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_ARADDR -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_WSTRB -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_WDATA -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_WREADY -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_WVALID -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_AWREADY -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_AWVALID -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/s_axi_control_AWADDR -into $string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set direction_matrix_g_group [add_wave_group direction_matrix_g(axi_master) -into $coutputgroup]
set rdata_group [add_wave_group "Read Channel" -into $direction_matrix_g_group]
set wdata_group [add_wave_group "Write Channel" -into $direction_matrix_g_group]
set ctrl_group [add_wave_group "Handshakes" -into $direction_matrix_g_group]
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_BUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_BID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_BRESP -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_BREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_BVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_RRESP -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_RUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_RID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_RLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_RDATA -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_RREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_RVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARREGION -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARQOS -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARPROT -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARCACHE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARLOCK -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARBURST -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARSIZE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARLEN -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARADDR -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_ARVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_WUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_WID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_WLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_WSTRB -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_WDATA -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_WREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_WVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWREGION -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWQOS -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWPROT -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWCACHE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWLOCK -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWBURST -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWSIZE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWLEN -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWADDR -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem1_AWVALID -into $ctrl_group -color #ffff00 -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set string1_g__string2_g_group [add_wave_group string1_g__string2_g(axi_master) -into $cinputgroup]
set rdata_group [add_wave_group "Read Channel" -into $string1_g__string2_g_group]
set wdata_group [add_wave_group "Write Channel" -into $string1_g__string2_g_group]
set ctrl_group [add_wave_group "Handshakes" -into $string1_g__string2_g_group]
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_BUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_BID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_BRESP -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_BREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_BVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_RRESP -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_RUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_RID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_RLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_RDATA -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_RREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_RVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARREGION -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARQOS -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARPROT -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARCACHE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARLOCK -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARBURST -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARSIZE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARLEN -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARADDR -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_ARVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_WUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_WID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_WLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_WSTRB -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_WDATA -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_WREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_WVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWREGION -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWQOS -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWPROT -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWCACHE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWLOCK -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWBURST -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWSIZE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWLEN -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWADDR -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/m_axi_gmem0_AWVALID -into $ctrl_group -color #ffff00 -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake(internal)" -into $designtopgroup]
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/ap_done -into $blocksiggroup
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/ap_idle -into $blocksiggroup
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/ap_ready -into $blocksiggroup
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/ap_start -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/ap_rst_n -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_compute_matrices_top/AESL_inst_compute_matrices/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_compute_matrices_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_compute_matrices_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_compute_matrices_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_compute_matrices_top/LENGTH_gmem0 -into $tb_portdepth_group -radix hex
add_wave /apatb_compute_matrices_top/LENGTH_gmem1 -into $tb_portdepth_group -radix hex
add_wave /apatb_compute_matrices_top/LENGTH_string1_g_V -into $tb_portdepth_group -radix hex
add_wave /apatb_compute_matrices_top/LENGTH_string2_g_V -into $tb_portdepth_group -radix hex
add_wave /apatb_compute_matrices_top/LENGTH_direction_matrix_g_V -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group [add_wave_group string1_g_V__string2_g_V__direction_matrix_g_V__return(axi_slave) -into $tbcinoutgroup]
add_wave /apatb_compute_matrices_top/control_INTERRUPT -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_BRESP -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/control_BREADY -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_BVALID -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_RRESP -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/control_RDATA -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/control_RREADY -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_RVALID -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_ARREADY -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_ARVALID -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_ARADDR -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/control_WSTRB -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/control_WDATA -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
add_wave /apatb_compute_matrices_top/control_WREADY -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_WVALID -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_AWREADY -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_AWVALID -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/control_AWADDR -into $tb_string1_g_V__string2_g_V__direction_matrix_g_V__return_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_direction_matrix_g_group [add_wave_group direction_matrix_g(axi_master) -into $tbcoutputgroup]
set rdata_group [add_wave_group "Read Channel" -into $tb_direction_matrix_g_group]
set wdata_group [add_wave_group "Write Channel" -into $tb_direction_matrix_g_group]
set ctrl_group [add_wave_group "Handshakes" -into $tb_direction_matrix_g_group]
add_wave /apatb_compute_matrices_top/gmem1_BUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_BID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_BRESP -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_BREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_BVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_RRESP -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_RUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_RID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_RLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_RDATA -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_RREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_RVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARREGION -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARQOS -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARPROT -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARCACHE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARLOCK -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARBURST -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARSIZE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARLEN -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARADDR -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_ARVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_WUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_WID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_WLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_WSTRB -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_WDATA -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_WREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_WVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWREGION -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWQOS -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWPROT -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWCACHE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWLOCK -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWBURST -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWSIZE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWLEN -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWADDR -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem1_AWVALID -into $ctrl_group -color #ffff00 -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_string1_g__string2_g_group [add_wave_group string1_g__string2_g(axi_master) -into $tbcinputgroup]
set rdata_group [add_wave_group "Read Channel" -into $tb_string1_g__string2_g_group]
set wdata_group [add_wave_group "Write Channel" -into $tb_string1_g__string2_g_group]
set ctrl_group [add_wave_group "Handshakes" -into $tb_string1_g__string2_g_group]
add_wave /apatb_compute_matrices_top/gmem0_BUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_BID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_BRESP -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_BREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_BVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_RRESP -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_RUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_RID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_RLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_RDATA -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_RREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_RVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARUSER -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARREGION -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARQOS -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARPROT -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARCACHE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARLOCK -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARBURST -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARSIZE -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARLEN -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARID -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARADDR -into $rdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_ARVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_WUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_WID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_WLAST -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_WSTRB -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_WDATA -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_WREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_WVALID -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWUSER -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWREGION -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWQOS -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWPROT -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWCACHE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWLOCK -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWBURST -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWSIZE -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWLEN -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWID -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWADDR -into $wdata_group -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWREADY -into $ctrl_group -color #ffff00 -radix hex
add_wave /apatb_compute_matrices_top/gmem0_AWVALID -into $ctrl_group -color #ffff00 -radix hex
save_wave_config compute_matrices.wcfg
run all
quit

