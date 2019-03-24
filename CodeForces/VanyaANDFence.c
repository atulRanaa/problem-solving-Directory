#include<stdio.h>

int main(){
	long int n,h;
	scanf("%ld %ld",&n,&h);

long int ar[n];
long int ans=0;
	long int i;
	for(i=0;i<n;i++) scanf("%ld",&ar[i]);
	for(i=0;i<n;i++){
	   if(ar[i] > h) ans+=2;
	   else ans+=1;
	}
printf("%ld",ans );
	return 0;
}