#include<stdio.h>

int main(){

    long int n;
    long int h,g;
 scanf("%ld",&n);
    int home[110]={0};
    int guest[35]={0};
    
    long int i;
    long int count=0;
    for(i=1;i<=n;i++){
       scanf("%ld %ld",&h,&guest[i]);
       home[h]+=1;
    }
    for(i=1;i<=n;i++){
    	count += home[ guest[i] ];
    }
  printf("%ld",count );
  return 0;
}