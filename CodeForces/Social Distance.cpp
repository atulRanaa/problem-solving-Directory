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


    test {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        queue< int > Q;
        vector< int > V;
        // 0, 1, 2, 3, 4, 5

        for(int i = 0; i < n; i++) if(s[i] == '1') {
            V.push_back(i);
        }

        int m = V.size();
        for(int i = 0; i)
    }
    return 0;
}