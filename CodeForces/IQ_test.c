#include<stdio.h>

int main(){
	long int n;
	long int e=0,o=0;
	long int i,t=-1;

   scanf("%ld",&n);
    long int ar[110];

	for(i=0;i<n;i++) scanf("%ld",&ar[i]);
	for(i=0;i<n;i++){
		if(ar[i]&1) o++;
		else e++;

		if(e>1 || o>1) break;
	}
    if(e > 1){
    	for(i=0;i<n;i++){ 
    		if(ar[i]&1){ t=i; break;}
    	}
    }
    else{
    	for(i=0;i<n;i++){ 
    		if(!(ar[i]&1)){ t=i; break;}
    	}
    }

printf("%ld",t+1);
	return 0;
}