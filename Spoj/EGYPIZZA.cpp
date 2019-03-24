#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t; cin>>t;
	string s;
	int q =0,h=0,rd = 0,ans = 0;
	while(t--){
		cin>>s;
		if(s == "1/4") q++;
		else if (s == "1/2") h++;
		else rd++;
	}

	q = q - min(rd,q);
	h = h + q/2 + q%2;
	ans = rd + h/2 + h%2;
	cout<<ans+1;
	return 0;
}