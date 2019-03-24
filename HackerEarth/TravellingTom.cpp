// hackerearth
        #include <bits/stdc++.h>
        #define all(x) x.begin(),x.end()
        #define F first
        #define S second
        using namespace std;
        typedef long long ll;
        typedef vector<int> vi;
        typedef pair<int,int> pii;


const int MAX = 1e5 + 5;
int id[MAX];
int sz[MAX];

//multiset<int> sett;
//vector< vector< pii > > adj(MAX);
vector< pair< ll , pair< pii, int> > > nodes;
bool visited[MAX];


void initialize(int n){
    //sett.clear();
    //adj.clear();
    nodes.clear(); 
    memset(visited, false, sizeof visited);
    
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
ll sum=0;
vector<int> token[MAX];
bool combine(int x, int y){
    int p = findset(x), q = findset(y);
    if(p==q)
        return false;
    if(sz[q] >sz[p]) swap(p,q);
    
        //sett.erase( sett.find(sz[p])); sett.erase( sett.find(sz[q]));
        id[q]=p; sz[p]+=sz[q];

        sz[q]=-1;
        //sett.insert(sz[p]);
    return true;
}

int main(){
        int n,m,k; scanf("%d %d %d",&n,&m,&k);
                
        initialize(n);
        vector<ll> w(k+1,0LL);
        int x,y,t;
        for(int i=1;i<=k;i++) scanf("%lld",&w[i]);
        
        int id;
        ll W;
        for(int i=0;i<m;i++){
            scanf("%d %d %d",&x,&y,&t);
            W=0;
            while(t-- > 0){
                scanf("%d",&id);

                token[i].push_back(id);
                W += w[id];
            }
            nodes.push_back({W,{ {x,y},i } } );
        }
        sort(all(nodes));

        bool f;
        set<int> ids;
        int loc;
        for(int i=0;i<m;i++){
            f=combine(nodes[i].S.F.F,nodes[i].S.F.S);
            loc = nodes[i].S.S;
            
            //cout<<nodes[i].F<<" "<<nodes[i].S.F.F<<" "<<nodes[i].S.F.S<<" "<<nodes[i].S.S<<"\n";
            if(f){
                for(int e: token[loc]) ids.insert(e);
            }
        }
        for(int e: ids) sum += w[e];
        printf("%lld",sum);
    return 0;
}