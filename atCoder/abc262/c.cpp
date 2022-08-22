#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int maxn = 5e5 + 5;
int main() {
	int n;
	int arr[maxn];

	cin >> n;

	for(int i = 1; i <= n; i++)
		cin >> arr[i];

	ll same = 0;
	ll pair = 0;
	for(int i = 1; i <= n; i++) {
		if(i == arr[i]) same++;
		// arr[2] = 3, arr[3] = 2 
		else if(i == arr[ arr[i] ])
			pair++;
	}
	// cout << same << " " << pair << "\n";
	ll ans = (same * (same - 1))/2 + pair/2;
	cout << ans << "\n";


	return 0;
}