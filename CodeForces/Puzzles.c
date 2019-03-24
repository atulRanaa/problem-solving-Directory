#include<stdio.h>

int main(){
    long int n,m;
    scanf("%ld %ld",&n,&m);

    long int temp;
    long int ar[1001]={0};

    long int i,j;
    for(i=0;i<m;i++){

       scanf("%ld",&temp);
       ar[temp]++;
    
    }

    long int ans=1001,f=0;
    for(i=4;i<1001;i++){
        temp=0;
        f = 0;
        for(j=i; j< 1001;j++){
            temp+=ar[j];

            if(temp >= n){
                f = 1;
                break;
            }
        }

        
        if(j-i < ans && f==1) ans=j-i;

    }
  printf("%ld",ans);
	return 0;
}