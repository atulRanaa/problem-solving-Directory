#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair< ll ,string> pis;

int main(){
	
	set< pis > s;
	unordered_map< string, ll > M;
	
	int n; scanf("%d",&n);
	ll type, val;
	string stk;

	for(int i=1;i <= n;i++){
		scanf("%lld",&type);

		if(type == 1){
			cin >> stk >> val;	s.insert({val,stk});
			M[ stk ] = val;
		}
		else if(type == 2){
			cin >> stk >> val;
			auto it = s.find({M[stk], stk});

			s.erase(it);
			s.insert({val, stk});
			M[stk] = val;
		}
		else{
			cin >> stk;
			auto it = s.begin();
			cout << it->second << " " << i <<"\n";

			M.erase(it->second);
			s.erase(it);
		}
		// for(auto e: s) cout<< e.first <<" "<< e.second <<"\n";
		// cout<<"\n";
	}

	return 0;
}