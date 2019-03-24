#include<bits/stdc++.h>
using namespace std;

int lcs( char *X, char *Y, int m, int n )
{
   int L[n+1][n+1];
   int i, j;
   /* Following steps build L[m+1][n+1] in bottom 
      up fashion. Note that L[i][j] contains length
      of LCS of X[0..i-1] and Y[0..j-1] */
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
 
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
 
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   /* L[m][n] contains length of LCS for X[0..n-1]
     and Y[0..m-1] */
   return L[m][n];
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	char s[7000];
	char r[7000];
	int l;
	while(t--){
		cin>>s;
		l = strlen(s);
		for(int i=l-1;i >=0; i--) r[l-1-i]= s[i];

		cout<<l - lcs(s,r,l,l)<<endl;
	}
	
	return 0;
}