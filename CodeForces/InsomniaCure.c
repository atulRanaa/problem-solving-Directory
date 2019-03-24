#include<stdio.h>

int main(){
    long int k,l,m,n,d;
    
    scanf("%ld",&k);
    scanf("%ld",&l);
    scanf("%ld",&m);
    scanf("%ld",&n);
    scanf("%ld",&d);
    int ar[d+1];

    long int i;

    for(i=0;i< d+1;i++) ar[i]=0;
    for(i=k;i< d+1;i+=k) ar[i]=1;
    for(i=l;i< d+1;i+=l) ar[i]=1;
    for(i=m;i< d+1;i+=m) ar[i]=1;
    for(i=n;i< d+1;i+=n) ar[i]=1;
    
    long int ans=0;
    for(i=1;i< d+1;i++){
        if(ar[i]==0) ans++;
    }
    printf("%ld\n",d-ans);
	return 0;
}