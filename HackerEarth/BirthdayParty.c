#include <stdio.h>
typedef long int li;
int main()
{
   li t;
   li ar[1000000008];
   ar[1]=1;
   ar[2]=6;
   for(li i=3;i<1000000008;i++){
      ar[i] = ((ar[i-1]+2)*2 - ar[i-2]) % 1000000007;    
   }
   scanf("%ld",&t);
   li n;
   while(t--){
        scanf("%ld",&n);
        if(n > 1000000007) printf("0\n");
        else printf("%ld\n",ar[n]);
   }
    return 0;
}

