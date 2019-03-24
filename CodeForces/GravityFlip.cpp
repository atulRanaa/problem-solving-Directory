#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    long int n;
    cin>>n;
    long int i=0;
    long int ar[n];

  for(i=0;i<n;i++) cin>>ar[i];
  sort(ar,ar+n);
  for(i=0;i<n;i++) cout<<ar[i]<<" ";
  	
	return 0;
}