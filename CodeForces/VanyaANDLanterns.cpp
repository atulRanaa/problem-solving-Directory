#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    long int n,l;
    cin>>n>>l;
    long int i=0;
    long long int ar[n];
    double diff=0.0;
  for(i=0;i<n;i++) cin>>ar[i];
  sort(ar,ar+n);
  diff=ar[0];
  for(i=1;i<n;i++) {
    if((ar[i]-ar[i-1])/2.0 > diff) diff=(ar[i]-ar[i-1])/2.0;
  }
  if(l-ar[n-1] > diff) diff=(l-ar[n-1]);

  printf("%0.10f",diff);
	return 0;
}