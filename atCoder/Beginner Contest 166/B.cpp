#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e3 + 5;
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

vector< int > snuke[N];
int main() {

    int n, k;
    cin >> n >> k;

    int snukes, snukes_index;
    for(int i = 1; i <= k; i++) {
        cin >> snukes;
        for(int j = 0; j < snukes; j++) {
            cin >> snukes_index;
            snuke[ snukes_index ].push_back(i);
        }
    }


    int cnt = 0;

    for(int i = 1; i <= n; i++)
        if(snuke[i].size() == 0) cnt++;

    cout << cnt << "\n";

    return 0;
}