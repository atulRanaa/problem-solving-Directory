#include<bits/stdc++.h>

using namespace std;
int main(){
	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		string s;
		bool f1=false,f2=false,f3=false,f4=false,f5=false;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s=="cakewalk") f1=true;
			else if(s=="simple") f2=true;
			else if(s=="easy") f3=true;
			else if(s=="easy-medium" || s=="medium") f4=true;
			else if(s=="medium-hard" || s=="hard") f5=true;
		}
		if(f1 && f2 && f3 && f4 && f5) cout<<"Yes";
		else cout<<"No";

		cout<<endl;
	}
	return 0;
}