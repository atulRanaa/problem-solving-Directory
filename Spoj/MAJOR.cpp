#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t,n,temp;cin>>t;
	while(t--){
		cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>temp;
			m[temp]++;
		}
		int ans;
		bool f=false;
		for(auto it=m.begin();it!=m.end();it++){
			if(it->second > n/2){
				f=true;
				ans = it->first;
				break;
			}
		}

		if(f) cout<<"YES "<<ans<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}