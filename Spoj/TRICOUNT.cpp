#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	long long int t,n; cin>>t;
	long long int ans;
	while(t--){
		cin>>n;
		ans = ((n+2)*(n+1)*n)/6;
		if(n&1) ans += (n*n-1)*(2*n+3)/24;
		else ans += n*(n+2)*(2*n-1)/24;
		cout<<ans<<endl;
	}
	return 0;
}