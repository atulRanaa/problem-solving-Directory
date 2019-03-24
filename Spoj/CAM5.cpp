#include<bits/stdc++.h>
using namespace std;

void dfs(int cur,int visit[],vector<int> v[]){
	visit[cur] = 1;
	for(int i=0;i < v[cur].size() ; i++){
		if( visit[ v[cur][i] ] == 0){
			dfs(v[cur][i] , visit , v);
		}
	}
}
int main(){
/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t,n,m; scanf("%d",&t);
	int x,y;
	while(t--){
		scanf("%d",&n);
		scanf("%d",&m);

		vector< int > v[n+1];
		for(int i=0;i<m;i++){
			scanf("%d %d",&x,&y);
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int count=0;
		int visit[n+1]={0};
		for(int i=0;i<n;i++){
			if(visit[i] == 0){
				count++;
				dfs(i,visit,v);
			}
		}
		printf("%d\n",count);
	}

	return 0;
}