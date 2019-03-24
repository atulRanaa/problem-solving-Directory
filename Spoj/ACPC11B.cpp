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

	int t; cin>>t;
	long long int a[1010],b[1010],n,m;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>m;
		for(int i=0;i<m;i++) cin>>b[i];
		
		long long int ans = 1234560;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++) ans=min(ans,abs(a[i]-b[j]));
		cout<<ans<<endl;
	}
	return 0;
}