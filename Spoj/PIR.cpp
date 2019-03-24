// spoj    
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
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
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;


double det(matrix &a, int n){
    
    double det = 1;
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
int main(){
    //ios_base::sync_with_stdio(false); 
    //cin.tie(NULL);


    double a,b,c,d,e,f;
    test{
        cin >> a >> b >> c >> d >> e >> f;
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
        double deter = det(ar, 5) / 288.0;
        deter = sqrt(deter);
        printf("%.4f\n", deter);
    }
}