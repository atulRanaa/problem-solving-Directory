#include<stdio.h>

__global__ void helloFromGPU(){
	printf("Hello World from GPU: %d\n",threadIdx.x);
}
int main(void){
	helloFromGPU<<<1,10>>>();
	cudaDeviceReset();
	//cudaDeviceSynchronize();
	return 0;
}
