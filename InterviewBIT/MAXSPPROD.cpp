

const long long MOD = 1000000007;
int Solution::maxSpecialProduct(vector<int> &ar) {
    int n = ar.size();
    long long f[n + 5], g[n + 5];

    stack < int > S;

    // Next greatest to the right
    for (int i = 0; i < n ; i++) {
        while (! S.empty() && ar[i] > ar[ S.top() ]) {
            f[ S.top()] = i; S.pop();
        }
        S.push(i);
    }
    while (! S.empty()) { f[ S.top()] = 0; S.pop();}

    // Next greatest to the left
    for (int i = n-1; i >= 0 ; i--) {
        while (! S.empty() && ar[i] > ar[ S.top() ]) {
            g[ S.top()] = i; S.pop();
        }
        S.push(i);
    }
    while (! S.empty()) { g[ S.top()] = 0; S.pop();}
    
    // for (int i = 1; i <= n ; i++) cout << f[i]-1 << " "; cout << "\n";
    // for (int i = 1; i <= n ; i++) cout << g[i]-1 << " "; cout << "\n";
    long long ans = 0L;
    for(int i=0;i<n;i++) ans = max(ans, f[i] * g[i]);
    return ans % MOD;
}
