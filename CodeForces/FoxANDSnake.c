#include<stdio.h>
#include<string.h>


int main(){
	long int n,m;
	scanf("%ld %ld",&n,&m);
    
    long int i;
    long int j;
    long int k=1;
    for(i=1;i<=n;i++){
      if(i&1){
        for(j=1;j<=m;j++) printf("#");
      }
      else{
        if(k){
          for(j=1;j<m;j++) printf(".");
          printf("#");
          k=0;
        }
        else{
          printf("#");
          for(j=1;j<m;j++) printf(".");
          k=1;
        }
      } 

      printf("\n");
    }
	return 0;
}