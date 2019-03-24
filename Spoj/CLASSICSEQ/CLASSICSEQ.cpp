// hackerearth
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;scanf("%lld",&cse);for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;
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
            for(ll j=0;j<n;++j)
                C[i][j]= (C[i][j]+A[i][k]*B[k][j])%MOD;
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
// ll fib[100000+1];
// ll sum[100000+1];
// void actual(ll n){
//     fib[0]=0, fib[1]=1;
//     for(int i=2;i<=n;i++) fib[i]=(fib[i-1]+fib[i-2])%MOD;
    
//     sum[0]=0;
//     for(int i=1;i<=n;i++) sum[i]=(sum[i-1]+fib[i]*fib[i])%MOD;
// }
int main(){
        ll x;
       
        matrix M2 = {{1,1},{1,0}};     //f(n) = f(n-1)+f(n-2);
        vector<ll> x2 = {1,0};

        //f(n) = 2f(n-1)+3f(n-2)+n7^n
        //matrix M = {{2,3,1,0},{1,0,0,0},{0,0,7,7},{0,0,0,7}}; 
        //vector<ll> x1 = {1,1,2*7*7,7*7};

        //S(n) = S(n-1) + fib(n)^2
        matrix M = {{1,1,0,0}, {0,1,1,2}, {0,1,0,0},{0,1,0,1}};
        vector<ll> x1 = {0,1,0,0};
        
        ll cse;
        cse = get_int();
        //scanf("%lld",&cse);
        for(ll _i=1;_i<=cse;_i++){   
                
                x = get_int();
                //scanf("%lld",&x);
                // ll ans=0;

                //     matrix mn = mat_exp(M,x);
                //     for(int i=0;i<1;++i) for(int j=0;j<4;++j){
                //         ans += mn[i][j]*x1[j];
                //         ans %= MOD;
                //     }
                
                // print_matrix(M);
                // print_matrix(mn);
                // print_vector(xn1);
                putchar_unlocked('C');
                putchar_unlocked('a');
                putchar_unlocked('s');
                putchar_unlocked('e');
                putchar_unlocked(' ');
                print_int(_i);
                //printf("%lld",_i);
                putchar_unlocked(':');
                putchar_unlocked(' ');
                //print_int(ans);
                //printf("%lld",ans);
                //printf("\n");
                //putchar_unlocked(' ');

                ll ans2=0;
                    matrix mn2 = mat_exp(M2,x-1);
                    for(int i=0;i<1;++i) for(int j=0;j<2;++j){
                        ans2 += mn2[i][j]*x2[j];
                        ans2 %= MOD;
                    }
                ll ans3=0;
                    matrix mn3 = mat_exp(M2,x);
                    for(int i=0;i<1;++i) for(int j=0;j<2;++j){
                        ans3 += mn3[i][j]*x2[j];
                        ans3 %= MOD;
                    }
                ans2 = (ans2*ans3)%MOD;
                print_int(ans2);
                putchar_unlocked('\n');
                //printf("Case %lld: %lld\n",_i, ans);
        }
        return 0;
}