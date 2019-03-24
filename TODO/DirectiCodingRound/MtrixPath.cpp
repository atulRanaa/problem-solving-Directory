#include<bits/stdc++.h>
using namespace std;
 
int main(){
 	
 	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t,n; cin>>t;
	while(t--){
		cin>>n;
 
		long long int ar[n][n];
		long long int temp[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>ar[i][j];
				temp[i][j] = ar[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
				if(i == 0){
					
					ar[i][j] += ar[i][j-1];
					
				}
				else if(i < j){
					
					if(i-1 == j)
						ar[i][j] += ar[i][j-1];
					else if(i == j-1)
						ar[i][j] += ar[i-1][j];
					else
						ar[i][j] += min(ar[i-1][j], ar[i][j-1]);
					
				}
			}
		}	
		for(int i = n-1;i >= 0;i--){
			for(int j=n-2; j>=0; j--){
				if(i == n-1){
					
					temp[i][j] += temp[i][j+1];
					
				}
				else if(i > j){
					
					if(i+1 == j)
						temp[i][j] += temp[i][j+1];
					else if(j+1 == i)
						temp[i][j] += temp[i+1][j];
					else
						temp[i][j] += min(temp[i+1][j],temp[i][j+1]);

				}
			}
			
		}
		long long int ans=0;
		ans += ar[n-2][n-1]+temp[0][0]+temp[1][0];
		cout<<ans<<endl;
	}
    return 0;
} 