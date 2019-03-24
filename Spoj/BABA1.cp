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
        double H,A;
        test{
                scanf("%lf %lf", &H,&A);
                double a,b,t = (4*A)/(H*H);
                if(t > 1) printf("-1\n");
                else{
                        t = asin(t)/2;
                        a = H*sin(t);
                        b = H*cos(t);
                        printf("%.6lf %.6lf %.6lf\n",min(a,b), max(a,b),H);
                }
                
        }
        return 0;
}