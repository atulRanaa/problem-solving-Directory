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

	int t;cin>>t;
	long long int a,b,g;
	while(t--){
		cin>>a>>b;
		g = __gcd(a,b);
		cout<<b/g<<" "<<a/g<<endl;
	}
	return 0;
}