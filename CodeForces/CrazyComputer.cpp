#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   long int n,c;
   cin>>n>>c;

   long int ar[n],i;
   for(i=0;i<n;i++) cin>>ar[i];
   long int count=1;

   for(i=1;i<n;i++){
      if((ar[i]-ar[i-1]) <= c) count++;
      else count=1;
   } 
 cout<<count;    
return 0;
}
