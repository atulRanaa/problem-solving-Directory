#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int n;

	cin >> n;


	vector<int> parent(55);
	parent[1] = 1;
	for(int i = 2; i <= n; i++) {
		cin >> parent[i];
	}


	int itr = n;
	int generation = 1;
	while(parent[itr] != 1) {
		itr = parent[itr];
		generation++;
	}

	cout << generation << "\n";
	return 0;
}