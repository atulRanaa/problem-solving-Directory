#include<stdio.h>

int main(){
	long int n,h;
	scanf("%ld %ld",&n,&h);

long int t=240-h;
	long int i=0;
	while(5*i <= t){
        t -= 5*i;
        i++;
	}

	if(n < i-1) i=n+1;
printf("%ld",i-1);
	return 0;
}