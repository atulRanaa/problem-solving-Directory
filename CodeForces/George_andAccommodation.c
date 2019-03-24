#include<stdio.h>

int main(){
	
	long int n;
    scanf("%ld",&n);

    long int ans=0,i;
    long int p,q;

    for(i=1;i<=n;i++){
    	scanf("%ld %ld",&p ,&q);

    	if(q-p >=2 ) ans++;
    }

   printf("%ld",ans);
	return 0;
}