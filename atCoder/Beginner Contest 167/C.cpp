#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 5e5 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define pii pair<ll,ll>
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
typedef vector< vector<ll> > array_2D;
typedef pair<ll, pair<ll, ll> > ppi;
typedef vector<ll> vi;



int main() {


    ll n, m, k;

    cin >> n >> m >> k;

    vector< vector<ll> > Book(n, vector< ll > (m + 1, 0));

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j <= m; j++) cin >> Book[i][j];
    }


    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j <= m; j++) cout << Book[i][j] << " ";
    //     cout << "\n";
    // }

    ll ans = INT_MAX;
    for(ll i = 0; i < (1 << n); i++) {
        // cout << i << "\n";

        vector< ll > Buy(m + 1, 0);
        for(int j = 0; j < n; j++) {

            int flag = i & (1 << j);
            // cerr << "flag " << flag << " j " << j << "\n";
            if(flag) {

                for(int x = 0; x <= m; x++) {
                    // cout << Buy[x] << " " << Book[j][x] << "\n";
                    Buy[x] += Book[j][x];
                }
                // cout << "Hi\n";
            }
        }

        bool f = true;
        for(int j = 1; j <= m; j++) if(Buy[j] < k) f = false;

        if(f) {
            ans = min(ans, Buy[0]);
        }
    }


    if(ans != INT_MAX) {
        cout << ans << "\n";
    }
    else
        cout << -1 << "\n";

    return 0;
}