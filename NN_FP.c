#include<math.h>
#include<stdio.h>
//EXPORTED FROM MATLAB Network Parameters
float w0[10] = {0.04244122,-6.62676908,-10.55826250,-4.75933082,-2.51126706,-0.05924231,0.70979713,1.07060279,0.18072564,	-2.46533293};
float b0[10] = {1.98039042,	6.61235432,	12.68561183,3.44427305,-1.84040382,-0.16438960,0.48555820,2.11512785,0.25250453,5.91537917};
float w1[10] = {-0.17447136,0.11201225,0.26397239,0.02543238,0.09591364,0.41620223,0.52389522,0.34669524,-0.14296897,-0.98910381};
float b1 = -0.01807932;

float mySigmoid(float src);
float nnForwardProp(float src);

//sigmoid = @(x) 1./(1+exp(-x));
float mySigmoid(float src)
{
	return 1.0/(1.0 + exp(-src));
}

float nnForwardProp(float src)
{
	#pragma HLS INTERFACE s_axilite port=return
	#pragma HLS INTERFACE s_axilite port=src
	float L1Buffer[10];
	float SrcBuffer[10];
	pre:for(unsigned char i_pre=0;i_pre<10;i_pre++)
	{
		L1Buffer[i_pre] = 0;
		SrcBuffer[i_pre] = src;
	}
	// LAYER 1 Calculation
	l1p:for(unsigned char i =0; i<10; i++)
	{
		L1Buffer[i] = SrcBuffer[i] * w0[i] + b0[i];
	}
	//LAYER 1 Activation
	l1act:for(unsigned char ia =0; ia<10; ia++)
	{
		L1Buffer[ia] = mySigmoid(L1Buffer[ia]);
	}
	//LAYER 2 Calculation
	l2p:for(unsigned char j =0; j<10; j++)
	{
		L1Buffer[j] = L1Buffer[j] * w1[j];
	}
	float acc = 0;
	l2s:for(unsigned char k =0; k<10; k++)
	{
		acc += L1Buffer[k];
	}
	acc += b1;
	return acc;
}


