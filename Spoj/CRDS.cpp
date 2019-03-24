#include<bits/stdc++.h>
using namespace std;


long long int modExp(long long int x,long long int n,long long int M){
	long long int result = 1;
    while(n>0){
        if(n % 2 ==1) result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

	long long int n;
	long long int M = 1000007;

	int t; cin>>t;
	while(t--){
		cin>>n;
		long long int ans = (n*(4+3*(n-1)))/2;
		cout<<ans%M<<endl;
	}

	
	return 0;
}