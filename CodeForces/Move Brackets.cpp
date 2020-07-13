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


int main() {
    fast;

    ll x, y, n;
    string s;
    test {
        cin >> n;
        cin >> s;

        stack < char > Stack;
        for(char ch: s) {
            if(ch == '(')
                Stack.push(ch);
            else {
                // ch == ')'
                if(!Stack.empty() && Stack.top() == '(')
                    Stack.pop();
                else
                    Stack.push(ch);
            }
        }

        int ans = Stack.size();
        cout << ans / 2 << "\n";

    }
    return 0;
}