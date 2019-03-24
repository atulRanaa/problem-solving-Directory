#include<bits/stdc++.h>
using namespace std;


int main(){
	long long int n,h; cin>>n>>h;
	long long int a[n],b[n];
	
	for(int i=0;i<n;i++) cin>>a[i]>>b[i];
	sort(b,b+n);
	long long int count =0;
	long long int maxa = *max_element(a,a+n);
	for(int i=n-1;i>=0;i--){

		if(h <= 0) break;
		if(b[i] >= maxa){
			h -= b[i];
			count++;
		}
	}
	if(h > 0){
		count += (h/maxa);
		if(h%maxa > 0) count += 1;
	}
	cout<<count;
	return 0;
}