#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6 + 5;
const ll MOD = 1e9 + 7;
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


// '.' white
// '#' black
int countblack(vector< string > &ar) {
    int cnt = 0;
    for(int i = 0; i < ar.size(); i++) {
        for(char ch: ar[i]) if(ch == '#') cnt++;
    }
    return cnt;
}

int main() {
    fast;

    int h, w, k; cin >> h >> w >> k;

    vector< string > ar(h);
    for(int i = 0; i < h; i++) {
        cin >> ar[i];
    }

    int R = (1 << h);
    int C = (1 << w);
    int ans = 0, tmp;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {

            vector< string > A = ar;

            tmp = i; // row
            for(int row = 0; tmp; row++) {
                if(tmp & 1) {
                    for(int itr = 0; itr < w; itr++) A[row][itr] = '*';
                }
                tmp >>= 1;
            }

            tmp = j; // col
            for(int col = 0; tmp; col++) {
                if(tmp & 1) {
                    for(int itr = 0; itr < h; itr++) A[itr][col] = '*';
                }
                tmp >>= 1;
            }
            if(countblack(A) == k) ans++;
        }
    }


    cout << ans << "\n";
    return 0;
}