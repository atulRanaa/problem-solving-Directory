#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		pair< long long int,long long int > p[n];
		for(int i=0;i<n;i++)
			cin>>p[i].first>>p[i].second;
		
		sort(p,p+n);

		set<long long int> s;
		int count = 0,ans = 0;

		for(int i=0;i<n;i++){
			count++;
			auto it = s.begin();
			while(*it < p[i].first && it!=s.end()){
				count--;
				it++;
			}
			s.erase(s.begin(),it);
			s.insert(p[i].second);
			if(count > ans) ans = count;
		}
		cout<<ans<<endl;
	}

	return 0;
}