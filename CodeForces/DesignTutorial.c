#include<stdio.h>

int main(){
    long int n;
    scanf("%ld",&n);

    if(n&1) printf("%ld %ld",9,n-9);
    else printf("%ld %ld",8,n-8);

	return 0;
}