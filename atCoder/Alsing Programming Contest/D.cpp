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


ll countOperations(ll number) {
    int operation_count = 0;

    while(number > 0) {
        ll bit = SETBIT(number);
        number %= bit;
        operation_count++;
    }
    return operation_count;
}


int main() {
    fast;

    int n; cin >> n;
    string s; cin >> s;


    int cnt = 0;
    for(int i = 0; i < n; i++) if(s[i] == '1') cnt++;

    if(cnt == 0) {
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
    }
    else if(cnt == 1) {

        // pow of 2
        A[0] = 1, B[0] = 1;
        for(ll i = 1; i < N; i++)  {
            B[i] = (B[i-1] * 2) % (cnt + 1);
        }

        ll _10 = 0, _01 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                _01 = (_01 + B[n - 1 - i]) % (cnt + 1);
            }
        }


        for(int i = 0; i < n; i++) {
            if(s[i] == '1') cout << 0 << "\n";
            else {
                // refer to B, 0 -> 1
                ll value = (_01 + B[n - 1 - i] + cnt + 1) % (cnt + 1);
                cout << countOperations(value) + 1<< "\n";
            }
        }
    }
    else {

        // pow of 2
        A[0] = 1, B[0] = 1;
        for(ll i = 1; i < N; i++)  {
            A[i] = (A[i-1] * 2) % (cnt - 1);
            B[i] = (B[i-1] * 2) % (cnt + 1);
        }

        ll _10 = 0, _01 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                _10 = (_10 + A[n - 1 - i]) % (cnt - 1);
                _01 = (_01 + B[n - 1 - i]) % (cnt + 1);
            }
        }


        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                // refer to A, 1 -> 0
                ll value = (_10 - A[n - 1 - i] + cnt - 1) % (cnt - 1);
                cout << countOperations(value) + 1 << "\n";
            }
            else {
                // refer to B, 0 -> 1
                ll value = (_01 + B[n - 1 - i] + cnt + 1) % (cnt + 1);
                cout << countOperations(value) + 1 << "\n";
            }
        }

    }

    return 0;
}