#include<bits/stdc++.h>
using namespace std;

int main(){

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int N;
	cin>>N;
	long long int ar[N];
	long long int gcd,ans=0;
	for(int i=0;i<N;i++) cin>>ar[i];

	gcd = ar[1]-ar[0];
	for(int i=2;i<N;i++) gcd = __gcd(gcd,ar[i]-ar[i-1]);
	for(int i=1;i<N;i++) ans += (ar[i]-ar[i-1])/gcd - 1;
	cout<<ans;
	return 0;
}