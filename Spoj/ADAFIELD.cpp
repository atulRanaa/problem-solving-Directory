

// spoj
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e6+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<int,int>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        const double EPS = 1E-9;
        typedef vector< vector<double> > matrix;
        typedef vector<int> vi;

int prime[N];
void numofFact(int num){
    int res = 1;
    map<int,int> mapp;
    while(num > 1){
        mapp[ prime[num]]++;
        num /= prime[num];
    }
    cout<<1;
    for(pii e: mapp) for(int i=0;i<e.S;i++) cout<<" x " << e.F;

    cout << "\n";
}
void sieve(){
	memset(prime,0,sizeof(prime));
    prime[0] = prime[1] = 1;
    
    for(int i = 2; i < N; i++){
        if(prime[i]==0){
            for(int j=i; j < N;j+=i) prime[j] = i;
        }
    }
}

ll n,m,q,k,ar[N];

void binarySearch(ll l,ll r){
    ll res, ans;
    while(l <= r){
        ll mid = (l+r)>>1;
        if(res >= n){ ans = mid; r = mid-1;}
        else
            // res < n
            l = mid+1;
    }
}
ll binaryExponentiation(ll n, ll x){
    ll result = 1LL;
    while(n > 0){
        if(n&1) result *= x;
        x = x*x;
        n >>= 1;
    }
    return result;
}

int main(){
    fast;

    ll type, x;
    
    test{
        multiset< ll > horizontal, vertical;
        multiset< ll > hLen, vLen;
        ll hMax = 0, vMax = 0;

        cin >> n >> m >> q;

        horizontal.insert(0);
        horizontal.insert(m);
        vertical.insert(0);
        vertical.insert(n);

        hLen.insert(n);
        vLen.insert(m);

        while(q-- > 0){
            cin >> type >> x;
            //if(type) horizontal.insert(x); else vertical.insert(x);
            if(type){
                // horizontal cut
                if(horizontal.find(x) == horizontal.end()){
                    horizontal.insert(x);
                    auto it = horizontal.find(x);

                    ll ub = *(++it);
                    ll lb = *(--(--it));

                    // horizontal cut make vertical lines
                    vLen.erase( vLen.find(ub-lb) );
                    vLen.insert(ub - x);
                    vLen.insert(x - lb);
                }
            }
            else{
                // vertical cut
                if(vertical.find(x) == vertical.end()){
                    vertical.insert(x);
                    auto it = vertical.find(x);

                    ll ub = *(++it);
                    ll lb = *(--(--it));

                    // horizontal lines
                    hLen.erase( hLen.find(ub-lb) );
                    hLen.insert(ub - x);
                    hLen.insert(x - lb);
                }
            }
            cout << (*vLen.rbegin())*(*hLen.rbegin()) << "\n";
        }
    }
    /*
    50
    50
    45
    40
    20
    50
    30
    20
    20  
    20
    */
    return 0;
}