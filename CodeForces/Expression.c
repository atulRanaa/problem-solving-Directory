#include<stdio.h>

int main(){
    long int a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);

long int ans;
    if(a==1 && b==1 && c==1) ans = 3;
    else if(a== 1 && b==1) ans=2*c;
    else if(a== 1 && c==1) ans=2+b;
    else if(b== 1 && c==1) ans=2*a;
    else if(a == 1) ans = (a+b)*c;
    else if(b == 1){
       if(a <= c) ans= (a+b)*c;
       else ans = a*(b+c);
    }
    else if(c == 1){
       ans = a*(b+c);
    }
    else ans=a*b*c;

  printf("%ld",ans);
	return 0;
}