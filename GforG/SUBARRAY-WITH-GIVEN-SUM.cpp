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
        ll n,k; cin>> n >> k;
        ll ar[n+1];

        for(ll i=1;i<=n;i++) cin >> ar[i];
        ll l=1,r=1;
        ll sum=0;
        
        for(r=1;r<=n;r++){
            while(sum+ar[r] > k)
                sum -= ar[l++];
            if(sum+ar[r]==k){
                sum+=ar[r];
                break;
            }
            sum += ar[r];
        }
        if(sum==k)  cout << l << " " << r<<"\n";
        else        cout <<-1<<"\n";
    }
    return 0;
}