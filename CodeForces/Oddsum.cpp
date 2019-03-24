#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	long long int sum = 0;
	int smallodd = 100000;
	for(int i=0;i<n;i++){
		if(ar[i] > 0) sum += ar[i];
		if( abs(ar[i])%2 == 1 && abs(ar[i]) < smallodd)
			smallodd = abs(ar[i]); 
	}

	if(sum%2 == 0) sum -= smallodd;

	cout<<sum;
	return 0;
}