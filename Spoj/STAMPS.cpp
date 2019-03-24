#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	int t;cin>>t;
	int n,fri;
	for(int i=1;i<=t;i++){
		cout<<"Scenario #"<<i<<":"<<endl;
		cin>>fri>>n;
		int count = 0;

		int ar[n];
		bool f=false;
		for(int j=0;j<n;j++) cin>>ar[j];
		sort(ar,ar+n,greater<int>());
		for(int j=0;j<n;j++){
			if(fri <=0 ){ f= true; break;}

			fri -= ar[j];
			count++;
		}
		if(fri <=0 ) f= true;

		if(f) cout<<count<<endl;
		else cout<<"impossible"<<endl;

		cout<<endl; 

	}
	return 0;
}