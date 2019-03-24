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
	int t,n,m; cin>>t;
	while(t--){
		cin>>n>>m;

		long long int ar[m][10]={{0}};
		for(int i=0;i<m;i++){
			for(int j=0;j<10;j++){
				if(i==0) ar[i][j] = 1;
				else if(j==0) ar[i][j] = ar[i-1][j];
				else ar[i][j] = ar[i-1][j] + ar[i][j-1];
			}
		}
		long long int ans=0;
		for(int i=0;i<10;i++) ans += ar[m-1][i];
		cout<<n<<" "<<ans<<endl; 
	}

	return 0;
}