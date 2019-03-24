#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
  /* 	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);*/
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		long long int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);
		long long int ans = 0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				auto ptr = lower_bound(ar,ar+n,(ar[i]+ar[j]+1));
				ans += n-distance(ar,ptr);
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}