// spoj    
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const ll N = 1e4+5;
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


struct edge {
    int v, w;
};
vector< edge > graph[N]  
bool operator <( edge a, edge b ) {
    return a.w < b.w;
}
 
void dijkstra( vector< edge > graph[], int dist[], int S, int T, int N ) {
    int i;
    for ( i = 0; i <= N; ++i ) {
        dist[ i ] = INF;
    }
    priority_queue< edge > q;
    q.push( ( edge ) { S, 0 } );
    dist[ S ] = 0;
    while ( !q.empty() ) {
        edge p = q.top();
        q.pop();
        for ( i = 0; i < graph[ p.v ].size(); ++i ) {
            edge k = graph[ p.v ][ i ];
            if ( dist[ p.v ] + k.w < dist[ k.v ] ) {
                dist[ k.v ] = dist[ p.v ] + k.w;
                q.push( k );
            }
        }
    }
}

int main() {
	
    int N, S, T, M, u, v, w;
    scanf( "%d%d%d%d", &N, &S, &T, &M );
    vector< edge > graph[ N + 1 ];
    int dist[ N + 1 ], count = 0, i;
    for ( i = 0; i < M; ++i ) {
        scanf( "%d%d%d", &u, &v, &w );
        graph[ u ].push_back( ( edge ) { v, w } );
    }
    for ( i = 1; i <= N; ++i ) {
        dijkstra( graph, dist, i, S, N );
        if ( dist[ S ] <= T ) {
            ++count;
        }
    }
    printf( "%d\n", count );
    return 0;
} 