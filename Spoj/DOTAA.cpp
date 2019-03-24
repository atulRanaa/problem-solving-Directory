#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	int n,m,d;
	while(t--){
		cin>>n>>m>>d;
		int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		int count = 0;
		for(int i=0;i<n;i++){
			count += ar[i]/d;
			if(ar[i]%d == 0) count -= 1;
		}

		if(count >= m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	
	return 0;
}