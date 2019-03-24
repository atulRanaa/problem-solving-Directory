#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t,h,w; cin>>t;
	while(t--){
		cin>>h>>w;
		long long int ar[h][w];
		for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin>>ar[i][j];

		for(int i=1;i<h;i++){
			for(int j=0;j<w;j++){
				if(j==0) ar[i][j] += max(ar[i-1][j],ar[i-1][j+1]);
				else if(j== w-1) ar[i][j]+=max(ar[i-1][j-1],ar[i-1][j]);
				else ar[i][j] += max(ar[i-1][j-1],max(ar[i-1][j],ar[i-1][j+1]));
			}
		}
		cout<<*max_element(ar[h-1],ar[h-1]+w)<<endl;

	}
	
	return 0;
}