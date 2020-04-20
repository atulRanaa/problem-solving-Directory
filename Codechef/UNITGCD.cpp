#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;
typedef long long ll;
const ll N = 1e6 + 5;
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
typedef vector< vector< double > > matrix;
typedef vector< int > vi;
typedef unordered_map< int, bool > INT_HASH;

const ll maxL = (N/2 + 10);
bool prime[N];

INT_HASH M[N];

INT_HASH G[maxL];
vector<int> V[maxL];

void sieve(int n) {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = 1;
    M[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            for (int j = i; j <= n; j += i) {
                prime[j] = false;
                M[j][i] = 1;
            }
        }
    }
}

bool diffPrimeDivisors(INT_HASH &A, INT_HASH &B) {
    bool f = true;
    for(const pair<int, bool> &e: A) {
        if(B[e.first]) {
            f = false;
            break;
        }
    }
    return f;
}

void pre_compute(int n) {

    int j = 0;
    for(int i = 1; i <= n; i++) {

        bool f = false;
        j = 0;
        for(const pair<int, bool> &p: M[i]) j = max(j, i/p.first);
        while(!f) {
            f = diffPrimeDivisors(M[i], G[j]);
            if(f) {
                V[j].push_back(i);
                for(const pair<int, bool> &p: M[i]) G[j][p.first] = 1; 
            }
            j++;
        }
    }
}

void printCoprimeSubset(int n) {
    int l = (n >> 1);
    cout << l << "\n";
    for(int i = 1; i <= l; i++) {
        
        int index = distance(V[i].begin(), lower_bound(V[i].begin(), V[i].end(), n));
        if(index < V[i].size() && V[i][index] <= n) index++;

        cout << index << " ";
        for(int j = 0; j < index; j++) cout << V[i][j] << " "; 

        cout << "\n";
    }
}
int main() {
    fast;

    // auto start = high_resolution_clock::now();
    // clock_t st = clock();


    // for(int i=1;i<maxL;i++) {
    //     int l = V[i].size();
    //     if(l == 0) break;

    //     INT_HASH x;
    //     x.clear();

    //     for(int j=0;j<l;j++) {

    //         int ele = V[i][j];
    //         if(!diffPrimeDivisors(x, M[ele])) {
    //             cout << "Not Coprime Set" << ele;
    //             break;
    //         }
    //         for(const auto &p: M[ele]) x[p.first] = 1; 

    //         cout << ele << " ";
    //     }
    //     cout << "\n";
    //     if(i > 1000) break;
    // }

    // auto end = high_resolution_clock::now();
    // auto duration = duration_cast<seconds>(end - start); 
  
    // cout << "Time taken by function: " << duration.count() << " seconds" << "\n";
    // cout << "Time taken by function: " << ((double)clock() - st)/CLOCKS_PER_SEC << " seconds" << "\n";
    
    ll ar[15], maxN = 0;
    int tc; cin >> tc;
    for(int _i = 0; _i < tc; _i++) { 
        cin >> ar[_i];
        maxN = max(maxN, ar[_i]);
    }

    sieve(maxN);
    pre_compute(maxN);

    for(int _i = 0; _i < tc; _i++) printCoprimeSubset( ar[_i] );

    return 0;
}