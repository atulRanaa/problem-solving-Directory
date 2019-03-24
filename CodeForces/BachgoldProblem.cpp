#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long int n;
    cin>>n;

   if(n==2) cout<<1<<"\n"<<2;
   else if(n==3) cout<<1<<"\n"<<3;
   else if(n==4) cout<<2<<"\n"<<2<<" "<<2;
   else{
   	long int l;
   	if(n&1) { l= (n-3)/2; cout<<l+1<<"\n"; }
   	else { l=n/2; cout<<l<<"\n"; }

   	   for (int i = 0; i < l; ++i)
   	   {
   	            cout<<2<<" ";	
   	   }
   	   if(n&1) cout<<3;
   } 
return 0;
}