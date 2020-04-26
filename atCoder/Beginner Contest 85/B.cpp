#include<bits/stdc++.h>
using namespace std;


int main(){
	long long int num,temp,n;
	unordered_set< long long int >s;
 	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		s.insert(temp);
	}
	cout<<s.size();
	return 0;
}