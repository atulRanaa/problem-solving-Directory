#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 5e5 + 5;
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



int main() {


    ll k, l, r;
    cin >> k;
    cin >> l >> r;


    // if((r - l + 1) >= k)
    //     cout<< "OK";
    // else
    //     cout << "NG";
    bool f = false;
    for(int i = l; i <= r; i++) {
        if(i % k == 0)
            f = true;
    }


    if(f)
        cout << "OK\n";
    else
        cout << "NG\n";
    return 0;
}