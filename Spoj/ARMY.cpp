#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;cin>>t;
	int g,m;
	while(t--){

		cin>>g>>m;
		int mg,mm,temp;
		cin>>mg;
		for(int i=1;i<g;i++) {
			cin>>temp;
			mg = max(mg,temp);
		}
		cin>>mm;
		for(int i=1;i<m;i++){
			cin>>temp;
			mm = max(mm,temp);
		}

		if(mg >= mm) cout<<"Godzilla"<<endl;
		else cout<<"MechaGodzilla"<<endl;
	}
	
	return 0;
}