#include<stdio.h>

int main(){
    int n,k,i;
    int ans=0;
    scanf("%d %d",&n,&k);
    int ar[n];

    for(i=0;i<n;i++) scanf("%d",&ar[i]);
    for(i=0;i<n;i++){
    	if(ar[i] >= ar[k-1] && ar[i]!=0) ans++;
    	else break;
    }
   
    printf("%d",ans);
	return 0;
}