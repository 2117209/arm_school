#include "cordiccart2pol.h"
#include<math.h>
using namespace std;
void cordiccart2pol(data_t x, data_t y, data_t * r,  data_t * theta)
{
#pragma HLS INTERFACE mode=s_axilite port=return
#pragma HLS INTERFACE mode=s_axilite port=theta
#pragma HLS INTERFACE mode=s_axilite port=r
#pragma HLS INTERFACE mode=s_axilite port=y
#pragma HLS INTERFACE mode=s_axilite port=x
	// Write your code here
	
	*r=sqrt(x*x+y*y);
	*theta=atan2(y,x);
}
