#include<stdio.h>

int main(){
    int n;
    int ans=0;
    scanf("%d",&n);

    int ar[n][2];
    int i;
    for(i=0;i<n;i++){
    	scanf("%d %d",&ar[i][0],&ar[i][1]);
    }
    ans = ar[0][1];
    int temp = ans;
    for(i=1;i<n;i++){
        temp = temp - ar[i][0] + ar[i][1];
        if(temp > ans) ans = temp;
    }
   
    printf("%d",ans);
	return 0;
}