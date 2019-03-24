#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long int a){
	if(a<=1) return false;
	if(a<=3) return true;
	if(a%2 == 0 || a%3 == 0) return false;
	for(int i=5; i*i <= a ;i+=6){
		if(a%i == 0 || a%(i+2)==0) return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;

	while(t--){
		long long int m,n;
		cin>>m>>n;
		for(long long int i=m;i<=n;i++){
			if(isPrime(i)) cout<<i<<endl;
		}
		cout<<endl;
	}
}
