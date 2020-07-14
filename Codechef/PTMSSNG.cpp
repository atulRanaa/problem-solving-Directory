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


int main() {
    fast;

    int k;
    int n;
    test {
        cin >> n;

        int ver = 4 * n - 1;
        int x, y;
        // unordered_map<int, int> X, Y;
        int X = 0, Y = 0;
        for(int i = 0 ; i < ver; i++) {
            cin >> x >> y;
            // X[x]++;
            // Y[y]++;
            X ^= x, Y ^= y;
        }
        cout << X << " " << Y << "\n";

    }
    return 0;
}