#include<bits/stdc++.h>

using namespace std;
int main(){
	int n,k; cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	int hash[101]={0};
	for(int i=0;i<n;i++) hash[ar[i]]++;
	int count = 0;

	while(1){
		bool check = false;
		for(int i=k-1;i >=0 ;i--){
			if(hash[i] > 0){
				hash[i]--;
				hash[i+1]++;
				check = true;
			}
		}
		if(check) count++;
		bool f = true;
		for(int i=1;i< k;i++){
			if(hash[i] > 0) f = false;
		}
		if(f) break; 
	}
	cout<<count;
	return 0;
}