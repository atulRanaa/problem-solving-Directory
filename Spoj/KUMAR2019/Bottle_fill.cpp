#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define vii pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

map< vii , vector< vii> > mapp;
bool visited[1001][1001];
map< vii , int> moves;

int min_step[20001];



void makeGraph(int a,int b){

	for(int i=0;i<=2000;i++) min_step[i]=1e6;
	if(a==0 && b==0) return;
	memset(visited, 0 ,sizeof(visited));
	int x= min(a,b),y= max(a,b);

	
	for(int i=0;i <= x;i++){
		mapp[ {0,i} ].push_back({y, i});
		mapp[ {y,i} ].push_back({0, i});
	}
	for(int i=0;i <= y;i++){
		mapp[ {i,0} ].push_back({i, x});
		mapp[ {i,x} ].push_back({i, 0});
	}
	vii p = {0,1}, q = {1,0};
	
	while( p != q){
		mapp[p].push_back(q);
		mapp[q].push_back(p);

		if(p.S != x) p.S += 1; else p.F += 1;
		if(q.F != y) q.F += 1; else q.S += 1;
	}
}

void printGraph(){
	for(auto ele: mapp){
		auto a = ele.F;
		auto b = ele.S;
		printf("(%d,%d):",a.F,a.S);
		for(auto ele1: b) printf(" (%d,%d)",ele1.F,ele1.S);

		cout<<endl;
	}
}

void bfs(vii s){
	queue< vii > q;
	q.push(s);
	visited[ s.F][s.S] = 1;
	
	moves[{0,0}] = 0;
	while(! q.empty()){
 		

 		vii par = q.front();
		auto nodes = mapp[  par ]; q.pop(); 

		for(auto ele: nodes){
			int x = ele.F, y = ele.S;
			if( visited[x][y] == 0){
				q.push( {x,y});
				visited[x][y] = 1; moves[{x,y}] = moves[ {par.F,par.S} ]+1;
			}
		}
	}
}
void printDist(){
	for(auto ele: moves){
		int a= ele.F.F;
		int b= ele.F.S;

		//printf("{%d %d} : %d\n",a,b, ele.S);
		min_step[a] = min(min_step[a], ele.S);
		min_step[b] = min(min_step[b], ele.S);
		min_step[a+b] = min(min_step[a+b], ele.S);
	}
	//for(int i=0;i<=b;i++){for(int j=0;j<=b;j++) cout<<moves[i][j]<<" "; cout<<"\n";}


	// for(int i=0;i <= (2000);i++)
	// 	cout<< i <<" "<< min_step[i] <<"\n";
}
int main(){
	int a=1000,b=10,q; //cin>>a>>b>>q;

	fast;

	cin >> a>>b;
	cin >> q;
	makeGraph(a,b);
	//printGraph();

	bfs({0,0});
	printDist();
	
	int z;
	for(int i=1;i<=q;i++){
		cin >> z; 
		

		cout<<"Case "<<i<<": ";
		if(min_step[z]==1e6) cout<<"Damn!!\n";
		else 				 cout<<min_step[z]<<"\n";
	}
	return 0;
}
