#include<bits/stdc++.h>
using namespace std;

long long int ar[100005];
int main(){
	int t;
	cin>>t;


	while(t--){
		int n;
		cin>>n;

		for(int i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);

		vector<int> ans;
	
		for(int i=0;i<n/2;i++){
			ans.push_back(ar[i]);
			ans.push_back(ar[n-1-i]);
		}
		if(n%2 == 1) ans.push_back(ar[n/2]);

		for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}