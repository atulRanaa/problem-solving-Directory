#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 3e5 + 5;
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


ll ar[N];

int main() {


    ll n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> ar[i];


    ll ans[N];
    vector< ll > visited(N, -1);

    ll town = 1;
    ll itr = 0;

    while (visited[town] == -1) {

        visited[town] = itr;
        ans[itr++] = town;

        town = ar[town];
    }

    // cout << itr << "\n";
    // for(int i = 0; i < itr; i++) cout << ans[i] << " "; cout << "\n";

    ll offset = visited[town];

    if (k >= itr)
        cout << ans[ (k - offset) % (itr - offset) + offset] << "\n";
    else
        cout << ans[ k ] << "\n";

    return 0;
}