#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e7 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pis pair<ll,string>
#define F first
#define S second
#define LCM(a,b) ((a*b)/__gcd(a,b))
#define inf 1e10
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;


int prime[N];
ll solve(ll num){

    unordered_map< int, int> mapp;
    while(num > 1){
        mapp[prime[num]]++;
        num /= prime[num];
    }
    // number of factors
    ll res = 1;
    for(auto ele: mapp) res *= (ele.S + 1);

    // sum of divisors/factors
    // ll ans = 1;
    // for(auto ele: mapp){
    //     ll ai = ele.F;
    //     ll pi = ele.S;

    //     ans *= (Exp(ai,pi+1)-1)/(ai-1);
    // }
    return res;
}

void sieve(int n){
    memset(prime,0,sizeof(prime));
    prime[0] = prime[1] = 1;

    for(int i = 2; i <= n; i++){
        if(prime[i]==0){
            for(int j=i; j <= N;j+=i) prime[j] = i;
        }
    }
}


ll inv2;
ll modexp(ll x,ll n){
    ll res=1LL;
    while(n > 0){
        if(n&1) res = (res*x) % MOD;
        x = (x*x) % MOD;    n >>= 1;
    }
    return res;
}
ll nCr(ll n, ll r){

    if(r > n) return 0LL;
    if(r== n) return 1LL;
    ll ans;
    ll a=1LL;
    ll b=modexp(r,MOD-2);

    for(ll i = n - r+1;i<=n;i++) a = (a*i) % MOD;
    ans = (a*b) % MOD;
    return ans;
}

ll modInverse(ll num, ll p) {
    return modexp(num, p - 2);
}

ll nCrModPFermat(ll n, ll r, ll p) {
    if (r == 0)
        return 1;

    ll fac[n + 1];
    fac[0] = 1;
    for (ll i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main() {
    fast;

    ll n, m; cin >> n >> m;

    ll per = nCrModPFermat(m, n, MOD);
    ll totalPer = (per * per) % MOD;
    ll ans = (totalPer - per + MOD) % MOD;
    cout << per << "\n";
    cout << ans % MOD << "\n";
    return 0;
}