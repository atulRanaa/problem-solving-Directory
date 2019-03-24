#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	long long int x,y,s;
	long long int n,a,d;
	while(t--){
		cin>>x>>y>>s;
		n = 2*s/(x+y);
		d = (y-x)/(n-5);
		a = x - 2*d;
		cout<<n<<endl;
		for(int i=0;i<n;i++) cout<<(a+i*d)<<" ";
		cout<<endl;
	}

	
	return 0;
}