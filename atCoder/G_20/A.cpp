#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,a,b;
	cin>>n>>a>>b;

	if(abs(a-b)%2 == 0) cout<<"Alice";
	else cout<<"Borys";
	return 0;
}