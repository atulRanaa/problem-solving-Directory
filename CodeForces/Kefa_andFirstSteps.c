#include<stdio.h>

int main(){
    long int n;
    scanf("%ld",&n);

    long int ar[n];
    long int i;
    for(i=0;i<n;i++) scanf("%ld",&ar[i]);
 

 long int ans=1,temp=1;
    if(n == 1) ans=1;
    else{
       for(i=1;i<n;i++){

        if(ar[i] < ar[i-1]) temp=1;
        else temp++;
        
        if(temp > ans) ans=temp;
       
       }
    }
    printf("%ld",ans);
	return 0;
}