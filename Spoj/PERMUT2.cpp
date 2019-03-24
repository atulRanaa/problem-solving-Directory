#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n,i,j,a[ 100005],b[ 100005];
	while(1){
	  scanf("%d",&n);
	  if(n==0)
	  break;
	  for(i=1;i<=n;i++){
	  	scanf("%d",&a[i]);
	  	b[a[i]]=i;
	  }
	  for(j=1;j<=n;j++){
	    if(a[j]!=b[j]) break;
	  }
	  if(j>n) printf("ambiguous\n");
	  else printf("not ambiguous\n");	 
	}
	return 0;
}