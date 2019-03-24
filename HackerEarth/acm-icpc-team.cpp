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
	int n,m; cin>>n>>m;
	char v[505][505];
	for(int i=0;i<n;i++) cin>>v[i];

	int ans = -1;
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){

			int temp =0;
			for(int k=0;k<m;k++){
				if( v[i][k] =='1' || v[j][k] =='1') temp++;
			}	
			if(ans==temp && ans!=-1) count++;
			if(ans < temp){
				ans = temp;
				count = 1;
			}
		}
	}
	if(ans == -1) ans = 0;
	cout<<ans<<endl;
	cout<<count<<endl;
	return 0;
}