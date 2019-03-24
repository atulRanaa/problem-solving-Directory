// hackerearth       
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
 
int n,m;
set<int> Ap;
set< pair<int,int> > Br;
void dfs(int v, int p = 0) {
    used[v] = true;
    tin[v] = fup[v] = timer++;
    int children = 0;
 
    
    for (int to: g[v]) {
        if (to == p)  continue;
        
        if (used[to])
            fup[v] = min (fup[v], tin[to]);
        else {
            par[to] = v;
            dfs (to, v);
            fup[v] = min (fup[v], fup[to]);
            if(fup[to] > tin[v])
                Br.insert({ min(to,v), max(to,v)});
                // bridge

            if (fup[to] >= tin[v] && p != 0)
                Ap.insert(v);             //v is articulation point
            ++children;
 
            w_sum[v]+=w_sum[to];
        }
        
    }
    w_sum[v] += weight[v];
    if (p == 0 && children > 1)
        Ap.insert(v);                    //v is articulation point
 
}
 
int main() {
    memset(w_sum,0, sizeof w_sum);
    memset(used ,0, sizeof used);
    scanf("%d %d",&n,&m);
    int x,y;
    //for(int i=1;i<=n;i++) scanf("%lld",weight+i);
    for(int i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        x++;
        y++;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    timer = 1;
    
    par[1] = 0;
    dfs (1);
    
    // ll ans=-1;
    // for(int node: Ap){
    //     ll val=0, Xor = 0;
        
    //     for(int e: g[node]){
    //         int p = par[node];
    //         if(e!=p && fup[e]!=fup[p] && par[e]==node){
    //             val+=w_sum[e], Xor^=w_sum[e];
    //         }
    //     }
    //     Xor^=(w_sum[1]-weight[node]-val);
    //     ans = max(Xor, ans);
    // }
    cout << Ap.size() << "\n";
    for(int e: Ap) cout<< e-1 << " ";
    cout<< "\n";
    cout << Br.size() << "\n";
    for(pair<int,int> e: Br) cout<< e.first-1 <<" " << e.second-1 <<"\n";
    return 0;
}