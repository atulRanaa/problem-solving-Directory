#include<bits/stdc++.h>

using namespace std;


typedef long long ll;
const int maxn = 5e5 + 5;
const ll mod = 998244353;

int subsequenceCount(int n, int m, int div, std::vector<int> &v) {
	int dp[101][101][101];
	memset(dp, 0, sizeof dp);

	for(int i = 0; i <= n; i++) dp[i][0][0] = 1;

	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) {
			for(int k = 0; k < div; k++) {
				dp[i][j][k] += dp[i - 1][j][k];
		        dp[i][j][(k + v[i]) % div] += dp[i - 1][j - 1][k];

		        dp[i][j][k] %= mod;
		        dp[i][j][(k + v[i]) % div] %= mod;
			}
		}   
	}
	return dp[n][m][0];
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n+1);

    for(int i = 1; i <= n; i++) cin >> arr[i];

    ll ans = 0;
    for(int div = 1; div <= n; div++) {
    	ll cnt = subsequenceCount(n, div, div, arr);
    	// cout << cnt << "\n";
    	ans = (ans + cnt) % mod;
    }

    cout << ans << "\n";

	return 0;
}