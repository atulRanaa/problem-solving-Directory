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

	int t,n,s,f;cin>>t;
	while(t--){
		cin>>n;
		pair< int ,int> act[n];
		for(int i=0;i<n;i++){
			cin>>s>>f;
			act[i].first = f;
			act[i].second = s;
 		}

 		sort(act, act+n);
 		int count = 0;
 		int pre = 0;
 		for(int i=0;i<n;i++){
 			//cout<<act[i].second<<" "<<act[i].first<<endl;
 			if(act[i].second >= pre){
 				count++;
 				pre = act[i].first;
 			}
 		}
 		cout<<count<<endl;
 		//cout<<endl;
	}

	return 0;
}