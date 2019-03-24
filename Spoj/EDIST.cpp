#include<bits/stdc++.h>
using namespace std;

int stringTransform(char s1[],int n,char s2[],int m){

	int dp[n+1][m+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0) dp[i][j]=j;
			else if(j==0) dp[i][j]=i;
			else if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = 1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
		}
	}
	return dp[n][m];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	int t; cin>>t;
	char s1[2010],s2[2010];
	int n,m;
	while(t--){
		cin>>s1;
		cin>>s2;

		n= strlen(s1);
		m= strlen(s2);
		cout<<stringTransform(s1,n,s2,m)<<endl;
	}
	return 0;
}