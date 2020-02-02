        // spoj
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
        typedef vector< vector<double> > matrix;
        typedef vector<int> vi;
    

    ll BIT[N], ans = 0LL;
    ll cnt[N];
    int ar[N];

ll phi[N + 1], prime[N/10];
 
bitset <N + 1> mark;
void sieve(){
    int size=0;
    for (int i = 2; i <= N; i++ ){
        if(!mark[i]){
                phi[i] = i-1;
                prime[size++]=i;
        }
        for (int j=0; j<size && prime[j]*i <= N; j++ ){
                mark[prime[j]*i]=1;
                if(i%prime[j]==0){
                        phi[i*prime[j]] = phi[i]*prime[j];
                        break;
                }
                else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
        }
    }
    //cout << size << "|\n";
}

ll getSum(ll ind){ 
    ll sum = 0;
    for(;ind > 0; ind -= ind & (-ind))  sum += BIT[ind];
    return sum;
}
 
void updateBIT(ll n, ll ind, ll val){ 
    for(;ind <= n;ind += ind & (-ind))  BIT[ind] += val;
}
void build(int n)
{   
    for (int i=n; i>=1; i--){
        cnt[i]  = getSum(ar[i]-1);
        ans += cnt[i];
        updateBIT(n, ar[i], 1);
    }
    memset(BIT, 0, sizeof BIT);
    for (int i=1; i<=n; i++){
        cnt[i]  += getSum(ar[i]-1);  updateBIT(n, ar[i], 1);
    }
}
int main(){
    memset(BIT, 0, sizeof BIT);

    ll n, q; cin >> n >> q;
    string type;
    ll A, B;

    while(q-- > 0){
        cin >> type >> A >> B;

        if(type[0]=='a') updateBIT(n, A, B);
        else
            cout << getSum(B)-getSum(A-1) << "\n";
    }
    
    return 0;
}