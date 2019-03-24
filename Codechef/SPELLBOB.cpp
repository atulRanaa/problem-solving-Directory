#include <bits/stdc++.h>
using namespace std;

string s1,s2;
bool solve(int i,int j,int k){
	bool f1,f2,f3;f1=f2=f3=false;
	if(s1[i]=='b' || s2[i]=='b') f1=true;
	if(s1[j]=='o' || s2[j]=='o') f2=true;
	if(s1[k]=='b' || s2[k]=='b') f3=true;

	return (f1&f2&f3);
}
int main(){
	int t; cin>>t;
	
	while(t--){
		cin>>s1;
		cin>>s2;

		bool f1 = solve(0,1,2);
		bool f2 = solve(0,2,1);
		bool f3 = solve(1,0,2);
		bool f4 = solve(1,2,0);
		bool f5 = solve(2,0,1);
		bool f6 = solve(2,1,0);
		if(f1|f2|f3|f4|f5|f6) cout<<"yes\n"; else cout<<"no\n";
	}
	return 0;
}