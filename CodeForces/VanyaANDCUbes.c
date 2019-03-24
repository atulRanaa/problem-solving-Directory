#include<stdio.h>

int main(){
    long int n;
    scanf("%ld",&n);

    long int i=0,temp=0;
    while(temp <= n){
    	i++;
    	temp += (i*(i+1)/2);
    }
 printf("%ld",i-1);
	return 0;
}