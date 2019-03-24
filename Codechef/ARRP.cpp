#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll ar[1000005];
ll n;
int main(){
	int t; scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		unordered_map<ll, bool> sumH;
		for(int i=0;i<n;i++) scanf("%lld",&ar[i]);
		ll sum =0;
		for(int i=0;i<n;i++){
			sum += ar[i];
			sumH[ sum] = true;
		}
		printf("1");
		for(ll i=2;i<=n;i++){
			if(sum%i == 0){
				
				bool f = true;
				ll inc = sum/i;
				for(ll temp = inc;temp <= sum ; temp += inc){
					if(sumH.find(temp) == sumH.end()){
						f = false;
						break;
					}
				}
				if(f) printf("1");
				else printf("0");
			}
			else printf("0");
		}
		printf("\n");
	}
	return 0;
}