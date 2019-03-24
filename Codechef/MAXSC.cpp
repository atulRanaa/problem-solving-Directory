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
	while(t--){
		int n; cin>>n;
		long long int ar[n][n];
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>ar[i][j];

		for(int i=0;i<n;i++){
			sort(ar[i],ar[i]+n);
		}
		bool f = true;
		long long int ans=ar[n-1][n-1],pre=ar[n-1][n-1];
		for(int i= n-2;i>=0;i--){
			int j=n-1;
			while(ar[i][j] >= pre && j >= 0) j--;

			if(j >= 0 && ar[i][j] < pre){
				pre = ar[i][j];
				ans += ar[i][j];
			}
			else{
				f = false;
				break;
			}
		}
		if(f) cout<<ans<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}