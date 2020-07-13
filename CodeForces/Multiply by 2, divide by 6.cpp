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


int main() {
    fast;

    ll x, y, n;
    test {
        cin >> n;

        ll two = 0, three = 0;
        while(n % 2 == 0) two++, n /= 2;
        while(n % 3 == 0) three++, n /= 3;

        if(n != 1) cout << -1 << "\n";
        else if(three < two) cout << -1 << "\n";
        else {
            cout << max(two, three) + abs(two - three) << "\n";
        }
    }
    return 0;
}