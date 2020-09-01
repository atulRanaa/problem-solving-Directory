// hackerearth
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
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define MAX 10
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


vector< ll > numToVec(ll  N) {
    vector< ll > digit;
    while (N != 0) {
        digit.push_back(N % 10);
        N = N / 10;
    }

    if (digit.size() == 0)
        digit.push_back(0);

    reverse(digit.begin(), digit.end());
    return digit;
}

ll  solve(vector< ll >& A, ll  B, ll  C) {
    vector< ll > digit = numToVec(C);
    // for(ll el: digit) cout << el << " "; cout << "\n";

    ll  d, d2;

    d = A.size();

    if (B > digit.size() || d == 0)
        return 0;
    else if (B < digit.size()) {
        if (A[0] == 0 && B != 1)
            return (d - 1) * pow(d, B - 1);
        else
            return pow(d, B);
    }
    else {
        ll  dp[20 + 1] = { 0 };
        ll  lower[MAX + 1] = { 0 };

        for (ll  i = 0; i < d; i++) lower[A[i] + 1] = 1;
        for (ll  i = 1; i <= MAX; i++) lower[i] = lower[i - 1] + lower[i];

        bool flag = true;
        dp[0] = 0;
        for (ll  i = 1; i <= B; i++) {
            d2 = lower[digit[i - 1]];
            dp[i] = dp[i - 1] * d;

            if (i == 1 && A[0] == 0 && B != 1)
                d2 = d2 - 1;

            if (flag)
                dp[i] += d2;

            flag = (flag & (lower[digit[i - 1] + 1] == lower[digit[i - 1]] + 1));
        }
        return dp[B];
    }
}

int main(){
    fast;
    ll L, R, k;
    test {
        cin >> L >> R >> k;

        vector< ll > digit;
        ll sz_l = 0;
        ll sz_r = 0;

        for(ll i = 0; i < 10; i += k) digit.push_back(i);
        for(ll i = L; i > 0; i /= 10) sz_l++;
        for(ll i = R; i > 0; i /= 10) sz_r++;


        // cout << sz_l << " " << sz_r << "\n";
        // for(int el: digit) cout << el << " "; cout << "\n";

        ll l = 0;
        ll r = 0;

        for(ll i = 1; i <= sz_l; i++) l += solve(digit, i, L);
        for(ll i = 1; i <= sz_r; i++) r += solve(digit, i, R + 1);

        // cout <<  solve(digit, sz_l, L) << " " << solve(digit, sz_r, R) << "\n";
        // cout << l << " " << r << " " << r - l << "\n";

        cout << r - l << "\n";
    }
    return 0;
}
