#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char s[200020];
	cin>>s;

	long long int ar[26]={0},l = strlen(s);
	for(int i=0;i<l;i++) ar[s[i]-'a']++;
	long long int ans = l*(l-1)/2;
	for(int i=0;i<26;i++){
		ans -= ar[i]*(ar[i]-1)/2;
	}
	cout<<ans+1;
	return 0;
}