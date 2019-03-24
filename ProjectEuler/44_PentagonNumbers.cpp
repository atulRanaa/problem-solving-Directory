
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


    int lim = 10000;

    ll pen[ lim+1];
    unordered_map< ll ,bool> MAP;
    for(ll i=1;i<= lim;i++) pen[i]=(i*(3*i-1)/2);
    for(int i=1;i<= lim;i++) MAP[ pen[i] ] = 1;


    //int ans= (lim*(3*lim-1)/2)+1;
    for(int i=1;i<= lim;i++) for(int j=i+1;j<= lim;j++){
        if(pen[i]+pen[j] > pen[lim]) break;

        if( MAP[pen[i]+pen[j]] && MAP[pen[j]-pen[i]]){
            cout << pen[i] << " " << pen[j] <<" " << pen[j]-pen[i] << "\n";
        }
    }
    return 0;
}