        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 2e5+5; 
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test int t;scanf("%d",&t);while(t-- > 0)
        ll ar[N];
        int trie[N*32][2], nxt;

void add(ll x)
{
    int root=1;
    for(int i=30; i>=0; i--)
    {
        int to=(x>>i)&1;
        if(!trie[root][to])
            trie[root][to]=nxt++;
        root=trie[root][to];
    }
}
ll ask(ll x)
{
    ll ret=0;
    int root=1;
    for(int i=30; i>=0; i--)
    {
        int to=(x>>i)&1;
        if(trie[root][to^1])
        {
            ret|=1<<i;
            root=trie[root][to^1];  
        }
        else
            root=trie[root][to];
    }
    return ret;
}
        int main(){
            
            test{
                memset(trie, 0, sizeof trie);

                int n; ll x; scanf("%d %lld",&n,&x);
                for(int i=1;i<=n;i++)   scanf("%lld",ar+i);

                //for(int i=1;i<=n;i++) cout<<ar[i]<<" "; cout<<"\n";

                ll res=0,ans=0;
                nxt=2;
                add(0);
                
                for(int i=1;i<=n;i++){
                    res = (res^ar[i]);
                    add(res);
                    ans = max( ans, (ask(res^x)));

                }

                printf("%lld\n",ans^x);

                // cout<<"BRUTE ";
                // ll B=0;
                // for(int i=1;i<=n;i++){
                //     ll temp=0;
                    
                //     for(int j=i;j<=n;j++){
                //         temp ^= ar[j];
                //         B = max(B, temp^x);
                //     }
                // }
                // cout<< B<<"\n";
            }
            return 0;
        }
