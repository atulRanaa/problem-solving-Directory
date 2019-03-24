// spoj    
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
        typedef vector<vector<ll>> matrix;
        typedef vector<int> vi;


vi solve(vector<int> &v,int n, int m){
    bool f = true;
    for(int i=1; i<n; i++)
        if(v[i]!=v[i-1]){
            f = false;
            break;
        }
    
    if(f){
        int val = v[0];
        vi eq(n+m, 0);
        for(int i=0;i<n+m;i++) eq[i] = val;
        
        return eq;
    }

        vi diff;
        for(int i=1;i<n;i++)
            diff.push_back(v[i]-v[i-1]);
   
    vi V = solve(diff, n-1, m);
    int l = V.size(), i=n-1;
    while(i < l){
        v.push_back(v[i]+V[i]);
        i++;
    }
    //for(int e: v) cout<< e<<" "; cout<<"\n";
    return v;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    test{
        
        int n, m; cin >> n >> m;
        vector<int> ar(n);

        for(int i=0;i<n;i++) cin >> ar[i];
        vi V = solve(ar,n, m);

        for(int i=n; i <n+m;i++) cout<< V[i] <<" "; cout<<"\n";
    }
}