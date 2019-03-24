#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int a,b,i=0;
     cin>>a>>b;
     while(a <= b){
        a*=3;
        b*=2;
        i++;
     }
     cout<<i;
return 0;
}
