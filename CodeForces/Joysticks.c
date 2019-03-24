#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int count=0;
    while((a >=2 && b!=0) || (b>=2 && a!=0)){
        if(a<=b){
            a+=1;
            b-=2;
        }
        else{
            a-=2;
            b+=1;
        }
        count++;
    }
    printf("%d",count);
	return 0;
}