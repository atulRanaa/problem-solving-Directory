#include<stdio.h>

int main(){
    long int n,t;
    scanf("%ld %ld",&n,&t);

    char str[n];
    scanf("%s",str);

 long int i,j;

    for(i=1;i<=t;i++){
      for(j=1;j< n;j++){
        if(str[j]=='G' && str[j-1]=='B'){
            str[j]='B';
            str[j-1]='G';

            j++;
        }
      }     
    }

    printf("%s",str);
	return 0;
}