#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     int n;
     int ar[1550]={0};
     cin<<n;
     while(n--){
        cin>>h>>m>>H>>M;
        ar[ h+m ]=1;
        ar[ H+M+1]=-1;
     }
     for(int i=1;i<=1450;i++) ar[i]+=ar[i-1];
     int max = max_element(ar,ar+1550);
     cout<<max;
return 0;
}
