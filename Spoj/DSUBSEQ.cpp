
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e5+5;
        #define all(x) x.begin(),x.end()
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll i=1;i<=cse;i++)
        #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        #define PI 3.14159265
        #define MAXN 10000001

ll distinct_subsequence(string s){
    vector<int> occur(26,-1);
    int n = s.length();

    ll dp[n+1];
    dp[0]=1;

    for(int i=1;i<=n;i++){
        dp[i] = (2*dp[i-1]) % MOD;
        int ind = occur[ s[i-1]-'A' ];
        if(ind != -1){
            dp[i] = (dp[i]-dp[ ind]+MOD) % MOD;
        }
        occur[ s[i-1]-'A']=(i-1);
    }

    return dp[n];
}
int main(){
    
    fast;
    test{
        string s; cin >> s;
        cout << distinct_subsequence(s) << "\n";
    }   
    return 0;
}