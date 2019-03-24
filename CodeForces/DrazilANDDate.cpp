#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long int a,b,n;
    cin>>a>>b>>n;


    if(n < (abs(a)+abs(b)) ) cout<<"No";
    else if(n == abs(a)+abs(b)) cout<<"Yes";
    else{
         if((n-abs(a)-abs(b))%2 == 0 ) cout<<"Yes";
         else cout<<"No";
         
    }

return 0;
}
