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

// multiset<int> sett;
// vector< vector< pii > > adj(MAX);
// vector< pii > nodes;
// bool visited[MAX];


void initialize(int n){
    //sett.clear();
    //adj.clear();
    //nodes.clear(); 
    //memset(visited, false, sizeof visited);
    
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
 
int combine(int x, int y){
    int p = findset(x), q = findset(y);
    if(p==q) return sz[p];
    if(sz[q] >sz[p]) swap(p,q);
    
        //sett.erase( sett.find(sz[p])); sett.erase( sett.find(sz[q]));
        id[q]=p; sz[p]+=sz[q];

        sz[q]=-1;
        //sett.insert(sz[p]);
    return sz[p];
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
        int n; cin >> n;
        
        unordered_map< string, int> mapp;
        int timer=0;
        string a, b;

        pair< string ,string > cpl[n];
        for(int i=0;i<n;i++){
            cin >> cpl[i].F >> cpl[i].S;
            if( !mapp[ cpl[i].F ] ) mapp[ cpl[i].F ] = ++timer;
            if( !mapp[ cpl[i].S ] ) mapp[ cpl[i].S ] = ++timer;
        }

        int N = mapp.size();
        initialize(N);
        int u,v;
        for(int i=0;i<n;i++){
            u = mapp[ cpl[i].F ];
            v = mapp[ cpl[i].S ];
            cout << combine(u, v) << "\n";
        }
    }
    return 0;
}