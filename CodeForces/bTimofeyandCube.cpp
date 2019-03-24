#include<bits/stdc++.h>
using namespace std;

typedef long int li;
void swap(li *a, li *b){
   li temp=*a;
   *a=*b;
   *b=temp;
}

int main(){
  li n;
  cin>>n;
  li ar[n+1];
  
  for(li i=1;i<=n;i++) cin>>ar[i];
  for(li i=1;i <= n/2 ; i+=2){
      if(i <= n-i+1) swap( &ar[i] , &ar[n-i+1] );  
  }

  for(li i=1;i<=n;i++) cout<<ar[i]<<" ";
 return 0;
}
