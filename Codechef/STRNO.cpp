#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6 + 5;
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
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;


int prime[N];

void sieve() {
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 1;

    for (int i = 2; i < N; i++) {
        if (prime[i] == 0) {
            for (int j = i; j < N; j += i) prime[j] = i;
        }
    }
}

ll powerOfPrimeDivisors(ll n) {
    ll cnt = 0;
    while(n % 2 == 0) { n /= 2; cnt++; }
    while(n % 3 == 0) { n /= 3; cnt++; }

    for (ll i = 5; i * i <= n; i = i + 6) {
        while(n % i == 0) { n /= i; cnt++; }
        while(n % (i+2) == 0) { n /= (i+2); cnt++; }

        if(i > n) break;
    }
    if(n > 1) cnt++;
    return cnt;
}

int main() {
    fast;

    ll x, k;
    test{
        cin >> x >> k;
        ll multiples = powerOfPrimeDivisors(x);
        // cout << multiples << " ";
        if(multiples >= k) cout << 1;
        else cout << 0;

        cout << "\n";
    }
}