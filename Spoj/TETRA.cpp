// spoj    
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        typedef long double ld;
        const ll N = 3e5+5;
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
        const ld EPS = 1E-9;
        typedef vector<vector<ld>> matrix;
        typedef vector<int> vi;



ld det(matrix &a, int n){
    
    ld det = 1;
    for (int i=0; i<n; ++i) {
        int k = i;
        for (int j=i+1; j<n; ++j)
            if (abs (a[j][i]) > abs (a[k][i]))
                k = j;
        if (abs (a[k][i]) < EPS) {
            det = 0;
            break;
        }
        swap (a[i], a[k]);
        if (i != k)
            det = -det;
        det *= a[i][i];
        for (int j=i+1; j<n; ++j)
            a[i][j] /= a[i][i];
        for (int j=0; j<n; ++j)
            if (j != i && abs (a[j][i]) > EPS)
                for (int k=i+1; k<n; ++k)
                    a[j][k] -= a[i][k] * a[j][i];
    }
    return det;
}
ld rd(ld var){ 
    char str[40];  
    sprintf(str, "%.5Lf", var);
    sscanf(str, "%Lf", &var);  
    return var;  
} 
ld traingle(ld a,ld b, ld c){
    ld s = (a+b+c)/2.0L;
    ld A = 1.0;
    A *= s;    
    A *= (s-a);
    A *= (s-b);
    A *= (s-c);
    A = sqrt(A);
    return A;
}
int main(){
    //ios_base::sync_with_stdio(false); 
    //cin.tie(NULL);


    ld a,b,c,d,e,f;
    ld s;
    ld a1,a2,a3,a4;
    test{
        cin >> a >> b >> c >> d >> e >> f;
        a1 = traingle(a,b,d);
        a2 = traingle(a,c,e);
        a3 = traingle(d,e,f);
        a4 = traingle(b,c,f);

        //printf("%.9Lf %.9Lf %.9Lf %.9Lf\n",a1,a2,a3,a4);
        a = a*a;
        b = b*b;
        c = c*c;
        d = d*d;
        e = e*e;
        f = f*f;
        matrix ar{  {0,1,1,1,1},
                    {1,0,a,b,c},
                    {1,a,0,d,e},
                    {1,b,d,0,f},
                    {1,c,e,f,0}};
        // 288V^2 = det(MAT)
        ld Vol = sqrt( det(ar, 5) / 288.0 );
        ld rad = (3.0*Vol)/(a1+a2+a3+a4);
        printf("%.4Lf\n", rad);
    }
}