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
#define inf 1e15
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;

ll ar[N];


ll maxProductSubarrayOfSizeK(ll A[], int n, int k) {
    // sorting given input array
    sort(A, A + n);

    // variable to store final product of all element
    // of sub-sequence of size k
    ll product = 1LL;

    // CASE I
    // If max element is 0 and
    // k is odd then max product will be 0
    if (A[n - 1] == 0 && (k & 1))
        return 0;


    ll tmp;
    // CASE II
    // If all elements are negative and
    // k is odd then max product will be
    // product of rightmost-subarray of size k
    if (A[n - 1] <= 0 && (k & 1)) {
        for (int i = n - 1; i >= n - k; i--){
            tmp = (A[i] + MOD) % MOD;
            product = (product * tmp) % MOD;
        }
        return product;
    }

    // else
    // i is current left pointer index
    int i = 0;

    // j is current right pointer index
    int j = n - 1;

    // CASE III
    // if k is odd and rightmost element in
    // sorted array is positive then it
    // must come in subsequence
    // Multiplying A[j] with product and
    // correspondingly changing j
    if (k & 1) {
        tmp = (A[j] + MOD) % MOD;
        product = (product * tmp) % MOD;
        j--;
        k--;
    }

    // CASE IV
    // Now k is even
    // Now we deal with pairs
    // Each time a pair is multiplied to product
    // ie.. two elements are added to subsequence each time
    // Effectively k becomes half
    // Hence, k >>= 1 means k /= 2
    k >>= 1;

    // Now finding k corresponding pairs
    // to get maximum possible value of product
    for (int itr = 0; itr < k; itr++) {

        // product from left pointers
        ll left_product;
        if(i >= 0 && i + 1 < n)
            left_product = A[i] * A[i + 1];
        else
            left_product = INT_MIN;

        // product from right pointers
        ll right_product = A[j] * A[j - 1];
        if(j - 1 >= 0 && j < n)
            right_product = A[j] * A[j - 1];
        else
            right_product = INT_MIN;

        // Taking the max product from two choices
        // Correspondingly changing the pointer's position
        if(left_product != INT_MIN && right_product != INT_MIN) {
            if (left_product > right_product) {
                left_product = ((A[i] + MOD) % MOD  * (A[i + 1] + MOD) % MOD) % MOD;
                product = ((product * left_product) % MOD + MOD) % MOD;
                i += 2;
            }
            else {
                right_product = ((A[j] + MOD) % MOD  * (A[j - 1] + MOD) % MOD) % MOD;;
                product = ((product * right_product) % MOD + MOD) % MOD;
                j -= 2;
            }
        }
    }

    // Finally return product
    return (product + MOD) % MOD;
}

int main() {
    fast;

    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> ar[i];

    ll ans = maxProductSubarrayOfSizeK(ar, n, k);
    cout << ans << "\n";
    return 0;
}