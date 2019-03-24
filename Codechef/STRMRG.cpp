#include<bits/stdc++.h>
using namespace std;


int lcs(string str1, string str2, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   for (i=0; i<=m; i++){
     for (j=0; j<=n; j++){

       if (i == 0 || j == 0) L[i][j] = 0;   
       else if (str1.at(i-1) == str2.at(j-1))
         L[i][j] = L[i-1][j-1] + 1;   
       else L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int t;cin>>t;
	int n,m;
	char a[5002],b[5002];
	while(t--){
		cin>>n>>m;
		cin>>a;
		cin>>b;

		string s1,s2;
		s1 += a[0]; s2 += b[0];
		for(int i=1;i<n;i++){
			if(a[i] != a[i-1]) s1 += a[i];
		}
		for(int i=1;i<m;i++){
			if(b[i] != b[i-1]) s2 += b[i];
		}
		//cout<<s1<<" "<<s2<<endl;
		n = s1.size();
		m = s2.size();
		int commomChar = lcs(s1,s2,n,m);
		int ans = n + m - commomChar;

		cout<<ans<<endl;
	}

	return 0;
}