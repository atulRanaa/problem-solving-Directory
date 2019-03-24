#include<bits/stdc++.h>
using namespace std;

#define lli long long int
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

  	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; cin>>t;
	while(t--){
		lli n; cin>>n;
		lli i=1,count=0;
		while(i <= n) i=i*2,count++;
		cout<<count<<"\n";
	}

	return 0;
}