#include<bits/stdc++.h>
using namespace std;


typedef long long int lli;
#define INF 1000000000000000

int center[100010]={0};
vector< pair<lli,int> >edge[100010];

void dijkstra( long long int dist[], int S, int N ) {
    int i;
   
    priority_queue< pair<lli,int> > q;
    q.push( { 0,S} );
    dist[ S ] = 0;
    while ( !q.empty() ) {
        pair<lli,int> p = q.top();
        q.pop();
        for ( i = 0; i < edge[ p.second ].size(); ++i ) {
            pair<lli,int> k = edge[ p.second ][ i ];
            if ( dist[ p.second ] + k.first < dist[ k.second ] ) {
                dist[ k.second ] = dist[ p.second ] + k.first;

                q.push( k );
            }
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	int N,M,K,Q; cin>>N>>M>>K>>Q;
	int x,y;
	lli weight;
	for(int i=0;i<M;i++){
		cin>>x>>y>>weight;
		edge[x].push_back({weight,y});
		edge[y].push_back({weight,x});
	}

	long long int dist[100010],ans;
	for(int i=0;i <= N;i++) dist[i] = INF;
	for(int i=0;i<K;i++){
		cin>>x;
		center[x] = 1;
		dijkstra(dist,x,N);
	}
	for(int i=0;i<Q;i++){
		cin>>x;
		if(center[x] == 1) cout<<0<<endl;
		else if(dist[x] == INF) cout<<-1<<endl;
		else cout<<dist[x]<<endl;
	}
	return 0;
}
