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
        ll n, fn;
        test{
                scanf("%lld",&n);
                n%=11;
                fn = (1 + (8*n) + 10)%11;
                if(fn == 0) printf("0\n");
                else
                        printf("%lld\n",11-fn);
                
        }
        return 0;
}