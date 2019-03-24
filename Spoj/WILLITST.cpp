#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	long long int n; cin>>n;

	if(n<=1) cout<<"TAK";
	else{
		if(n && (!(n&(n-1)))) cout<<"TAK";
		else cout<<"NIE";
	}
	
	return 0;
}