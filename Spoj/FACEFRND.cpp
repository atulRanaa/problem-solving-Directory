#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n,temp,m; cin>>n;
	int ar[10000]={0};
	for(int i=0;i<n;i++){
		cin>>temp>>m;
		ar[temp] = -1;
		for(int j=0;j<m;j++){
			cin>>temp;
			
			if(ar[temp]==0) ar[temp]=1;
		}
	}
	int count = 0;
	for(int i=0;i<10000;i++){
		if(ar[i] == 1) count++;
	}
	cout<<count;
	
	return 0;
}