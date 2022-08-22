// codechef
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
        #define test ll cse;scanf("%lld",&cse);for(ll i=1;i<=cse;i++)
        #define PI 3.14159265
ll inv2;
ll modexp(ll x,ll n){
    ll res=1LL;
    while(n > 0){
        if(n&1) res = (res*x) % MOD;
        x = (x*x) % MOD;    n >>= 1; 
    }
    return res;
}
ll nCr(ll n, ll r){
    
    if(r > n) return 0LL;
    if(r== n) return 1LL;
    ll ans;
    ll a=1LL;
    ll b=(r==2)?(inv2):(modexp(r,MOD-2));

        for(ll i=n-r+1;i<=n;i++) a=(a*i) % MOD;
        ans = (a*b) % MOD;
    return ans;
}
ll a[N];
ll ways[N];
void pre(){
    ll res=1;
    ways[0]=1;
    for(int i=1;i<N;i++){
        ways[i] = res;
        if(i&1) res = (res*i)%MOD;
    }
    //for(int i=0;i<20;i++) cout<<ways[i]<<" "; cout<<"\n";
}

int main(){
        inv2 = modexp(2,MOD-2);
        int n;
        pre();
        test{
            scanf("%d",&n);
            for(int i=0;i<n;i++) scanf("%lld",a+i);
            
            map<ll, ll > mapp;
            vector<ll> cnt;
            for(int i=0;i<n;i++) mapp[ a[i]]++;
            for(auto e: mapp) cnt.push_back(e.S);
            
            ll ans = 1;
            for(int i=0;i< cnt.size();i++){
                ans *= ways[ cnt[i] ];
                ans %= MOD;
                if(cnt[i]&1){
                    ans *= (cnt[i]*cnt[i+1])%MOD;
                    ans %= MOD;
                    cnt[i+1]--;
                }
            }
            //for(int e: cnt) cout<<e<<" "; cout<<"\n";
            printf("%lld\n", ans);

        }
        return 0;
}