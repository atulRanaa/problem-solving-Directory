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


int A[N], B[N];
multiset< int > garden[N];

multiset< int > ans;

void erase(int value, multiset< int > &my_multiset) {
    auto itr = my_multiset.find(value);
    if(itr != my_multiset.end()){
        my_multiset.erase(itr);
    }
}


int main() {
    fast;


    // multiset< int > abc({1, 2, 2, 3, 3, 3});
    // erase(3, abc);
    // erase(4, abc);
    // for(auto it: abc) cout << it << " "; cout << "\n";


    int n, q; cin >> n >> q;
    int c, d;
    for(int i = 1; i <= n; i++) cin >> A[i] >> B[i];

    for(int i = 1; i <= n; i++) garden[ B[i] ].insert( A[i] );
    for(int i = 1; i <  N; i++) {
        if(!garden[ i ].empty()) ans.insert( *garden[i].rbegin() );
    }

    for(int i = 1; i <= q; i++) {
        cin >> c >> d; // infant movement

        int to = B[c], fo = d;

        if(!garden[to].empty()) {
            int past_rating = *garden[ to ].rbegin();
            erase(past_rating, ans);
        }

        if(!garden[fo].empty()) {
            int past_rating = *garden[ fo ].rbegin();
            erase(past_rating, ans);
        }

        erase(A[c], garden[ to ]);
        garden[ fo ].insert( A[c] );


        if(!garden[to].empty()) {
            int new_rating = *garden[ to ].rbegin();
            ans.insert( new_rating );
        }

        if(!garden[fo].empty()) {
            int new_rating = *garden[ fo ].rbegin();
            ans.insert( new_rating );
        }

        B[c] = d;
        // for(auto it: garden[to]) cout << it << " "; cout << "\n";
        // for(auto it: garden[fo]) cout << it << " "; cout << "\n";
        // for(auto it: ans) cout << it << " "; cout << "\n";
        cout << *ans.begin() << "\n";
    }

    return 0;
}