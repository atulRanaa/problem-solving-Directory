#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll N = 1e6 + 5;
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
typedef vector< vector<double> > matrix;
typedef vector<int> vi;


int findMin(int arr[], int n) {
    int S = 0;

    for (int i = 0; i < n; i++) S += arr[i];

    bool dp[n + 1][S + 1];

    for (int i = 0; i <= n; i++) dp[i][0] = true;
    for (int i = 1; i <= S; i++) dp[0][i] = false;

    // Fill the partition table in bottom up manner
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= S; j++)
        {
            // If i'th element is excluded
            dp[i][j] = dp[i - 1][j];

            // If i'th element is included
            if (arr[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - arr[i - 1]];
        }
    }

    // Initialize difference of two Ss.
    int diff = INT_MAX;

    // Find the largest j such that dp[n][j]
    // is true where j loops from S/2 t0 0
    for (int j = S / 2; j >= 0; j--)
    {
        // Find the
        if (dp[n][j] == true)
        {
            diff = S - 2 * j;
            break;
        }
    }
    return diff;
}

int main() {
    int n;
    int ar[10];

    const int CMAX = 5;
    test {
        // cout << "Hello\n";
        cin >> n;
        for (int i = 0; i < n; i++) cin >> ar[i];

        if (n == 1)
            cout << ar[0];
        else if (n == 2)
            cout << max(ar[0], ar[1]);
        else if (n == 3)
            cout <<
            cout << max(B1, B2) << "\n";
    }
    return 0;
}