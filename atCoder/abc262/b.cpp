#include<bits/stdc++.h>

using namespace std;

std::vector<int> v[123];
bool contains(std::vector<int> &v, int e) {
	for(int i = 0; i < v.size(); i++) {
		if(v[i] == e)
			return true;
	}
	return false;
}

int main() {
	int n, m;
	cin >> n >> m;

	int x, y;
	for(int i = 0; i < m; i++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	int ans = 0;
	for(int i = 1; i <= n; i++) for(int j = i+1; j <= n; j++) for(int k = j+1; k <= n; k++) {

		bool a = contains(v[i], j);
		bool b = contains(v[j], k);
		bool c = contains(v[k], i);
		if(a && b && c) {
			ans++;
		}
	}

	cout << ans << "\n";
	return 0;
}