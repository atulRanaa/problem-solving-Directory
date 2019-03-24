#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);

		if(k==1) cout<<0<<endl;
		else{
			k--;
			long long int ans = 1234567890;
			for(int i=k;i<n;i++){
				ans = min( (ar[i]-ar[i-k]),ans);
			}

			cout<<ans<<endl;
		}
	}
	
	return 0;
}