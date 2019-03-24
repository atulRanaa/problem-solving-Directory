        
// spoj
        #include <cstring>
        #include <algorithm>
        #include <iostream>
        #include <stdio.h>
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e6+5; 
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test int cse;scanf("%d",&cse);while(cse-- >0)

ll modexp(ll x,ll n){
        ll res = 1;
        while(n > 0){
                if(n&1) res = (res*x) % MOD;
                x = (x*x) % MOD;
                n >>= 1; 
        }
        return res;
}
int main(){
        ll a,b;
        ll A,B;
        //cout<< val << endl;
        //int i=0;
        while( scanf("%lld %lld",&a,&b) == 2){
                //cout<< ++i <<" ";
                if(a > b) swap(a,b);
                // ll sum=0;
                // for(int i=a;i<=b;i++) sum+=i;
                // cout<< sum <<" ";
                if(a>=0){
                        B = (b*(b+1))/2;  A = (a*(a-1))/2;
                        printf("%lld\n", (B-A));
                }
                else if(a<0 && b>=0){
                        a = -a;
                        B = (b*(b+1))/2;  A = -(a*(a+1))/2;
                        printf("%lld\n", (B+A));
                }
                else{
                        a = -a;
                        b = b+1;
                        if(b<0) b=-b;
                        B = -(b*(b+1))/2;  A = -(a*(a+1))/2;
                        printf("%lld\n", (A-B));
                }
        }
        return 0;
}