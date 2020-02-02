        // spoj
        #include <bits/stdc++.h>
        #include <cmath>
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

double R,H,r,h;
double area(double r, double h){ return PI*r*sqrt(r*r + h*h); }
double volume(double r, double h){ return (PI*r*r*h)/3.0; }
double round(double x, int n){
    int d = 0;
    if((x * pow(10, n + 1)) - (floor(x * pow(10, n))) > 4) d = 1;
    x = (floor(x * pow(10, n)) + d) / pow(10, n);
    return x;
}
double binarySearch(double l, double r){
    double ans;
    while(l <= r){
        double mid = (l+r)/2.0;

        double v = round( volume((mid*R)/H, mid), 6);
        double a = round( 2.0*area(R,H) - area((mid*R)/H, mid), 6);
        
        if(v == a){ans = mid; break;}
        else if(v > a){
            r = mid;
        }
        else
            l = mid;
    }
    return ans;
}
int main(){
    fast;
    test{
        cin >> R >> H;
        if(area(R,H) >= volume(R,H)) r=R,h=H;
        else h=binarySearch(0.0, H);
        cout << fixed << setprecision(6) << h <<"\n";
    }
    return 0;
}