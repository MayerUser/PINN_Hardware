# PINN_HLS

## INTRODUCTION
This is a HLS Project of Physcial Informed Neural Network.
## Environment
* OS: Ubuntu 16.04 LTS (optional - Other platform have to complie once again);
* Software: Vivado HLS 2019.1;
* Board: PYNQ-Z2 (HLS have to support the chip of PYNQ-Z2(7020) and you can re-select others Xilinx Chip in the solution setting (tcl file));
## FILE
* NN_FP.c : Top Function - PINN Forward, which will be converted to HDL and RTL;
* NN_FP.h : Head File;
* NN_FP_tb.c: Test Bench file for the NN_FP.c;
## SIMULATION RESULT
![ACCUARCY OF PINN](/figure/test_result.jpg)
![TIME CONSUMPATION](/figure/waveform.jpg)
