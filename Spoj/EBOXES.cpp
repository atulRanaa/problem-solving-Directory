#include<iostream>
using namespace std;


int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	long long int n,k,T,f;
	while(t--){
		cin>>n>>k>>T>>f;
		long long int ans = n + ((f-n)/(k-1))*k;
		cout<<ans<<endl;
	}
	return 0;
}