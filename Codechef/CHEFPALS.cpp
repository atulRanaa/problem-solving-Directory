#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t; cin>>t;
    int b[t],w[t];
    for(int i=0;i<t;i++) cin>>w[i];
    for(int i=0;i<t;i++) cin>>b[i];

    for(int i=0;i<t;i++){
    	string s;
    	for(int j=0;j<b[i];j++) s+='b';
    	while(s.size() < w[i]) s+='w';
    	cout<<s<<endl;
    }
    for(int i=1;i<=t;i++) cout<<i<<" ";
	return 0;
}