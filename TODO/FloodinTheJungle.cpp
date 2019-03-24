#include "bits/stdc++.h"
using namespace std;


typedef long long int ll;
const int MAX = 205;
int x[MAX],y[MAX], mon[MAX], lim[MAX];

#define sq(x) (x)*(x)

vector<int> adj[MAX];
int main(){
	int n;
	double c;
	scanf("%d %f",&n,&c);
	for(int i=0;i<n;i++) scanf("%d %d %d %d",&x[i],&y[i],&mon[i],&lim[i]);

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			double dist = sqrt( sq(x[i]-x[j]) + sq(y[i]-y[j]) );
			if(dist <= c){
				adj[i].push_back(j), adj[j].push_back(i);
			}
		}
	}

	
}