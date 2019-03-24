#include<bits/stdc++.h>

using namespace std;
int main(){
	long long int t,n; cin>>t;
	while(t--){
		cin>>n;
		long long int check = 5,count = 0;
		while(check <= n){
			count += n/check;
			check *= 5;
		}

		cout<<count<<endl;
	}
}