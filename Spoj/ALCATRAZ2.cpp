// spoj
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e5+5; 
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;scanf("%lld",&cse);for(ll i=1;i<=cse;i++)
        #define PI 3.14159265
int main(){
        int ar[10];
        for(int i=0;i<8;i++) scanf("%d",ar+i);

        int l = (1<<8); //cout<<l<<"\n";
        
        vector<int> v[l];
        for(int i=0;i < l;i++){
                for(int j=0;j<8;j++) if(i&(1<<j)){
                        v[i].push_back(ar[j]);
                }
        }
        // for(int i=0;i<l;i++){
        //         for(int e: v[i]) cout<<e<<" "; cout<<"\n";
        // }
        int q,a,b; scanf("%d",&q);

        while(q-- > 0){
                scanf("%d %d",&a,&b);
                a-=1;
                b-=1;
                for(int i=0;i<l;i++){
                        if(i&(1<<a) && i&(1<<b)) v[i].clear();
                }
        }
        int ans = 0;
        for(int i=0;i<l;i++){
                int val=0;
                ans = max(ans, accumulate(v[i].begin(),v[i].end(), val));
        }
        printf("%d\n", ans);
        return 0;
}