#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
	
	ll n,l,r;

	cin >> n >> l >> r;

	vector<ll> ar(n+5, 0);
	vector<ll> pre(n+5, 0), suf(n+5, 0);

	for(int i = 1; i <= n; i++) {
		cin >> ar[i];
		pre[i] = ar[i];
		suf[i] = ar[i];
	}

	for(int i = 1; i <= n; i++) pre[i] += pre[i-1];
	for(int i = n; i > 0; i--) suf[i] += suf[i+1];

	ll ans = 1e16;

	for(int i = 1; i <= n; i++) {
		pre[i] = min(ar[i] + pre[i-1], min(pre[i], i * l));
	}

	for(int i = n; i > 0; i--) {
		suf[i] = min(ar[i] + suf[i+1], min(suf[i], (n - i + 1) * r)); // n - n + 1
	}

	// for(int i = 0; i <= n + 1; i++) {
	// 	cout << pre[i] << " ";
	// }
	// cout << "\n";
	// for(int i = 0; i <= n + 1; i++) {
	// 	cout << suf[i] << " ";
	// }
	// cout << "\n";

	for(int i = 0; i <= n; i++) {
		ll a = pre[i] + suf[i+1];
		ans = min(ans, a);
	}

	cout << ans << "\n";

	return 0;
}