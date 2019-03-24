#include<bits/stdc++.h>
using namespace std;

#define lli long long int
int main(){
	
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t,n; cin>>t;
	while(t--){
		cin>>n;

		lli c,d,s,ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		scanf("%lld %lld %lld",&c,&d,&s);

		double boy = 0;
		for(int i=0;i<n;i++) boy = max(boy,(double)ar[i]);
		printf("%0.7f\n",(c-1)*boy);
	}

	return 0;
}