#include<bits/stdc++.h>

using namespace std;
int main(){
	unordered_set<int> s;
	int n,m;
	cin>>n>>m;
    
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=n-1;i>=0;i--){
    	s.insert(ar[i]);
    	ar[i] = s.size();
    }
    for(int i=0;i<m;i++){
    	cin>>n;
    	cout<<ar[n-1]<<endl;

    	//cout<<ar[i]<<" ";
    }
	return 0;
}