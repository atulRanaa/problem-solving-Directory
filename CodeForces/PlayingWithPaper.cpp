#include<bits/stdc++.h>
using namespace std;

long long int square(long long int a, long long int b ){
    if(b==1 || b==0) return a*b;
    else return a/b + square(b,a%b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     long long int a,b;
     cin>>a>>b;
     
     long long int ans = square(a,b);
     cout<<ans;
return 0;
}
