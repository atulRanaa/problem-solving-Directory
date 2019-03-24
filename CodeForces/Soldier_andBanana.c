#include<stdio.h>

int main(){
	long int k,n,w;

	scanf("%ld %ld %ld",&k,&n,&w);

	long int m;
	m = k*((w*(w+1))/2);

	if( m > n) printf("%ld" , m-n);
	else printf("0");
	return 0;
}