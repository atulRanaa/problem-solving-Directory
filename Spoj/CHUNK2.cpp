
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e5+5;
        #define all(x) x.begin(),x.end()
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll I=1;I<=cse;I++)
        #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        #define PI 3.14159265
        #define MAXN 1300005
        #define pb      push_back
        #define mp      make_pair
        
        vector<int> G[N];
        bool used[N];

ll phi[MAXN + 1], prime[MAXN/10];

bitset <MAXN + 1> mark;
void sieve(){
    int size=0;
    for (int i = 2; i <= MAXN; i++ ){
        if(!mark[i]){
                phi[i] = i-1;
                prime[size++]=i;
        }
        for (int j=0; j<size && prime[j]*i <= MAXN; j++ ){
                mark[prime[j]*i]=1;
                if(i%prime[j]==0){
                        phi[i*prime[j]] = phi[i]*prime[j];
                        break;
                }
                else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
        }
    }
    //cout << size << "|\n";
}

int cnt=0;
void dfs(int u){
	cnt++;
        used[u]=true;
        for(int e: G[u]){
                if(!used[e]) dfs(e);
        }
}
int main(){
        fast;
        sieve();
        test{
                for(int i=0;i<N;i++) G[i].clear();
                int n,m;  cin>>n>>m;
                
                int x,y;
                for(int i=1;i<=m;i++){       
                        cin>>x>>y;
                        G[x].pb(y);
                        G[y].pb(x);
                }
                
                memset( used , false, sizeof(used));        
                        
                int max_group=0;
                for(int i=1;i<=n;i++)
                        if(!used[i]){
                                cnt=0;
                                dfs(i);
                                //cout << cnt<<"\n";
                                max_group = max(max_group,cnt);
                        }
                

                if(max_group <= 1){
                        cout<< -1 <<"\n";
                }
                else{
                        cout<<prime[max_group-1]<<"\n";
                }
        
        }
        return 0;
}