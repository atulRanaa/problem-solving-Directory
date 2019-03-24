#include<bits/stdc++.h>
using namespace std;


int prime[1050000]={0};
vector<int> p;
int main(){
	prime[0]=1;
	prime[1]=1;
	for(int i=2; i*i < 1050000 ; i++){
		if(prime[i]==0){
			for(int j= i*i ; j < 1050000 ; j+=i) 
				prime[j] = 1;
		}
	}
    for(int i=2;i < 1050000 ;i++){
    	if(prime[i]==0) p.push_back(i);
    }
    //cout<<p.size();
	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int ind = distance(p.begin(),lower_bound(p.begin(),p.end(),n));
		//cout<<ind<<" ";
		int mid,s = p.size(),ans;
		while(ind <= s){
			mid = ind + (s-ind)/2;
			if((n^p[mid]) >= n) {ans = mid;s = mid-1;}
			else ind = mid+1;
		}
		cout<<p[ans]<<endl;
	}
	return  0;
}