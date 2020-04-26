#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n,q;
	cin>>n>>q;
	long long int a,b,x;
	
	map<long long int,long long int> m;
	bool f = true;
	for(int i=0;i<q;i++){
		cin>>a>>b>>x;
		if(m.find(a)!=m.end() && m.find(b)!=m.end()){
			if(m[b]-m[a] != x){
				f = false;
				break;
			}
		}
		if(m.find(a)!=m.end()){
			m[b] = m[a]+x;
		}
		else if(m.find(b)!=m.end()){
			m[a] = m[b]-x;
		}
		else{
			m[a] = a;
			m[b] = a+x;
		}
	}
	if(f) cout<<"Yes";
	else cout<<"No";
	return 0;
	
}
