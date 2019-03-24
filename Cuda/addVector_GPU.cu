#include<stdio.h>
#include<stdlib.h>

int N = 1<<10;
__global__ void add(int *a,int *b,int n){
	int index = threadIdx.x;
	if( index < n)
		b[index] = a[index]+b[index];
}

int main(void){
	
	int *A,*B;
	int *a,*b;
	
	A = (int*)malloc(N*sizeof(int));
	B = (int*)malloc(N*sizeof(int));

	cudaMalloc(&a, N*sizeof(int));
	cudaMalloc(&b, N*sizeof(int));
	
	for(int i=0;i<N;i++){
		A[i]=-i;
		B[i]=i*i;
	}
	cudaMemcpy(a, A, N*sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(b, B, N*sizeof(int), cudaMemcpyHostToDevice);
	
	add<<<1,512>>>(a,b,N);
	
	cudaMemcpy(B, b, N*sizeof(int), cudaMemcpyDeviceToHost); 

	cudaFree(a);
	cudaFree(b);

	free(A);
	free(B);

	return 0;
}
