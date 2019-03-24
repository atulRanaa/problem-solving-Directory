#include<stdio.h>

long int days(long int n,long int m){

   // printf("%ld ",n);
   if(n/m == 0) return n%m;
   return (n/m)*m + days((n/m) + n%m ,m);   
}
int main(){
    long int n,m;
    scanf("%ld %ld",&n,&m);
    printf("%ld", days(n,m));
	return 0;
}
