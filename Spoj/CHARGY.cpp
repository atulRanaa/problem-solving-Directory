
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

// ll distinct_subsequence(string s){
//     vector<int> occur(26,-1);
//     int n = s.length();

//     ll dp[n+1];
//     dp[0]=1;

//     for(int i=1;i<=n;i++){
//         dp[i] = (2*dp[i-1]) % MOD;
//         int ind = occur[ s[i-1]-'A' ];
//         if(ind != -1){
//             dp[i] = (dp[i]-dp[ ind]+MOD) % MOD;
//         }
//         occur[ s[i-1]-'A']=(i-1);
//     }

//     return dp[n];
// }


int solve(int n,vector<int> ar){
    for(int i=0;i<n;i++) if(ar[i]==-1){
        if(i-1>=0 && ar[i-1]==1){
            ar[i]=5,ar[i-1]=5;
        }
        else if(i+1<n && ar[i+1]==1){
            ar[i]=5,ar[i+1]=5;
        }
    }
    vector<int> next;
    for(int i=0;i<n;i++) if(ar[i]!=5) next.push_back(ar[i]);

    int ans=next.size();
    if(next.size() < n) ans = solve(next.size(),next);

    return ans;
}
int main(){
    
    fast;
    int n;  cin >>n;
    vector<int> ar(n,0);
    for(int i=0;i<n;i++) cin >> ar[i];

    
    int ans = solve(n, ar);
    cout<<ans<<"\n";
    return 0;
}