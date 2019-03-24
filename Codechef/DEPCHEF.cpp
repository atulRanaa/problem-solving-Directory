
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
        #define test ll cse;cin>>cse;for(ll i=1;i<=cse;i++)
        #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        #define PI 3.14159265
        #define MAXN 10000001


int main(){
    
    fast;
    test{
        int n; cin >>n;
        int a[n+5]; for(int i=0;i<n;i++) cin >> a[i];
        int d[n+5]; for(int i=0;i<n;i++) cin >> d[i];


        int ans=-1;
        if(n==1) ans = d[0];
        else if(n==2){
            if(d[0] > a[1]) ans = d[0];
            if(d[1] > a[0]) ans = max(ans,d[1]);
        }
        else{
            for(int i=1;i<(n-1);i++){
                if(d[i] > (a[i-1]+a[i+1]))  ans = max(ans,d[i]);
            }
            if(d[0] > (a[1]+a[n-1])) ans = max(ans,d[0]);
            if(d[n-1] > (a[n-2]+a[0])) ans = max(ans,d[n-1]);
        }
        cout << ans <<"\n";
    }   
    return 0;
}