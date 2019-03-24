#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	double r;
	for(int i=1;i<=t;i++){
		cin>>r;
		printf("Case %d: %0.2f\n",i,4*r*r + 0.25);
	}
	
	return 0;
}