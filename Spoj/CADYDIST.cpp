#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	while(1){
		cin>>n;

		if(n==0) break;
		long long int c[n];
		long long int price[n];
		for(int i=0;i<n;i++) cin>>c[i];
		for(int i=0;i<n;i++) cin>>price[i];

		sort(c,c+n);
		sort(price,price+n,greater<long long int>());

		long long int ans=0;
		for(int i=0;i<n;i++) ans += c[i]*price[i];
		cout<<ans<<endl;
	}

	return 0;
}