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
        int n; scanf("%d",&n);

        int ans = 0;
        if(n==0) ans=0;
        else if(n==1) ans=1;
        else{
                while(n%2 == 0){
                        ans += 2; n/=2;
                }
        }
        printf("%d", ans);
        return 0;
}