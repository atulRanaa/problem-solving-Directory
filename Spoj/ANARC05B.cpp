        // spoj
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e5+5;
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
        typedef vector< vector<double> > matrix;
        typedef vector<int> vi;
    

    // ll BIT[N], ans = 0LL;
    // ll cnt[N];
    // ll ar[N];
    ll a[N]={0}, b[N]={0};

// ll phi[N + 1], prime[N/10];
 
// bitset <N + 1> mark;
// void sieve(){
//     int size=0;
//     for (int i = 2; i <= N; i++ ){
//         if(!mark[i]){
//                 phi[i] = i-1;
//                 prime[size++]=i;
//         }
//         for (int j=0; j<size && prime[j]*i <= N; j++ ){
//                 mark[prime[j]*i]=1;
//                 if(i%prime[j]==0){
//                         phi[i*prime[j]] = phi[i]*prime[j];
//                         break;
//                 }
//                 else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
//         }
//     }
// }

// ll getSum(ll ind){ 
//     ll sum = 0;
//     for(;ind > 0; ind -= ind & (-ind))  sum += BIT[ind];
//     return sum;
// }
// void updateBIT(ll n, ll ind, ll val){ 
//     for(;ind <= n;ind += ind & (-ind))  BIT[ind] += val;
// }
// void build(int n)
// {   
//     for (int i=n; i>=1; i--){
//         cnt[i]  = getSum(ar[i]-1);
//         ans += cnt[i];
//         updateBIT(n, ar[i], 1);
//     }
//     memset(BIT, 0, sizeof BIT);
//     for (int i=1; i<=n; i++){
//         cnt[i]  += getSum(ar[i]-1);  updateBIT(n, ar[i], 1);
//     }
// }
int main(){
    int n,m;
    while(1) {
        cin >> n;
        if(n == 0) break;

        unordered_map< int, int> MAP;
        ll roll_a[N]={0}, roll_b[N]={0};

        // getting prefix sum
        for(int i=1;i<=n;i++) {
            cin >> a[i];
            roll_a[i] = roll_a[i-1] + a[i];
        }

        cin >> m;
        for(int i=1;i<=m;i++) {
            cin >> b[i];
            roll_b[i] = roll_b[i-1] + b[i];
            MAP[ b[i] ] = i;
        } 
        
        // previous matched index
        int x=1, y=1;

        ll ans = 0;
        for(int i=1;i<=n;i++){
            if( MAP.find(a[i]) != MAP.end() ){
                // index from second array
                int j = MAP[ a[i] ];
                ans += max(roll_a[i-1] - roll_a[x-1], roll_b[j-1] - roll_b[y-1]);

                // update the pointer index
                x = i;
                y = j;
            }
        }
        // last remaining points
        ans += max(roll_a[n] - roll_a[x-1], roll_b[m] - roll_b[y-1]);

        cout << ans << "\n";
    }
    
    return 0;
}