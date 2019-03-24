#include<bits/stdc++.h>

using namespace std;
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
       return (a.first > b.first)||(a.first == b.first && a.second > b.second);
}
int main(){
	int n;
	cin>>n;

	int ar,odd=0,oi= 0,even =0,ei=0;
	for(int i=0;i<n;i++){
		cin>>ar;

		if(ar&1){ odd++; oi = i+1;}
		else { even++; ei = i+1;}
	}

	if(odd == 1) cout<<oi;
	else cout<<ei;
	return 0;
}