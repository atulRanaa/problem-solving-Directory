#include<bits/stdc++.h>
using namespace std;

int main(){
	
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t,a,b,c; cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a>>b>>c;
		int t = __gcd(a,b);
		if(c%t == 0 || t%c==0) printf("Case %d: Yes\n",i);
		else printf("Case %d: No\n",i);
	}

	return 0;
}