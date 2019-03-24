#include<stdio.h>

int main(){
	long int n;
	scanf("%ld",&n);

long int ar[n];
double ans=0;
	long int i;
	for(i=0;i<n;i++) scanf("%ld",&ar[i]);
	for(i=0;i<n;i++){
	  ans+=ar[i];
	}
printf("%0.12f",ans/n);
	return 0;
}