#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second

int main(){
	int t,n; cin>>t>>n;
	
	vector< pair<int,int> > prob;
	
	
	int a,b;
	for(int k = 1; k<= t; k++){
		vector< pair<int,int> > ab;
		for(int i=0;i<n;i++){
			cin>>a;
			ab.push_back({a,0});
		}
		for(int i=0;i<n;i++){
			cin>>b;
			ab[i].S = b;
		}

		sort(ab.begin(), ab.end());
		int count = 0;
		for(int i=0;i< n-1; i++) if(ab[i].S > ab[i+1].S) count++;
		prob.push_back({count, k});
	}

	sort(prob.begin(), prob.end());
	for(auto ele: prob) cout<<ele.S<<"\n";
	return 0;
}