#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5;
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
    int n;
    ll A[N], B[N];
    test {
        cin >> n;

        A[0] = B[0] = 0;
        for(int i = 1; i <= n; i++) cin >> A[i];
        for(int i = 1; i <= n; i++) cin >> B[i];

        ll dist = 0, sA = 0, sB = 0;
        for(int i = 1; i <= n; i++) {

            if(A[i] == B[i] && A[i-1] == B[i-1]) {
                dist += A[i];
            }

            A[i] += A[i-1];
            B[i] += B[i-1];
        }

        cout << dist << "\n";

    }
    return 0;
}