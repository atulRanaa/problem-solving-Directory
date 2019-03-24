#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
	int t; scanf("%d",&t);
	ll n,k;
	while(t--){
		ll n,k; scanf("%lld %lld",&n,&k);
		ll ar[n];
		for(int i=0;i<n;i++) scanf("%lld",&ar[i]);
		ll sum =0;
		for(int i=0;i<n;i++) sum += ar[i];
		int ans =0;
		for(int i=0;i<n;i++){

			if(sum-ar[i] < ar[i]+k) ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}