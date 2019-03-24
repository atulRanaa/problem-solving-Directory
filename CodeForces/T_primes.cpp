#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int ar[1000010]={0};
     ar[0]=1;
     ar[1]=1;
  long int i,j;
  long int limit=sqrt(1000010);
     for(i=2;i<=limit;i++){
         if(ar[i]==0){
         	for(j=2*i;j<=1000000;j+=i) ar[j]=1;
         }
     }
  long int n;
  cin>>n;

  long long int p;
  for(i=0;i<n;i++){
      cin>>p;
      double sq = sqrt(p);
      limit = sq;
      if(sq == limit*1.0){
         if( ar[limit]==0 ) cout<<"YES\n";
         else cout<<"NO\n";
      }
      else cout<<"NO\n";
  }
return 0;
}
