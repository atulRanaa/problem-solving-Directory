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
        
        int main(){
            int n; cin>>n;
            for(int i=0;i<n;i++) scanf("%lld",ar+i);


                ll ans=0;
                int cnt=0;
                for(int j=62;j>=0;j--)
                {
                    for(int i=cnt;i<n;i++)
                    {
                        if( ar[i] & (1LL<<j) )
                        {
                            swap(ar[i], ar[cnt]);
                            for(int k=0;k<n;k++)
                                if(cnt!=k && (ar[k] & (1LL<<j) ) )
                                    ar[k]^=ar[cnt];
                            cnt++;
                            break;
                        }
                    }
                }
                for(int i=0;i<cnt;i++)  ans^=ar[i];
                printf("%lld",ans);
            return 0;
        }
