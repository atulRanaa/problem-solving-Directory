// codechef
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
        #define MAX 10
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;


int main(){
    fast;

    test {
        int n;
        int ar[N];
        memset(ar, 0, sizeof ar);

        cin >> n;
        int tmp;
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            ar[tmp]++;
        }


        map<int, int> M;
        for(int i = 0; i <= 10; i++) {
            if(ar[i]) M[ ar[i] ]++;
        }

        int freq = INT_MIN, ans;
        for(auto ele: M) {
            if(ele.second > freq) {
                ans = ele.first;
                freq = ele.second;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
