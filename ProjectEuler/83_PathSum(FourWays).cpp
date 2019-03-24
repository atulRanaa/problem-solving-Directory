#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 80;
const int M = 80;
int val[N*M] = {0};
int dist[N*M] = {0};
bool vis[N*M] = {0};

vector<int> graph[N*M];


// int mat[5][5] = { {131,673,234,103,18},
// 		{201,96,342,965,150},
// 		{630,803,746,422,111},
// 		{537,699,497,121,956},
// 		{805,732,524,37,331} };

int mat[80][80];
void dijkstra(int S){

    memset(vis, false , sizeof vis);
    for(int i=0;i< N*M; i++) dist[i] = 1000000;          
    dist[S] = val[0];

    multiset < pair< ll , int > > s;          

    s.insert({val[0] , S});                          

    while(!s.empty()){
    	
        pair < ll , int> p = *s.begin();        
        s.erase(s.begin());

        int x = p.second;
        ll wei = p.first;
        if( vis[x] ) continue;                  
        vis[x] = true;

        for(int i = 0; i < graph[x].size(); i++){
            

            int e = graph[x][i];
            ll  w = val[ e ] ;
            
            if(dist[x] + w < dist[e]){            
                dist[e] = dist[x] + w;
                s.insert({dist[e],  e});           
            }
        }         
    }


    // for(int i=0;i < N*M; i++)
    // 	cout << dist[i] << " ";
    // cout << "\n";
    // for(int i=0;i < N*M; i++)
    // 	cout << vis[i] << " ";
}

void make(){

	int id = 0;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			if(i-1 >= 0)
				graph[id].push_back( (i-1)*M + j );
			if(i+1 <  N)
				graph[id].push_back( (i+1)*M + j );
			if(j-1 >= 0)
				graph[id].push_back( (i)*M + j-1 );
			if(j+1 <  M)
				graph[id].push_back( (i)*M + j+1 );


			id++;
		}


	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			val[i*M + j] = mat[i][j];
	//for(int i=0;i<N*M;i++) cout<< val[i] <<" "; cout << "\n";
}
void read(){
	int num; char ch;
	for(int i=0;i<80;i++){
		for(int j=0;j<79;j++){
			cin>> mat[i][j] >> ch;
		}

		cin >> mat[i][79];
	}
}	
int main()
{
	read();
    make();
    dijkstra(0);
    // for(int i=0;i < N*M; i++){
    //    	cout<< i << ":";
    //    	for(int c: graph[i]) cout<< c <<" ";
    // 	cout << "\n";
    // }
    cout << mat[79][79] << "\n";
    cout << val[80*80 - 1] << "\n";
    cout << dist[80*80 - 1] << "\n";
    return 0;
}