        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 5e5+5; 
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15

int phi[N], p[N];

// phi[i] = i*(1-1/Pi)*(1-1/Pi+1).....*(1-1/Pm)
// Number of Coprime Integer <= I
void compute_phi() {
    for(int i = 1; i < N; i++) phi[i] = i;
    for(int i = 2; i < N; i++)
        if (phi[i] == i) { // prime number
            for(int j = i; j < N; j += i) {
                phi[j] -= phi[j] / i;
                phi[j] %= MOD;
            }
        }
}
// F(x) = GCD(1, x) + GCD(2, x) + ... + GCD(x, x)
    void compute_pillai() {
        for(int i = 1; i < N; i++)
            for(int j = i; j < N; j += i) {
                p[j] += i * phi[j / i];
                phi[j] %= MOD;
            }
    }
    ll BIT[N];
    ll ar[N];
ll get(int ind){ 
    ll x = 0;
    while(ind > 0){
        x = (BIT[ind]+x)%MOD;  ind -= ind & (-ind);
    }
    return x;
}
 
void updateBIT(int n, int ind, ll val){ 
    while(ind <= n){
        BIT[ind] = (BIT[ind]+val)%MOD;  ind += ind & (-ind);
    }
}
int main(){
    memset(BIT, 0, sizeof BIT);
    compute_phi();
    compute_pillai();
    //for(int i=0;i<=15;i++) cout<<p[i]<<" "; cout<<"\n";
    int x,y; char ch;
    int n;  scanf("%d",&n);
    //cout<< n <<"\n";
    
    for(int i=1;i<=n;i++) scanf("%lld", ar+i);
    //for(int i=0;i<=n;i++) cout<<ar[i]<<" "; cout<<"\n";
    
    for(int i=1;i<=n;i++){
        updateBIT(n,i, p[ ar[i] ]);
    }

    int q; scanf("%d",&q);
    //cout<< q <<"\n";
    
    while(q-- > 0){
        cin >> ch >> x >> y;
        //cout<< ch <<" "<< x<<" "<<y<<"\n";
        if(ch == 'C'){
            printf("%lld\n", (get(y)-get(x-1)+MOD)%MOD );
        }
        else{
            updateBIT(n, x,  (p[y]-p[ ar[x] ]+MOD)%MOD );
            ar[x] = y;
        }
    }
    return 0;
}