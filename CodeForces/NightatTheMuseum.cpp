#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     char str[111];
     cin>>str;
     int len = strlen(str);
     int ans =0 ,dist;
     char ch = 'a';
     for(int i=0;i<len;i++){
         dist = abs(str[i]-ch);
         ans += min(26-dist , dist);

         ch = str[i]; 
     }

     cout<<ans;
return 0;
}
