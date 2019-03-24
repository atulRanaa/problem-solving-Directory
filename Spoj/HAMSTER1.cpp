// spoj      
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
        typedef long double ld;

const ld g = 10.0;

ld k1, k2, v;

ld score(ld theta) {
    return (v*v)/(2.0*g)*(2.0*k1*sin(2.0*theta) + k2*sin(theta)*sin(theta));
}
// height = v2*sin2(0)/(2g) , range = 4y/(tan(0))

ld search(ld low, ld high, ld eps) {
    if(fabs(high - low) < eps)
        return (low + high) / 2.0;
    
    ld leftThird = (2.0*low + high) / 3.0;
    ld rightThird = (low + 2.0*high) / 3.0;
    
    if(score(leftThird) < score(rightThird))
        return search(leftThird, high, eps);
    else
        return search(low, rightThird, eps);
}

int main() {
    ld theta, total;
    test{
        scanf("%Lf %Lf %Lf", &v, &k1, &k2);
        theta = search(0.0, 0.5*acos(-1.0), 1e-9);
        total = score(theta);
        printf("%.3Lf %.3Lf\n", theta, total);
    }
    return 0;
}