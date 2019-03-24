#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long int a,b;
	while(1){
		cin>>a>>b;

		if(a==-1 && b==-1) break;

		if(a==0) cout<<b;
		else if(b==0) cout<<a;
		else if(a==b) cout<<1;
		else cout<<ceil(max(a,b)/(min(a,b)+1.0));

		cout<<endl;
	}
	
	return 0;
}