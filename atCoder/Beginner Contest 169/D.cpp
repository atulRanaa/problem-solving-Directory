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


bool isPrime(ll n) {
    if(n <= 1) return false;
    if(n <= 3) return true;

    if(n % 2 == 0) return false;
    if(n % 3 == 0) return false;

    for(ll i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

unordered_map< ll, ll > powerOfPrimeDivisors(ll number) {
    unordered_map< ll, ll > P;

    ll n = number;
    ll sqrtn = (ll)sqrt(n + 10);

    while(n % 2 == 0) { n /= 2; P[2]++;}
    while(n % 3 == 0) { n /= 3; P[3]++;}

    for (ll i = 5; i <= sqrtn; i = i + 6) {
        while(n % i == 0) { n /= i; P[i]++;}
        while(n % (i+2) == 0) { n /= (i+2); P[i + 2]++;}
    }

    if(n != 1) P[n]++;
    return P;
}

int prime[N];

void sieve() {
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 1;

    for (int i = 2; i < N; i++) {
        if (prime[i] == 0) {
            for (int j = i; j < N; j += i) prime[j] += 1;
        }
    }
}


int main() {
    fast;

    // sieve();
    ll n; cin >> n;

    if(n <= 1)
        cout << 0 << "\n";
    else if( isPrime(n) )
        cout << 1 << "\n";
    else {
        unordered_map< ll, ll > primefactor = powerOfPrimeDivisors(n);

        int ans = 0;
        for(auto e: primefactor) {
            ll powerOfDiv = e.second;

            for(ll i = 1; powerOfDiv >= i; i++) {
                ans++;
                powerOfDiv -= i;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}