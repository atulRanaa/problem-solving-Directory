    #include <bits/stdc++.h>
         
    using namespace std;
     
    typedef long long ll; 
    const int N = 1e6+5; 
    #define MOD 1000000007
    #define pii pair<int,int>
    #define pis pair<int,string>
    #define F first
    #define S second
    #define LCM(a,b) ((a*b)/__gcd(a,b))
    #define inf 1e10
    
    
    ll ar[N];
    int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        
        int n, x, y;
        cin >> n;
        memset(ar, 0, sizeof ar);
        for(int i=2;i<=n;i++){
            cin >> x >> y;
            // adj[x].push_back(y);
            // adj[y].push_back(x);
        }
        for(int i=1;i<=n;i++) cin >> ar[i];


    int f[n + 5], g[n + 5];

    stack < int > stk;

    // Next greatest to the right
    for (int i = 1; i <= n ; i++) {
        while (! stk.empty() && ar[i] > ar[ stk.top() ]) {  // greater then
            f[ stk.top()] = i; stk.pop();
        }
        stk.push(i);
    }
    while (! stk.empty()) { f[ stk.top()] = n + 1; stk.pop();}

    // Next greatest to the left
    for (int i = n; i >= 1 ; i--) {
        while (! stk.empty() && ar[i] > ar[ stk.top() ]) { // less then equal to
            g[ stk.top()] = i; stk.pop();
        }
        stk.push(i);
    }
    while (! stk.empty()) { g[ stk.top()] = 0; stk.pop();}
    for(int i=1;i<=n;i++) cout << i-g[i] << " "; cout<<"\n";
    for(int i=1;i<=n;i++) cout << f[i]-i << " "; cout<<"\n";
        int ans = 0;
        int j = 0;
        for(int i=1;i<=n;i++) {
            // cout << (f[i]-i) << " " << (g[i]-i) << " ";
            if(ar[i]==0) {
                cout << (f[i]-i) + (i-g[i]) + 1 << " ";
                ans = max(ans, (f[i]-i) + (i-g[i]) + 1);
            }
            else {
                cout << (g[i] - j + 1) << " ";
                ans = max(ans, (g[i] - j + 1));
                j = i;
            }
        }

        cout << ans << "\n";
        return 0;
    }