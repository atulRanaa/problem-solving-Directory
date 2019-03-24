    #include <bits/stdc++.h>
    using namespace std;

	const int N = 1e6+5;
	#define ll long long
	#define MOD 1000000007
	#define pii pair<int,int>
	#define pll pair<ll , ll>
	#define pis pair<int,string>
	#define F first
	#define S second
	#define LCM(a,b) ((a*b)/__gcd(a,b))
	#define inf 1e15
	
//map< pii, bool > dp;

vector< vector<bool> > dp;
vector< vector<bool> > vi;



bool solve(int i,int j){
	if(vi[i][j])
		return dp[i][j];

	dp[i][j] = !( solve(i-1,j) & solve(i,j-1));
	vi[i][j] = 1;
	/*	for(int i=2;i<=row;i++) for(int j=2;j<=col;j++)*/
	return dp[i][j];
}
	int main(){
	    char n[N],m[N];
	    int t; scanf("%d",&t);

	    while(t-- > 0){
	    	dp.clear();
	    	vi.clear();
	    	
	    	scanf("%s",m+1);
	    	scanf("%s",n+1);


	    	int row = strlen(n+1), col = strlen(m+1);

	    	dp.resize(row+1);
	    	vi.resize(row+1);
	    	for(int i=0;i<=row;i++)
	    		dp[i].resize(col+1), vi[i].resize(col+1);



	    	// for(int i=1;i<=row;i++){
	    	// 	for(int j=1;j<=col;j++) cout<<dp[i][j]<<" ";
	    	// 	cout<<"\n";
	    	// }
	    	if(n[1]=='0' || m[1]=='0') dp[1][1]=1;
	    	else
	    		dp[1][1]=0;
	    	
	    	vi[1][1]=1;

	    	for(int j=2;j<=col;j++){
	    		if(dp[1][j-1]==0 || m[j]=='0')
	    			dp[1][j]=1;
	    		else
	    			dp[1][j]=0;

	    		vi[1][j]=1;
	    	}

	    	for(int i=2;i<=row;i++){
	    		if(dp[i-1][1]==0 || n[i]=='0')
	    			dp[i][1]=1;
	    		else
	    			dp[i][1]=0;

	    		vi[i][1]=1;
	    	}

	    	int q; scanf("%d",&q);
	    	int x,y; bool f;
	    	while(q-- > 0){
	    		scanf("%d %d",&x,&y);
	    		if(! vi[x][y])
	    			f = solve(x,y); 
	    		printf("%d",(int)dp[x][y]);
	    	}

	    	// for(int i=1;i<=row;i++){ 
	    	// 	for(int j=1;j<=col;j++) cout<<dp[i][j]<<" ";
	    	// 	cout<<"\n";
	    	// }
	    	printf("\n");
	    }
	    return 0;
	}