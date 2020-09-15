// hackerearth
        #include <bits/stdc++.h>

        using namespace std;

        typedef long long ll;
        const ll N = 1e6+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector< vector<double> > matrix;
        typedef vector<int> vi;


ll modexp(ll x, ll n){
    ll res = 1LL;
    while(n > 0){
        if(n&1) res = (res * x) % MOD;
        x = (x * x) % MOD;
        n >>= 1;
    }
    return res;
}

int main(){

    fast;
    ll n;
    cin >> n;

    if(n < 2) cout << 0 << "\n";
    else {
        ll A = modexp(10, n) % MOD;
        ll B = modexp(9, n) % MOD;
        ll C = modexp(8, n) % MOD;

        cout << (A - B - B + C + MOD + MOD) % MOD << "\n";
    }

    return 0;
}
