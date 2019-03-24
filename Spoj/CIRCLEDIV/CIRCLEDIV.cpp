//Count the maximum number of sections that lines cut the circle into, joining every pair of n arbitrary points on a circle.
// spoj
#include <stdio.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define MOD 1000000007

ll inv2, inv24;
ll modexp(ll x,ll n){
	ll res=1LL;
	while(n > 0){
		if(n&1) res = (res*x) % MOD;
		x = (x*x) % MOD;	n >>= 1; 
	}
	return res;
}
ll nCr(ll n, ll r){
	
	if(r > n) return 0LL;
	if(r== n) return 1LL;
	ll ans;
	ll a=1LL;
	ll b=(r==2)?(inv2):(inv24);

		for(ll i=n-r+1;i<=n;i++) a=(a*i) % MOD;
		ans = (a*b) % MOD;
	return ans;
}
int main(){
	inv2  = modexp(2 , MOD-2);
	inv24 = modexp(24, MOD-2);
	printf("%lld %lld\n",inv2,inv24);
	int points;
	int t; scanf("%d",&t);for(int i=1;i<=t;i++){
		scanf("%d",&points);
		ll temp = (nCr(points,2)+nCr(points,4)+1LL) % MOD;
		// if(temp < 0){
		// 	printf("Case %d: %lld\n",i,temp);
		// 	break;
		// }
		printf("Case %d: %lld\n",i,temp);
	}
	return 0;
}
