#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,o=0;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<n;i++){
    	if(ar[i]==1) o++;
    }
	int count=0,cur=0;
	if(o == n) cout<<o-1;
	else{
		for(int i=0;i<n;i++){
			if(ar[i]==1) cur-=1;
			else cur+=1;
            
            if(cur < 0) cur=0;
            else if(cur > count) count=cur;
		}
		cout<<count+o;
    }
	return 0;
}