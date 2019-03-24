// spoj
        #include <bits/stdc++.h>
        #define all(x) x.begin(),x.end()
        #define F first
        #define S second

        using namespace std;
        typedef long long ll;
        typedef vector<int> vi;
        typedef pair<int,int> pii;


    const int MAX = 1e6 + 5;
int id[MAX];
int sz[MAX];
int milk[MAX];
ll sum=0;
// multiset<int> sett;
// vector< vector< pii > > adj(MAX);
// vector< pii > nodes;
// bool visited[MAX];


void initialize(int n){
    //sett.clear();
    //adj.clear();
    //nodes.clear(); 
    //memset(visited, false, sizeof visited);
    
    sum = 0;
    memset(milk, 0, sizeof milk);
    for(int i = 1;i <=n;++i){   
         id[i]=i;
         sz[i]=1; //sett.insert(1);
     }
}
int findset(int x){
    while(id[x] != x){
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}
 
void combine(pair< ll, pair<int,int> > link){
    int x = link.S.F, y = link.S.S;

    int p = findset(x), q = findset(y);
    
    if(milk[p]==1 && milk[q]==1) return;
    if(p==q) return;
    if(sz[q] >sz[p]) swap(p,q);
    
        //sett.erase( sett.find(sz[p])); sett.erase( sett.find(sz[q]));

    //cout<< x<<" " << y<<" " << link.F<<"\n";
        sum += link.F;
        milk[p] ^= milk[q];
        id[q]=p; sz[p]+=sz[q];
        sz[q]=-1;
        //sett.insert(sz[p]);
}
// void dfs(int v,int W){
//     visited[v] = 1;
//     for(auto e: adj[v]){
//         if(!visited[e.F]){
//             nodes.push_back({e.S+W, e.F}); dfs(e.F, e.S+W);
//         }
//     }
// }

int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t; cin >> t;
    while(t-- > 0){
        int n,m; cin >> n >> m;
        initialize(n);
        for(int i=1;i<=n;i++) cin >> milk[i];

        pair< ll, pair<int,int> > ed[m];
        for(int i=0;i<m;i++)
            cin >>  ed[i].S.F >> ed[i].S.S >> ed[i].F;

        sort(ed,ed+m);

        for(int i=0;i<m;i++){
            combine(ed[i]);
        }
        bool f = true;
        for(int i=1;i<=n;i++)
            if(id[i]==i && milk[i]==0){f = false; break;}

        if(f) cout<< sum << "\n"; else cout<<"impossible\n";
    }
    return 0;
}