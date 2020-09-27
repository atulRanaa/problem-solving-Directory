        #include <bits/stdc++.h>

        using namespace std;

        typedef long long ll;
        const ll N = 1e6+5;
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

multiset<int> sett;

void initialize(int n){
    for(int i = 1;i <=n;++i){
         id[i] = i;
         sz[i]=1; sett.insert(1);
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
    int p = findset(x), q = findset(y);
    if(p==q) return;
    if(sz[q] > sz[p]) swap(p,q);

        sett.erase( sett.find(sz[p]));
        sett.erase( sett.find(sz[q]));
        id[q]=p; sz[p]+=sz[q];

        sz[q]=-1;
        sett.insert(sz[p]);
}
int main(){

    fast;
    int n, m;
    cin >> n >> m;

    initialize(n);
    int x, y;

    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        combine(x, y);
    }

    cout << sett.size() - 1 << "\n";
    return 0;
}