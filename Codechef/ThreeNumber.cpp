#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
	int t;	  cin>>t;
	ll a,b,c,ans,temp;
	while(t--){
		cin>>a>>b>>c;
		ans = 1e15;
		/*if(b-a == c-b) ans = 0;
		else if(a == c) ans = abs(b-a);
		else if( a < c){*/
			temp = a+c;
			//cout<<temp <<" ";
			if(temp%2 == 0) ans = abs(b - temp/2);
			else ans = 1 + min(abs(b- (temp-1)/2), abs(b - (temp+1)/2));
		/*}
		else{
			temp = c+a;

			if(temp&2 == 0) ans = abs(b- temp/2);
			else ans = 1+ abs(b - temp/2);
		}*/
		cout<<ans<<"\n";
	}return 0;
}