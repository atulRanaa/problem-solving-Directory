// codechef      
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long int ll; 
        const ll N = 3e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e18
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;

int main() {
    fast;
    test{

        ll n,m,k,l; cin>>n>>m>>k>>l;
        ll ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar,ar+n);

        ll i=0,j=0;
        ll tim=inf;
        while(i <= k && m>=1){
            i += l;
            while(j < n && ar[j]< i){
                tim = min(tim, (m)*l+i-ar[j]);
                m+=1;
                j++;
            }
            m-=1;
            tim = min(tim, (m+1)*l);
            while(j < n && ar[j]== i){
                m+=1;
                j++;
            }
            cout<<m<<" ";
        }
        if(i >= k){
            tim = min(tim , (m+1)*l + k-i);
        }
        cout << tim <<"\n";
    }
    return 0;
}