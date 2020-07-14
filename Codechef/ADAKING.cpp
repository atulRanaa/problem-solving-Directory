#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define LCM(a,b) ((a*b)/__gcd(a,b))
#define inf 1e15
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;


ll ar[N];
int main() {
    fast;

    int k;
    test {
        cin >> k;

        char chess[8][8];
        for(int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) {
            if(k) chess[i][j] = '.', k--;
            else
                chess[i][j] = 'X';
        }
        chess[0][0] = 'O';

        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) cout << chess[i][j];
            cout << "\n";
        }
        // cout << "\n";
    }
    return 0;
}