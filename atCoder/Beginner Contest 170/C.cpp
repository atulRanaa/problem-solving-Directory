#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e3 + 5;
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



int main() {
    fast;

    ll ar[N], n, x, tmp;
    unordered_map<int, bool> M;

    cin >> x >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        M[tmp] = true;
    }

    int l = x, r = x, ans;
    while( (M[l] && M[r]) ) l--,r++;

    if(!M[r]) ans = r;
    if(!M[l]) ans = l;


    cout << ans << "\n";

    return 0;
}