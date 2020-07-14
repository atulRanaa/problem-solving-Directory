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

    test {
        int n; cin >> n;

        int chef = 0, morty = 0, draw = 0;

        for(int i = 0; i < n; i++) {
            string C, M; cin >> C >> M;

            int c = 0, m = 0;
            for(char ch: C) c += (ch - '0');
            for(char ch: M) m += (ch - '0');


            if(c > m) chef++;
            else if(m > c) morty++;
            else {
                chef++;
                morty++;
            }
        }


        if(chef > morty) cout << 0 << " " << chef << "\n";
        else if(morty > chef) cout << 1 << " " << morty << "\n";
        else
            cout << 2 << " " << chef << "\n";

    }
    return 0;
}