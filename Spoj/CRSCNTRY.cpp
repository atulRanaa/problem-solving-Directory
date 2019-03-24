#include<bits/stdc++.h>
using namespace std;


int lcs(vector<int> X,vector<int> Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;

   for (i=0; i<=m; i++){
		for (j=0; j<=n; j++){
			if (i == 0 || j == 0) L[i][j] = 0;  
			else if (X[i-1] == Y[j-1]) L[i][j] = L[i-1][j-1] + 1;
			else L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
   }
   return L[m][n];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t,i; cin>>t;
	while(t--){
		vector<int> girl;
		int check;
		while(1){
			cin>>check;
			if(check == 0) break;
			girl.push_back(check);
		}
		int ans = 0,temp;
		while(1){
			cin>>check;
			if(check == 0) break;
			vector<int> boy;
			boy.push_back(check);
			while(1){
				cin>>check;
				if(check == 0) break;
				boy.push_back(check);
			}
			temp = lcs(girl,boy,girl.size(),boy.size());
			if(temp > ans) ans = temp;
		}
		cout<<ans<<endl;
	}

	return 0;
}