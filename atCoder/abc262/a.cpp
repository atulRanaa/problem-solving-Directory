#include<iostream>

using namespace std;


int main() {
	int n;
	cin >> n;

	while(n % 4 != 2) {
		n++;
	}
	cout << n << "\n";
}