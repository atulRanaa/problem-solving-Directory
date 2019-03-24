#include<stdio.h>
//#include"gputimer.h"

#define NUM_THREADS 100000
#define ARRAY_SIZE 10
#define BLOCK_WIDTH 1000

__global__ void increment_naive(int *g){
	int i = blockIdx.x*blockDim.x + threadIdx.x;

	i = i%ARRAY_SIZE;
	g[i] = g[i]+1;
}
__global__ void increment_atomic(int *g){
	int i = blockIdx.x*blockDim.x + threadIdx.x;

	i = i%ARRAY_SIZE;
	atomicAdd(&g[i], 1);
}
int main(){

	//GpuTimer timer;
	printf("%d total threads in %d blocks writing into %d array elements\n",
	NUM_THREADS,NUM_THREADS/BLOCK_WIDTH,ARRAY_SIZE);

	int h_array[ARRAY_SIZE];
	const int ARRAY_BYTES = ARRAY_SIZE * sizeof(int);

	int *d_array;
	cudaMalloc((void **)&d_array,ARRAY_BYTES);
	cudaMemset((void **)d_array,0,ARRAY_BYTES);

	//timer.start();
	//increment_naive<<< NUM_THREADS/BLOCK_WIDTH,BLOCK_WIDTH >>>(d_array);
	increment_atomic<<< NUM_THREADS/BLOCK_WIDTH,BLOCK_WIDTH >>>(d_array);
	//timer.stop();

	cudaMemcpy(h_array,d_array,ARRAY_BYTES,cudaMemcpyDeviceToHost);
	//printf("Time elapsed = %g ms\n",timer.Elapsed());
	for(int i=0;i< ARRAY_SIZE ; i++)	printf("%d ", h_array[i]);
	cudaFree(d_array);
	return 0;
}
