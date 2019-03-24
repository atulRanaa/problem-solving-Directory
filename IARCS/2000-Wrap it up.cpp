        
// icpc live archive
        #include <bits/stdc++.h>
             
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

int main(){
        int ans=100000;
        int h,w,t;
        test{
                scanf("%d %d %d",&h,&w,&t);
                ans = min(ans, 2*w + t + 80);
        }
        printf("%d\n", ans);
        return 0;
}