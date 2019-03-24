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
	int t,n,u,q; cin>>t;
	long long int val,l,r;
	while(t--){
		cin>>n>>u;
		long long int ar[n+5]={0};
		while(u--){
			cin>>l>>r>>val;
			ar[l] += val;
			ar[r+1] += -val;
		}
		//for(int i=0;i <= n;i++) cout<<ar[i]<<" ";
		for(int i=1;i <= n;i++) ar[i] += ar[i-1];
		cin>>q;
		while(q--){
			cin>>l;
			cout<<ar[l]<<endl;
		}
	}

	return 0;
}