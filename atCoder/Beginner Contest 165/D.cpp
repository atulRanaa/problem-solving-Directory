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

ll binaryExponentiation(ll x, ll n){
    ll result = 1LL;
    while(n > 0){
        if(n&1) result *= x;
        x = x*x;
        n >>= 1;
    }
    return result;
}
// 1000000000000000000


int main() {

    ll a, b, n;
    cin >> a >> b >> n;


    ll div = n / b;
    ll x;

    if(div == 0)
        x = n % b;
    else
        x = (div - 1)*b + (b-1);

    ll part1 = (a * x) / b;
    ll part2 = a * (x / b);

    cout << part1 - part2 << "\n";

    return 0;
}