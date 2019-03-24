// spoj
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef unsigned long long ll;
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;
        ll MOD;
char buffer[100];
ll get_int() {
    register int c;
    ll number = 0;
    c = getchar_unlocked();
    for (; (c > 47 && c < 58); c = getchar_unlocked())
        number = 10 * number + c - 48;
    return number; }
 
void print_int(ll n) {
    if (n == 0) {
        putchar_unlocked('0'); return;
    }
    int i, p = 0;
    while (n > 0) {buffer[p++] = (char)(n%10 + '0'); n /= 10;}
    for (i = p-1; i >= 0; i--) putchar_unlocked(buffer[i]);
}
ll modmulti(ll a,ll b){

    if(a < b) swap(a,b);
    ll res = 0;
    a %= MOD;
    while (b > 0){ 
        if(b&1) res = (res + a) % MOD; 
        a = (2*a) % MOD; 
        b >>= 1;
    } 
    return res; 
}
inline matrix indentity(ll n){
    matrix I(n, vector<ll>(n,0LL));
    for(ll i=0;i<n;++i)
        I[i][i]=1LL;
    return I;
}
inline matrix zero(ll n){
    matrix Z(n, vector<ll>(n,0LL));
    return Z;
}
matrix matrix_mult(const matrix &A, const matrix &B){
    ll n = A.size();
    matrix C = zero(n);
    for(ll k=0;k<n; ++k) for(ll i=0;i<n;++i)
            for(ll j=0;j<n;++j){
                C[i][j] += modmulti(A[i][k],B[k][j])%MOD;
                C[i][j] %= MOD;
            }
    return C;
}
matrix mat_exp(matrix a, ll exp){
    ll n = a.size();
    matrix R = indentity(n);
    for(;exp >0; exp>>=1LL, a=matrix_mult(a,a)){
        if(exp&1LL)
            R = matrix_mult(R,a);
    }
    return R;
}
// void print_matrix(const matrix &m){
//     for(auto &row : m){
//         for(ll val: row) printf("%lld ",val); cout<<"\n";
//     }
// }
// void print_vector(const vi &v){
//     for(ll x: v) printf("%lld ",x); cout<<"\n";
// }
int main(){
        
        matrix M = {{1,1},{1,0}};     //f(n) = f(n-1)+f(n-2);
        vector<ll> x1 = {1,0};

        ll cse=500000,x;
        while(cse-- > 0){   
                scanf("%lld %lld",&x,&MOD);
                
                ll ans=0;

                if(x<=1) ans=x;
                else if(x==2) ans=1;
                else{
                    x--;
                    matrix mn = mat_exp(M,x);
                    for(int i=0;i<1;++i) for(int j=0;j<2;++j){
                        ans += modmulti(mn[i][j], x1[j]);
                        ans %= MOD;
                    }
                }
                printf("%lld\n",ans%MOD);
        }
        return 0;
}