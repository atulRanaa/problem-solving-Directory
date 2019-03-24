#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	while(t--){
		int n,k; cin>>n>>k;
		int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);

		int mid = (n+k)/2;
		cout<<ar[mid]<<endl;
	}

	return 0;
}