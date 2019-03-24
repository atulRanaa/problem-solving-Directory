#include<bits/stdc++.h>

using namespace std;
int main(){
	long long int res =1;
	for(long long int i=1;i<=20;i++){
		res = res*i / __gcd(res,i);
	}

	cout<<res;

	for(int i=1;i<=20;i++){
		if(res%i == 0) cout<<i<<":YES"<<endl;
	}
	return 0;
}