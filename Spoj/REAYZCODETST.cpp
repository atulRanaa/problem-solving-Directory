        
// spoj
        #include <cstring>
        #include <algorithm>
        #include <iostream>
        #include <stdio.h>
        #include <map>
        #include <unordered_map>
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e6+5; 
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test int cse;scanf("%d",&cse);for(int tcse=1;tcse<=cse;tcse++)

ll ar[N];
ll modexp(ll x,ll n){
        ll res = 1;
        while(n > 0){
                if(n&1) res = (res*x) % MOD;
                x = (x*x) % MOD;    n >>= 1; 
        }
        return res;
}
int main(){
        ll n,x;
        test{
                scanf("%lld %lld",&n,&x);
                for(int i=0;i<n;i++) scanf("%lld",ar+i);

                map<ll, int> mapp;
                ll cnt=0;
                for(int i=0;i<n;i++) mapp[ ar[i]]++;
                for(auto e: mapp){
                        ll val = e.F;
                        ll count = e.S;
                        //cout<< val << " " << count <<"\n";
                        if(mapp[ val-x] && val==val-x)
                                cnt += ((count)*(count-1));
                        else if(mapp[val-x] && val!=val-x)
                                cnt += count*mapp[val-x];
                }
                printf("Case %d: %lld\n",tcse , cnt);
        }
        return 0;
}