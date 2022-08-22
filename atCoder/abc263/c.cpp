#include<bits/stdc++.h>

using namespace std;


void solve(vector<int> &ar, int k, int m, int sz) {
	if(ar.size() == sz) {
		for(int i = 0; i < ar.size(); i++) cout << ar[i] << " "; cout << "\n";
		return;
	}

	for(int i = k; i <= m; i++) {
		ar.push_back(i);
		solve(ar, i+1, m, sz);
		ar.pop_back();
	}
}

int main() {
	
	int n, m;
	cin >> n >> m;

	vector<int> tmp;
	solve(tmp, 1, m, n);
	return 0;
}