

// hackerearth
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

ll ar[N];
int main(){
    fast;
        ll x, y, p, q; cin >> x >> y >> p >> q;
		// cout << x << y << p << q << "\n";
		ll xp = LCM(x, p);
		ll yq = LCM(y, q);
		// cout << xp << yq << "\n";
		ll Z;
		if(xp >= yq) {
			Z = xp/p;
			Z = LCM(y, q*Z)/q;
		}
		else {
			Z = yq/q;
			Z = LCM(x, p*Z)/p;
		}
		// cout << Z << "\n";
		ll P = p*Z, Q = q*Z;
		ll X = P/x, Y = Q/y;

		ll a = __gcd(X, __gcd(Y, Z));
		cout << X/a << " " << Y/a << " " << Z/a << "\n";
    return 0;
}