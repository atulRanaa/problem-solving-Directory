#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	while(1){
		cin>>n;
		if(n == -1) break;
		int ar[n];
		long long int ans =0,sum = 0;
		for(int i=0;i<n;i++) cin>>ar[i];
		for(int i=0;i<n;i++) sum += ar[i];
		if(sum%n == 0){
			sum = sum/n;
			for(int i=0;i<n;i++){
				if(ar[i] < sum) ans += (sum-ar[i]);
			}
			cout<<ans<<endl;
		}
		else cout<<-1<<endl;
	}
	return 0;
}