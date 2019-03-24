#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int primeFactors(long int n)
{   int count=0;
    while (n%2 == 0){
        count++;
        if(count > 3) return 0;
        n = n/2;
    }
    for(int i=3;i<=sqrt(n); i = i+2){
        while (n%i == 0){
            count++;
            if(count > 3) return 0;
            n = n/i;
        }
    }
    if (n > 2) count++;
    
    if(count == 3) return 1;
    else return 0;
}
int main()
{
    int prime[1000010]={0};
    int sp[1000001]={0};
    
    prime[0]=1;
    prime[1]=1;
    long int len=sqrt(1000010);
    long int i,j;
    for(i=2;i<=len;i++){
        if(prime[i]==0){
            for(j=2*i;j<1000001;j += i){
                prime[j] = 1;
            }
        }
    }
    for(i=12;i<=1000000;i++){
        if(prime[i]!=0) sp[i]=primeFactors(i);
    }
    long int t;
    scanf("%ld",&t);
                   while(t--){
                       long int n,count=0;
                       scanf("%ld",&n);
                       long int temp =sqrt(n);
                       
                       if(sp[n] == 1) printf("%d\n",-1);
                       else{
                              for(i=1;i<=temp ; i++){
                                 if(n%i == 0){ 
                                  if(prime[i] == 1 && prime[n/i] == 1) count++;
                                 }
                              }
                              
                              printf("%ld\n",count);
                       }
                   }
    return 0;
}

