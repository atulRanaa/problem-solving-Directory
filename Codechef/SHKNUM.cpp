#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
vector<ll> M;
void preprocess(){
	for(int i=0;i<=30;i++) for(int j=i+1;j<=30;j++)
		M.push_back((1<<i)+(1<<j));

	sort(M.begin(),M.end());
}
int main(){
	preprocess();

	int t; cin>>t;
	ll num,ans1,ans2;
	while(t--){
		cin>>num;
		ans1 = distance(M.begin(), lower_bound(M.begin(),M.end(),num));
		ans2 = M[ans1] - num;
		if(ans1-1 >= 0) ans2 = min(ans2, num-M[ans1-1]);

		cout<<ans2<<"\n";
	}

	//for(auto ele:M) cout<<ele<<" ";
	return 0;
}