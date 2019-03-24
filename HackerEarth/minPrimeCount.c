#include <stdio.h>
typedef long int li;

int main()
{
    int ar[1000001]={0};
    long int number[1000001]={0};
    li i,j;
       for(i=2;i<1000001;i++){
           
           if(ar[i]==0){
               
              long int count=0;
              for(j=i*2;j<1000001;j+=i){
                  if(ar[j]==0){ count++; ar[j]=1; }
              }
              number[i]=count+1;
            }
            
        }
        
    li t,n;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld" ,&n);
        printf("%ld\n", number[n]);
    }
    return 0;
}

