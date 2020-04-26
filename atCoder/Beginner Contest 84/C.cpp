#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin>>n;
    int ar[n][3];

    for(int i=0;i<n-1;i++) cin>>ar[i][0]>>ar[i][1]>>ar[i][2];
    
    long long int ans = 0;
    

    for(int i=0;i<n-1;i++){
    	ans = ar[i][0]+ar[i][1];
    	
        for(int j=i+1;j<n-1;j++){
    		
    		int temp = ar[j][1];
    		while(temp < ans){
    		  temp += ar[j][2];
    		}
            ans = temp;
    		ans += ar[j][0];
    	}
    	cout<<ans<<endl;
    }
    cout<<0;
	
	return 0;
}