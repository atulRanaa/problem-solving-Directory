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
	
	ll n, p, q, r;
	cin >> n >> p >> q >> r;

	vector<ll> ar(n);
	for(int i = 0; i < n; i++)
		cin >> ar[i];


	unordered_map<ll, int > hash;
	hash[0] = -1;

	map<int, int> P,Q,R;

	ll sum = 0;
	for(int i = 0; i < n; i++) {

		sum += ar[i];
		// x + p = sum -> x = sum - p
		if(hash.find(sum - p) != hash.end()) {
			// P.push_back({hash[sum - p] + 1, i});
			P[hash[sum - p] + 1] = i;
		}

		if(hash.find(sum - q) != hash.end()) {
			// Q.push_back({hash[sum - q] + 1, i});
			Q[hash[sum - q] + 1] = i;
		}
		if(hash.find(sum - r) != hash.end()) {
			// R.push_back({hash[sum - r] + 1, i});
			R[hash[sum - r] + 1] = i;
		}

		hash[sum] = i;
	}

	// print(P, Q, R);


	for(auto [start, end]: P) {
		if(Q.find(end + 1) != Q.end()) {
			int qend = Q[end + 1];
			if(R.find(qend + 1) != R.end()) {
				// cout << start << " " << end + 1 << " " << qend + 1 << " " << R[qend + 1] + 1 << "\n";
				cout << "Yes\n";
				return 0;
			}
		}
	}
	cout << "No\n";
	return 0;
}