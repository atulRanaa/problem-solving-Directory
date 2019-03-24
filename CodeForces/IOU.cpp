#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define mod 1000000007
int main(){
	
	int n,m; cin>>n>>m;

	int ar[n+1];
	for(int i=0;i<=n;i++) ar[i]=0;

	int a,b,c;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;

		ar[a] -= c, ar[b] += c;
	}
	int ans =0;
	for(int i=1;i<=n;i++) if(ar[i]>0) ans+=ar[i];

	cout<< ans <<"\n";
	return 0;
}