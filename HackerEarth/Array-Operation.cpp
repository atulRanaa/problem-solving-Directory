// hackerearth incom
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 5e5+5;
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

int prime[N];
int nod[N];
int Exp(ll x, ll n){
    ll ans = 1, X =x,N= n;
    while(N > 0){
        if(N&1) ans = (ans*X);
        X = (X*X);
        N >>= 1;
    }
    return ans;
}
int solve(ll num){

    unordered_map<int,int> mapp;
    while(num > 1){
        mapp[ prime[num]]++;
        num /= prime[num];
    }
    // number of factors
    int res = 1;for(auto ele: mapp) res *= (ele.S+1);

    // sum of divisors/factors
    // ll ans = 1;
    // for(auto ele: mapp){
    //     ll ai = ele.F;
    //     ll pi = ele.S;

    //     ans *= (Exp(ai,pi+1)-1)/(ai-1);
    // }
    return res;
}

void sieve(){
	memset(prime,0,sizeof(prime));
    prime[0] = prime[1] = 1;
    
    for(int i = 2; i <= N; i++){
        if(prime[i]==0){
            for(int j=i; j <= N;j+=i) prime[j] = i;
        }
    }
}
int main(){

    fast;
	sieve();
	memset(nod, 0,sizeof nod);
    
    int n,q; cin>>n>>q;

    int ar[N];
    int NOD[N];
    unordered_map< int , vector<int> > mapp;
    
    for(int i=1;i<=n;i++) cin>>ar[i];
    for(int i=1;i<=n;i++){
        NOD[i] = solve(ar[i]);

        nod[ ar[i] ] = NOD[i];
        mapp[ NOD[i] ].push_back(i);
    }
    for(int i=1;i<=n;i++) cout<<nod[ ar[i] ]<<" "; cout<<"\n";
    int type,l,r; ll a,b;
    for(int i=0;i<q;i++){
        cin>>type;

        if(type==1){
            cin>>l>>r>>a>>b;

            if(nod[a]==0) nod[a]=solve(a);
            if(nod[b]==0) nod[b]=solve(b);

            cout<<"Before\n";
            cout<<nod[a]<<":";
            if(mapp.find(nod[a])!=mapp.end())
                for(int e: mapp[ nod[a]]) cout<<e<<" ";
            cout<<"\n";
            cout<<nod[b]<<":";
            if(mapp.find(nod[b])!=mapp.end())
                for(int e: mapp[ nod[b]]) cout<<e<<" ";


            if(mapp.find(nod[a])!=mapp.end() && mapp[ nod[a] ].size() > 0){
                
                sort(all(mapp[ nod[a]]) );
                auto i1 = lower_bound(  mapp[ nod[a] ].begin(),
                                        mapp[ nod[a] ].end(),
                                        l);
                auto t= i1;
                while(t != mapp[ nod[a]].end()){
                    if(*t > r)
                        break;
                    mapp[ nod[b]].push_back(*t);
                    t++;
                }
                mapp[ nod[a]].erase(i1,t);
            }

            cout<<"After\n";
            cout<<nod[a]<<":";
            if(mapp.find(nod[a])!=mapp.end())
                for(int e: mapp[ nod[a]]) cout<<e<<" ";
            cout<<"\n";
            cout<<nod[b]<<":";
            if(mapp.find(nod[b])!=mapp.end())
                for(int e: mapp[ nod[b]]) cout<<e<<" ";
            cout<<"\n";
        }
        else{

            cin>>l>>r>>a;
            if(nod[a]==0) nod[a]=solve(a);

            int res=0;

            cout<<nod[a]<<":";
            if(mapp.find(nod[a])!=mapp.end())
                for(int e: mapp[ nod[a]]) cout<<e<<" ";
            cout<<"\n";
            if(mapp.find(nod[a])!=mapp.end() && mapp[nod[a]].size() > 0){
                sort(all(mapp[ nod[a]]) );
                auto i1 = lower_bound(  mapp[ nod[a] ].begin(),
                                        mapp[ nod[a] ].end(),
                                        l);
                auto i2 = upper_bound(  mapp[ nod[a] ].begin(),
                                        mapp[ nod[a] ].end(),
                                        r);
                res = i2-i1;
            }

            cout << res <<"\n";
        }
    }
    vector< pair<int,int> > val;

    for(auto e: mapp){
        int f=e.F;
        for(int ind: e.S) val.push_back({ind, f});
    }

    sort(all(val));

    for(pair<int,int> e: val)
        cout<< e.S <<" ";
    cout<<"\n";
    return 0;
}
