// hackerearth       
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
        #define test ll cse;scanf("%lld",&cse);for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        typedef vector<vector<ll>> matrix;
        typedef vector<ll> vi;
 
 
vector< int > graph[N];
bool used[N];
int timer, tin[N], fup[N], par[N];

int sizeOfNode[N];

int n, m, P, Q;
unordered_set< int > Ap;
vector< pair<int,int> > Br;
void dfs(int v, int p = -1) {
    used[v] = true;
    tin[v] = fup[v] = timer++;
    int children = 0;
    int isArti = false;
    
    for (int to: graph[v]) {
        if (to == p)  continue;
        
        if (used[to])
            fup[v] = min (fup[v], tin[to]);
        else {
            par[to] = v;
            dfs (to, v);
            fup[v] = min (fup[v], fup[to]);
            if(fup[to] > tin[v]) {
                Br.push_back({ min(to,v), max(to,v)}); // bridge
            }
            if (fup[to] >= tin[v] && p != 0) {
                Ap.insert(v);             //v is articulation point
                isArti = true;
            }
            ++children;
            sizeOfNode[v] += sizeOfNode[to];
         }
        
    }

    sizeOfNode[v] += 1;
    if ((p == 0 && children > 1) || (p!=0 && isArti)){
        Ap.insert(v);                    //v is articulation point
    }
 
}

ll binaryExponentiation(ll N, ll X){
    ll result = 1LL, n = N, x = X;
    while(n > 0){
        if(n&1) result = (result * x) % MOD;
        x = (x*x) % MOD;
        n >>= 1;
    }
    return result;
}

int main() {
    memset(sizeOfNode, 0, sizeof sizeOfNode);
    cin >> n >> m;
    int x,y;
    for(int i=0;i<m;i++){
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    timer = 1;
    
    dfs(1);
    
    // for(int i=1;i<=n;i++) cout << tin[i] << " "; cout << "\n";
    // for(int i=1;i<=n;i++) cout << fup[i] << " "; cout << "\n";
    // for(int i=1;i<=n;i++) cout << sizeOfNode[i] << " "; cout << "\n";
    // for(int e: Ap) cout<< e << " "; cout<< "\n";
    // for(pair<int,int> e: Br) cout<< e.first << " " << e.second <<"\n";


	// if 0 bridges in graph then -> 0 0
	// A wining prob = no of bridges which divids in even size / total no of edges bridges
	// A prob = no / Br.size();
	int numWithEven = 0, numWithoutEven, totalBridge = Br.size();
	for(pair<int,int> e: Br) {
		int compA = min ( sizeOfNode[e.F] , sizeOfNode[e.S] );
		int compB = n - compA;
		// cout << compA << " " << compB << "\n";
		if( (!(compA&1)) && (!(compB&1)) ) numWithEven++;
	}
    numWithoutEven = totalBridge - numWithEven;
    
    int gcd;
    if(totalBridge == 0) cout << 0 << " " << 0 << "\n"; 
    else {
        gcd = __gcd(numWithEven, totalBridge);
        P = numWithEven / gcd;
        Q = totalBridge / gcd;
        ll probA = (P * binaryExponentiation(MOD-2, (ll)Q)) % MOD;
        
        gcd = __gcd(numWithoutEven, totalBridge);
        P = numWithoutEven / gcd;
        Q = totalBridge / gcd;
        ll probB = (P * binaryExponentiation(MOD-2, (ll)Q)) % MOD;
        cout << probA << " " << probB << "\n";
    }

    /*
    10 12
    7 6
    6 1
    1 2
    2 4
    4 5
    5 3
    4 8
    8 10
    10 9
    9 8
    2 3
    4 3
    250000002 750000006
    */
    return 0;
}