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

    int n; cin >> n;
    memset(A, 0, sizeof(A));

    for(int i = 1; i <= 100; i++) for(int j = 1; j <= 100; j++) for(int k = 1; k <= 100; k++) {
        ll value = i*i + j*j + k*k + i*j + j*k + k*i;
        A[value]++;
    }

    for(int i = 1; i <= n; i++) cout << A[i] << "\n";
    return 0;
}