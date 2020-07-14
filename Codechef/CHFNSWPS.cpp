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


int A[N], B[N];
int main() {
    fast;

    int k;
    int n;
    test {
        cin >> n;

        map<int, int> CNT, cntA, cntB;
        for(int i = 0; i < n; i++) { cin >> A[i]; CNT[A[i]]++; cntA[A[i]]++;}
        for(int i = 0; i < n; i++) { cin >> B[i]; CNT[B[i]]++; cntB[B[i]]++;}

        bool f = true;
        for(auto &ele: CNT) if(ele.second & 1) f = false;

        if(!f) cout << -1 << "\n";
        else {

            vector< int > add, remove;
            for(auto &ele: CNT) {
                int tmp = (ele.second >> 1) - cntA[ ele.first ];

                if(tmp > 0) for(; tmp; tmp--) add.push_back(ele.first);
                if(tmp < 0) for(; tmp; tmp++) remove.push_back(ele.first);
            }

            sort(all(add));
            sort(all(remove), greater<int> ());

            ll cost = 0LL;
            for(int i = 0; i < add.size(); i++) cost += (ll)min(add[i], remove[i]);

            cout << cost << "\n";
        }
    }
    return 0;
}