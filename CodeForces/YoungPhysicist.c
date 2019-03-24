#include<stdio.h>

int main(){
    long int n;
    scanf("%ld",&n);

    long int x,y,z;
    long int i;
    long int X=0,Y=0,Z=0;
    for(i=0;i<n;i++){
       scanf("%ld %ld %ld",&x,&y,&z);

       X+=x;
       Y+=y;
       Z+=z;
    }

    if(X==0 && Y==0 && Z==0) printf("YES");
    else printf("NO");
    
	return 0;
}