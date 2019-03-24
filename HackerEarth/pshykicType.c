#include<stdio.h>
int main(){
 int t;
 scanf("%d",&t);
        while(t--){
	 scanf("%d",&n);
	 for(i=1;i<=n;i++) scanf("%d",&ar[i]);
	 scanf("%d %d",&it,&f);
         if(it == f) printf("Yes\n");
         else if(ar[it]==it && n!=1) printf("No\n");
	 else{
	       c=0;
	       i=it;
	       while(c<=n){
	          i=ar[i]; 
		  if(i == f){ 
			  printf("Yes\n");
			  break;}
	          c++;
	       }
	       if(c == n+1) printf("No\n");
	 
	 } 
	
	}
 return 0;
}
