############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project PINN
set_top nnForwardProp
add_files PINN/NN_FP.h
add_files PINN/NN_FP.c
add_files -tb PINN/NN_FP_tb.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg400-1} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./PINN/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design -trace_level all
export_design -flow syn -rtl verilog -format ip_catalog
