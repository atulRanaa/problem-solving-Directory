// spoj
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long int ll; 
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
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;

    ll BIT1[N];
    ll BIT2[N];

ll get(ll BIT[],int ind){ 
    ll x = 0;
    while(ind > 0){
        x += BIT[ind];  ind -= ind & (-ind);
    }
    return x;
}
 
void updateBIT(ll BIT[],int n, int ind, ll val){ 
    while(ind <= n){
        BIT[ind] = (BIT[ind]+val);  ind += ind & (-ind);
    }
}

int main(){
    fast;
    test{
        memset(BIT1, 0, sizeof BIT1);
        memset(BIT2, 0, sizeof BIT2);
        int n,m; cin>>n>>m;
        int type,x,y; ll val;
        while(m-- > 0){
            cin>>type;

            if(type==0){
                cin>>x>>y>>val;
                updateBIT(BIT1,n,  x, val);
                updateBIT(BIT1,n,y+1,-val);

                updateBIT(BIT2,n,  x,(x-1)*val);
                updateBIT(BIT2,n,y+1,   -y*val);
            }
            else{
                cin>>x>>y;
                cout<<get(BIT1,y)*y-get(BIT2,y)-get(BIT1,x-1)*(x-1)+get(BIT2,x-1)<<"\n";
            }
            //for(int i=1;i<=n;i++) cout<<get(BIT1,i)<<" "; cout<<"\n";
            //for(int i=1;i<=n;i++) cout<<get(BIT2,i)<<" "; cout<<"\n";
        }
    }
    return 0;
}