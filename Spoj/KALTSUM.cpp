
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
        #define test ll cse;cin>>cse;for(ll I=1;I<=cse;I++)
        #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        #define PI 3.14159265
        #define MAXN 1300005
        #define pb      push_back
        #define mp      make_pair


ll ar[N];
int main(){
        //fast;
       

        ll n,q; scanf("%lld %lld",&n,&q);//cin >> n >> q;
        for(int i=1;i<=n;i++) scanf("%lld", ar+i); //cin >> ar[i];
        for(int i=1;i<=n;i++) ar[i]+=ar[i-1];

        ll l,r,k;
        while(q > 0){
                scanf("%lld %lld %lld",&l,&r,&k);//cin >>l>>r>>k;
                int cnt=1;

                ll sum=0;
                for(ll i=l+k-1; i<=r;i+=k){
                        if(cnt){
                                sum += (ar[i]-ar[i-k]);
                        }
                        else{
                                sum -= (ar[i]-ar[i-k]);
                        }
                        cnt^=1;
                }

                printf("%lld\n",sum); //cout << sum<<"\n";
                q--;
        }
        return 0;
}