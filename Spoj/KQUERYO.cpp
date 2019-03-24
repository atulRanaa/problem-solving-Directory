// spoj
#include <bits/stdc++.h>
using namespace std;

const int N = 30000+5;
#define ll long long
#define MOD 1000000007
int ar[N];
vector<int> tree[4*N];

void build(int cur,int l,int r ){
    if( l==r ){
            tree[cur].push_back( ar[ l ] );
            return ;
    }
    int mid = l+(r-l)/2;
    build(2*cur, l , mid);          // Build left tree 
    build(2*cur+1 , mid+1 , r);     // Build right tree
    merge(tree[2*cur].begin(),tree[2*cur].end(),tree[2*cur+1].begin(),tree[2*cur+1].end(),back_inserter(tree[cur]));
}
int query( int cur, int l, int r, int x, int y, int k){
        if( r < x || l > y ){
               return 0; //out of range
        }
        if( x<=l && r<=y )
        {
              //Binary search over the current sorted vector to find elements smaller than K
                int i = (upper_bound(tree[cur].begin(),tree[cur].end(),k)-tree[cur].begin());
                return (r-l+1)-i;
        }
        int mid=l+(r-l)/2;
        return (query(2*cur,l,mid,x,y,k) + query(2*cur+1,mid+1,r,x,y,k));
}
int main(){
    
        int n; scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d", ar+i);

        build(1,1,n);
        
        int q; scanf("%d",&q);
        int l,r;
        int K;
        int ans=0;
        while(q-- > 0){
            scanf("%d %d %d",&l,&r,&K);

            l^=ans;
            r^=ans;
            K^=ans;

            if(l < 1) l=1;
            if(r > n) r=n;
            //cout<< l <<" "<<r<<" "<<K<<"\n";

            if(l > r){
                ans = 0;
                printf("%d\n", ans);
                continue;
            }
            ans = query(1,1,n,l,r,K);
            printf("%d\n", ans);
        }
    return 0;
}