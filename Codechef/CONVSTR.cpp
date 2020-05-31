#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5;
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



const int MAXN = 1005;

ll ar[5];
int main() {
    fast;
    int n;


    string A, B;
    test {
        cin >> n;
        cin >> A;
        cin >> B;


        bool f = true;
        for(int i = 0; i < n; i++) if(A[i] != B[i] && A[i] < B[i]) f = false;

        if(!f) {
            cout << -1 << "\n";
        }
        else {

            map< char, vector<int> > change;
            for(int i = 0; i < n; i++) {
                if(A[i] != B[i]) change[ B[i] ].push_back(i);
            }


            string alpha = "abcdefghijklmnopqrstuvwxyz";
            reverse(alpha.begin(), alpha.end());


            bool flag = true;

            vector< vector<int> > ans;

            for(int i = 0; i < 26; i++) { // for(int j = i+1; j < 26; j++)
                if(change.find( alpha[i] ) != change.end()) {

                    size_t found = A.find( alpha[i] );
                    if (found != string::npos) {

                        vector< int > indexs = change[ alpha[i] ];
                        indexs.push_back((int)found);

                        ans.push_back( indexs );
                    }
                    else {
                        flag = false;
                    }
                }

            }


            if(flag) {
                cout << ans.size() << "\n";
                for(int i = 0; i < ans.size(); i++) {

                  cout << ans[i].size() << " "; for(int &e: ans[i]) cout << e << " "; cout << "\n";
                }
            }
            else {
                cout << -1 << "\n";
            }
        }

    }
    return 0;
}