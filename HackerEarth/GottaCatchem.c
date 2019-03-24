#include<stdio.h>
#define max 1000000
typedef long int li;

li ar[max];
li count[max];

int main(){
    li t,n;
    scanf("%ld %ld",&t,&n);
    
    li i=0,j=0;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j+=i){
            ar[j]++;
        }
    }
    j=0;    
    for(i=1;i<=n;i++) {
        if(ar[i]>j) j=ar[i];
        count[ar[i]]++;
    }
    for(i=1;i<=j;i++){
        count[i]+=count[i-1];
    }
    li k;
    while(t--){
        scanf("%ld",&k);
        printf("%ld\n",count[ar[k]-1]);
    }
    
}
