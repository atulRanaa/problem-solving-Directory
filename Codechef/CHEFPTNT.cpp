#include<bits/stdc++.h>
using namespace std;

int main(){
	
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; cin>>t;
	int n,m,x,k;
	while(t--){
		scanf("%d %d %d %d",&n,&m,&x,&k);
		
		int E=0,O=0;
		char ch;
		for(int i=0;i<k;i++){
			cin>>ch;
			if(ch == 'E') E += 1;
			else O += 1;
		}
		//cout<<O<<" "<<E;
		long long int sum = 0,t;
		for(int i=1;i<=m;i++){
			if(i&1){
				t = min(x,O);
				O -= t;
				sum += t;
			}
			else{
				t = min(x,E);
				E -= t;
				sum += t;
			}
		}
		if(sum >= n) cout<<"yes\n";
		else cout<<"no\n";
	}

	return 0;
}