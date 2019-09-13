// hackerearth
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e6+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<int,int>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;

bool visit[1005][1005];
vector< string > A;
int cnt=0;


bool b(int n,int m,int i,int j){
    if( (0<=i && i<n) && (0<=j && j<m) ) return true;
    return false;
}

void dfs(int n, int i,int j){
    visit[i][j]=true;
    cnt++;

    if( b(n,n,i-1,j) ) if(!visit[i-1][j] && A[i-1][j]=='T') dfs(n,i-1,j);
    if( b(n,n,i,j-1) ) if(!visit[i][j-1] && A[i][j-1]=='T') dfs(n,i,j-1);
    if( b(n,n,i+1,j) ) if(!visit[i+1][j] && A[i+1][j]=='T') dfs(n,i+1,j);
    if( b(n,n,i,j+1) ) if(!visit[i][j+1] && A[i][j+1]=='T') dfs(n,i,j+1);
}
int main(){
    fast;
    int n; cin>>n;


    memset(visit, false, sizeof(visit));
    
    for(int i=0;i<n;i++){
        string s; cin>> s; A.push_back(s);
    }
    int ans=0;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(A[i][j]=='T' && !visit[i][j]){
        cnt=0;
        dfs(n,i,j);
        ans = max(cnt,ans);
    }
    cout<< ans <<"\n";
    return 0;
}
