#include<stdio.h>

int main(){
    
    char str[20];
    long int n,i;

scanf("%ld",&n);
long int ans=0;
    for (i = 0; i < n; ++i)
    {
    	scanf("%s",str);
        if(str[0]=='T') ans+=4;
        if(str[0]=='C') ans+=6;
        if(str[0]=='O') ans+=8;
        if(str[0]=='D') ans+=12;
        if(str[0]=='I') ans+=20;
    }
printf("%ld", ans);   	
	return 0;
}