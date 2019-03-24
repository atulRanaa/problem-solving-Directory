#include<stdio.h>

int main(){

long int n;
scanf("%ld",&n);

long int a[n];
long int b[n];
long int i,min=111;
long int ans=0;
  for(i=0;i<n;i++) scanf("%ld %ld",&a[i],&b[i]);
  for(i=0;i<n;i++){
  	if(b[i] < min) min=b[i];
  	ans += a[i]*min;
  }
    
printf("%ld",ans);
return 0;}