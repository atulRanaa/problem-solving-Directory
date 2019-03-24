#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    long int n,m;
    cin>>n>>m;
    long int i=0;
    long int ar[m];

  long long int temp=1,dist=0;
  for(i=0;i<m;i++) cin>>ar[i];
  for(i=0;i<m;i++) {
  	if(ar[i] >= temp) dist+=ar[i]-temp;
  	else dist+=(n-temp+ar[i]);

  	temp=ar[i];
  }  	

  cout<<dist;
	return 0;
}