// spoj      
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;scanf("%lld",&cse);for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;
 
int g[260][260];
int n,m;
bool visit[260][260];


bool v(int i,int j){
    return ((i>=1 && i<=n)&&(j>=1 && j<=m)&&(g[i][j]==1));
}
int dfs(int i,int j){
    visit[i][j]=1;
    int cnt=0;

    if(v(i-1,j) && !visit[i-1][j]) cnt += dfs(i-1,j);
    if(v(i+1,j) && !visit[i+1][j]) cnt += dfs(i+1,j);
    if(v(i,j-1) && !visit[i][j-1]) cnt += dfs(i,j-1);
    if(v(i,j+1) && !visit[i][j+1]) cnt += dfs(i,j+1);

    return 1+cnt;
}
int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    while(true){
        cin >> n >> m;
        if(n==0 && m == 0)
            break;
        for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)cin >> g[i][j];

        //dfor(int i=1;i<=n;i++) for(int j=1;j<=m;j++)cout<< g[i][j]<<" ";
        memset(visit , 0 ,sizeof visit);
        map< int, int> mapp;
        

        int cnt=0;
        for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
            if(!visit[i][j] && g[i][j]){
                mapp[ dfs(i,j) ]++;
                cnt++;
            }
        }
        cout << cnt << "\n";
        for(pair<int,int> e: mapp)
            cout << e.first << " " << e.second << "\n";
    }
    return 0;
}