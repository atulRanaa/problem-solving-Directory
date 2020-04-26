#include<iostream>
using namespace std;

int main(){
	long long int q,h,s,d,n;
	cin>>q>>h>>s>>d;
	cin>>n;

	long long int ans = (n/2)*min(8*q,min(4*h,min(2*s,d)));
	ans += (n%2)*min(4*q,min(2*h,s));

	cout<<ans;
	return 0;
}