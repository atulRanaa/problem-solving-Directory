#include<bits/stdc++.h>
using namespace std;

		typedef long long ll;
        const ll N = 1e5+5;
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


	ll n, k, ar[N], tmp[N];
	test {
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> ar[i];
		for(int i = 0; i < n; i++) tmp[i] = ar[i];

		sort(tmp, tmp + n);

		vector< vector<int> > A, B;
		for(int i = 0; i < k && k > 1; i++) {

			vector< int > a;
			for(int j = i; j < n; j += k) a.push_back(ar[j]);

			sort(a.begin(), a.end());
			A.push_back(a);

			vector< int > b;
			for(int j = i; j < n; j += k) b.push_back(tmp[j]);
			B.push_back(b);
		}

		bool f = true;
		for(int i = 0; i < A.size(); i++) {
			// for(auto e: A[i]) cout << e << " "; cout << "\n";
			// for(auto e: B[i]) cout << e << " "; cout << "\n";

			if(A[i] != B[i]) {
				f = false;
				break;
			}
		}

		if(f)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
