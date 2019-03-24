#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     long int n;
     cin>>n;
    int t = n%4;
    if( n==0) cout<<1;
    else{
     if(t==1) cout<<8;
     else if(t==2) cout<<4;
     else if(t==3) cout<<2;
     else cout<<6;
    }
return 0;
}