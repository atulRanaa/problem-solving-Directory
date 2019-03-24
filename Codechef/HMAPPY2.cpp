
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
        ll n,a,b,k; cin >>n>>a>>b>>k;

        ll A = n/a;
        ll B = n/b;
        ll C = n/(LCM(a,b));
        if( (A+B-2*C) >= k)
            cout << "Win";
        else
            cout << "Lose";
        cout << "\n";
    }
    return 0;
}