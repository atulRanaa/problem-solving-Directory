#include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 3e5+5;
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
 
 
vector<int> g[N];
bool used[N];
int timer, tin[N], fup[N], par[N];
ll weight[N], w_sum[N];
ll ans=-1,sum=0;
int n,m;
vector<int> Ap;
void dfs(int v, int p = 0) {
    used[v] = true;
    tin[v] = fup[v] = timer++;
    int children = 0;
 
    ll val=0, Xor = 0; bool f=false;
    int l = g[v].size();
    w_sum[v] += weight[v];
 
    for (int i=0; i<l; ++i) {
 
        int to = g[v][i];
        if (to == p)  continue;
        
        if (used[to])
            fup[v] = min (fup[v], tin[to]);
        else {
            par[to] = v;
            dfs (to, v);
 
            w_sum[v]+=w_sum[to];
            fup[v] = min (fup[v], fup[to]);
            if (fup[to] >= tin[v] && p != 0){
                Ap.push_back(v);             //v is articulation point
                val+=w_sum[to], Xor^=w_sum[to];
                f = true;
            }
            ++children;     
        }
        
    }
    if ((p == 0 && children>1) || (p!=0 && f)){
        Ap.push_back(v);                    //v is articulation point
        Xor^=(sum-weight[v]-val);
        ans = max(Xor, ans);
    }
 
}
 
int main() {
    memset(w_sum,0, sizeof w_sum);
    memset(used ,0, sizeof used);
    scanf("%d %d",&n,&m);
    int x,y;
    for(int i=1;i<=n;i++) scanf("%lld",weight+i),sum+=weight[i];
    for(int i=0;i<m;i++){
        scanf("%d %d",&x,&y);
 
        g[x].push_back(y);
        g[y].push_back(x);
    }
    timer = 1;
    
    par[1] = 0;
    dfs (1);
    
    printf("%lld\n", ans);
    return 0;
}