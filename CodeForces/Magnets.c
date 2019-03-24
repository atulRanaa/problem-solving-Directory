#include<stdio.h>
#include<string.h>


int main(){
	long int n;
	scanf("%ld",&n);

	char str[5];
	char t[5];
	long int count=1,i;
	scanf("%s",str);
	for(i=1;i<n;i++){
	   scanf("%s",t);

	   if(str[0]!=t[0]){ 
	   	count++;
	   	strcpy(str,t);
	   }	
	}

printf("%ld",count);
	return 0;
}