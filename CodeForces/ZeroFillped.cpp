#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	//for(int i=0;i<n;i++) cout<<ar[i]<<" ";
	//cout<<endl;
	int l=0,r=0,best =0,ind;
	int z = 0;
	while(r < n){
		if(z <= m){
			if(ar[r]==0) z++;
			r++;
		}
		if(z > m){
			if(ar[l]==0) z--;
			l++;
		}
		if(r-l > best) {best = r-l;ind = l;}
	}
	for(int i=ind;i< ind+best;i++){
		if(ar[i]==0) ar[i]=1;
	}
	cout<<best<<endl;
	for(int i=0;i<n;i++) cout<<ar[i]<<" ";
	return 0;
		
}