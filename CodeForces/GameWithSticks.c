#include<stdio.h>

long int min(long int n,long int m){
    if(n<=m) return n;
    else return m;
}

int main(){
    long int n,m;
    scanf("%ld %ld",&n,&m);

    long int i=min(n,m);

    if( i&1) printf("Akshat");
    else printf("Malvika");
	return 0;
}