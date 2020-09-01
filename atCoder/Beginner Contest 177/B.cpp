// hackerearth incom
        #include <bits/stdc++.h>

        using namespace std;

        typedef long long ll;
        const ll N = 5e5+5;
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
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;


int main(){

    fast;
    string S, T;

    cin >> S;
    cin >> T;

    int ar[26][1005];
    int A[26];
    memset(ar, 0, sizeof ar);
    memset(A, 0, sizeof A);

    // for(int i = 0; i < T.size(); i++) A[ T[i] - 'a' ]++;
    // for(int i = 0; i < S.size(); i++) {
    //     ar[ S[i] - 'a' ][i + 1] += 1;

    //     for(int j = 0; j < 26; j++) ar[j][i + 1] += ar[j][i];
    // }

    int ans = INT_MAX;
    // for(int i = T.size(); i <= S.size(); i++) {

    //     int change = 0;
    //     for(int j = 0; j < 26; j++) {
    //         int charCount = ar[j][i] - ar[j][i - T.size()];
    //         if(A[j] > charCount) {
    //             change += A[j] - charCount;
    //         }


    //         if(charCount > 0) cout << (char)('a' + j) << ":" << charCount << " ";
    //     }
    //     cout << change << "\n";

    //     ans = min(ans, change);
    // }
    for(int i = 0; i + T.size() - 1 < S.size(); i++) {

        int cnt = 0;
        for(int j = i; j < (i + T.size()); j++) {
            // cout << S[j];
            if(T[j - i] != S[j])
                cnt++;
        }
        // cout << "\n";
        // string s = S.substr(i, T.size()); cout << s << "\n";
        ans = min(cnt, ans);
    }

    cout << ans << "\n";
    return 0;
}
