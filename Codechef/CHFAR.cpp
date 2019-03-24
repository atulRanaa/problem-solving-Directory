// codechef      
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 3e5+5;
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
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;

int main() {
    fast;
    int ar[10004];
    test{

        // int n; cin>>n;
        // if(n==2010||n==2015||n==2016||n==2017||n==2019)
        //     cout<< "HOSTED\n";
        // else
        //     cout<<"NOT HOSTED\n";
        int n,k; cin>>n>>k;
        for(int i=0;i<n;i++) cin>>ar[i];

        int cnt=0;
        for(int i=0;i<n;i++)
            if(ar[i] > 1) cnt++;   

        if(cnt <= k) cout<<"YES\n"; else cout<<"NO\n";
    }
    return 0;
}