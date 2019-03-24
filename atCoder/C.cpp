#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int ar[2][n];
	for(int i=0;i<n;i++) cin>>ar[0][i];
	for(int i=0;i<n;i++) cin>>ar[1][i];
	
	for(int i=1;i<n;i++) ar[0][i] += ar[0][i-1];
	ar[1][0] += ar[0][0];
	for(int i=1;i<n;i++) ar[1][i] += max(ar[1][i-1],ar[0][i]);
	
	cout<<ar[1][n-1]; 
	return 0;
	
}
