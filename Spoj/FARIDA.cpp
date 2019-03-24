#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;

	for(int c=1;c<=t;c++){
		int n; cin>>n;
		long long int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];

		if(n==0) printf("Case %d: %d\n",c,0);
		else{
			long long int in = ar[0];
			long long int ex = 0,temp;

			for(int i=1;i<n;i++){
				temp = max(in,ex);
				in = ex + ar[i];
				ex =  temp;
			}
			printf("Case %d: %lld\n",c,max(in,ex));
		}
	}
	
	return 0;
}