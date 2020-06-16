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
typedef vector<int> vi;


int ar[N];
int main() {
    fast;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> ar[i];

    unordered_map<int, int> M;
    for(int i = 0; i < n; i++) M[ar[i]]++;


    int maxE = *max_element(ar, ar + n);
    for(int i = 0; i < n; i++) {
        for(int j = 2 * ar[i]; j <= maxE; j += ar[i]) {
            if(M.find(j) != M.end())
                M[j]++;
        }
    }
    // cout << M.size() << "\n";

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(M[ ar[i] ] == 1) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}