#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n;
     cin>>n;
char str[110];

int count=0,j=0,o=0;
     cin>>str;
for(int i=1;i<n;i++){ 
   if(str[i]=='W' && str[i-1]=='B'){ o++; }
}
if(str[n-1]=='B') o++;
cout<<o<<"\n";

if(o > 0){
    for(int i=0;i<n;i++){
        if(str[i]=='B') count++;
        if(str[i]=='W' && count>0) {cout<<count<<" ";count=0;}
    }
    if(count > 0) cout<<count;
}
return 0;
}
