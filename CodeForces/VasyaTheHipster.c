#include<stdio.h>

long int min(long int a,long int b){
	if(a<=b) return a;
	else return b;
}
int main(){
	long int r,b;
	scanf("%ld %ld",&r,&b);

    long int x,y;
    x=min(r,b);
    y=((r-x)/2 + (b-x)/2);
  printf("%ld %ld",x,y);
	return 0;
}