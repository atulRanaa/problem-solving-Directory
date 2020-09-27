        #include <bits/stdc++.h>

        using namespace std;

        typedef long long ll;
        const ll N = 3e5 +5;
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



ll segtree[4 * N] = {0};
ll ar[N];


ll dp[N] = {0};
ll ml[N] = {0};


void construct_segment_tree(int n) {

    for (int i = 0; i < n; i++) segtree[n + i] = a[i];
    for (int i = n - 1; i >= 1; i--) segtree[i] = max(segtree[2 * i],  segtree[2 * i + 1]);
}

void update(int pos, int value, int n) {
    pos += n;
    segtree[pos] = value;

    while (pos > 1) {
        pos >>= 1;
        segtree[pos] = max(segtree[2 * pos], segtree[2 * pos + 1]);
    }
}

ll rangemaxQuery(ll pos,ll low,ll high,ll qlow,ll qhigh){
    if(qlow <= low && qhigh >= high)
        return segtree[pos];

    if(qlow > high || qhigh < low)
        return 0;
    ll mid = ((low + high) >> 1);
    ll l = rangemaxQuery(2 * pos + 1,low,mid,qlow,qhigh),
    ll r = rangemaxQuery(2*pos+2,mid+1,high,qlow,qhigh)
    return max(l, r);
}


int main(){

    fast;

    int n, k;
    cin >> n >> k;
    for(int i = 0 ; i < n; i++) cin >> ar[i];


    for (int i = 0; i < n; i++) {

        int lower = max(0, ar[i] - k);
        int upper = min(N, ar[i] + k);

        dp[i] = max(dp[i],  rangemaxQuery(0, 0, N + 1, lower, upper));
        ml[ ar[i] ] = max(dp[i], ml[ ar[i] ]);


        update(ar[i], ml[ ar[i] ], n);
    }

    int ans = *max_element(dp, dp + n);

    return 0;
}