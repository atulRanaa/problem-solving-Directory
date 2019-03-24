#include<stdio.h>

int main(){
	long int n;
	scanf("%ld",&n);

	long int ar[n];
	long int i;
	for(i=0;i<n;i++) scanf("%ld",&ar[i]);
    
    long int min=ar[0],max=ar[0]; 
	long int ans=0;
	for(i=1;i<n;i++){
      if(ar[i] > max) {max=ar[i]; ans++;}
      if(ar[i] < min) {min=ar[i]; ans++;}
	}
printf("%ld",ans);
	return 0;
}