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

	int n,m; cin>>n>>m;
	int ar[n][m];
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>ar[i][j];


	if(n==0 || m==0) cout<<0;
	else if(n==1 && m==1) cout<<ar[0][0];
	else{
		for(int i=1;i<n;i++){
			for(int j=0;j<m;j++){

				if(j == 0)
					ar[i][j] += (j+1)<m?min(ar[i-1][j],ar[i-1][j+1]):ar[i-1][j];
				else if(j == m-1)
					ar[i][j] += (j-1)>=0?min(ar[i-1][j-1],ar[i-1][j]):ar[i-1][j];
				else
					ar[i][j] += min(ar[i-1][j-1],min(ar[i-1][j],ar[i-1][j+1])); 
			}
		}
		cout<<*min_element(ar[n-1],ar[n-1]+m);
	}
	return 0;
}