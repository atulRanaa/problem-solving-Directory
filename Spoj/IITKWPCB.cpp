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
	long long int t,n,m; cin>>t;
	while(t--){
		cin>>n;
		if(n <= 4) cout<<1<<endl;
		else if(n&1) cout<<n/2<<endl;
		else{
			if((n-6)%4 == 0) cout<<n/2 -2<<endl;
			else cout<<n/2 -1<<endl;
		}	
	}

	return 0;
}