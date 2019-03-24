#include <stdio.h>
int isPrime(int n)
{
    if (n <= 1)  return -1;
    if (n <= 3)  return 1;
    if (n%2 == 0 || n%3 == 0) return -1;
    int i;

    for (i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0) return -1;
    }
    return 1;
}
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    int ar[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        if(isPrime(ar[i])==1) count++;
    }
    printf("%d",count);
    return 0;
}

