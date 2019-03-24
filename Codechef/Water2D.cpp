#include<bits/stdc++.h>
using namespace std;

#define max 10001
int n,m;
vector< string> grid;
bool visit[max][max]={{false}};
bool water[max][max]={{false}};

bool dfstill(int i,int j){
	bool u=false,d=false,l=false,r=false;

	if(i-1 < 0) u = false;
	else if(grid[i-1][j]=='*') u =true; 
	else u = dfstill(i-1,j);

	if(i+1 == n) d = false;
	else if(grid[i+1][j]=='*') d =true;
	else d = dfstill(i+1,j);

	if(j-1 < 0) l = false;
	else if(grid[i][j-1]=='*') l =true;
	else l = dfstill(i,j-1);
	
	if(j+1 == m) r = false;
	else if(grid[i][j+1]=='*') r =true;
	else r = dfstill(i,j+1);

	visit[i][j]=true;
	if(u && d && l && r) {
		water[i][j]=true;
		return true;
	}
	else{
		water[i][j]=false;
	 	return false;
	}
}
void dfs(){
	for(int i=1;i<n-1;i++){
		for(int j =1;j<m-1;j++){
			cout<<grid[i][j];
			if(grid[i][j]=='.' && visit[i][j]==0){
				bool flag = dfstill(i,j);
			}
		}
		cout<<endl;
	}
}
int main(){
	cin>>n>>m;
	string s; 
	for(int i=0;i<n;i++){
		cin>>s;
		grid.push_back(s);
	}
	dfs();
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(water[i][j]==true) count++;
		}
	}
	cout<<count;
	return 0;
}
