// spoj    
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
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;

ll ar[N];

ll check(ll mid,ll n){
    ll sum=0;
    for(int i=0;i<n;i++)
        if(ar[i] > mid) sum+=(ar[i]-mid);
    return sum;
}
int main(){
    fast;

    ll n,k; cin>>n>>k;
    for(int i=0;i<n;i++) cin>>ar[i];

    ll l=0, r = *max_element(ar,ar+n);
    ll ans,mid;
    while(l<=r){
        mid = (l+r)>>1;
        if( check(mid,n) >=k){
            ans = mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout << ans<<"\n";
}