#include<stdio.h>

int main(){
    long int n;

    scanf("%ld",&n);
    long int ans=n/5;

    if(n%5 > 0) ans++;  

  printf("%ld",ans);
	return 0;
}