#include<bits/stdc++.h>

using namespace std;
int main(){
	int a,b,c; cin>>a>>b>>c;
	int x,y,z; cin>>x>>y>>z;

	int count = 0;
	a = (a+1)%2;
	b = (b+1)%2;
	c = (c+1)%2;
	if(a==x && b==y && c==z ) cout<<"NO";
	else cout<<"YES";
	return 0;
}