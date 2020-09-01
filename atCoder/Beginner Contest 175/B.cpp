#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e7 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pis pair<ll,string>
#define F first
#define S second
#define LCM(a,b) ((a*b)/__gcd(a,b))
#define inf 1e10
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;



ll ar[105];
int main() {
    fast;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> ar[i];

    int cnt = 0;
    for(int i = 0; i < n; i++) for(int j = i + 1; j < n; j++) for(int k = j + 1; k < n; k++) {

        if((ar[i] + ar[j] > ar[k]) && (ar[j] + ar[k] > ar[i]) && (ar[i] + ar[k] > ar[j])
            && ar[i] != ar[j] && ar[j] != ar[k] && ar[i] != ar[k]) {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}