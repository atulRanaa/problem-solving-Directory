// codechef
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
        #define test ll cse;scanf("%lld",&cse);for(ll i=1;i<=cse;i++)
        #define PI 3.14159265
ll a[N], b[N];
int main(){
        int n;
        test{
            scanf("%d",&n);
            for(int i=0;i<n;i++) scanf("%lld",a+i);
            for(int i=0;i<n;i++) scanf("%lld",b+i);

            bool f = true;
            for(int i=0;i<n-2;i++){
                if(a[i] < b[i]){
                    int t=b[i]-a[i];
                    a[i] += t*1;
                    a[i+1] += t*2;
                    a[i+2] += t*3;
                }

                if(a[i] != b[i]){
                    f = false;
                    break;
                }
                //for(int i=0;i<n;i++) printf("%lld ",a[i]); cout<<"\n";
            }
            if(a[n-1]!=b[n-1]) f= false;
            if(a[n-2]!=b[n-2]) f= false;
            if(f) printf("TAK\n"); else printf("NIE\n");
        }
        return 0;
}