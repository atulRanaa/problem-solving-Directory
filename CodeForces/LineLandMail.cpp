#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long int n;
    cin>>n;
  long int ar[100010];
  long int i;
  for(i=0;i<n;i++) cin>>ar[i];
  
  cout<<ar[1]-ar[0]<<" "<<ar[n-1]-ar[0]<<"\n";
 
  for(i=1;i<=(n-2);i++){
  	cout<<min(ar[i]-ar[i-1],ar[i+1]-ar[i])<<" "
  	    <<max(ar[n-1]-ar[i],ar[i]-ar[0])<<"\n";
  }

  cout<<ar[n-1]-ar[n-2]<<" "<<ar[n-1]-ar[0];

return 0;
}
