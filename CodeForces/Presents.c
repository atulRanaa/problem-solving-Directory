#include<stdio.h>

int main(){
    long int n;
    scanf("%ld",&n);

    long int ar[110]={0};
    long int i,t;

    for(i=1;i<=n;i++){
       scanf("%ld",&t);
       ar[t]=i;
    }
    for(i=1;i<=n;i++) printf("%ld ",ar[i]);
    
	return 0;
}