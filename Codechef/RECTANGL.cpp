#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	int a,b,c,d;
	while(t--){
		cin>>a>>b>>c>>d;
		bool f=false;

		if(a==b && c==d) f=true;
		if(a==c && b==d) f=true;
		if(a==d && b==c) f=true;

		if(f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}