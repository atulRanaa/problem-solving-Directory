

// hackerearth
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e6+5;
        const ll MOD = 1000000007;
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

int main(){
    fast;
    ll n; cin >> n;
    ll ar[10][10];
    for(int i=0;i<10;i++) for(int j=0;j<10;j++) cin >> ar[i][j];

    // unordered_map< ll, unordered_set<ll> > dislike;
    set< pair<ll, ll> > pairDis;
    for(int i=0;i<10;i++) for(int j=1;j<10;j++) {
        // dislike[ ar[i][0] ].insert( ar[i][j] );
        // dislike[ ar[i][j] ].insert( ar[i][0] );
        ll s = min(ar[i][0], ar[i][j]);
        ll l = max(ar[i][0], ar[i][j]);
        pairDis.insert( {s, l} );
    }

    ll disGuys = pairDis.size();
    // cout << disGuys << "\n";
    ll ans = (n*(n-1))/2 - disGuys;

    // ll doubleCount = 0;
    // for(auto ele: dislike) {
    //  // cout << ele.first << " " << ele.second.size() << "\n";
    //  // doubleCount += (n - 1 - ele.second.size());
    // }
    cout << ans << "\n";

    return 0;
}