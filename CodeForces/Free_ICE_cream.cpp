#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,ice_cream;
	cin>>n>>ice_cream;

	char ch;
	long long int ice;
	long long int greedy = 0;
	while(n--){
		cin>>ch>>ice;
		if(ch == '+') ice_cream += ice;
		else{
			if(ice_cream >= ice ) ice_cream -= ice;
			else greedy++;
		}
	}
	cout<<ice_cream<<" "<<greedy;
	return 0;
}