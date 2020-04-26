#include<bits/stdc++.h>
using namespace std;

		typedef long long ll;
        const ll N = 1e3+5;
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


int main() {
	fast;


	int n, s, p[N], type[N];
	test {
		cin >> n >> s;
		for(int i = 0; i < n; i++) cin >> p[i];
		for(int i = 0; i < n; i++) cin >> type[i];

		int def = 105, fwd = 105;
		for(int i = 0; i < n; i++) {
			if(type[i])
				fwd = min(fwd, p[i]);
			else
				def = min(def, p[i]);
		}

		if(fwd + def + s <= 100)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
