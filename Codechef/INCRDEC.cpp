// codechef
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pis pair<ll,string>
#define F first
#define S second
#define LCM(a,b) ((a*b)/__gcd(a,b))
#define inf 1e10
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;


ll ar[N], ans[N];
int main(){
    fast;


    test{
        int n; cin >> n;

        for(int i = 0; i < n; i++) cin >> ar[i];
        sort(ar, ar + n);

        vector< int > A, B;
        for(int i = 0; i < n; i++) {
            if(i&1) A.push_back(ar[i]);
            else
                B.push_back(ar[i]);
        }
        bool f1 = true, f2 = true;
        for(int i = 1; i < A.size(); i++) if(A[i-1] >= A[i]) f1 = false;
        for(int i = 1; i < B.size(); i++) if(B[i-1] >= B[i]) f2 = false;

        bool f3 = (A[ A.size() - 1] != B[ B.size() - 1]);

        if(f1 & f2 & f3) {
            cout << "YES\n";
            for(int i = 0; i < A.size(); i++) cout << A[i] << " ";
            for(int i = B.size() - 1; i >= 0; i--) cout << B[i] << " ";

            cout << "\n";
        }
        else
            cout << "NO\n";

    }
    return 0;
}