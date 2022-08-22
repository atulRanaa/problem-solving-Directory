#include<bits/stdc++.h>

using namespace std;


#define all(x) x.begin(),x.end()
#define fastIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define test int testcases;cin>>testcases;for(int tc=1;tc<=testcases;tc++)
typedef long long ll;

void print(string x)  { cout << '\"' << x << '\"'; }
void print(char x)  { cout << '\'' << x << '\''; }
void print(long long x)  { cout << x; }
void print(double x)  { cout << x; }
void print(bool x)  { cout << x; }
void print(int x)  { cout << x; }
 
template <class T, class V> void print(const pair<T, V> &x);
template <class T, class V> void print(const map<T, V>& mp);
template <class T, class... V> void print(T t, V... v);
template <class T> void print(const multiset<T>& pq);
template <class T> void print(const vector<T>& v);
template <class T> void print(const set<T>& pq);
 
template <class T, class V> void print(const pair<T, V>& x) {
   cout << "{"; print(x.first); cout << ", "; print(x.second); cout << "}";
}
template <class T, class V> void print(const map<T, V>& mp) {
   for (auto it = mp.begin(); it != mp.end(); ++it) { print(*it); cout << " "; }
}
template <class T> void print(const multiset<T>& pq) {
   vector<T> values(pq.begin(), pq.end()); print(values);
}
template <class T> void print(const vector<T>& v) {
   for (int i = 0; i < (int) v.size(); ++i) { print(v[i]); cout << (i + 1 < (int) v.size() ? " " : ""); }
}
template <class T> void print(const set<T>& pq) {
   vector<T> values(pq.begin(), pq.end()); print(values);
}
template <class T, class... V> void print(T t, V... v) {
   print(t); if(sizeof...(v)) cout << " | "; print(v...);
}

int main() {
	fastIO;
	
	const int mod = 998244353;
	ll n, m;
	cin >> n >> m;

	ll a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;

	map<pair<int, int>, bool> blockers;
	int x, y;
	for(int i = 0; i < m; i++) {
		cin >> x >> y;
		blockers[{x, y}] = true;
	}

	map<pair<ll, ll>, ll> hash;
	hash[{0, 0}] = 1;

	for(int i = 0; i < n; i++) {
		map<pair<ll, ll>, ll> tmp;
		for(auto [xy, val]: hash) {
			auto [x, y] = xy;

			if(!blockers.count({x+a, y+b})) {
				tmp[{x+a, y+b}] += val;
				tmp[{x+a, y+b}] %= mod;
			}
			if(!blockers.count({x+c, y+d})) {
				tmp[{x+c, y+d}] += val;
				tmp[{x+c, y+d}] %= mod;
			}
			if(!blockers.count({x+e, y+f})) {
				tmp[{x+e, y+f}] += val;
				tmp[{x+e, y+f}] %= mod;
			}
		}

		swap(hash, tmp);
	}

	ll ans = 0;
	for(auto [_, val]: hash)
		ans = (ans + val) % mod;

	cout << ans << "\n";
	return 0;
}