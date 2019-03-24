#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n; cin>>n;
	int mark[n]; 

	for(int i=0;i < n; i++) cin>>mark[i];
	vector< ll > price[6];
	ll temp;
	for(int i=0;i < n; i++){
		cin>>temp;
		price[ mark[i] ].push_back(temp);
	}

	vector< ll > comb[32];
	for(int c = 1; c < 32 ; c++){

		int j=0;
		int it = c;

		while( it > 0){
			j++;
			if(it & 1){
				for(int i=0;i < price[j].size(); i++)
					comb[c].push_back( price[j][i]);

			}
			it >>= 1;
		}
	}
	for(int i=1;i < 32; i++)
		sort(comb[i].begin(), comb[i].end());

	int q; cin>>q;
	int d,k,t,match;
	while(q--){
		match = 0;
		cin>>d;
		for(int i=0;i < d;i++){
			cin>>t;
			match += 1<<(t-1);
		}
		cin>>k;
		
		if(comb[match].size() < k) cout<<-1<<endl;
		else cout<<comb[match][k-1]<<endl;
	}
	return 0;
}