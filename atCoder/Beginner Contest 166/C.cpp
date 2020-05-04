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
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector< vector<int> > array_2D;
typedef pair<int, pair<int, int> > ppi;
typedef vector<int> vi;

vector< int > adj[N];

ll h[N];
int main() {
    int n, m;

    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> h[i];

    int u, v;
    for(int i = 1; i <= m; i++) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        bool f = true;

        for(auto &v: adj[i]) {
            if(h[v] >= h[i]) {
                f = false;
                break;
            }
        }

        if(f) {
            // cout << i << "\n";
            cnt++;
        }
    }

    cout << cnt << "\n";
    return 0;
}