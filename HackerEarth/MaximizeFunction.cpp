

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

ll n,k,ar[N], ans = -1;
ll S(ll y){
    ll res = 0;
    for(ll i=0;i<n;i++) res += max(0LL, ar[i] - y*(i+1));
    // cout << "S: " << res << "\n";
    return res;
}
void binarySearch(ll l,ll r){
    ll res;
    while(l <= r){
        ll mid = (l+r)>>1;
        res = S(mid);
        // cout << mid << " " << res << " " << k << "\n";
        if(res >= k){ ans = mid; l = mid+1;}
        else
            // res < k
            r = mid-1;
    }
}
ll binaryExponentiation(ll n, ll x){
    ll result = 1LL;
    while(n > 0){
        if(n&1) result *= x;
        x = x*x;
        n >>= 1;
    }
    return result;
}

int main(){
    fast;
    test{
        cin >> n >> k;
        for(int i=0;i<n;i++) cin>>ar[i]; // for(int i=0;i<n;i++) cout<<ar[i]<<" "; cout << "\n";
        binarySearch(0, 1000000000005L);
        cout << ans << " " << S(ans) << "\n";
    }
    return 0;
}