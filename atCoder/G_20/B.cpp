#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];

	//long long int gcd = ar[0];
	long long int check = ar[0];

	for(int i=1;i<n;i++){
		check = max(check/ar[i] , ar[i]);
	}
	long long int a=2,b=3;
	for(int i=n-2;i>=0;i--){
		a = 
	}
	return 0;
}