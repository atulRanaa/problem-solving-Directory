// codechef
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

ll ar[N];
int main(){
        ll n,k;
        test{
                scanf("%lld %lld",&n,&k);
                for(int i=0;i<n;i++) scanf("%lld",ar+i);       
                
                sort(ar,ar+n, greater<int>());
                int ind;
                k -= 1;
                int l=0,r=n-1, mid;
                while(l <= r){
                        mid = (l+r)>>1;
                        if( ar[mid] >= ar[k]){
                                l = mid+1; ind = mid;
                        }
                        else
                                r = mid-1;
                }
                printf("%d\n",ind+1);
        }
        return 0;
}