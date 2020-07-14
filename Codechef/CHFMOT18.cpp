// codechef
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

int main(){
    fast;

    ll n, s;
    test{
        cin >> s >> n;

        int cnt = 0;
        for(int i = n; i >= 2; i = ((s&1)?(s-1):s) ) {
            cnt += (s / i);
            s = s % i;
        }

        if(s) cnt += s;

        cout << cnt << "\n";
    }
    return 0;
}