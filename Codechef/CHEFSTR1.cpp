#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define LCM(a,b) ((a*b)/__gcd(a,b))
#define inf 1e15
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;


ll ar[N];
int main() {
    fast;

    test {
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> ar[i];

        ll ans = 0;
        for(int i = 1; i < n; i++) {
            ans += abs(ar[i] - ar[i-1]) - 1;
        }

        cout << ans << "\n";
    }
    return 0;
}