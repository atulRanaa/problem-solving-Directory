#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pis pair<ll,string>
#define F first
#define S second
#define LCM(a,b) ((a*b)/__gcd(a,b))
#define inf 1e15
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define SETBIT(x) __builtin_popcountll(x)
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;

ll A[N], B[N];


ll exp(ll x, ll n, ll mod){
    ll ans = 1LL, X = x, N = n;
    while(N > 0){
        if(N & 1) ans = (ans * X) % mod;
        X = (X * X) % mod;
        N >>= 1;
    }
    return ans;
}

int main() {
    fast;

    ll l, r, d;

    cin >> l >> r >> d;
    int cnt = 0;
    for(int i = l; i <= r; i++) if(i % d == 0) cnt++;

    cout << cnt << "\n";
    return 0;
}