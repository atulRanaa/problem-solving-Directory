

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

// int prime[N];

// void numofFact(int num){
//     int res = 1;
//     map<int,int> mapp;
//     while(num > 1){
//         mapp[ prime[num]]++;
//         num /= prime[num];
//     }
//     cout<<1;
//     for(pii e: mapp) for(int i=0;i<e.S;i++) cout<<" x " << e.F;

//     cout << "\n";
// }
// void sieve(){
// 	memset(prime,0,sizeof(prime));
//     prime[0] = prime[1] = 1;
    
//     for(int i = 2; i < N; i++){
//         if(prime[i]==0){
//             for(int j=i; j < N;j+=i) prime[j] = i;
//         }
//     }
// }
ll ar[N];
ll health[N];
int main(){
    fast;
    // sieve();
    // int n;
    // while( cin >> n){
    //     numofFact(n);
    // }
    int n,m;    
    test{
        cin >> n >> m;
        for(int i=1;i<=n;i++) cin>>ar[i];
        for(int i=1;i<=m;i++) cin>>health[i];

        int ans[N];
        memset(ans, -1 , sizeof(ans));
        for(int i=1;i<=m;i++){ // walking
            for(int j=i;j<=n;j+=i) if(ar[j] <= health[i] && ans[j]==-1) ans[j] = (i); // j is multiple of i
        }

        for(int i=1;i<=n;i++) cout<<ans[i]<<"\n";
    }
    return 0;
}