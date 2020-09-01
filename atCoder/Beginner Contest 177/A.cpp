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
	int D, T, S;

    cin >> D >> T >> S;

    int times = D / S + ((D % S)?1:0);


    if(times <= T)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
