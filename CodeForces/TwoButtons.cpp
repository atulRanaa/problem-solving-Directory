#include<bits/stdc++.h>
using namespace std;

long long int a,b;
long long int fun(long long int b){
    if( a >= b) return a-b;
    else{
     	if( b&1 ) return  2 + fun( (b+1)/2 );
     	else return 1 + fun(b/2);
     }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

     cin>>a>>b;
     
     long int ans= fun(b);
     cout<<ans;

return 0;
}
