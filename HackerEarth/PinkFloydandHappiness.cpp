// hackerearth
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e6+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<int,int>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;


ll ar[N];
int main(){
    fast;
    ll n; cin >> n;
    for(int i=0;i<n;i++) {cin >> ar[i];}

    int it = 1,i=0;

    stack<ll> St; 
    while(it <= n && i < n){
        
        while(St.size() > 0 && St.top() == it){
            it++; cout<<"Pop"<<St.top()<<"\n";
            St.pop(); 
        }
        if(it == ar[i]){
            it++;
            i++;
        }
        else{
            St.push(ar[i]); //cout<<"Push"<<ar[i]<<"\n";
            i++;
        }
    }
    while(St.size() > 0 && St.top() == it){
            it++; //cout<<"Pop"<<St.top()<<"\n";
            St.pop(); 
        }

    if(it == n+1 && i==n) cout<<"Happy\n"; else cout<<"Sad\n";
    return 0;
}
