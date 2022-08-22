// spoj      incom
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

int LISlength(vector<int> &v) {  
    if (v.size() == 0) return 0;  
    vector<int> tail(v.size(), 0);  
    vector<int> dp(v.size(),  0);
    int length = 1; // always points empty slot in tail  
    
    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {  
        if (v[i] > tail[length-1]){  
            tail[length++] = v[i];
            //cout << length <<":";
            dp[i] = length;
        }
        else
        { 
            auto it = lower_bound(tail.begin(), tail.begin()+length, v[i]); 
            *it = v[i];
            dp[i] = (int)distance(tail.begin(), it);

            //cout << dp[i]<<" ";
        }
        for(int j=0;j<length;j++) cout<<tail[j]<<" "; cout<<"\n";
    }
    //for(int e: dp) cout << e <<" "; cout<<"\n";
    return length;  
}

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t-- > 0) {
        int n; cin >> n;
        vector<int> v(n, 0);

        for(int i=0;i<n;i++) cin >> v[i];
        cout << LISlength(v) << "\n";
    }
    return 0;
}
