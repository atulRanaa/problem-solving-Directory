// (((summation of ETF(d)) + 1)*n)/2.
// spoj
		#include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e6+5;
        #define all(x) x.begin(),x.end()
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;scanf("%lld",&cse);for(ll i=1;i<=cse;i++)
        #define PI 3.14159265

ll etf[N];
ll ans[N];
void seive(){
	memset(ans, 0 ,sizeof ans);
	for(int i=0;i<N;i++) etf[i]=i;

	for(int i=2;i<N;i++){
		if(etf[i]==i)
			for(int j=i;j<N;j+=i) etf[j] = (etf[j]-etf[j]/i);
	}
	
	for(int i=1;i<N;i++)
		for(int j=i;j<N;j+=i) ans[j] += (ll)i*etf[i];
}
int main(){
	ll n;
	seive();
	test{
		scanf("%lld",&n);
		printf("%lld\n", (n*(ans[n]+1)) /2);
	}
	return 0;
}