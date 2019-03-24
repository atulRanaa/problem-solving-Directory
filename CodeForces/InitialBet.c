#include<stdio.h>

int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int x=a+b+c+d+e;

    if(x%5 == 0 && x!=0) printf("%d",x/5);
    else printf("-1");
	return 0;
}