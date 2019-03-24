#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
long long memo[21234][4][4][4];
//          formula for 24^N - 9*8^N + 3(3*2^N + 6*3^N) - 24 for 3 color and 3*N grid
int n;

void Add (long long & a, long long b) {
	a += b;
	if (a >= MOD) a -= MOD;
}

long long solve (int pos, int r1, int r2, int r3) {
	if (pos == 0) {
		if (r1 == 3 && r2 == 3 && r3 == 3) return 1;
		return 0;
	}


	long long &p = memo[pos][r1][r2][r3];
	if (p != -1LL) return p;

	p = 0;
	if (pos == n) {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 3; ++k) {
					if (i == j && j == k) continue;
					Add(p, solve(pos - 1, i, j, k));
				}
			}
		}

		return p;
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				if (i == j && j == k) continue;
				Add(p, solve(pos - 1, (i == r1) ? r1 : 3, (j == r2) ? r2 : 3, (k == r3) ? r3 : 3));
			}
		}
	}

	return p;
}

int main() {

	cin >> n;

	memset(memo, -1, sizeof memo);

	cout << solve(n, 0, 0, 0) << endl;

	return 0;
}