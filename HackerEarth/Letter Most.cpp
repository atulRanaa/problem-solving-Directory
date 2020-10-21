#include <bits/stdc++.h>

        using namespace std;

        typedef long long ll;
        const ll N = 3e5 +5;
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
        typedef vector< vector<double> > matrix;
        typedef vector<int> vi;

int main() {
	int n;
	string s;
	cin >> n;
	cin >> s;

	int ar[26] = {0};
	for(const char &ch: s) ar[ch - 'a'] ++;

	cout << *max_element(ar, ar + 26) << "\n";

	return 0;
}