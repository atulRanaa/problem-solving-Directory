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



const int MAXN = 1005;

ll ar[5];
int main() {
    fast;

    ll a, b, c, d, e, p;
    test {
        cin >> a >> b >> c >> d >> e >> p;
        ll work = p * (a + b + c + d + e);
        if(work <= 24 * 5) cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}