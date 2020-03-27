

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
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;


ll dp[N] = {0};
int main(){
    fast;

    ll n, k;

    cin >> n >> k;
    dp[0] = 1L;

    for(int i=1;i<=n;i++) for(int jump=1;((i-jump)>=0 && jump<=k);jump++)
        dp[i]=(dp[i]+dp[i-jump])%MOD;

    cout << dp[n] << "\n";
    return 0;
}