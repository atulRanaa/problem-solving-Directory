#include <bits/stdc++.h>

        using namespace std;

        typedef long long ll;
        const ll N = 1e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector< vector<double> > matrix;
        typedef vector<int> vi;


const int MAX = 1e5 + 5;
int id[MAX];
int sz[MAX];
pair<int, int> min_max[MAX];

multiset<int> sett;
multiset<int> diff;

void initialize(int n, vector< int > &val){
    for(int i = 1; i <= n; ++i){
        id[i] = i;
        sz[i] = 1;
        sett.insert(1);
        min_max[i] = {val[i], val[i]};
        diff.insert(0);
    }
}

int findset(int x){
    while(id[x] != x){
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void combine(int x, int y){
    int p = findset(x);
    int q = findset(y);

    if(p == q) return;
    if(sz[q] > sz[p]) swap(p, q);

    sett.erase( sett.find(sz[p]));
    sett.erase( sett.find(sz[q]));
    id[q] = p;
    sz[p] += sz[q];
    sz[q] = -1;
    sett.insert(sz[p]);

    diff.erase( diff.find( min_max[p].S - min_max[p].F ));
    diff.erase( diff.find( min_max[q].S - min_max[q].F ));

    min_max[p] = {min(min_max[p].F, min_max[q].F), max(min_max[p].S, min_max[q].S)};

    diff.insert(min_max[p].S - min_max[p].F);
}

int main(){

    fast;
    int n;
    cin >> n;

    int x, y;

    vector< pair<int, int> > edge(MAX);
    for(int i = 1; i < n; i++){
        cin >> x >> y;
        edge[i] = {x, y};
    }
    vector< int > val(MAX);
    vector< int > ind(MAX);

    for(int i = 1; i <= n; i++) cin >> val[i];
    for(int i = 1; i <  n; i++) cin >> ind[i];

    initialize(n, val);

    vector< int > ans(MAX);
    for(int i = n - 1; i >= 1; i--) {
        ans[i] = *diff.rbegin();
        combine(edge[ ind[i] ].F, edge[ ind[i] ].S);
    }

    for(int i = 1; i < n; i++) cout << ans[i] << "\n";
    return 0;
}