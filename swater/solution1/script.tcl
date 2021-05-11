############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project swater_4
set_top compute_matrices
add_files ../../Users/lin/Desktop/swater/swater_4/swater.cpp
add_files ../../Users/lin/Desktop/swater/swater_4/swater.h
add_files -tb ../../Users/lin/Desktop/swater/swater_4/testbench.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default
#source "./swater_4/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
