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
        int n,x,y;
        test{
                scanf("%d %d %d",&n,&x,&y);
                if(n>2) printf("impossible\n");
                else{
                        if(n==1) printf("%d\n",x+y);
                        else{
                                int val = sqrt(x*x + y*y);
                                if(val*val == (x*x + y*y)) printf("%d\n",val);
                                else
                                        printf("impossible\n");
                        }
                }
        }
        return 0;
}