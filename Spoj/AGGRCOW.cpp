// spoj      
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
        #define test ll cse;scanf("%lld",&cse);for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;
 
ll ar[N];

bool check(ll k,int n, int c){
    int ind=0;
    c--;
    for(int i=1;i<n;i++){
        if(ar[i]-ar[ind] >= k){
            c--;ind = i;
        }
    }

    if(c <= 0)
        return true;
    return false;
}
int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t; cin >> t;
    while(t-- > 0){
        int n,c; cin >> n >> c;
        

        for(int i=0;i<n;i++) cin >> ar[i];
        sort( ar , ar+n );

        //for(int i=0;i<n;i++) cout<< ar[i] <<" "; cout<<"\n";
        ll ans;
        ll l=0, r = 1234567890;
        ll mid;
        while(l <= r){
            mid = (l+r)>>1;
            
            if(check(mid, n,c)){
                l=mid+1;
                ans=mid;
                //cout<< mid <<"\n";
            }
            else
                r=mid-1;
        }
        cout << ans << "\n";
    }
    return 0;
}