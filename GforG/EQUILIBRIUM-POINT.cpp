// geeksforgeeks
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 5e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;

int main(){

    fast;
    test{
        ll n; cin>>n;
        ll ar[n], sum = 0;

        for(ll i=0;i<n;i++) cin>>ar[i];
        for(ll i=0;i<n;i++) sum+=ar[i];

        ll cur=0;
        ll ind=-1;
        for(ll i=0;i<n;i++){
            if(cur == sum-cur-ar[i]){
                ind = i+1;
                break;
            }
            cur += ar[i];
        }

        cout << ind <<"\n";
    }
    return 0;
}