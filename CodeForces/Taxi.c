#include<stdio.h>


int main(){
    long int n;
    long int hash[5]={0};
    long int ans=0;
    
    scanf("%ld",&n);
    
    long int i,temp;
    for(i=0;i<n;i++){

    	scanf("%ld",&temp);
    	hash[temp]++;

    }
    
    ans = hash[4];
    if(hash[3] >= hash[1] ){
    	ans += hash[3];
    	ans += (hash[2]/2)+hash[2]%2 ;
    }
    else{
    	ans += hash[3];
    	ans += hash[2]/2;
        temp = (hash[2]%2)*2 + (hash[1]-hash[3]);
    	ans += temp/4;
    	if(temp%4 > 0) ans+=1; 
    }

    printf("%d",ans);
	return 0;
}
