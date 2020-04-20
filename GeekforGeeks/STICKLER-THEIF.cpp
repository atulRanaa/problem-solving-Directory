// geekforgeeks
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
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;

ll ar[N];
ll dp[N];
int n;
ll solve(int i){
    if(i >= n) return 0;
    if(dp[i] != 0) return dp[i]; 
    dp[i] = max( ar[i]+solve(i+2), solve(i+1));
    return dp[i];
}

int main(){

    fast;
    test{
        memset(dp,0,sizeof dp);

        cin>>n;
        for(int i=0;i<n;i++) cin >> ar[i];
        cout << solve(0) << "\n";
    }
    return 0;
}