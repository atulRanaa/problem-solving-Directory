#include<stdio.h>
#include<string.h>


int main(){
	long int n,k;
	scanf("%ld %ld",&n,&k);
    long int i;
   
   long int ar[n];
   for(i=1;i<n;i++) scanf("%ld",&ar[i]);
   i=1;
   while(i < k){
      i+=ar[i];
   }
   if(i==k) printf("YES");
   else printf("NO");
	return 0;
}