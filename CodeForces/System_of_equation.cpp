#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    for(int i=0;i<=n ;i++){
    	for(int j=0;j<=n;j++){
    		if(i*i + j == n){
    			if(i + j*j == m) count++;
    		}
    		if(i*i + j > n) break;
    	}
    }
    cout<<count;
	return 0;
}