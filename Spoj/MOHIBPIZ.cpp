

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

ll n,k,ar[N], ans = -1;
ll noOfPieces(ll n){
    // fn = n + fn-1
    // fn = n + n-1 + n-2 + ... + f1
    // fn = (n + 2)*(n-1)/2 + 2
    return (n*n + n + 2)>>1;
}
void binarySearch(ll l,ll r){
    ll res;
    while(l <= r){
        ll mid = (l+r)>>1;
        res = noOfPieces(mid);
        // cout << mid << " " << res << " " << k << "\n";
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
    test{
        cin >> n; // no. of guests
        // binarySearch(0,1000005);
        cout << noOfPieces(n) << "\n";
    }
    return 0;
}